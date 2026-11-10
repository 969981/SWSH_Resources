/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 01223bb0; name: FUN_01223bb0
 */


void FUN_01223bb0(undefined4 param_1,long param_2,undefined1 param_3,undefined8 *param_4)

{
  undefined8 uVar1;
  undefined4 uVar2;
  undefined8 local_80;
  undefined4 uStack_78;
  undefined4 local_74;
  undefined4 uStack_70;
  undefined4 local_6c;
  undefined4 uStack_68;
  undefined4 local_64;
  undefined4 uStack_60;
  undefined4 local_5c;
  undefined4 uStack_58;
  undefined8 local_50;
  undefined4 uStack_48;
  undefined4 local_44;
  undefined4 uStack_40;
  undefined4 local_3c;
  undefined4 uStack_38;
  undefined4 local_34;
  undefined4 uStack_30;
  undefined4 local_2c;
  undefined4 uStack_28;
  undefined8 local_20;
  undefined6 uStack_18;
  undefined2 local_12;
  undefined6 uStack_10;
  undefined2 local_a;
  
  uVar1 = param_4[1];
  local_a = (undefined2)uVar1;
  local_12 = (undefined2)*param_4;
  uStack_10 = (undefined6)((ulong)*param_4 >> 0x10);
  uVar2 = *(undefined4 *)(param_2 + 0x30);
  local_2c = (undefined4)*(undefined8 *)(param_2 + 0x28);
  uStack_28 = (undefined4)((ulong)*(undefined8 *)(param_2 + 0x28) >> 0x20);
  local_34 = (undefined4)*(undefined8 *)(param_2 + 0x20);
  uStack_30 = (undefined4)((ulong)*(undefined8 *)(param_2 + 0x20) >> 0x20);
  local_3c = (undefined4)*(undefined8 *)(param_2 + 0x18);
  uStack_38 = (undefined4)((ulong)*(undefined8 *)(param_2 + 0x18) >> 0x20);
  local_44 = (undefined4)*(undefined8 *)(param_2 + 0x10);
  uStack_40 = (undefined4)((ulong)*(undefined8 *)(param_2 + 0x10) >> 0x20);
  local_74 = (undefined4)*(undefined8 *)(param_2 + 0x40);
  uStack_70 = (undefined4)((ulong)*(undefined8 *)(param_2 + 0x40) >> 0x20);
  local_5c = (undefined4)*(undefined8 *)(param_2 + 0x58);
  uStack_58 = (undefined4)((ulong)*(undefined8 *)(param_2 + 0x58) >> 0x20);
  local_64 = (undefined4)*(undefined8 *)(param_2 + 0x50);
  uStack_60 = (undefined4)((ulong)*(undefined8 *)(param_2 + 0x50) >> 0x20);
  local_6c = (undefined4)*(undefined8 *)(param_2 + 0x48);
  uStack_68 = (undefined4)((ulong)*(undefined8 *)(param_2 + 0x48) >> 0x20);
  *(byte *)(param_2 + 0x10) = *(char *)(param_2 + 0x10) + 1U & 0x1f;
  *(undefined1 *)(param_2 + 0x11) = param_3;
  *(undefined4 *)(param_2 + 0x30) = param_1;
  *(undefined8 *)(param_2 + 0x28) = uVar1;
  *(ulong *)(param_2 + 0x22) = CONCAT26(local_a,uStack_10);
  *(ulong *)(param_2 + 0x1a) = CONCAT26(local_12,uStack_18);
  *(undefined8 *)(param_2 + 0x12) = local_20;
  *(ulong *)(param_2 + 0x3c) = CONCAT44(local_44,uStack_48);
  *(undefined8 *)(param_2 + 0x34) = local_50;
  *(ulong *)(param_2 + 0x5c) = CONCAT44(uVar2,uStack_28);
  *(ulong *)(param_2 + 0x54) = CONCAT44(local_2c,uStack_30);
  *(ulong *)(param_2 + 0x4c) = CONCAT44(local_34,uStack_38);
  *(ulong *)(param_2 + 0x44) = CONCAT44(local_3c,uStack_40);
  *(ulong *)(param_2 + 0x6c) = CONCAT44(local_74,uStack_78);
  *(ulong *)(param_2 + 0x8c) = CONCAT44(*(undefined4 *)(param_2 + 0x60),uStack_58);
  *(ulong *)(param_2 + 0x84) = CONCAT44(local_5c,uStack_60);
  *(ulong *)(param_2 + 0x7c) = CONCAT44(local_64,uStack_68);
  *(ulong *)(param_2 + 0x74) = CONCAT44(local_6c,uStack_70);
  *(undefined8 *)(param_2 + 100) = local_80;
  return;
}


