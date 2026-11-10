/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 006948f0; name: FUN_006948f0
 */


void FUN_006948f0(long *param_1)

{
  long *plVar1;
  undefined8 uVar2;
  long lVar3;
  
  *param_1 = (long)(PTR_DAT_02714ea0 + 0x10);
  plVar1 = (long *)FUN_005bf860();
  uVar2 = (**(code **)(*plVar1 + 0x60))();
  FUN_005bf710(param_1 + 1,uVar2);
  param_1[3] = 0;
  *(undefined4 *)(param_1 + 4) = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  DAT_029ece50 = param_1;
  plVar1 = (long *)FUN_005bf860();
  lVar3 = (**(code **)(*plVar1 + 0x60))();
  if (lVar3 != 0) {
    plVar1 = (long *)FUN_005bf860();
    plVar1 = (long *)(**(code **)(*plVar1 + 0x60))();
    (**(code **)(*plVar1 + 0x10))();
  }
  if ((long *)param_1[3] != (long *)0x0) {
    (**(code **)(*(long *)param_1[3] + 0x18))();
  }
  plVar1 = (long *)FUN_005bf860();
  lVar3 = (**(code **)(*plVar1 + 0x60))();
  param_1[3] = lVar3;
  return;
}


