/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 014b48d0; name: FUN_014b48d0
 */


undefined8 FUN_014b48d0(undefined8 param_1,long *param_2,uint param_3,undefined4 param_4)

{
  ulong uVar1;
  undefined8 uVar2;
  long lVar3;
  uint uVar4;
  long lVar5;
  long *plVar6;
  long local_48;
  long local_38;
  
  uVar4 = param_3;
  if (((param_3 - 2 < 3) && (uVar1 = FUN_0087d610(*param_2,2), (uVar1 & 1) != 0)) &&
     (uVar4 = param_3 + 10, 2 < param_3 - 2)) {
    uVar4 = param_3;
  }
  local_38 = *param_2;
  if (local_38 == 0) {
    FUN_014b4aa0(param_1,&local_38,uVar4,param_4);
    local_48 = *param_2;
  }
  else {
    plVar6 = (long *)(local_38 + 0x48);
    (**(code **)(*plVar6 + 0x10))(plVar6);
    FUN_014b4aa0(param_1,&local_38,uVar4,param_4);
    (**(code **)(*plVar6 + 0x18))(plVar6);
    local_38 = 0;
    local_48 = *param_2;
  }
  if (local_48 == 0) {
    uVar1 = FUN_014b4c40(&local_48,uVar4);
  }
  else {
    plVar6 = (long *)(local_48 + 0x48);
    (**(code **)(*plVar6 + 0x10))(plVar6);
    uVar1 = FUN_014b4c40(&local_48,uVar4);
    (**(code **)(*plVar6 + 0x18))(plVar6);
    local_48 = 0;
  }
  if ((uVar1 & 1) == 0) {
    if ((uVar4 < 9) || (uVar4 == 0xb)) {
      lVar3 = *param_2;
      if (lVar3 != 0) {
        (**(code **)(*(long *)(lVar3 + 0x48) + 0x10))();
      }
      lVar5 = *(long *)(*(long *)PTR_DAT_02710798 + 0x1f8);
      if (lVar5 == 0) {
        FUN_01534a40(0,lVar3,0);
      }
      else {
        plVar6 = (long *)(lVar5 + 0x48);
        (**(code **)(*plVar6 + 0x10))(plVar6);
        FUN_01534a40(lVar5,lVar3,0);
        (**(code **)(*plVar6 + 0x18))(plVar6);
      }
      if (lVar3 != 0) {
        (**(code **)(*(long *)(lVar3 + 0x48) + 0x18))((long *)(lVar3 + 0x48));
      }
    }
    uVar2 = 1;
  }
  else {
    uVar2 = 0;
  }
  return uVar2;
}


