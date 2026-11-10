/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 01028870; name: FUN_01028870
 */


void FUN_01028870(long param_1)

{
  code *UNRECOVERED_JUMPTABLE;
  
  nn::oe::LeaveExitRequestHandlingSection();
  UNRECOVERED_JUMPTABLE = *(code **)(param_1 + 0x2d8);
  if (UNRECOVERED_JUMPTABLE == (code *)0x0) {
    return;
  }
  *(undefined8 *)(param_1 + 0x2e8) = 0;
  *(undefined8 *)(param_1 + 0x2e0) = 0;
  *(undefined8 *)(param_1 + 0x2d8) = 0;
  *(undefined8 *)(param_1 + 0x2d0) = 0;
                    /* WARNING: Could not recover jumptable at 0x010288a8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)(param_1 + 0x2f0);
  return;
}


