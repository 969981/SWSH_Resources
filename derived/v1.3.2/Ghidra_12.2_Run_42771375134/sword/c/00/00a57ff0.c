/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00a57ff0; name: FUN_00a57ff0
 */


void FUN_00a57ff0(long param_1)

{
  switch(*(undefined4 *)(param_1 + 0x20)) {
  case 0:
    FUN_00a5a6a0(*(undefined8 *)(param_1 + 0x28));
    return;
  case 1:
  case 2:
  case 3:
    FUN_00a5a6a0(*(undefined8 *)(param_1 + 0x30));
    return;
  default:
                    /* WARNING: Subroutine does not return */
    nn::diag::detail::AbortImpl("","","",0);
  }
}


