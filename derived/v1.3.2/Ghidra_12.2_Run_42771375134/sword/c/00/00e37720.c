/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00e37720; name: FUN_00e37720
 */


void FUN_00e37720(long *param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  ulong uVar3;
  long lVar4;
  
  puVar1 = PTR_DAT_0271f750 + 0x198;
  puVar2 = PTR_DAT_0271f750 + 0x1d8;
  *param_1 = (long)(PTR_DAT_0271f750 + 0x10);
  param_1[9] = (long)puVar1;
  param_1[10] = (long)puVar2;
  FUN_00da4d60(param_1[0x80]);
  uVar3 = FUN_00da4bb0(param_1[0x80],0);
  if ((uVar3 & 1) == 0) {
    uVar3 = FUN_00da4bb0(param_1[0x80],1);
  }
  else {
    FUN_00da4c30(param_1[0x80],0);
    uVar3 = FUN_00da4bb0(param_1[0x80],1);
  }
  if ((uVar3 & 1) == 0) {
    uVar3 = FUN_00da4c90(param_1[0x80]);
  }
  else {
    FUN_00da4c30(param_1[0x80],1);
    uVar3 = FUN_00da4c90(param_1[0x80]);
  }
  if ((uVar3 & 1) == 0) {
    lVar4 = param_1[0x96];
  }
  else {
    FUN_00da4cc0(param_1[0x80]);
    lVar4 = param_1[0x96];
  }
  if (lVar4 != 0) {
    (**(code **)(*(long *)(lVar4 + 0x48) + 0x18))();
    param_1[0x96] = 0;
  }
  FUN_00e37860(param_1 + 0x88);
  if (param_1[0x80] != 0) {
    (**(code **)(*(long *)(param_1[0x80] + 0x48) + 0x18))();
    param_1[0x80] = 0;
  }
  if (param_1[0x7f] != 0) {
    (**(code **)(*(long *)(param_1[0x7f] + 0x48) + 0x18))();
    param_1[0x7f] = 0;
  }
  if (param_1[0x7b] != 0) {
    (**(code **)(*(long *)(param_1[0x7b] + 0x48) + 0x18))();
    param_1[0x7b] = 0;
  }
  if (param_1[0x77] != 0) {
    (**(code **)(*(long *)(param_1[0x77] + 0x48) + 0x18))();
    param_1[0x77] = 0;
  }
  FUN_00aab880(param_1);
  return;
}


