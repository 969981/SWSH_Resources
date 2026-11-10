/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 01037730; name: FUN_01037730
 */


void FUN_01037730(long param_1,undefined8 param_2,undefined8 *param_3)

{
  uint uVar1;
  ulong uVar2;
  undefined8 local_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined4 local_48;
  undefined8 local_40;
  undefined4 local_38;
  undefined1 local_34;
  undefined2 local_32;
  undefined2 local_30;
  
  local_40 = 0x8abaf272a347e952;
  local_34 = *(undefined1 *)(param_3 + 7);
  local_32 = *(undefined2 *)((long)param_3 + 0x3a);
  local_30 = *(undefined2 *)((long)param_3 + 0x3c);
  uStack_70 = param_3[2];
  local_80 = *param_3;
  local_78 = param_3[1];
  local_68 = param_3[3];
  uStack_60 = param_3[4];
  local_58 = param_3[5];
  uStack_50 = param_3[6];
  uVar1 = *(int *)(param_1 + 0x6f4) - 1;
  if (uVar1 < 5) {
    uVar2 = -(ulong)(uVar1 >> 0x1f) & 0xfffffffc00000000 | (ulong)uVar1 << 2;
    local_48 = *(undefined4 *)(&DAT_02162b70 + uVar2);
    local_38 = *(undefined4 *)(&DAT_02162b90 + uVar2);
  }
  else {
    local_48 = 2;
    local_38 = 2;
  }
  FUN_010381d0(param_1,param_2,&local_80);
  return;
}


