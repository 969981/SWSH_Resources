/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00fde730; name: FUN_00fde730
 */


void FUN_00fde730(long param_1,undefined2 *param_2)

{
  undefined2 local_14 [2];
  
  if (*(long *)(param_1 + 0x18) == 0) {
                    /* WARNING: Subroutine does not return */
    nn::diag::detail::AbortImpl("","","",0);
  }
  local_14[0] = *param_2;
  FUN_00fdedb0(*(long *)(param_1 + 0x18),local_14);
  return;
}


