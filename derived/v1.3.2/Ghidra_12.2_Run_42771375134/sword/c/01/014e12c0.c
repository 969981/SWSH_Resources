/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 014e12c0; name: FUN_014e12c0
 */


void FUN_014e12c0(long param_1,undefined4 param_2)

{
  *(undefined4 *)(param_1 + 100) = param_2;
  *(undefined8 *)(param_1 + 0x68) = *(undefined8 *)(param_1 + 0x60);
  *(undefined1 *)(param_1 + 0x60) = 1;
  return;
}


