/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 006cb610; name: FUN_006cb610
 */


void FUN_006cb610(long param_1)

{
  FUN_006cb3f0();
  *(undefined8 *)(param_1 + 0x1c0) = *(undefined8 *)(param_1 + 0x1b8);
  *(undefined1 *)(param_1 + 0x1b0) = 1;
  *(undefined4 *)(param_1 + 0x1b4) = 0xffffffff;
  *(undefined1 *)(param_1 + 0x218) = 0;
  *(undefined8 *)(param_1 + 0x1f0) = *(undefined8 *)(param_1 + 0x1e8);
  *(undefined4 *)(param_1 + 0x21c) = 0;
  return;
}


