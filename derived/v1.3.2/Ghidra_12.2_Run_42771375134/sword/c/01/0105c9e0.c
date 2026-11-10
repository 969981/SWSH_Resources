/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0105c9e0; name: FUN_0105c9e0
 */


void FUN_0105c9e0(long param_1,long *param_2)

{
  ulong uVar1;
  long *plVar2;
  long *plVar3;
  ulong uVar4;
  void *__src;
  long lVar5;
  long lVar6;
  ulong uVar7;
  ulong uVar8;
  int iVar9;
  long lVar10;
  long *plVar11;
  ulong uVar12;
  long lVar13;
  uint local_160 [2];
  char local_158 [280];
  
  if (*(long *)(param_1 + 0x80) != 0) {
    lVar13 = *(long *)(*(long *)(param_1 + 0x10) + 0x328) -
             *(long *)(*(long *)(param_1 + 0x10) + 800);
    __src = (void *)FUN_0105bb20();
    memcpy(local_160,__src,0x120);
    if (lVar13 != 0) {
      uVar8 = 0;
      do {
        lVar10 = *(long *)(*(long *)(*(long *)(param_1 + 0x10) + 0x218) + 0x290) + uVar8 * 0x4c0;
        plVar2 = *(long **)(lVar10 + 0x78);
        plVar3 = *(long **)(lVar10 + 0x80);
        if (plVar3 != plVar2) {
          plVar11 = plVar2;
          if (*plVar2 != *param_2) {
            do {
              plVar11 = plVar11 + 4;
              if (plVar3 == plVar11) goto LAB_0105cb54;
            } while (*plVar11 != *param_2);
          }
          if (plVar11 != plVar3) {
            iVar9 = (int)((ulong)((long)plVar11 - (long)plVar2) >> 5);
            if (iVar9 != -1) {
              uVar4 = ((long)plVar11 - (long)plVar2) * 0x8000000 >> 0x20;
              uVar12 = 1L << (uVar4 & 0x3f);
              lVar10 = 0;
              do {
                if ((uVar8 == *(uint *)((long)local_160 + lVar10)) &&
                   (*(int *)((long)local_160 + lVar10 + 4) == iVar9)) {
                  lVar5 = *(long *)(*(long *)(param_1 + 0x10) + 800);
                  if (((ulong)((*(long *)(*(long *)(param_1 + 0x10) + 0x328) - lVar5 >> 3) *
                              -0x70a3d70a3d70a3d7) <= uVar8) ||
                     (lVar5 = lVar5 + uVar8 * 200, *(ulong *)(lVar5 + 0x28) <= uVar4)) {
                    /* WARNING: Subroutine does not return */
                    std::__vector_base_common<true>::__throw_out_of_range();
                  }
                  lVar5 = *(long *)(lVar5 + 0x20);
                  lVar6 = (uVar4 >> 6) * 8;
                  uVar7 = *(ulong *)(lVar5 + lVar6);
                  uVar1 = uVar7 & ~uVar12;
                  if (local_158[lVar10] != '\0') {
                    uVar1 = uVar7 | uVar12;
                  }
                  *(ulong *)(lVar5 + lVar6) = uVar1;
                }
                lVar10 = lVar10 + 0xc;
              } while (lVar10 != 0x120);
            }
          }
        }
LAB_0105cb54:
        uVar8 = uVar8 + 1;
      } while (uVar8 < (ulong)((lVar13 >> 3) * -0x70a3d70a3d70a3d7));
    }
  }
  return;
}


