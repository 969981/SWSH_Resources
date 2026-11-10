/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 01228c60; name: FUN_01228c60
 */


void FUN_01228c60(long param_1)

{
  undefined8 *puVar1;
  ushort uVar2;
  ulong uVar3;
  undefined8 *puVar4;
  undefined8 *local_68;
  undefined8 local_60;
  long local_58;
  undefined8 *local_50;
  undefined8 local_48;
  
  puVar1 = (undefined8 *)(PTR_DAT_027167e8 + 0x10);
  local_50 = &local_60;
  *(undefined4 *)(param_1 + 0xc) = 0;
  local_60 = local_60 & 0xffffffffffffff00;
  local_48 = 0x10;
  local_68 = puVar1;
  FUN_017d05f0(&local_68,&DAT_01d38550,0xffffffffffffffff);
  FUN_017cef10(param_1 + 0x10,&local_68);
  local_68 = puVar1;
  FUN_017d0720(&local_68);
  *(undefined2 *)(param_1 + 0x38) = 0;
  local_60 = CONCAT62(local_60._2_6_,0x300);
  local_50 = (undefined8 *)0x0;
  local_48 = 0;
  puVar1 = (undefined8 *)(PTR_DAT_027260e8 + 0x10);
  local_58 = 0;
  local_68 = puVar1;
  FUN_007b3f00(&local_58,0,0);
  FUN_017a0010(param_1 + 0x78,&local_68);
  puVar4 = (undefined8 *)(PTR_DAT_02726100 + 0x10);
  if (local_58 != 0) {
    local_50 = (undefined8 *)local_58;
    local_68 = puVar4;
    FUN_017cd7a0();
  }
  local_60 = CONCAT62(local_60._2_6_,0x300);
  local_50 = (undefined8 *)0x0;
  local_48 = 0;
  local_58 = 0;
  local_68 = puVar1;
  FUN_007b3f00(&local_58,0,0);
  FUN_017a0010(param_1 + 0xa0,&local_68);
  local_68 = puVar4;
  if (local_58 != 0) {
    local_50 = (undefined8 *)local_58;
    FUN_017cd7a0();
  }
  *(undefined4 *)(param_1 + 200) = 0;
  *(undefined2 *)(param_1 + 0xcc) = 0x5a;
  *(undefined4 *)(param_1 + 0xd0) = 0;
  FUN_012290f0(param_1 + 0xd8,0,0);
  FUN_017e3870(param_1 + 0x40);
  uVar3 = local_60 >> 0x28;
  uVar2 = (ushort)local_60;
  local_68 = (undefined8 *)(PTR_DAT_027260f0 + 0x10);
  local_60._0_5_ = CONCAT14(1,CONCAT22(0xffff,uVar2 & 0xff00));
  local_60 = CONCAT35((int3)uVar3,(undefined5)local_60);
  FUN_017a0500(param_1 + 0x108,&local_68);
  local_68 = &local_60;
  local_60 = 0;
  local_58 = 0;
  FUN_01228ef0(param_1,&local_68);
  FUN_01229570(&local_68,local_60);
  puVar1 = *(undefined8 **)(param_1 + 0x118);
  puVar4 = *(undefined8 **)(param_1 + 0x120);
  while (puVar4 != puVar1) {
    puVar4 = puVar4 + -5;
    (**(code **)*puVar4)(puVar4);
  }
  *(undefined8 **)(param_1 + 0x120) = puVar1;
  return;
}


