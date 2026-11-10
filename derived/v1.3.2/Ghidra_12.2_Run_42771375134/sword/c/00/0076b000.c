/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0076b000; name: FUN_0076b000
 */


void FUN_0076b000(long param_1)

{
  *(undefined1 *)(param_1 + 0x4dc) = 0;
  nn::os::StartThread((ThreadType *)(param_1 + 0x88));
  return;
}


