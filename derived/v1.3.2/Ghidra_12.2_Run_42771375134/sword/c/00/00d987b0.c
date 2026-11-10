/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00d987b0; name: FUN_00d987b0
 */


void FUN_00d987b0(long param_1)

{
  undefined8 local_a8;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  undefined8 local_78;
  undefined8 local_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 local_50;
  undefined6 uStack_48;
  undefined2 local_42;
  undefined4 uStack_40;
  undefined2 uStack_3c;
  undefined4 local_38;
  undefined8 local_28;
  
  local_38 = 0;
  uStack_40 = 0;
  uStack_3c = 0;
  local_50 = 0;
  uStack_48 = 0;
  local_42 = 0;
  local_58 = 0;
  local_a0 = 0x9b3ad4ded41c6aca;
  uStack_88 = FUN_0167b6b0(*(undefined8 *)(param_1 + 400),&local_a0);
  local_90 = DAT_02160450;
  local_a0 = DAT_02160440;
  uStack_98 = DAT_02160448;
  local_80 = FUN_0167b6b0(*(undefined8 *)(param_1 + 400),&local_a0);
  local_78 = FUN_0167b6b0(*(undefined8 *)(param_1 + 400),&uStack_98);
  local_70 = FUN_0167b6b0(*(undefined8 *)(param_1 + 400),&local_90);
  local_28 = 0xc0b802cc3afa6c58;
  FUN_0167b9b0(*(undefined8 *)(param_1 + 400),&local_28,0);
  local_68 = FUN_0167b6b0(*(undefined8 *)(param_1 + 400),&local_28);
  uStack_60 = 0x4640e4004640e400;
  uStack_48 = 0x100000001;
  local_42 = 0;
  uStack_40 = 1;
  FUN_0160ec40(param_1 + 0x4e0,&uStack_88);
  local_a8 = 0xa3a4f3bbada5d826;
  FUN_0167b9b0(*(undefined8 *)(param_1 + 400),&local_a8,0);
  local_a8 = 0xc25e767d2115cb06;
  FUN_0167b9b0(*(undefined8 *)(param_1 + 400),&local_a8,0);
  local_a8 = 0x266d253d51a88540;
  FUN_0167b9b0(*(undefined8 *)(param_1 + 400),&local_a8,1);
  return;
}


