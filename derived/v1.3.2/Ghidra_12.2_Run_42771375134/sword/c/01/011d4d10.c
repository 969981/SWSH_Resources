/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 011d4d10; name: FUN_011d4d10
 */


void FUN_011d4d10(long *param_1,long param_2)

{
  undefined *puVar1;
  
  param_1[4] = 0;
  param_1[5] = 0;
  puVar1 = PTR_DAT_02725988;
  param_1[2] = param_2;
  param_1[3] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  *param_1 = (long)(puVar1 + 0x10);
  param_1[1] = (long)(puVar1 + 0x40);
                    /* WARNING: Subroutine does not return */
  memset(param_1 + 8,0,0x168);
}


