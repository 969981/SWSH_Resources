/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00769c80; name: FUN_00769c80
 */


void FUN_00769c80(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 local_e0;
  undefined8 uStack_d8;
  undefined8 local_d0;
  undefined8 uStack_c8;
  uint6 local_c0 [2];
  char *local_b0;
  undefined8 uStack_a8;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  char *local_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  uint6 *local_68;
  undefined1 *local_60;
  undefined8 uStack_58;
  undefined8 local_50;
  undefined8 uStack_48;
  
  local_50 = 0;
  uStack_48 = 0;
  local_60 = (undefined1 *)0x0;
  uStack_58 = 0;
  local_70 = 0;
  local_68 = (uint6 *)0x0;
  FUN_0199c160(&local_70);
  local_80 = 0;
  uStack_78 = 0;
  local_90 = 0;
  local_88 = (char *)0x0;
  local_a0 = 0;
  uStack_98 = 0;
  local_b0 = (char *)0x0;
  uStack_a8 = 0;
  local_c0[0]._0_8_ = 0;
  local_c0[1]._0_8_ = 0;
  FUN_0199c130(local_c0);
  local_c0[0] = (uint6)(ushort)local_c0[0];
  FUN_0199c130(&uStack_98);
  uStack_98._0_6_ = CONCAT42(0x10000,(undefined2)uStack_98);
  local_c0[1]._0_8_ = 0x190500000000;
  local_b0 = "a_position";
  local_88 = "a_texCoord";
  local_90 = 0x170500000010;
  local_d0 = 0;
  uStack_c8 = 0;
  local_e0 = 0;
  uStack_d8 = 0;
  FUN_0199c150(&local_e0);
  local_e0 = CONCAT44(local_e0._4_4_,0x18);
  FUN_0199c150(&local_d0);
  local_d0 = CONCAT44(local_d0._4_4_,0x18);
  local_70 = CONCAT44(local_70._4_4_,0x20002);
  local_68 = local_c0;
  local_60 = (undefined1 *)&local_e0;
  uVar1 = FUN_019a4920(&local_70);
  uVar2 = (**(code **)(**(long **)(param_1 + 8) + 0x10))(*(long **)(param_1 + 8),uVar1,8);
  FUN_019a49b0(param_1 + 0x68,uVar2,uVar1);
  FUN_019a49d0(param_1 + 0x68,PTR_DAT_027155e8,&local_70,*(undefined8 *)(param_1 + 0xa0));
  return;
}


