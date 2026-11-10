/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0069d390; name: FUN_0069d390
 */


void FUN_0069d390(long param_1,long param_2)

{
  if ((ulong)(*(long *)(param_1 + 0x1d8) - *(long *)(param_1 + 0x1d0) >> 3) <=
      (ulong)*(uint *)(param_2 + 4)) {
                    /* WARNING: Subroutine does not return */
    std::__vector_base_common<true>::__throw_out_of_range();
  }
  FUN_006b51e0(*(undefined8 *)(*(long *)(param_1 + 0x1d0) + (ulong)*(uint *)(param_2 + 4) * 8));
  return;
}


