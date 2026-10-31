typedef void (*vfunc)(void);

extern void __begin_critical_region(int);
extern void __end_critical_region(int);
extern void __kill_critical_regions(void);
extern void __destroy_global_chain(void);
extern void _ExitProcess(void);
extern int fn_803B7CD0(int);
extern vfunc _dtors[];

vfunc __atexit_funcs[32];
int __aborting;
int __atexit_curr_func;
vfunc __stdio_exit;
vfunc __console_exit;

void exit(int status)
{
    vfunc* dtor;

    if (!__aborting) {
        __begin_critical_region(0);
        __end_critical_region(0);
        __destroy_global_chain();
        dtor = _dtors;
        while (*dtor) {
            (*dtor)();
            dtor++;
        }
        if (__stdio_exit) {
            __stdio_exit();
            __stdio_exit = 0;
        }
    }
    __begin_critical_region(0);
    while (__atexit_curr_func > 0) {
        __atexit_funcs[--__atexit_curr_func]();
    }
    __end_critical_region(0);
    __kill_critical_regions();
    if (__console_exit) {
        __console_exit();
        __console_exit = 0;
    }
    _ExitProcess();
}

void abort(void)
{
    fn_803B7CD0(1);
    __aborting = 1;
    __begin_critical_region(0);
    while (__atexit_curr_func > 0) {
        __atexit_funcs[--__atexit_curr_func]();
    }
    __end_critical_region(0);
    __kill_critical_regions();
    if (__console_exit) {
        __console_exit();
        __console_exit = 0;
    }
    _ExitProcess();
}
