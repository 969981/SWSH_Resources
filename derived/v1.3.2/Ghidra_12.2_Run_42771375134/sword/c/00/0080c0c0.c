/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0080c0c0; name: FUN_0080c0c0
 */


byte FUN_0080c0c0(long *param_1,byte *param_2)

{
  bool bVar1;
  byte bVar2;
  byte *local_70;
  byte *local_68;
  undefined8 uStack_60;
  uint local_58;
  undefined8 local_54;
  undefined2 local_4c;
  uint local_48;
  undefined8 local_44;
  undefined4 local_3c;
  undefined4 local_38;
  undefined4 uStack_34;
  undefined8 local_30;
  undefined8 uStack_28;
  
  local_58 = (uint)*(undefined8 *)(param_2 + 8);
  local_70 = *(byte **)(param_2 + 0x10);
  local_4c = 0;
  local_54 = 0;
  if ((*param_2 & 1) == 0) {
    local_70 = param_2 + 1;
    local_58 = (uint)(*param_2 >> 1);
  }
  local_68 = local_70 + (int)local_58;
  uStack_60 = 0;
  local_44 = 0x400000000000000;
  local_3c = 0x2000000;
  local_38 = *(undefined4 *)PTR_DAT_02716f78;
  local_30 = 0;
  uStack_28 = 0;
  local_48 = local_58;
  uStack_34 = local_38;
  (**(code **)(*param_1 + 0x38))();
  bVar2 = (**(code **)(*param_1 + 0x58))(param_1,&local_70);
  bVar1 = (char)local_4c != '\0';
  FUN_0080c870(&local_70);
  return bVar2 & bVar1;
}


