/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 001ed360; name: FUN_001ed360
 */


void FUN_001ed360(long *param_1)

{
  *param_1 = (long)(PTR_DAT_02711138 + 0x10);
                    /* try { // try from 001ed380 to 001ed383 has its CatchHandler @ 001ed394 */
  FUN_001e1ec0();
  FUN_001e0d60(param_1 + 3);
  return;
}


