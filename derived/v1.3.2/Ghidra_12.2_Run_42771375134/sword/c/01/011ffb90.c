/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 011ffb90; name: FUN_011ffb90
 */


void FUN_011ffb90(long *param_1,long param_2,byte param_3)

{
  if ((param_3 < 8) && (*(char *)(param_2 + (ulong)param_3 * 0x38 + 0x140) != '\0')) {
    *param_1 = param_2 + (ulong)param_3 * 0x38 + 0x148;
    return;
  }
  if (*(long *)(param_2 + 0x130) == 0) {
    *param_1 = 0;
    return;
  }
  FUN_0120ccd0();
  return;
}


