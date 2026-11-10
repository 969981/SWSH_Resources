/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00adc120; name: FUN_00adc120
 */


void FUN_00adc120(long param_1,int param_2,int param_3,undefined8 *param_4)

{
  undefined8 *puVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  
  lVar2 = *(long *)(param_1 + 0x5d0);
  if (lVar2 == 0) {
    return;
  }
  if ((ulong)(long)param_2 <
      (ulong)((*(long *)(lVar2 + 0x328) - *(long *)(lVar2 + 800) >> 3) * -0x70a3d70a3d70a3d7)) {
    lVar2 = *(long *)(lVar2 + 800) + (long)param_2 * 200;
    uVar4 = *param_4;
    lVar3 = *(long *)(lVar2 + 0x80);
    if ((ulong)(long)param_3 < (ulong)(*(long *)(lVar2 + 0x88) - lVar3 >> 4)) {
      puVar1 = (undefined8 *)(lVar3 + (long)param_3 * 0x10);
      puVar1[1] = param_4[1];
      *puVar1 = uVar4;
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  std::__vector_base_common<true>::__throw_out_of_range();
}


