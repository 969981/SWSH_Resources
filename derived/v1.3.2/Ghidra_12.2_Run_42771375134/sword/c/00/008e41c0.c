/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 008e41c0; name: FUN_008e41c0
 */


void FUN_008e41c0(long param_1)

{
  if (*(char *)(param_1 + 0x45c) != '\x1f') {
    *(undefined1 *)(param_1 + 0x45c) = 0x1f;
    *(undefined4 *)(param_1 + 0x458) = 0;
  }
  return;
}


