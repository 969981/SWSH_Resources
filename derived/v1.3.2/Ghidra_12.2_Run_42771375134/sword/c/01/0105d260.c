/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0105d260; name: FUN_0105d260
 */


void FUN_0105d260(long param_1,undefined8 *param_2)

{
  int *piVar1;
  int *piVar2;
  bool bVar3;
  long lVar4;
  int *piVar5;
  int iVar6;
  ulong uVar7;
  long lVar8;
  undefined4 uVar9;
  
  piVar1 = (int *)*param_2;
  piVar2 = (int *)param_2[1];
  bVar3 = piVar1 != piVar2;
  if ((code *)param_2[6] == (code *)0x0) {
    while (bVar3) {
      lVar4 = *(long *)(*(long *)(param_1 + 0x10) + 800);
      if ((ulong)((*(long *)(*(long *)(param_1 + 0x10) + 0x328) - lVar4 >> 3) * -0x70a3d70a3d70a3d7)
          <= (ulong)(long)*piVar1) {
                    /* WARNING: Subroutine does not return */
        std::__vector_base_common<true>::__throw_out_of_range();
      }
      lVar4 = lVar4 + (long)*piVar1 * 200;
      piVar5 = piVar1 + 1;
      lVar8 = *(long *)(lVar4 + 0x50);
      if ((ulong)(*(long *)(lVar4 + 0x58) - lVar8 >> 2) <= (ulong)(long)*piVar5) goto LAB_0105d3f0;
      piVar1 = piVar1 + 2;
      bVar3 = piVar1 != piVar2;
      *(undefined4 *)(lVar8 + (long)*piVar5 * 4) = *(undefined4 *)(param_2 + 0x16);
    }
  }
  else if (bVar3) {
    iVar6 = piVar1[1];
    lVar8 = *(long *)(param_1 + 0x10);
    uVar7 = (ulong)*piVar1;
    uVar9 = (*(code *)param_2[6])(param_2 + 10,piVar1);
    lVar4 = *(long *)(lVar8 + 800);
    if (uVar7 < (ulong)((*(long *)(lVar8 + 0x328) - lVar4 >> 3) * -0x70a3d70a3d70a3d7)) {
      while( true ) {
        piVar5 = piVar1 + 2;
        lVar4 = lVar4 + uVar7 * 200;
        lVar8 = *(long *)(lVar4 + 0x50);
        if ((ulong)(*(long *)(lVar4 + 0x58) - lVar8 >> 2) <= (ulong)(long)iVar6) break;
        *(undefined4 *)(lVar8 + (long)iVar6 * 4) = uVar9;
        if (piVar2 == piVar5) {
          return;
        }
        iVar6 = piVar1[3];
        lVar8 = *(long *)(param_1 + 0x10);
        uVar7 = (ulong)*piVar5;
        uVar9 = (*(code *)param_2[6])(param_2 + 10,piVar5);
        lVar4 = *(long *)(lVar8 + 800);
        piVar1 = piVar5;
        if ((ulong)((*(long *)(lVar8 + 0x328) - lVar4 >> 3) * -0x70a3d70a3d70a3d7) <= uVar7) {
                    /* WARNING: Subroutine does not return */
          std::__vector_base_common<true>::__throw_out_of_range();
        }
      }
    }
LAB_0105d3f0:
                    /* WARNING: Subroutine does not return */
    std::__vector_base_common<true>::__throw_out_of_range();
  }
  return;
}


