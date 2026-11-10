/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0105d680; name: FUN_0105d680
 */


void FUN_0105d680(long param_1,undefined8 *param_2)

{
  int *piVar1;
  bool bVar2;
  ulong uVar3;
  long lVar4;
  ulong uVar5;
  int *piVar6;
  int *piVar7;
  long lVar8;
  int iVar9;
  ulong uVar10;
  
  piVar7 = (int *)*param_2;
  piVar1 = (int *)param_2[1];
  bVar2 = piVar7 != piVar1;
  if ((code *)param_2[6] == (code *)0x0) {
    while (bVar2) {
      while( true ) {
        lVar4 = *(long *)(*(long *)(param_1 + 0x10) + 800);
        if ((ulong)((*(long *)(*(long *)(param_1 + 0x10) + 0x328) - lVar4 >> 3) *
                   -0x70a3d70a3d70a3d7) <= (ulong)(long)*piVar7) {
                    /* WARNING: Subroutine does not return */
          std::__vector_base_common<true>::__throw_out_of_range();
        }
        lVar4 = lVar4 + (long)*piVar7 * 200;
        uVar3 = (ulong)piVar7[1];
        if (*(ulong *)(lVar4 + 0x28) <= uVar3) goto LAB_0105d870;
        uVar10 = uVar3 >> 6;
        uVar3 = 1L << (uVar3 & 0x3f);
        lVar4 = *(long *)(lVar4 + 0x20);
        if (*(char *)(param_2 + 0x16) == '\0') break;
        piVar7 = piVar7 + 2;
        *(ulong *)(lVar4 + uVar10 * 8) = *(ulong *)(lVar4 + uVar10 * 8) | uVar3;
        if (piVar7 == piVar1) {
          return;
        }
      }
      piVar7 = piVar7 + 2;
      bVar2 = piVar7 != piVar1;
      *(ulong *)(lVar4 + uVar10 * 8) = *(ulong *)(lVar4 + uVar10 * 8) & (uVar3 ^ 0xffffffffffffffff)
      ;
    }
  }
  else if (bVar2) {
    iVar9 = piVar7[1];
    lVar8 = *(long *)(param_1 + 0x10);
    uVar10 = (ulong)*piVar7;
    uVar3 = (*(code *)param_2[6])(param_2 + 10,piVar7);
    lVar4 = *(long *)(lVar8 + 800);
    if (uVar10 < (ulong)((*(long *)(lVar8 + 0x328) - lVar4 >> 3) * -0x70a3d70a3d70a3d7)) {
      do {
        piVar6 = piVar7 + 2;
        lVar4 = lVar4 + uVar10 * 200;
        uVar10 = (ulong)iVar9;
        if (*(ulong *)(lVar4 + 0x28) <= uVar10) {
                    /* WARNING: Subroutine does not return */
          std::__vector_base_common<true>::__throw_out_of_range();
        }
        lVar4 = *(long *)(lVar4 + 0x20);
        uVar5 = uVar10 >> 6;
        uVar10 = 1L << (uVar10 & 0x3f);
        if ((uVar3 & 1) == 0) {
          *(ulong *)(lVar4 + uVar5 * 8) =
               *(ulong *)(lVar4 + uVar5 * 8) & (uVar10 ^ 0xffffffffffffffff);
        }
        else {
          *(ulong *)(lVar4 + uVar5 * 8) = *(ulong *)(lVar4 + uVar5 * 8) | uVar10;
        }
        if (piVar1 == piVar6) {
          return;
        }
        iVar9 = piVar7[3];
        lVar8 = *(long *)(param_1 + 0x10);
        uVar10 = (ulong)*piVar6;
        uVar3 = (*(code *)param_2[6])(param_2 + 10,piVar6);
        lVar4 = *(long *)(lVar8 + 800);
        piVar7 = piVar6;
      } while (uVar10 < (ulong)((*(long *)(lVar8 + 0x328) - lVar4 >> 3) * -0x70a3d70a3d70a3d7));
    }
LAB_0105d870:
                    /* WARNING: Subroutine does not return */
    std::__vector_base_common<true>::__throw_out_of_range();
  }
  return;
}


