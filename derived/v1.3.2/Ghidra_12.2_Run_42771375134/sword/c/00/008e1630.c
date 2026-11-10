/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 008e1630; name: FUN_008e1630
 */


void FUN_008e1630(long param_1)

{
  if (*(char *)(param_1 + 0x272) != -1) {
    *(char *)(param_1 + 0x272) = *(char *)(param_1 + 0x272) + '\x01';
  }
  return;
}


