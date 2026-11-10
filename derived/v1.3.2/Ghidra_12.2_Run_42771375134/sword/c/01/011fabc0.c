/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 011fabc0; name: FUN_011fabc0
 */


void FUN_011fabc0(long param_1,uint param_2)

{
  FUN_011fa6d0(param_1 + 0x58);
  *(undefined4 *)(param_1 + 0x50) = 0;
  if ((param_2 & 1) != 0) {
    *(undefined1 *)(param_1 + 0x168) = 0;
  }
  *(undefined2 *)(param_1 + 0x169) = 0;
  *(undefined1 *)(param_1 + 0x16b) = 0;
  *(undefined1 *)(param_1 + 0x16d) = 0;
  return;
}


