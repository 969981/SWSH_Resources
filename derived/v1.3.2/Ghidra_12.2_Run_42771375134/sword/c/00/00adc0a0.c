/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00adc0a0; name: FUN_00adc0a0
 */


void FUN_00adc0a0(undefined4 param_1,long param_2,int param_3,int param_4)

{
  long lVar1;
  long lVar2;
  
  lVar1 = *(long *)(param_2 + 0x5d0);
  if (lVar1 == 0) {
    return;
  }
  if ((ulong)(long)param_3 <
      (ulong)((*(long *)(lVar1 + 0x328) - *(long *)(lVar1 + 800) >> 3) * -0x70a3d70a3d70a3d7)) {
    lVar1 = *(long *)(lVar1 + 800) + (long)param_3 * 200;
    lVar2 = *(long *)(lVar1 + 0x50);
    if ((ulong)(long)param_4 < (ulong)(*(long *)(lVar1 + 0x58) - lVar2 >> 2)) {
      *(undefined4 *)(lVar2 + (long)param_4 * 4) = param_1;
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  std::__vector_base_common<true>::__throw_out_of_range();
}


