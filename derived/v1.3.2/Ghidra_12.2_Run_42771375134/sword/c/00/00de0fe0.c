/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00de0fe0; name: FUN_00de0fe0
 */


ulong FUN_00de0fe0(float param_1,long param_2)

{
  int iVar1;
  ulong uVar2;
  ulong uVar3;
  float *pfVar4;
  
  if (param_1 <= 0.0) {
    return 0;
  }
  uVar3 = *(long *)(param_2 + 0x10) - *(long *)(param_2 + 8);
  iVar1 = (int)(uVar3 >> 5);
  if (*(float *)(param_2 + 0x80) <= param_1) {
    return (ulong)(iVar1 - 1);
  }
  if (iVar1 < 2) {
    return 0;
  }
  uVar2 = 0;
  pfVar4 = (float *)(*(long *)(param_2 + 8) + 0x10);
  do {
    if ((ulong)((long)uVar3 >> 5) <= uVar2) {
                    /* WARNING: Subroutine does not return */
      std::__vector_base_common<true>::__throw_out_of_range();
    }
    if (param_1 <= *pfVar4) break;
    param_1 = param_1 - *pfVar4;
    uVar2 = uVar2 + 1;
    pfVar4 = pfVar4 + 8;
  } while ((long)uVar2 < (long)(uVar3 * 0x8000000 + -0x100000000) >> 0x20);
  return uVar2 & 0xffffffff;
}


