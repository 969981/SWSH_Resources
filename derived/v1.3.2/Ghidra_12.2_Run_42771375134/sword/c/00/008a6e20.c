/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 008a6e20; name: FUN_008a6e20
 */


void FUN_008a6e20(undefined8 param_1,undefined4 param_2,long param_3,uint param_4)

{
  undefined4 uVar1;
  undefined4 uVar2;
  int iVar3;
  long local_58 [2];
  char *pcStack_48;
  undefined8 local_40;
  long local_38;
  long local_28;
  
  local_38 = 0;
  local_58[1] = 0xb7c68abc86bb246a;
  pcStack_48 = "USE_ITEM";
  local_40 = 8;
  local_28 = param_3;
  if (param_3 != 0) {
    (**(code **)(*(long *)(param_3 + 0x48) + 0x10))();
  }
  FUN_014af590(local_58 + 1,param_2,&local_28);
  if (local_28 != 0) {
    (**(code **)(*(long *)(local_28 + 0x48) + 0x18))();
    local_28 = 0;
  }
  if (local_38 != 0) {
    (**(code **)(*(long *)(local_38 + 0x48) + 0x18))();
    local_38 = 0;
  }
  if ((param_4 & 1) != 0) {
    uVar1 = FUN_0087afd0(param_3);
    uVar2 = FUN_0087ac70(param_3);
    iVar3 = FUN_016ac470(uVar1,uVar2);
    if (iVar3 == 2) {
      local_58[1] = 0xbc109a1f0a395405;
      pcStack_48 = "USE_ITEM_FOR_PINCH";
      local_40 = 0x12;
      local_38 = 0;
      local_58[0] = param_3;
      if (param_3 != 0) {
        (**(code **)(*(long *)(param_3 + 0x48) + 0x10))((long *)(param_3 + 0x48));
      }
      FUN_014af590(local_58 + 1,param_2,local_58);
      if (local_58[0] != 0) {
        (**(code **)(*(long *)(local_58[0] + 0x48) + 0x18))();
        local_58[0] = 0;
      }
      if (local_38 != 0) {
        (**(code **)(*(long *)(local_38 + 0x48) + 0x18))();
      }
    }
  }
  return;
}


