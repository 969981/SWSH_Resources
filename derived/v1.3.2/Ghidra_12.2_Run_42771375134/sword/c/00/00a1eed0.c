/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00a1eed0; name: FUN_00a1eed0
 */


void FUN_00a1eed0(long param_1,ulong param_2)

{
  if ((param_2 & 1) == 0) {
    if (*(char *)(param_1 + 0x6e8) != '\0') {
      *(undefined1 *)(param_1 + 0x6e8) = 0;
                    /* WARNING: Could not recover jumptable at 0x00a1ef00. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(param_1 + 0x770))(param_1 + 0x790);
      return;
    }
  }
  else if (*(char *)(param_1 + 0x5d8) != '\0') {
    *(undefined1 *)(param_1 + 0x5d8) = 0;
                    /* WARNING: Could not recover jumptable at 0x00a1eee8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(param_1 + 0x660))(param_1 + 0x680);
    return;
  }
  return;
}


