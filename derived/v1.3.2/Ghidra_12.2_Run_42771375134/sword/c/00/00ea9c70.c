/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00ea9c70; name: FUN_00ea9c70
 */


void FUN_00ea9c70(long *param_1)

{
  FUN_00e444b0();
  if (((param_1[0xc4] == -0x340d631b7bddd9bb) || (*(char *)((long)param_1 + 0x7bc) == '\0')) ||
     ((*(char *)((long)param_1 + 0x219) == '\0' && ((char)param_1[0x43] != '\0')))) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00ea9cd8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x80))(param_1);
  return;
}


