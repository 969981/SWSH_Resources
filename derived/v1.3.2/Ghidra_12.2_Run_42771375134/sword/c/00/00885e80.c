/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00885e80; name: FUN_00885e80
 */


void FUN_00885e80(long param_1,long param_2)

{
  memcpy((void *)(param_2 + 0xe),(void *)(param_1 + 0xe),0x104);
  *(undefined4 *)(param_2 + 8) = *(undefined4 *)(param_1 + 8);
  *(undefined2 *)(param_2 + 0xc) = *(undefined2 *)(param_1 + 0xc);
  *(undefined1 *)(param_2 + 0x112) = *(undefined1 *)(param_1 + 0x112);
  return;
}


