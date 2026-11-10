/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00de1090; name: FUN_00de1090
 */


ulong FUN_00de1090(long param_1,float *param_2)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  long lVar4;
  long lVar5;
  
  if (param_2 == (float *)0x0) {
                    /* WARNING: Subroutine does not return */
    nn::diag::detail::AbortImpl("","","",0);
  }
  lVar4 = *(long *)(param_1 + 8);
  uVar3 = *(long *)(param_1 + 0x10) - lVar4;
  if ((int)(uVar3 >> 5) < 2) {
    uVar2 = 0;
LAB_00de1120:
    return uVar2 & 0xffffffff;
  }
  if (*(long *)(param_1 + 0x10) != lVar4) {
    lVar5 = 0x10;
    uVar2 = 0;
    do {
      if (*param_2 <= *(float *)(lVar4 + lVar5)) goto LAB_00de1120;
      uVar1 = uVar2 + 1;
      *param_2 = *param_2 - *(float *)(lVar4 + lVar5);
      if ((long)(uVar3 * 0x8000000 + -0x100000000) >> 0x20 <= (long)uVar1) {
        return (ulong)((int)uVar2 + 1);
      }
      lVar4 = *(long *)(param_1 + 8);
      lVar5 = lVar5 + 0x20;
      uVar2 = uVar1;
    } while (uVar1 < (ulong)(*(long *)(param_1 + 0x10) - lVar4 >> 5));
  }
                    /* WARNING: Subroutine does not return */
  std::__vector_base_common<true>::__throw_out_of_range();
}


