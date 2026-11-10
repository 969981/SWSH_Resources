/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0011e590; name: FUN_0011e590
 */


void FUN_0011e590(long param_1)

{
  long *plVar1;
  long *plVar2;
  long *plVar3;
  
  plVar1 = (long *)FUN_003ffa60(*(undefined8 *)(param_1 + 0x1b0));
  if (plVar1 != (long *)0x0) {
    plVar2 = plVar1;
    while( true ) {
      plVar3 = (long *)*plVar2;
                    /* try { // try from 0011e5cc to 0011e5cf has its CatchHandler @ 0011e600 */
      FUN_001206c0(plVar2,*(int *)(param_1 + 0x6a8) << 5);
      if (plVar3 == (long *)0x0) break;
      plVar2 = plVar3;
    }
    while (plVar1 != (long *)0x0) {
      plVar1 = (long *)*plVar1;
                    /* try { // try from 0011e5e4 to 0011e5e7 has its CatchHandler @ 0011e5fc */
      FUN_003ff9a0(*(undefined8 *)(param_1 + 0x1b0));
    }
  }
  return;
}


