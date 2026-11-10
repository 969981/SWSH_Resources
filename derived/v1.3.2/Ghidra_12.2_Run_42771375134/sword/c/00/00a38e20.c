/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00a38e20; name: FUN_00a38e20
 */


undefined1
FUN_00a38e20(long param_1,long *param_2,undefined8 param_3,undefined4 param_4,undefined4 param_5,
            undefined4 param_6,undefined4 param_7,uint param_8)

{
  undefined1 uVar1;
  undefined2 uVar2;
  undefined4 uVar3;
  uint uVar4;
  long lVar5;
  long local_c8;
  undefined4 *puStack_c0;
  undefined4 *local_b8;
  undefined8 uStack_b0;
  int *local_a8;
  int *local_a0;
  undefined4 *local_98;
  long **local_90;
  undefined4 *puStack_88;
  long *local_80;
  int local_78;
  int local_74;
  long local_70;
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 local_60;
  undefined4 uStack_5c;
  long *local_58;
  
  local_68 = param_7;
  uStack_64 = param_6;
  local_60 = param_5;
  uStack_5c = param_4;
  local_58 = param_2;
  uVar3 = (**(code **)(*param_2 + 0x740))(param_2,param_4);
  lVar5 = (**(code **)(*param_2 + 0x7f8))(param_2,uVar3);
  local_78 = -1;
  local_70 = lVar5;
  uVar2 = FUN_008e1290();
  uVar1 = *(undefined1 *)(lVar5 + 0x33d);
  uVar4 = FUN_008e5ad0(lVar5);
  FUN_009c7390(param_2,&local_74,&local_78,uVar2,uVar1,param_8 & 1,uVar4 & 1,param_5);
  if (-1 < local_78) {
    local_74 = FUN_00945420(param_5);
  }
  puStack_c0 = &uStack_64;
  local_b8 = &local_60;
  local_a8 = &local_74;
  puStack_88 = &uStack_5c;
  local_a0 = &local_78;
  local_98 = &local_68;
  local_90 = &local_58;
  local_80 = &local_70;
  *(byte *)(param_1 + 0x100) = (byte)((uint)local_78 >> 0x1f) ^ 1 | local_74 != 0;
  local_c8 = param_1;
  uStack_b0 = param_3;
  FUN_00a38f80(&local_c8,param_1 + 0x108);
  FUN_00a38f80(&local_c8,param_1 + 0x140);
  return *(undefined1 *)(param_1 + 0x100);
}


