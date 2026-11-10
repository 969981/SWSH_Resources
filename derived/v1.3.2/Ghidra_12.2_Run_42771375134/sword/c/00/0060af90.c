/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0060af90; name: FUN_0060af90
 */


void FUN_0060af90(long *param_1,long param_2)

{
  undefined *puVar1;
  long *plVar2;
  undefined8 uVar3;
  long lVar4;
  
  *param_1 = (long)(PTR_DAT_02714510 + 0x10);
  plVar2 = (long *)FUN_005cbff0();
  uVar3 = (**(code **)(*plVar2 + 0x30))();
  FUN_005bf710(param_1 + 1,uVar3);
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[3] = param_2;
  plVar2 = (long *)FUN_005cbff0();
  lVar4 = (**(code **)(*plVar2 + 0x30))();
  puVar1 = PTR_DAT_02714518 + 0x10;
  param_1[8] = 0;
  param_1[9] = 0;
  param_1[6] = (long)puVar1;
  param_1[7] = lVar4;
  if (lVar4 == 0) {
    lVar4 = FUN_005bc6f0();
    param_1[7] = lVar4;
  }
                    /* WARNING: Could not recover jumptable at 0x0060b028. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x68))(param_1);
  return;
}


