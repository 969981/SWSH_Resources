/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00682f60; name: FUN_00682f60
 */


void FUN_00682f60(undefined8 *param_1)

{
  int iVar1;
  long lVar2;
  undefined8 uVar3;
  char *pcVar4;
  
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  *param_1 = 0;
  param_1[1] = 0;
  lVar2 = FUN_005bc740();
  if (lVar2 == 0) {
    uVar3 = FUN_005bc6f0();
  }
  else {
    uVar3 = FUN_005bc740();
  }
  *param_1 = uVar3;
  pcVar4 = (char *)FUN_005c9f60();
  iVar1 = FUN_005c4340();
  if (iVar1 < 1) {
    pcVar4 = "/rom:";
  }
  FUN_005c47b0(param_1,pcVar4);
  return;
}


