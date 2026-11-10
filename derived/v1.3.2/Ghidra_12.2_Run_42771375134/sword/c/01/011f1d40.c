/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 011f1d40; name: FUN_011f1d40
 */


void FUN_011f1d40(long *param_1)

{
  undefined *puVar1;
  
  puVar1 = PTR_DAT_02718830 + 0x10;
  *param_1 = (long)(PTR_DAT_02718828 + 0x10);
  param_1[1] = (long)puVar1;
                    /* WARNING: Subroutine does not return */
  FUN_006e1890(param_1 + 2);
}


