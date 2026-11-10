/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00dae400; name: FUN_00dae400
 */


void FUN_00dae400(long *param_1,ulong param_2)

{
  ulong uVar1;
  ulong uVar2;
  void *__src;
  long lVar3;
  long *plVar4;
  void *__dest;
  ulong uVar5;
  ulong __n;
  ulong __n_00;
  
  uVar2 = param_1[4];
  __src = (void *)param_1[5];
  lVar3 = param_1[7];
  uVar1 = (uVar2 - param_1[6]) + (long)__src;
  if (uVar2 == 0) {
    uVar5 = param_1[2];
  }
  else {
    uVar5 = uVar2 >> 1;
  }
  if (uVar5 <= param_2) {
    uVar5 = param_2;
  }
  plVar4 = (long *)*param_1;
  uVar5 = (param_1[3] + uVar5 + uVar2) - 1 & -param_1[3];
  param_1[4] = uVar5;
  if (__src == (void *)0x0) {
    if (plVar4 == (long *)0x0) {
      __dest = operator_new__(uVar5);
    }
    else {
      __dest = (void *)(**(code **)(*plVar4 + 0x10))(plVar4,uVar5);
    }
  }
  else {
    __n_00 = uVar1 & 0xffffffff;
    __n = lVar3 - (long)__src & 0xffffffff;
    if (plVar4 == (long *)0x0) {
      __dest = operator_new__(uVar5);
      memcpy((void *)((long)__dest + (uVar5 - __n_00)),(void *)((long)__src + (uVar2 - __n_00)),
             __n_00);
      memcpy(__dest,__src,__n);
      operator_delete__(__src);
    }
    else {
      __dest = (void *)(**(code **)(*plVar4 + 0x20))(plVar4,__src,uVar2,uVar5,__n_00,__n);
    }
  }
  param_1[5] = (long)__dest;
  param_1[6] = (long)__dest + (param_1[4] - (uVar1 & 0xffffffff));
  param_1[7] = (long)__dest + (lVar3 - (long)__src & 0xffffffffU);
  return;
}


