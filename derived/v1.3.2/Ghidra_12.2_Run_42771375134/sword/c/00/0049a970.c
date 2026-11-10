/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0049a970; name: FUN_0049a970
 */


void FUN_0049a970(undefined8 *param_1)

{
  *(undefined4 *)(param_1 + 2) = 0;
  *(undefined4 *)(param_1 + 5) = 0;
  *param_1 = 0;
  param_1[1] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
                    /* WARNING: Subroutine does not return */
  memset(param_1 + 6,0,0x90);
}


