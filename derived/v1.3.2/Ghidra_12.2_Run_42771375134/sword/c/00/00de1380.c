/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00de1380; name: FUN_00de1380
 */


undefined4 FUN_00de1380(long param_1,int param_2)

{
  if ((ulong)(*(long *)(param_1 + 0x10) - *(long *)(param_1 + 8) >> 5) <= (ulong)(long)param_2) {
                    /* WARNING: Subroutine does not return */
    std::__vector_base_common<true>::__throw_out_of_range();
  }
  return *(undefined4 *)(*(long *)(param_1 + 8) + (long)param_2 * 0x20 + 0x10);
}


