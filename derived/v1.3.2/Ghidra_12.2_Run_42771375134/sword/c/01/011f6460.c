/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 011f6460; name: FUN_011f6460
 */


void FUN_011f6460(long param_1)

{
  long lVar1;
  long *plVar2;
  long lVar3;
  long lVar4;
  
  if (*(long *)PTR_DAT_02716b80 != 0) {
    plVar2 = (long *)(param_1 + 0x58);
    if (*plVar2 == 0) {
      plVar2 = (long *)(param_1 + 0x50);
    }
    FUN_007c2d30(*(long *)PTR_DAT_02716b80,plVar2);
  }
  lVar3 = *(long *)PTR_DAT_027104b0;
  if (lVar3 != 0) {
    lVar4 = *(long *)(param_1 + 0x58);
    if (lVar4 == 0) {
      lVar4 = *(long *)(param_1 + 0x50);
      if (lVar4 != 0) {
        (**(code **)(*(long *)(lVar4 + 0x48) + 0x10))();
      }
      lVar1 = *(long *)(lVar3 + 0x1e8);
      *(long *)(lVar3 + 0x1e8) = lVar4;
      if (lVar1 != 0) {
        (**(code **)(*(long *)(lVar1 + 0x48) + 0x18))();
      }
      lVar3 = *(long *)(lVar3 + 0x58);
      if (lVar3 == 0) {
        return;
      }
      lVar4 = *(long *)(param_1 + 0x50);
    }
    else {
      (**(code **)(*(long *)(lVar4 + 0x48) + 0x10))();
      lVar1 = *(long *)(lVar3 + 0x1e8);
      *(long *)(lVar3 + 0x1e8) = lVar4;
      if (lVar1 != 0) {
        (**(code **)(*(long *)(lVar1 + 0x48) + 0x18))();
      }
      lVar3 = *(long *)(lVar3 + 0x58);
      if (lVar3 == 0) {
        return;
      }
      lVar4 = *(long *)(param_1 + 0x58);
    }
    if (lVar4 != 0) {
      (**(code **)(*(long *)(lVar4 + 0x48) + 0x10))();
    }
    lVar1 = *(long *)(lVar3 + 0x428);
    *(long *)(lVar3 + 0x428) = lVar4;
    if (lVar1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x011f6518. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*(long *)(lVar1 + 0x48) + 0x18))();
      return;
    }
  }
  return;
}


