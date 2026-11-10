/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00adc000; name: FUN_00adc000
 */


void FUN_00adc000(long param_1,int param_2,int param_3,uint param_4)

{
  long lVar1;
  ulong uVar2;
  ulong uVar3;
  
  lVar1 = *(long *)(param_1 + 0x5d0);
  if (lVar1 == 0) {
    return;
  }
  if ((ulong)(long)param_2 <
      (ulong)((*(long *)(lVar1 + 0x328) - *(long *)(lVar1 + 800) >> 3) * -0x70a3d70a3d70a3d7)) {
    lVar1 = *(long *)(lVar1 + 800) + (long)param_2 * 200;
    uVar3 = (ulong)param_3;
    if (uVar3 < *(ulong *)(lVar1 + 0x28)) {
      lVar1 = *(long *)(lVar1 + 0x20);
      uVar2 = uVar3 >> 6;
      uVar3 = 1L << (uVar3 & 0x3f);
      if ((param_4 & 1) == 0) {
        uVar3 = *(ulong *)(lVar1 + uVar2 * 8) & (uVar3 ^ 0xffffffffffffffff);
      }
      else {
        uVar3 = *(ulong *)(lVar1 + uVar2 * 8) | uVar3;
      }
      *(ulong *)(lVar1 + uVar2 * 8) = uVar3;
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  std::__vector_base_common<true>::__throw_out_of_range();
}


