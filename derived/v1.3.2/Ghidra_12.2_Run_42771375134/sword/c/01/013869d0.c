/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 013869d0; name: FUN_013869d0
 */


void FUN_013869d0(long *param_1)

{
  undefined *puVar1;
  
  FUN_01383ad0();
  param_1[0x46] = 0;
  puVar1 = PTR_DAT_02728be8;
  param_1[0x4a] = 0;
  param_1[0x49] = 0;
  param_1[0x48] = 0;
  param_1[0x4b] = 0;
  param_1[9] = (long)(puVar1 + 0xe8);
  param_1[10] = (long)(puVar1 + 0x158);
  *param_1 = (long)(puVar1 + 0x10);
  *(undefined4 *)(param_1 + 0x58) = 0;
                    /* WARNING: Subroutine does not return */
  memset(param_1 + 0x11,0,0x1a4);
}


