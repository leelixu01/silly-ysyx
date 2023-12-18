#include <common.h>
#include "syscall.h"

void yield();
void halt (int code);

int sys_yield() {
  yield();
  return 0;
}

void sys_exit(int code) {
  halt(code);
}

void do_syscall(Context *c) {
  uintptr_t a[4];
  a[0] = c->GPR1;
  a[1] = c->GPR2;
  a[2] = c->GPR3;
  a[3] = c->GPR4;

  uintptr_t a0 = a[1];

  switch (a[0]) {
    case SYS_exit: sys_exit(a[0]); break;
    case SYS_yield: c->GPRx = sys_yield(); break;
    default: panic("syscall:Unhandled syscall ID = %d", a[0]);
  }

  // strace
  Log("strace : %s , a0 : %d, a1 : %d, a2 : %d, ret : %d\n", syscall[a[0]], a0, a[2], a[3], c->GPRx);
}
