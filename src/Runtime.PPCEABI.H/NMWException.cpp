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

char __throw_catch_compare(const char* throwtype, const char* catchtype, long* offset_result)
{
    const char* cptr1;
    const char* cptr2;

    *offset_result = 0;
    if ((cptr2 = catchtype) == 0) {
        return 1;
    }
    cptr1 = throwtype;
    if (*cptr2 == 'P') {
        cptr2++;
        if (*cptr2 == 'C') {
            cptr2++;
        }
        if (*cptr2 == 'V') {
            cptr2++;
        }
        if (*cptr2 == 'v') {
            if (*cptr1 == 'P' || *cptr1 == '*') {
                return 1;
            }
        }
        cptr2 = catchtype;
    }
    switch (*cptr1) {
    case '*':
    case '!':
        if (*cptr1++ != *cptr2++) {
            return 0;
        }
        for (;;) {
            if (*cptr1 == *cptr2++) {
                if (*cptr1++ == '!') {
                    long offset;
                    for (offset = 0; *cptr1 != '!';) {
                        offset = offset * 10 + *cptr1++ - '0';
                    }
                    *offset_result = offset;
                    return 1;
                }
            } else {
                while (*cptr1++ != '!') {
                }
                while (*cptr1++ != '!') {
                }
                if (*cptr1 == 0) {
                    return 0;
                }
                cptr2 = catchtype + 1;
            }
        }
    }
    if (*cptr1 == 'P' || *cptr1 == 'R') {
        if (*cptr1 == *cptr2) {
            cptr1++;
            cptr2++;
            if (*cptr2 == 'C') {
                if (*cptr1 == 'C') {
                    cptr1++;
                }
                cptr2++;
            }
            if (*cptr1 == 'C') {
                return 0;
            }
            if (*cptr2 == 'V') {
                if (*cptr1 == 'V') {
                    cptr1++;
                }
                cptr2++;
            }
            if (*cptr1 == 'V') {
                return 0;
            }
        }
    }
    for (;;) {
        if (*cptr1 != *cptr2) {
            return 0;
        }
        if (*cptr1 == 0) {
            return 1;
        }
        cptr1++;
        cptr2++;
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
