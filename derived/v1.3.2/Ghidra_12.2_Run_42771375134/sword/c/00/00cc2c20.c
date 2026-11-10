/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00cc2c20; name: FUN_00cc2c20
 */


void FUN_00cc2c20(void *param_1)

{
  undefined8 *puVar1;
  undefined1 local_b8;
  undefined2 local_b7;
  undefined1 local_b5;
  undefined2 local_b4;
  undefined1 local_b2;
  undefined1 local_b1;
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined8 local_40;
  undefined8 uStack_38;
  undefined8 local_30;
  undefined8 local_28;
  undefined1 local_18 [4];
  undefined1 local_14 [4];
  
  local_b8 = 0;
  local_b1 = 0;
  puVar1 = (undefined8 *)FUN_00cbd3c0();
  local_b0 = *puVar1;
  local_b2 = 0;
  local_b4 = 0;
  local_28 = 0xeccce1e75b698c;
  local_30 = 0xeccce1e75b698c;
  local_18[0] = 0;
  local_14[0] = 1;
  local_b8 = 1;
  uStack_a8 = local_b0;
  local_a0 = local_b0;
  uStack_98 = local_b0;
  local_90 = local_b0;
  uStack_88 = local_b0;
  local_80 = local_b0;
  uStack_78 = local_b0;
  local_70 = local_b0;
  uStack_68 = local_b0;
  local_60 = local_b0;
  uStack_58 = local_b0;
  local_50 = local_b0;
  uStack_48 = local_b0;
  local_40 = local_b0;
  uStack_38 = local_b0;
  FUN_00cc1c90(&local_b8,&local_28,local_14,local_18);
  local_b5 = 0x30;
  local_b7 = 0x3030;
  memcpy(param_1,&local_b8,0x90);
  return;
}


