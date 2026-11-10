/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0067d0f0; name: FUN_0067d0f0
 */


void FUN_0067d0f0(long *param_1)

{
  undefined *puVar1;
  long *plVar2;
  undefined8 uVar3;
  long lVar4;
  
  *param_1 = (long)(PTR_DAT_02714e00 + 0x10);
  plVar2 = (long *)FUN_005bf860();
  uVar3 = (**(code **)(*plVar2 + 0x60))();
  FUN_005bf710(param_1 + 1,uVar3);
  param_1[3] = 0;
  *(undefined4 *)(param_1 + 4) = 0;
  param_1[5] = 0;
  param_1[8] = 0;
  param_1[9] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  plVar2 = (long *)FUN_005bf860();
  lVar4 = (**(code **)(*plVar2 + 0x60))();
  puVar1 = PTR_DAT_02714e08;
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  param_1[0xe] = 0;
  param_1[10] = (long)(puVar1 + 0x10);
  param_1[0xb] = lVar4;
  if (lVar4 == 0) {
    lVar4 = FUN_005bc6f0();
    param_1[0xb] = lVar4;
  }
  DAT_029ec648 = param_1;
  plVar2 = (long *)FUN_005bf860();
  lVar4 = (**(code **)(*plVar2 + 0x60))();
  if (lVar4 != 0) {
    plVar2 = (long *)FUN_005bf860();
    plVar2 = (long *)(**(code **)(*plVar2 + 0x60))();
    (**(code **)(*plVar2 + 0x10))();
  }
  if ((long *)param_1[3] != (long *)0x0) {
    (**(code **)(*(long *)param_1[3] + 0x18))();
  }
  plVar2 = (long *)FUN_005bf860();
  lVar4 = (**(code **)(*plVar2 + 0x60))();
  param_1[3] = lVar4;
  return;
}


