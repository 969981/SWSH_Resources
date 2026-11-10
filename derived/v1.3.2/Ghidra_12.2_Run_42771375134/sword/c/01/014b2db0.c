/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 014b2db0; name: FUN_014b2db0
 */


uint FUN_014b2db0(uint param_1)

{
  uint uVar1;
  long lVar2;
  long *plVar3;
  
  if (param_1 < 0x7531) {
    if (param_1 == 0) {
      return 2;
    }
    lVar2 = *(long *)(DAT_02a748d0 + 0x60);
    if (lVar2 == 0) {
      uVar1 = FUN_0077ea20(0);
    }
    else {
      plVar3 = (long *)(lVar2 + 0x48);
      (**(code **)(*plVar3 + 0x10))(plVar3);
      uVar1 = FUN_0077ea20(lVar2);
      (**(code **)(*plVar3 + 0x18))(plVar3);
    }
    if (uVar1 <= param_1) {
      param_1 = 4;
    }
    return param_1;
  }
  if (param_1 < 0x9c41) {
    param_1 = param_1 - 0x7531;
    lVar2 = *(long *)(DAT_02a748d8 + 0x60);
  }
  else {
    if (60000 < param_1) {
      if (param_1 >> 0x10 != 0) {
        return 4;
      }
      param_1 = param_1 - 0xea61;
      lVar2 = *(long *)(DAT_02a748e8 + 0x60);
      if (lVar2 == 0) {
        uVar1 = FUN_0077ea20(0);
      }
      else {
        plVar3 = (long *)(lVar2 + 0x48);
        (**(code **)(*plVar3 + 0x10))(plVar3);
        uVar1 = FUN_0077ea20(lVar2);
        (**(code **)(*plVar3 + 0x18))(plVar3);
      }
      if (uVar1 <= param_1) {
        param_1 = 0;
      }
      return param_1;
    }
    param_1 = param_1 - 0x9c41;
    lVar2 = *(long *)(DAT_02a748e0 + 0x60);
  }
  if (lVar2 == 0) {
    uVar1 = FUN_0077ea20(0);
  }
  else {
    plVar3 = (long *)(lVar2 + 0x48);
    (**(code **)(*plVar3 + 0x10))(plVar3);
    uVar1 = FUN_0077ea20(lVar2);
    (**(code **)(*plVar3 + 0x18))(plVar3);
  }
  if (uVar1 <= param_1) {
    param_1 = 4;
  }
  return param_1;
}


