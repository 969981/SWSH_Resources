/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 008d9980; name: FUN_008d9980
 */


void FUN_008d9980(undefined8 *param_1,long param_2)

{
  *param_1 = *(undefined8 *)(param_2 + 8);
  param_1[1] = *(undefined8 *)(param_2 + 0x10);
                    /* WARNING: Subroutine does not return */
  memset(param_1 + 2,0,0x180);
}


