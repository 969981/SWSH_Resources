/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00a0b400; name: FUN_00a0b400
 */


void FUN_00a0b400(long param_1,void *param_2)

{
  FUN_00a0b470((void *)(param_1 + 0x20));
  *(undefined2 *)(param_1 + 0x1b0) = 0;
  memcpy((void *)(param_1 + 0x20),param_2,400);
  *(undefined1 *)(param_1 + 0x1b1) = 1;
  return;
}


