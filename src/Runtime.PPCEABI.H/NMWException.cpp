extern "C" {

extern void (*lbl_805DC858)(void);
extern void (*lbl_805DC85C)(void);
extern void abort(void);

typedef void (*DtorFunc)(void*, short);

void __destroy_arr(void* block, DtorFunc dtor, unsigned long size, unsigned long n)
{
    char* p = (char*)block + size * n;
    for (; n != 0; n--) {
        p -= size;
        dtor(p, -1);
    }
}

void unexpected(void)
{
    lbl_805DC85C();
}

void terminate(void)
{
    lbl_805DC858();
}

void set_terminate(void)
{
    lbl_805DC858();
}

void dthandler(void)
{
    abort();
}

}
