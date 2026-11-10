/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00ad6230; name: FUN_00ad6230
 */


void FUN_00ad6230(long *param_1,byte param_2,undefined4 param_3)

{
  ulong uVar1;
  long lVar2;
  long *plVar3;
  long local_58;
  long local_50;
  long *local_48;
  byte *local_40;
  undefined4 *local_38;
  long local_30;
  undefined4 local_28;
  byte local_24 [4];
  
  local_24[0] = param_2 & 1;
  local_28 = param_3;
  uVar1 = (**(code **)(*param_1 + 400))();
  if ((uVar1 & 1) == 0) {
    return;
  }
  local_30 = *(long *)(param_1[0x78] + 0x528);
  if (local_30 != 0) {
    (**(code **)(*(long *)(local_30 + 0x48) + 0x10))();
  }
  local_48 = &local_30;
  local_40 = local_24;
  local_38 = &local_28;
  local_50 = param_1[0xa2];
  if (local_50 == 0) {
    FUN_00ad63d0(&local_48,&local_50);
    local_58 = param_1[0xa3];
  }
  else {
    plVar3 = (long *)(local_50 + 0x48);
    (**(code **)(*plVar3 + 0x10))(plVar3);
    FUN_00ad63d0(&local_48,&local_50);
    (**(code **)(*plVar3 + 0x18))(plVar3);
    local_50 = 0;
    local_58 = param_1[0xa3];
  }
  if (local_58 == 0) {
    FUN_00ad63d0(&local_48,&local_58);
    lVar2 = param_1[0xab];
  }
  else {
    plVar3 = (long *)(local_58 + 0x48);
    (**(code **)(*plVar3 + 0x10))(plVar3);
    FUN_00ad63d0(&local_48,&local_58);
    (**(code **)(*plVar3 + 0x18))(plVar3);
    local_58 = 0;
    lVar2 = param_1[0xab];
  }
  if (lVar2 != 0) {
    lVar2 = *(long *)(lVar2 + 0x5d0);
    if (lVar2 == 0) {
      FUN_007270f0(0,local_24[0],local_28,7);
    }
    else {
      plVar3 = (long *)(lVar2 + 0x48);
      (**(code **)(*plVar3 + 0x10))(plVar3);
      FUN_007270f0(lVar2,local_24[0],local_28,7);
      (**(code **)(*plVar3 + 0x18))(plVar3);
    }
  }
  if (local_30 != 0) {
    (**(code **)(*(long *)(local_30 + 0x48) + 0x18))();
  }
  return;
}


