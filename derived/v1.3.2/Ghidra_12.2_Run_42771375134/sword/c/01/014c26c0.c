/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 014c26c0; name: FUN_014c26c0
 */


void FUN_014c26c0(long param_1,int param_2,int param_3)

{
  if (param_3 - 2U < 8) {
    FUN_014c47c0(*(undefined8 *)
                  (param_1 + *(long *)(&DAT_02171e40 + (long)(int)(param_3 - 2U) * 8) * 0x20 +
                   (long)param_2 * 8 + 0x1c0));
    return;
  }
  FUN_014c47c0(*(undefined8 *)(param_1 + (long)param_2 * 8 + 0x1c0));
  return;
}


