/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00726260; name: FUN_00726260
 */


void FUN_00726260(long param_1)

{
  int *piVar1;
  int *piVar2;
  long lVar3;
  int *piVar4;
  int *piVar5;
  long lVar6;
  
  piVar4 = *(int **)(param_1 + 0x398);
  piVar5 = *(int **)(param_1 + 0x3a0);
  while( true ) {
    if (piVar4 == piVar5) {
      return;
    }
    if ((ulong)((*(long *)(param_1 + 0x328) - *(long *)(param_1 + 800) >> 3) * -0x70a3d70a3d70a3d7)
        <= (ulong)(long)*piVar4) break;
    lVar3 = *(long *)(param_1 + 800) + (long)*piVar4 * 200;
    lVar6 = *(long *)(lVar3 + 0x50);
    if ((ulong)(*(long *)(lVar3 + 0x58) - lVar6 >> 2) <= (ulong)(long)piVar4[1]) {
LAB_00726344:
                    /* WARNING: Subroutine does not return */
      std::__vector_base_common<true>::__throw_out_of_range();
    }
    *(float *)(lVar6 + (long)piVar4[1] * 4) = (float)piVar4[4];
    if ((ulong)((*(long *)(param_1 + 0x328) - *(long *)(param_1 + 800) >> 3) * -0x70a3d70a3d70a3d7)
        <= (ulong)(long)piVar4[2]) break;
    lVar3 = *(long *)(param_1 + 800) + (long)piVar4[2] * 200;
    piVar1 = piVar4 + 4;
    piVar2 = piVar4 + 3;
    lVar6 = *(long *)(lVar3 + 0x50);
    if ((ulong)(*(long *)(lVar3 + 0x58) - lVar6 >> 2) <= (ulong)(long)*piVar2) goto LAB_00726344;
    piVar4 = piVar4 + 5;
    *(float *)(lVar6 + (long)*piVar2 * 4) = (float)*piVar1;
  }
                    /* WARNING: Subroutine does not return */
  std::__vector_base_common<true>::__throw_out_of_range();
}


