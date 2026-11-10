/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00479f60; name: FUN_00479f60
 */


void FUN_00479f60(long *param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar1 = PTR_DAT_027131e8 + 0x288;
  puVar2 = PTR_DAT_027131e8 + 800;
  *param_1 = (long)(PTR_DAT_027131e8 + 0x10);
  param_1[3] = (long)puVar1;
  param_1[6] = (long)puVar2;
  FUN_00465f90();
  return;
}


