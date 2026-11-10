/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0146a7f0; name: FUN_0146a7f0
 */


void FUN_0146a7f0(long param_1)

{
  code *UNRECOVERED_JUMPTABLE;
  
  UNRECOVERED_JUMPTABLE = *(code **)(param_1 + 0x7b8);
  if (UNRECOVERED_JUMPTABLE != (code *)0x0) {
    *(undefined8 *)(param_1 + 0x7c8) = 0;
    *(undefined8 *)(param_1 + 0x7c0) = 0;
    *(undefined8 *)(param_1 + 0x7b8) = 0;
    *(undefined8 *)(param_1 + 0x7b0) = 0;
    (*UNRECOVERED_JUMPTABLE)(param_1 + 2000);
  }
  UNRECOVERED_JUMPTABLE = *(code **)(param_1 + 0x738);
  if (UNRECOVERED_JUMPTABLE == (code *)0x0) {
    return;
  }
  *(undefined8 *)(param_1 + 0x748) = 0;
  *(undefined8 *)(param_1 + 0x740) = 0;
  *(undefined8 *)(param_1 + 0x738) = 0;
  *(undefined8 *)(param_1 + 0x730) = 0;
                    /* WARNING: Could not recover jumptable at 0x0146a844. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)(param_1 + 0x750);
  return;
}


