/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00ff5c80; name: FUN_00ff5c80
 */


void FUN_00ff5c80(long param_1,long param_2,undefined8 param_3)

{
  if ((param_2 == 0) || (*(long *)(param_1 + 0x90) != 0)) {
                    /* WARNING: Subroutine does not return */
    nn::diag::detail::AbortImpl("","","",0);
  }
  *(long *)(param_1 + 0x90) = param_2;
  FUN_00ff5170(param_2,*(undefined8 *)(param_1 + 0x88));
                    /* WARNING: Could not emulate address calculation at 0x00ff5cb8 */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(long **)(param_1 + 0x90) + 0x10))(*(long **)(param_1 + 0x90),param_3);
  return;
}


