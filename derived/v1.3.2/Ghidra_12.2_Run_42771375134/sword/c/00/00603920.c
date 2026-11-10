/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00603920; name: FUN_00603920
 */


undefined8 FUN_00603920(long param_1,undefined4 param_2)

{
  long *plVar1;
  int iVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  
  if (param_1 == 0) {
    return 6;
  }
  if (*(long *)(param_1 + 8) == 0) {
    return 6;
  }
  iVar2 = *(int *)(param_1 + 0x90);
  if (iVar2 == 0x62697473) {
    return 0;
  }
  lVar5 = *(long *)(*(long *)(*(long *)(param_1 + 8) + 0xb0) + 8);
  if (iVar2 == 0x6f75746c) {
    lVar4 = *(long *)(lVar5 + 0x128);
    lVar6 = *(long *)(lVar5 + 0x118);
LAB_00603978:
    if (lVar4 == 0) {
      return 7;
    }
    if (lVar5 == 0) {
                    /* WARNING: Could not recover jumptable at 0x00603aa0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar3 = (**(code **)(lVar4 + 0x78))(lVar4,param_1,param_2,0);
      return uVar3;
    }
    while (uVar3 = (**(code **)(lVar4 + 0x78))(lVar4,param_1,param_2,0),
          ((uint)uVar3 & 0xff) == 0x13) {
      plVar1 = (long *)(lVar5 + 0x118);
      if (lVar6 != 0) {
        plVar1 = (long *)(lVar6 + 8);
      }
      lVar6 = *plVar1;
      if (lVar6 == 0) {
        return uVar3;
      }
      while (lVar4 = *(long *)(lVar6 + 0x10), *(int *)(lVar4 + 0x20) != *(int *)(param_1 + 0x90)) {
        lVar6 = *(long *)(lVar6 + 8);
        if (lVar6 == 0) {
          return uVar3;
        }
      }
      if (lVar4 == 0) {
        return uVar3;
      }
    }
  }
  else {
    if (lVar5 == 0) {
      return 7;
    }
    lVar6 = *(long *)(lVar5 + 0x118);
    if (lVar6 == 0) {
      return 7;
    }
    uVar3 = 7;
    do {
      lVar4 = *(long *)(lVar6 + 0x10);
      if (*(int *)(lVar4 + 0x20) == iVar2) goto LAB_00603978;
      lVar6 = *(long *)(lVar6 + 8);
    } while (lVar6 != 0);
  }
  return uVar3;
}


