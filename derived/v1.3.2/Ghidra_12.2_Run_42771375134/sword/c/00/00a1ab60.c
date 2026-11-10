/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00a1ab60; name: FUN_00a1ab60
 */


void FUN_00a1ab60(long param_1)

{
  if (*(char *)(param_1 + 0x1f0) == '\0') {
    *(undefined1 *)(param_1 + 0x1f0) = 1;
    if (*(code **)(param_1 + 0xf0) != (code *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00a1ab80. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(param_1 + 0xf0))(param_1 + 0x110);
      return;
    }
  }
  return;
}


