/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0040b0c0; name: FUN_0040b0c0
 */


void FUN_0040b0c0(long param_1)

{
  if (*(long *)(param_1 + 0x10) == 0) {
    FUN_0040c1f0(*(undefined8 *)(param_1 + 0x60));
    FUN_00408b50(param_1);
    return;
  }
  FUN_00408b50(param_1);
  return;
}


