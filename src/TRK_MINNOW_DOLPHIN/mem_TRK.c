#pragma section code_type ".init"

extern void* fn_803C0010(void*, int, unsigned long);

__declspec(section ".init") void* TRK_memset(void* dest, int val, unsigned long n)
{
    fn_803C0010(dest, val, n);
    return dest;
}

__declspec(section ".init") void* TRK_memcpy(void* dest, const void* src, unsigned long n)
{
    const unsigned char* s = (const unsigned char*)src - 1;
    unsigned char* d = (unsigned char*)dest - 1;
    n++;
    while (--n != 0) {
        *++d = *++s;
    }
    return dest;
}
