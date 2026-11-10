/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 003f9440; name: FUN_003f9440
 */


void FUN_003f9440(long param_1)

{
  if (*(int *)(param_1 + 0x60) != -1) {
    FUN_00113eb0(*(undefined8 *)(*(long *)(*(long *)(param_1 + 8) + 0x48) + 0x748));
    *(undefined4 *)(param_1 + 0x60) = 0xffffffff;
  }
  return;
}


