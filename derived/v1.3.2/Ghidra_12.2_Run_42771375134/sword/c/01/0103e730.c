/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0103e730; name: FUN_0103e730
 */


undefined8 FUN_0103e730(long param_1)

{
  long lVar1;
  
  lVar1 = **(long **)(param_1 + 0x60);
  if ((ulong)(((*(long **)(param_1 + 0x60))[1] - lVar1 >> 3) * 0x6db6db6db6db6db7) <=
      (ulong)*(uint *)(param_1 + 0xa4)) {
                    /* WARNING: Subroutine does not return */
    std::__vector_base_common<true>::__throw_out_of_range();
  }
  return *(undefined8 *)(lVar1 + (ulong)*(uint *)(param_1 + 0xa4) * 0x38 + 8);
}


