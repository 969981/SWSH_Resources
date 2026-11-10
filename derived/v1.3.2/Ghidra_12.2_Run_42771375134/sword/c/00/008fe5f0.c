/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 008fe5f0; name: FUN_008fe5f0
 */


void FUN_008fe5f0(long param_1)

{
  *(undefined1 *)(param_1 + 0xc0) = 0;
  *(byte *)(param_1 + 0xc2) = *(byte *)(param_1 + 0xc2) & 0xfe;
  *(undefined **)(param_1 + 0xd0) = PTR_LAB_02717ce8;
  *(undefined8 *)(param_1 + 0xd8) = 0;
  *(undefined1 *)(param_1 + 0x2a8) = 0;
  return;
}


