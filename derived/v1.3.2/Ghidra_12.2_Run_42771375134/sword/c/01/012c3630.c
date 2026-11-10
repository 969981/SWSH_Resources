/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 012c3630; name: FUN_012c3630
 */


bool FUN_012c3630(int param_1,ulong param_2,ulong param_3)

{
  if (*(int *)(&DAT_0216ae44 + (param_2 & 0xff) * 4) == param_1) {
    return true;
  }
  return *(int *)(&DAT_0216ae44 + (param_3 & 0xff) * 4) == param_1;
}


