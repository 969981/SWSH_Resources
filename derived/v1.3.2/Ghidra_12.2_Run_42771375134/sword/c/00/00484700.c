/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00484700; name: FUN_00484700
 */


undefined1  [16] FUN_00484700(long param_1,undefined8 param_2)

{
  byte *pbVar1;
  ulong uVar2;
  undefined4 extraout_s0;
  uint uVar3;
  undefined4 extraout_var;
  undefined8 extraout_var_00;
  undefined1 auVar4 [16];
  undefined8 local_50;
  undefined4 local_48;
  undefined4 local_40;
  undefined1 local_38;
  undefined1 local_30;
  undefined8 local_28;
  uint local_14;
  
  if ((*(long *)(param_1 + 0x78) != 0) && ((*(byte *)(param_1 + 0x98) & 1) == 0)) {
    FUN_00484700();
    auVar4._4_4_ = extraout_var;
    auVar4._0_4_ = extraout_s0;
    auVar4._8_8_ = extraout_var_00;
    return auVar4;
  }
  local_14 = 0;
  local_48 = 0;
  local_40 = 0;
  local_38 = 0xff;
  local_30 = 0xff;
  local_28 = 0;
  local_50 = param_2;
  FUN_00452c80(param_1,&local_14,7,&local_50);
  uVar3 = DAT_01d4c47c;
  if (((local_14 ^ 0xffffffff) & 0x7f800000) != 0) {
    uVar3 = local_14;
  }
  if (-1 < *(char *)(param_1 + 0x9d)) {
    return ZEXT416(uVar3);
  }
  local_50 = CONCAT44(local_50._4_4_,*(undefined4 *)(PTR_DAT_02712b40 + 0x20));
  pbVar1 = *(byte **)(param_1 + 0x90);
  if (pbVar1 != (byte *)0x0) {
    uVar2 = 0;
    do {
      if (pbVar1[uVar2 + 1] == 8) break;
      uVar2 = uVar2 + 1;
    } while (uVar2 < *pbVar1);
  }
  return ZEXT416(uVar3);
}


