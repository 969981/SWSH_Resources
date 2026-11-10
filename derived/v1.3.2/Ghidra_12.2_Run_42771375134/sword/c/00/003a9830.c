/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 003a9830; name: FUN_003a9830
 */


void FUN_003a9830(long param_1)

{
  if (*(long *)(param_1 + 0x10) != 0) {
                    /* try { // try from 003a9848 to 003a984b has its CatchHandler @ 003a985c */
    FUN_00196b30();
  }
  FUN_003ba2c0(param_1);
  return;
}


