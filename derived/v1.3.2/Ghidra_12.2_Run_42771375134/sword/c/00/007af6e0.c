/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 007af6e0; name: FUN_007af6e0
 */


uint FUN_007af6e0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined4 param_4)

{
  undefined8 *puVar1;
  uint uVar2;
  undefined8 *puVar3;
  undefined *local_c0;
  undefined1 local_b8;
  undefined8 local_b0;
  undefined4 local_a8;
  undefined *local_a0;
  undefined1 local_98;
  undefined8 local_90;
  undefined2 local_88;
  undefined8 local_80;
  undefined8 *local_78;
  undefined8 *local_70;
  undefined8 uStack_68;
  undefined *local_60;
  undefined1 local_58;
  undefined8 local_50;
  undefined2 local_48;
  
  local_b8 = 0;
  local_98 = 0;
  local_90 = 0;
  local_a0 = PTR_DAT_027168b0 + 0x10;
  local_88 = 0xffff;
  local_70 = (undefined8 *)0x0;
  uStack_68 = 0;
  local_78 = (undefined8 *)0x0;
  local_58 = 0;
  local_c0 = PTR_DAT_027168b8 + 0x10;
  local_b0 = 0;
  local_50 = 0;
  local_48 = 0xffff;
  local_60 = local_a0;
  FUN_017a0600(&local_a0,&local_60);
  puVar1 = local_78;
  local_80 = 0;
  local_a8 = 0;
  puVar3 = local_70;
  while (puVar3 != puVar1) {
    puVar3 = puVar3 + -5;
    (**(code **)*puVar3)(puVar3);
  }
  local_70 = puVar1;
  local_b0 = param_2;
  uVar2 = FUN_007af820(param_1,&local_c0,param_3,param_4);
  puVar1 = local_78;
  local_c0 = PTR_DAT_027168c0 + 0x10;
  puVar3 = local_70;
  if (local_78 != (undefined8 *)0x0) {
    while (puVar3 != puVar1) {
      puVar3 = puVar3 + -5;
      (**(code **)*puVar3)(puVar3);
    }
    local_70 = puVar1;
    FUN_017cd7a0(local_78);
  }
  return uVar2 & 1;
}


