/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 003d9560; name: FUN_003d9560
 */


void FUN_003d9560(long param_1)

{
  if (*(long **)(param_1 + 0x10) != (long *)0x0) {
    (**(code **)(**(long **)(param_1 + 0x10) + 8))();
  }
                    /* try { // try from 003d957c to 003d957f has its CatchHandler @ 003d9594 */
  FUN_00110c00();
  *(undefined8 *)PTR_DAT_02711060 = 0;
  return;
}


