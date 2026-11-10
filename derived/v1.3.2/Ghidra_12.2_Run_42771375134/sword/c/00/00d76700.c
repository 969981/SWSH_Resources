/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00d76700; name: FUN_00d76700
 */


bool FUN_00d76700(undefined8 param_1)

{
  ulong uVar1;
  long *plVar2;
  long lVar3;
  ulong local_38;
  long local_28;
  
  FUN_00d85f20(&local_28,param_1,1);
  local_38 = CONCAT71(local_38._1_7_,1);
  local_38 = local_38 & 0xffffffff;
  uVar1 = FUN_0069d390(local_28,&local_38);
  if (local_28 != 0) {
    (**(code **)(*(long *)(local_28 + 0x48) + 0x18))();
    local_28 = 0;
  }
  if ((uVar1 & 1) == 0) {
    FUN_00d85f20(&local_28,param_1,2);
    local_38 = CONCAT71(local_38._1_7_,1);
    local_38 = local_38 & 0xffffffff;
    uVar1 = FUN_0069d390(local_28,&local_38);
    if (local_28 != 0) {
      (**(code **)(*(long *)(local_28 + 0x48) + 0x18))();
      local_28 = 0;
    }
    if ((uVar1 & 1) == 0) {
      FUN_00d85f20(&local_38,param_1,1);
      local_28 = FUN_0069d2b0(local_38);
      plVar2 = (long *)FUN_006b92e0(&local_28);
      lVar3 = *plVar2;
      if (local_38 != 0) {
        (**(code **)(*(long *)(local_38 + 0x48) + 0x18))();
        local_38 = 0;
      }
      if (lVar3 == -0x6a6da842a3e8b9ce) {
        FUN_00d85f20(&local_38,param_1,2);
        local_28 = FUN_0069d2b0(local_38);
        plVar2 = (long *)FUN_006b92e0(&local_28);
        lVar3 = *plVar2;
        if (local_38 == 0) {
          return lVar3 == -0x6a6da842a3e8b9ce;
        }
        (**(code **)(*(long *)(local_38 + 0x48) + 0x18))();
        return lVar3 == -0x6a6da842a3e8b9ce;
      }
    }
  }
  return false;
}


