/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 01539200; name: FUN_01539200
 */


void FUN_01539200(long param_1)

{
  if (-1 < *(char *)(param_1 + 0x280)) {
    *(char *)(param_1 + 0x280) = *(char *)(param_1 + 0x280) + '\x01';
  }
  return;
}


