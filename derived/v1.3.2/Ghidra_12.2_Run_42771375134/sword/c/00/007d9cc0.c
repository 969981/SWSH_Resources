/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 007d9cc0; name: FUN_007d9cc0
 */


void FUN_007d9cc0(long param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  
  lVar1 = *(long *)(param_1 + 8);
  lVar2 = lVar1;
  lVar3 = *(long *)(param_1 + 0x10);
  if (*(long *)(param_1 + 0x10) != lVar1) {
    do {
      lVar2 = lVar3 + -0x10;
      if (*(long *)(lVar3 + -8) != 0) {
        (**(code **)(*(long *)(*(long *)(lVar3 + -8) + 0x48) + 0x18))();
        *(undefined8 *)(lVar3 + -8) = 0;
      }
      lVar3 = lVar2;
    } while (lVar1 != lVar2);
    lVar2 = *(long *)(param_1 + 8);
  }
  *(long *)(param_1 + 0x10) = lVar1;
  if (lVar2 == 0) {
    return;
  }
  if (lVar1 == lVar2) {
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
                    /* WARNING: Could not recover jumptable at 0x007d9d88. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(long **)(param_1 + 0x20) + 0x18))
            (*(long **)(param_1 + 0x20),lVar1,*(long *)(param_1 + 0x18) - lVar1,8);
  return;
}


