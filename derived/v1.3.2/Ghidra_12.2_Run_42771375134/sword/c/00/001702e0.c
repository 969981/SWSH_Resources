/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 001702e0; name: FUN_001702e0
 */


void FUN_001702e0(long param_1)

{
  long *plVar1;
  long *plVar2;
  
  plVar1 = (long *)FUN_003ffa60(*(undefined8 *)(param_1 + 400));
  if (plVar1 != (long *)0x0) {
    plVar2 = plVar1;
    do {
      plVar2 = (long *)*plVar2;
                    /* try { // try from 00170314 to 00170317 has its CatchHandler @ 00170348 */
      FUN_0017c640();
    } while (plVar2 != (long *)0x0);
    while (plVar1 != (long *)0x0) {
      plVar1 = (long *)*plVar1;
                    /* try { // try from 0017032c to 0017032f has its CatchHandler @ 00170344 */
      FUN_003ff9a0(*(undefined8 *)(param_1 + 400));
    }
  }
  return;
}


