/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 005fb280; name: FUN_005fb280
 */


void FUN_005fb280(long param_1,undefined8 param_2,undefined8 param_3)

{
  if (*(char *)(param_1 + 0x2c9) == '\0') {
    FUN_00651f80(*(undefined8 *)(param_1 + 0x748),param_2,param_3,0);
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x005fb29c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_1 + 0x760))(param_2,param_3,*(undefined8 *)(param_1 + 0x780));
  return;
}


