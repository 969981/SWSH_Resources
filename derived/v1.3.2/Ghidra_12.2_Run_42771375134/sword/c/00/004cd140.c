/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 004cd140; name: FUN_004cd140
 */


void FUN_004cd140(long param_1,uint param_2,long param_3)

{
  if ((param_2 & 1) == 0) {
    *(undefined4 *)(param_3 + 4) = 0;
    *(undefined4 *)(param_3 + 8) = 0;
    return;
  }
  *(undefined4 *)(param_3 + 4) = *(undefined4 *)(param_1 + 0x78);
  *(undefined4 *)(param_3 + 8) = *(undefined4 *)(param_1 + 0x7c);
  return;
}


