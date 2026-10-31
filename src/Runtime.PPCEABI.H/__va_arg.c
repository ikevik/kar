typedef struct {
    char gpr;
    char fpr;
    char reserved[2];
    char* input_arg_area;
    char* reg_save_area;
} __va_list_struct;

void* __va_arg(__va_list_struct* ap, int type)
{
    char* addr;
    char* c = (char*)ap;
    int g = c[0];
    int max = 8;
    int size = 4;
    int inc = 1;
    int even = 0;
    int base = 0;
    int scale = 4;

    if (type == 3) {
        c++;
        g = c[0];
        size = 8;
        base = 0x20;
        scale = 8;
    }
    if (type == 2) {
        size = 8;
        max = 7;
        if (g & 1) {
            even = 1;
        }
        inc = 2;
    }
    if (g < max) {
        g += even;
        addr = ap->reg_save_area + (base + g * scale);
        *c = g + inc;
    } else {
        *c = 8;
        addr = (char*)((((unsigned)ap->input_arg_area) + size - 1) & ~(size - 1));
        ap->input_arg_area = addr + size;
    }
    if (type == 0) {
        addr = *(char**)addr;
    }
    return addr;
}
