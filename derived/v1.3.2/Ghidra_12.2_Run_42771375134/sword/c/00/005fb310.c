/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 005fb310; name: FUN_005fb310
 */


void FUN_005fb310(long param_1,undefined8 param_2)

{
  if (*(char *)(param_1 + 0x2c9) == '\0') {
    FUN_00652760(*(undefined8 *)(param_1 + 0x750));
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x005fb328. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_1 + 0x768))(param_2,*(undefined8 *)(param_1 + 0x788));
  return;
}


