/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 014ae470; name: FUN_014ae470
 */


bool FUN_014ae470(uint param_1,int param_2)

{
  ulong uVar1;
  long *plVar2;
  long lVar3;
  
  if ((param_2 != 0) && (*(long *)(*(long *)PTR_DAT_02710798 + 0x1b8) != 0)) {
    plVar2 = (long *)(*(long *)(*(long *)PTR_DAT_02710798 + 0x1b8) + 0x48);
    (**(code **)(*plVar2 + 0x10))(plVar2);
    (**(code **)(*plVar2 + 0x18))(plVar2);
  }
  if ((param_1 < 899) && (*(short *)(&DAT_0216fa8c + (ulong)param_1 * 8) != 0)) {
    return true;
  }
  if (param_2 == 0) {
LAB_014ae54c:
    if ((param_1 < 899) && ((&DAT_0216fa8e)[(ulong)param_1 * 4] != 0)) {
      return true;
    }
    if (param_2 == 0) goto LAB_014ae5ec;
  }
  else {
    lVar3 = *(long *)(*(long *)PTR_DAT_02710798 + 0x1b8);
    if (lVar3 != 0) {
      (**(code **)(*(long *)(lVar3 + 0x48) + 0x10))();
    }
    uVar1 = FUN_01510f00(lVar3,0x84c49e353e8b7518);
    if ((uVar1 & 1) != 0) {
      if (lVar3 != 0) {
        (**(code **)(*(long *)(lVar3 + 0x48) + 0x18))((long *)(lVar3 + 0x48));
      }
      goto LAB_014ae54c;
    }
    if (lVar3 != 0) {
      (**(code **)(*(long *)(lVar3 + 0x48) + 0x18))((long *)(lVar3 + 0x48));
    }
  }
  lVar3 = *(long *)(*(long *)PTR_DAT_02710798 + 0x1b8);
  if (lVar3 != 0) {
    (**(code **)(*(long *)(lVar3 + 0x48) + 0x10))();
  }
  uVar1 = FUN_01510f00(lVar3,0x84c4a1353e8b7a31);
  if ((uVar1 & 1) == 0) {
    if (lVar3 == 0) {
      return false;
    }
    (**(code **)(*(long *)(lVar3 + 0x48) + 0x18))((long *)(lVar3 + 0x48));
    return false;
  }
  if (lVar3 != 0) {
    (**(code **)(*(long *)(lVar3 + 0x48) + 0x18))((long *)(lVar3 + 0x48));
  }
LAB_014ae5ec:
  if (param_1 < 899) {
    return (&DAT_0216fa90)[(ulong)param_1 * 4] != 0;
  }
  return false;
}


