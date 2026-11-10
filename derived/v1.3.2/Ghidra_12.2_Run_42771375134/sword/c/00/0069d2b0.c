/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0069d2b0; name: FUN_0069d2b0
 */


void FUN_0069d2b0(long param_1)

{
  if (*(undefined8 **)(param_1 + 0x1d8) == *(undefined8 **)(param_1 + 0x1d0)) {
                    /* WARNING: Subroutine does not return */
    std::__vector_base_common<true>::__throw_out_of_range();
  }
  FUN_006b5180(**(undefined8 **)(param_1 + 0x1d0));
  return;
}


