/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 006fc960; name: FUN_006fc960
 */


void FUN_006fc960(long param_1,undefined8 param_2,undefined4 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 local_60;
  long local_58;
  undefined8 local_50;
  undefined8 local_48;
  
  puVar1 = PTR_DAT_027154f0;
  *(undefined4 *)(param_1 + 0x128) = param_3;
  puVar2 = PTR_DAT_027155e8;
  uVar5 = *(undefined8 *)(*(long *)puVar1 + 0x10);
  uVar3 = FUN_0199e360(PTR_DAT_027155e8);
  uVar4 = FUN_0199e450(puVar2,param_2);
  FUN_006f1b70(&local_60,uVar5,0,uVar3,uVar4);
  *(undefined8 *)(param_1 + 0x90) = local_60;
  if (*(long *)(param_1 + 0x98) != 0) {
    (**(code **)(*(long *)(*(long *)(param_1 + 0x98) + 0x48) + 0x18))();
    *(undefined8 *)(param_1 + 0x98) = 0;
  }
  *(long *)(param_1 + 0x98) = local_58;
  *(undefined8 *)(param_1 + 0xa0) = local_50;
  *(undefined8 *)(param_1 + 0xa8) = local_48;
  local_60 = 0;
  local_58 = 0;
  local_50 = 0xffffffffffffffff;
  local_48 = 0;
  FUN_006f6820(&local_60);
  if (local_58 != 0) {
    (**(code **)(*(long *)(local_58 + 0x48) + 0x18))();
    local_58 = 0;
  }
  uVar3 = FUN_006f6880(param_1 + 0x90);
  FUN_0199e530(param_1 + 0x50,PTR_DAT_027155e8,param_2,uVar3,*(undefined8 *)(param_1 + 0xa0),
               *(undefined8 *)(param_1 + 0xa8));
  return;
}


