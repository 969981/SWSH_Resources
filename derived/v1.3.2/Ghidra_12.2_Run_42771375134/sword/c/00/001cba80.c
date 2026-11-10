/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 001cba80; name: FUN_001cba80
 */


void FUN_001cba80(long param_1)

{
  *(undefined4 *)(param_1 + 0x1e0) = 0;
  *(undefined4 *)(param_1 + 0x1e8) = 0;
  *(undefined8 *)(param_1 + 0x1f0) = 0;
  *(undefined8 *)(param_1 + 0x1f8) = 0;
                    /* try { // try from 001cbaa8 to 001cbac3 has its CatchHandler @ 001cbb2c */
                    /* WARNING: Subroutine does not return */
  memset((void *)(param_1 + 0xd4),0,0x7c);
}


