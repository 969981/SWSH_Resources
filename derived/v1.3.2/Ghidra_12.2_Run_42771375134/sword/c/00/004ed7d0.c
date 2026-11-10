/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 004ed7d0; name: FUN_004ed7d0
 */


void FUN_004ed7d0(long param_1)

{
  FUN_004ed820();
  *(undefined **)(param_1 + 0x48) = PTR_DAT_02713768 + 0x10;
  if (*(long *)(param_1 + 0x50) != 0) {
    FUN_004f0aa0();
    *(undefined8 *)(param_1 + 0x50) = 0;
  }
  return;
}


