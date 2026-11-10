/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 01218ba0; name: FUN_01218ba0
 */


void FUN_01218ba0(undefined8 *param_1,ulong param_2,undefined8 *param_3)

{
  long *plVar1;
  undefined8 uVar2;
  void *__dest;
  size_t sVar3;
  void *pvVar4;
  void *__src;
  void *__src_00;
  
  *param_1 = *param_3;
  param_1[1] = param_3[1];
  plVar1 = (long *)param_3[6];
  if (plVar1 == (long *)0x0) {
    param_1[6] = 0;
    param_1[9] = 0;
    param_1[10] = 0;
    param_1[8] = 0;
  }
  else if (param_3 + 2 == plVar1) {
    param_1[6] = param_1 + 2;
    (**(code **)(*(long *)param_3[6] + 0x18))();
    param_1[9] = 0;
    param_1[10] = 0;
    param_1[8] = 0;
  }
  else {
    uVar2 = (**(code **)(*plVar1 + 0x10))();
    param_1[6] = uVar2;
    param_1[9] = 0;
    param_1[10] = 0;
    param_1[8] = 0;
  }
  if (param_2 != 0) {
    if ((ulong)param_1[1] < param_2) {
                    /* WARNING: Subroutine does not return */
      abort();
    }
    __dest = (void *)(**(code **)(*(long *)*param_1 + 0x10))((long *)*param_1,param_2 * 0x28,8);
    __src_00 = (void *)param_1[8];
    pvVar4 = __dest;
    if (__src_00 != (void *)0x0) {
      __src = (void *)((long)__src_00 + param_1[9] * 0x28);
      sVar3 = param_1[9] * 0x28;
      if (sVar3 != 0) {
        memmove(__dest,__src_00,sVar3);
        pvVar4 = (void *)((long)__dest + sVar3);
        sVar3 = (long)__src_00 + (param_1[9] * 0x28 - (long)__src);
        if (sVar3 != 0) {
          memmove(pvVar4,__src,sVar3);
          pvVar4 = (void *)((long)pvVar4 + sVar3);
        }
      }
      (**(code **)(*(long *)*param_1 + 0x18))((long *)*param_1,param_1[8],param_1[10] * 0x28,8);
    }
    param_1[10] = param_2;
    param_1[8] = __dest;
    param_1[9] = ((long)pvVar4 - (long)__dest >> 3) * -0x3333333333333333;
  }
  return;
}


