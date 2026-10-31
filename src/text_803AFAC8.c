/* auto small functions */
#pragma dont_inline on
extern char lbl_80569B10[];
extern unsigned char lbl_805DDCD8;



void __end_critical_region(void) {}

void __begin_critical_region(void) {}

void __kill_critical_regions(void) {}


void __prep_buffer(int a0) {
int t0;
int t1;
int t2;
int t3;
int t4;
int t5;
t0 = *(int*)(a0 + 28);
*(int*)(a0 + 36) = t0;
t1 = *(int*)(a0 + 32);
*(int*)(a0 + 40) = t1;
t2 = (*(int*)(a0 + 24) & *(int*)(a0 + 44));
t3 = *(int*)(a0 + 24);
t4 = (*(int*)(a0 + 40) - (*(int*)(a0 + 24) & *(int*)(a0 + 44)));
*(int*)(a0 + 40) = t4;
t5 = *(int*)(a0 + 24);
*(int*)(a0 + 52) = t5;
}

int fn_803B3670(int a0) {
return (((a0 >> 31) ^ a0) - (a0 >> 31));
}
