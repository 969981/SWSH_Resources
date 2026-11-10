/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00a318f0; name: FUN_00a318f0
 */


void FUN_00a318f0(long *param_1)

{
  undefined *puVar1;
  
  FUN_00ff9400();
  *(undefined8 *)((long)param_1 + 0x5cc) = 0;
  puVar1 = PTR_DAT_027190b0;
  *param_1 = (long)(PTR_DAT_027190b0 + 0x10);
  param_1[9] = (long)(puVar1 + 0xb8);
  param_1[10] = (long)(puVar1 + 0xf8);
  *(undefined8 *)((long)param_1 + 0x5de) = 0;
  param_1[0xbb] = 0;
                    /* WARNING: Subroutine does not return */
  memset(param_1 + 0xbd,0,0x180);
}


