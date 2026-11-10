/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00db5db0; name: FUN_00db5db0
 */


void FUN_00db5db0(long *param_1,byte param_2)

{
  *(byte *)(param_1 + 0x43) = param_2 & 1;
  if ((param_2 & 1) == 0) {
    if (*(char *)((long)param_1 + 0x21b) != '\0') {
      *(undefined1 *)((long)param_1 + 0x21b) = 0;
                    /* WARNING: Could not recover jumptable at 0x00db5df0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*param_1 + 0xd8))(param_1,0);
      return;
    }
  }
  else if (*(char *)((long)param_1 + 0x21b) == '\0') {
    *(undefined1 *)((long)param_1 + 0x21b) = 1;
                    /* WARNING: Could not recover jumptable at 0x00db5dd8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*param_1 + 0xd8))(param_1,1);
    return;
  }
  return;
}


