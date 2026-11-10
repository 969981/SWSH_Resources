/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0105ce80; name: FUN_0105ce80
 */


void FUN_0105ce80(long param_1,long *param_2)

{
  int *piVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  long *plVar5;
  bool bVar6;
  code *pcVar7;
  long lVar8;
  int *piVar9;
  long lVar10;
  long lVar11;
  undefined1 auVar12 [16];
  
  piVar9 = (int *)*param_2;
  piVar2 = (int *)param_2[1];
  pcVar7 = (code *)param_2[6];
  bVar6 = piVar9 != piVar2;
  if (pcVar7 == (code *)0x0) {
    while (bVar6) {
      lVar8 = *(long *)(*(long *)(param_1 + 0x10) + 800);
      if ((ulong)((*(long *)(*(long *)(param_1 + 0x10) + 0x328) - lVar8 >> 3) * -0x70a3d70a3d70a3d7)
          <= (ulong)(long)*piVar9) {
                    /* WARNING: Subroutine does not return */
        std::__vector_base_common<true>::__throw_out_of_range();
      }
      lVar8 = lVar8 + (long)*piVar9 * 200;
      lVar11 = param_2[0x16];
      piVar1 = piVar9 + 1;
      lVar10 = *(long *)(lVar8 + 0x80);
      if ((ulong)(*(long *)(lVar8 + 0x88) - lVar10 >> 4) <= (ulong)(long)*piVar1) goto LAB_0105cfc8;
      piVar9 = piVar9 + 2;
      bVar6 = piVar9 != piVar2;
      plVar5 = (long *)(lVar10 + (long)*piVar1 * 0x10);
      plVar5[1] = param_2[0x17];
      *plVar5 = lVar11;
    }
  }
  else if (bVar6) {
    while( true ) {
      iVar3 = *piVar9;
      iVar4 = piVar9[1];
      lVar10 = *(long *)(param_1 + 0x10);
      auVar12 = (*pcVar7)(param_2 + 10,piVar9);
      lVar8 = *(long *)(lVar10 + 800);
      if (((ulong)((*(long *)(lVar10 + 0x328) - lVar8 >> 3) * -0x70a3d70a3d70a3d7) <=
           (ulong)(long)iVar3) ||
         (lVar8 = lVar8 + (long)iVar3 * 200, lVar10 = *(long *)(lVar8 + 0x80),
         (ulong)(*(long *)(lVar8 + 0x88) - lVar10 >> 4) <= (ulong)(long)iVar4)) break;
      piVar9 = piVar9 + 2;
      *(undefined1 (*) [16])(lVar10 + (long)iVar4 * 0x10) = auVar12;
      if (piVar9 == piVar2) {
        return;
      }
      pcVar7 = (code *)param_2[6];
    }
LAB_0105cfc8:
                    /* WARNING: Subroutine does not return */
    std::__vector_base_common<true>::__throw_out_of_range();
  }
  return;
}


