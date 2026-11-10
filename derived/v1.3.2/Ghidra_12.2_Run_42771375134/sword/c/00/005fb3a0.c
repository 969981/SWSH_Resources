/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 005fb3a0; name: FUN_005fb3a0
 */


void FUN_005fb3a0(long param_1,undefined4 param_2)

{
  if (*(char *)(param_1 + 0x2c9) == '\0') {
    FUN_00652840(*(undefined8 *)(param_1 + 0x750));
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x005fb3b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_1 + 0x778))(param_2,*(undefined8 *)(param_1 + 0x798));
  return;
}


