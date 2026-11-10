/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00a1ab90; name: FUN_00a1ab90
 */


void FUN_00a1ab90(long param_1)

{
  if (*(char *)(param_1 + 0x1f0) != '\0') {
    *(undefined1 *)(param_1 + 0x1f0) = 0;
    if (*(code **)(param_1 + 0x170) != (code *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00a1aba8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(param_1 + 0x170))(param_1 + 400);
      return;
    }
  }
  return;
}


