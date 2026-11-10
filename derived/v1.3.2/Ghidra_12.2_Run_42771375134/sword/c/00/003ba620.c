/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 003ba620; name: FUN_003ba620
 */


void FUN_003ba620(long param_1,long param_2)

{
  *(undefined8 *)(param_2 + 8) = *(undefined8 *)(param_1 + 0x38);
  *(long *)(param_1 + 0x38) = param_2;
  *(int *)(param_1 + 0x40) = *(int *)(param_1 + 0x40) + 1;
  return;
}


