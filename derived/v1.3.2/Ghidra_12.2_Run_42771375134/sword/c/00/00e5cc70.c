/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00e5cc70; name: FUN_00e5cc70
 */


void FUN_00e5cc70(long param_1,ulong param_2)

{
  long lVar1;
  long lVar2;
  long *plVar3;
  
  if (*(long *)(param_1 + 0x1a8) == -0x340d631b7bddd9bb) {
    return;
  }
  lVar1 = *(long *)(*(long *)PTR_DAT_02710848 + 0x90);
  if ((param_2 & 1) == 0) {
    if (lVar1 != 0) {
      (**(code **)(*(long *)(lVar1 + 0x48) + 0x10))();
    }
    lVar2 = *(long *)(*(long *)PTR_DAT_02710798 + 0x1b8);
    if (lVar2 != 0) {
      plVar3 = (long *)(lVar2 + 0x48);
      (**(code **)(*plVar3 + 0x10))(plVar3);
      FUN_01511120(lVar2,*(undefined8 *)(param_1 + 0x1a8));
      goto LAB_00e5cd58;
    }
    FUN_01511120(0,*(undefined8 *)(param_1 + 0x1a8));
  }
  else {
    if (lVar1 != 0) {
      (**(code **)(*(long *)(lVar1 + 0x48) + 0x10))();
    }
    lVar2 = *(long *)(*(long *)PTR_DAT_02710798 + 0x1b8);
    if (lVar2 == 0) {
      FUN_01511030(0,*(undefined8 *)(param_1 + 0x1a8));
      if (lVar1 == 0) {
        return;
      }
      goto LAB_00e5cd94;
    }
    plVar3 = (long *)(lVar2 + 0x48);
    (**(code **)(*plVar3 + 0x10))(plVar3);
    FUN_01511030(lVar2,*(undefined8 *)(param_1 + 0x1a8));
LAB_00e5cd58:
    (**(code **)(*plVar3 + 0x18))(plVar3);
  }
  if (lVar1 == 0) {
    return;
  }
LAB_00e5cd94:
                    /* WARNING: Could not recover jumptable at 0x00e5cdac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(lVar1 + 0x48) + 0x18))((long *)(lVar1 + 0x48));
  return;
}


