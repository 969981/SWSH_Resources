/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0083fc30; name: FUN_0083fc30
 */


uint FUN_0083fc30(undefined8 param_1,undefined4 param_2,long param_3,long *param_4,
                 undefined8 param_5)

{
  uint uVar1;
  long *plVar2;
  undefined8 uVar3;
  undefined *local_70;
  long *plStack_68;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined *local_50;
  undefined8 uStack_48;
  
  local_50 = PTR_DAT_027171a8 + 0x10;
  plVar2 = *(long **)(param_3 + 0x40);
  uStack_48 = param_5;
  if (plVar2 == (long *)0x0) {
    plStack_68 = param_4;
    local_70 = PTR_DAT_027171b8;
  }
  else {
    uVar3 = *(undefined8 *)(param_3 + 0x48);
    uStack_58 = (**(code **)(*param_4 + 0xb8))(param_4);
    plStack_68 = plVar2;
    local_60 = uVar3;
    local_70 = PTR_DAT_027171b0;
  }
  local_70 = local_70 + 0x10;
  uVar1 = FUN_0082b780(param_1,param_2,param_3,&local_70,&local_50);
  FUN_0082d660(&local_70);
  return uVar1 & 1;
}


