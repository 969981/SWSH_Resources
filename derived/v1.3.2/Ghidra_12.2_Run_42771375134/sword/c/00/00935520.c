/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00935520; name: FUN_00935520
 */


undefined8 FUN_00935520(long param_1)

{
  if (*(int *)(param_1 + 0x1c) == 0) {
    return 0;
  }
  *(ulong *)(param_1 + 0x10) = *(ulong *)(param_1 + 0x10) & 0xfffffffffffffff8;
  *(undefined8 *)(param_1 + 0x18) = 0;
  return 1;
}


