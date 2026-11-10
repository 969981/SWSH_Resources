/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00551380; name: FUN_00551380
 */


void FUN_00551380(long param_1)

{
  undefined *puVar1;
  
  puVar1 = *(undefined **)(param_1 + 8);
  if (puVar1 != PTR_DAT_02713c18 && puVar1 != (undefined *)0x0) {
    FUN_005b9b10(*(undefined8 *)PTR_PTR_02713988,puVar1 + -8);
    *(undefined8 *)(param_1 + 8) = 0;
  }
  return;
}


