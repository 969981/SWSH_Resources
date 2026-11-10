/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 009af8f0; name: FUN_009af8f0
 */


void FUN_009af8f0(long param_1,undefined4 *param_2,char param_3)

{
  *(undefined1 *)(param_1 + 6) = 0x80;
  *(byte *)(param_1 + 7) = param_3 << 7 | 0x20;
  *param_2 = 2;
  return;
}


