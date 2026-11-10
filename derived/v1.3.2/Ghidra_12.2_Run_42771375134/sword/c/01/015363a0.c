/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 015363a0; name: FUN_015363a0
 */


void FUN_015363a0(long param_1,undefined8 param_2)

{
  if (*(char *)(param_1 + 0x9ae0) == '\0') {
    *(undefined8 *)(param_1 + 0x9ad8) = param_2;
    *(char *)(param_1 + 0x9ae0) = '\x01';
    return;
  }
  return;
}


