/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 004fb490; name: FUN_004fb490
 */


void FUN_004fb490(long *param_1)

{
  undefined *puVar1;
  
  puVar1 = PTR_DAT_02713800 + 0x10;
  param_1[0xe] = (long)(PTR_DAT_02713800 + 0xe0);
  *param_1 = (long)puVar1;
  if (*(char *)((long)param_1 + 0x6a) != '\0') {
    FUN_004ffd60(param_1[10]);
  }
  FUN_004fb220(param_1);
  return;
}


