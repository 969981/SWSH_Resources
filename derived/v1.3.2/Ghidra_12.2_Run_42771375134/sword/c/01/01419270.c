/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 01419270; name: FUN_01419270
 */


void FUN_01419270(long param_1)

{
  undefined1 uVar1;
  undefined1 local_d8 [2];
  undefined8 local_d6;
  undefined8 local_ce;
  undefined8 local_c6;
  undefined2 local_be;
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined2 local_a8;
  undefined8 local_a0;
  undefined8 local_98;
  undefined8 local_90;
  undefined8 local_88;
  undefined8 local_80;
  undefined8 local_78;
  undefined8 local_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 local_48;
  undefined8 local_40;
  undefined8 local_38;
  undefined8 local_30;
  undefined8 local_28;
  
  local_d8[0] = FUN_008d3750();
  local_be = 0;
  local_c6 = 0;
  local_ce = 0;
  local_d6 = 0;
  local_a8 = 0;
  local_80 = (ulong)local_80._4_4_ << 0x20;
  local_b8 = 0;
  uStack_b0 = 0;
  local_90 = 0;
  local_88 = 0;
  local_a0 = 0;
  local_98 = 0;
  local_68 = 0;
  uStack_60 = 0;
  local_78 = 0;
  local_70 = 0;
  FUN_01524ba0(*(undefined8 *)(*(long *)(param_1 + 0x78) + 0x10),(ulong)local_d8 | 2);
  local_d8[0] = FUN_01524c00(*(undefined8 *)(*(long *)(param_1 + 0x78) + 0x10));
  uVar1 = FUN_01524de0(*(undefined8 *)(*(long *)(param_1 + 0x78) + 0x10));
  local_a8 = CONCAT11(local_a8._1_1_,uVar1);
  uVar1 = FUN_01524bf0(*(undefined8 *)(*(long *)(param_1 + 0x78) + 0x10));
  local_a8 = CONCAT11(uVar1,(undefined1)local_a8);
  local_b8 = **(undefined8 **)(param_1 + 0x78);
  uStack_b0 = (*(undefined8 **)(param_1 + 0x78))[1];
  FUN_01029cb0(*(undefined8 *)PTR_DAT_027108c0);
  FUN_01029ad0(&local_58);
  local_90 = local_48;
  local_98 = local_50;
  local_a0 = local_58;
  local_70 = local_28;
  local_78 = local_30;
  local_80 = local_38;
  local_88 = local_40;
  FUN_011f3720(param_1 + 0xb8,local_d8);
  return;
}


