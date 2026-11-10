/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 004a7370; name: FUN_004a7370
 */


void FUN_004a7370(long *param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  
  FUN_0047e130();
  puVar1 = PTR_DAT_02713430 + 0x270;
  puVar2 = PTR_DAT_02713430 + 0x308;
  *param_1 = (long)(PTR_DAT_02713430 + 0x10);
  param_1[3] = (long)puVar1;
  param_1[6] = (long)puVar2;
  return;
}


