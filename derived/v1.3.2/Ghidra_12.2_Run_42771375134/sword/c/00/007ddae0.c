/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 007ddae0; name: FUN_007ddae0
 */


void FUN_007ddae0(long param_1)

{
  long lVar1;
  long lVar2;
  long *plVar3;
  
  lVar1 = *(long *)PTR_DAT_02716758;
  if ((lVar1 != 0) && (*(long *)(lVar1 + 0xf8) != 0)) {
    lVar2 = *(long *)(lVar1 + 0xf8) << 5;
    plVar3 = *(long **)(lVar1 + 0xf0);
    do {
      lVar1 = (**(code **)(*(long *)*plVar3 + 0x38))();
      if (lVar1 == param_1) {
        if ((long *)*plVar3 == (long *)0x0) {
          return;
        }
                    /* WARNING: Could not recover jumptable at 0x007ddb5c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*(long *)*plVar3 + 0x28))();
        return;
      }
      lVar2 = lVar2 + -0x20;
      plVar3 = plVar3 + 4;
    } while (lVar2 != 0);
  }
  return;
}


