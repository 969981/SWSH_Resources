/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 007d29f0; name: FUN_007d29f0
 */


void FUN_007d29f0(long param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  
  if (*(long *)(param_1 + 0x38) != 0) {
    (**(code **)(*(long *)(*(long *)(param_1 + 0x38) + 0x48) + 0x18))();
    *(undefined8 *)(param_1 + 0x38) = 0;
  }
  lVar2 = *(long *)(param_1 + 8);
  if (lVar2 == 0) {
    return;
  }
  lVar1 = *(long *)(param_1 + 0x10);
  if (*(long *)(param_1 + 0x10) == lVar2) {
    lVar1 = lVar2;
  }
  else {
    do {
      lVar3 = lVar1 + -0x10;
      if (*(long *)(lVar1 + -8) != 0) {
        (**(code **)(*(long *)(*(long *)(lVar1 + -8) + 0x48) + 0x18))();
        *(undefined8 *)(lVar1 + -8) = 0;
      }
      lVar1 = lVar3;
    } while (lVar2 != lVar3);
    lVar1 = *(long *)(param_1 + 8);
  }
  *(long *)(param_1 + 0x10) = lVar2;
                    /* WARNING: Could not recover jumptable at 0x007d2a98. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(long **)(param_1 + 0x20) + 0x18))
            (*(long **)(param_1 + 0x20),lVar1,*(long *)(param_1 + 0x18) - lVar1,8);
  return;
}


