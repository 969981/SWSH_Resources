/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0105cb80; name: FUN_0105cb80
 */


void FUN_0105cb80(long param_1,long *param_2)

{
  long *plVar1;
  long *plVar2;
  ulong uVar3;
  void *__src;
  ulong uVar4;
  int iVar5;
  long lVar6;
  long *plVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  uint local_160 [72];
  
  if (*(long *)(param_1 + 0xa0) != 0) {
    lVar10 = *(long *)(*(long *)(param_1 + 0x10) + 0x328) -
             *(long *)(*(long *)(param_1 + 0x10) + 800);
    __src = (void *)FUN_0105c100();
    memcpy(local_160,__src,0x120);
    if (lVar10 != 0) {
      uVar4 = 0;
      do {
        lVar6 = *(long *)(*(long *)(*(long *)(param_1 + 0x10) + 0x218) + 0x290) + uVar4 * 0x4c0;
        plVar1 = *(long **)(lVar6 + 0xa8);
        plVar2 = *(long **)(lVar6 + 0xb0);
        if (plVar2 != plVar1) {
          plVar7 = plVar1;
          if (*plVar1 != *param_2) {
            do {
              plVar7 = plVar7 + 4;
              if (plVar2 == plVar7) goto LAB_0105ccd0;
            } while (*plVar7 != *param_2);
          }
          if (plVar7 != plVar2) {
            iVar5 = (int)((ulong)((long)plVar7 - (long)plVar1) >> 5);
            if (iVar5 != -1) {
              lVar6 = 0;
              uVar3 = ((long)plVar7 - (long)plVar1) * 0x8000000 >> 0x20;
              do {
                if ((uVar4 == *(uint *)((long)local_160 + lVar6)) &&
                   (*(int *)((long)local_160 + lVar6 + 4) == iVar5)) {
                  lVar9 = *(long *)(*(long *)(param_1 + 0x10) + 800);
                  if ((ulong)((*(long *)(*(long *)(param_1 + 0x10) + 0x328) - lVar9 >> 3) *
                             -0x70a3d70a3d70a3d7) <= uVar4) {
LAB_0105ccf8:
                    /* WARNING: Subroutine does not return */
                    std::__vector_base_common<true>::__throw_out_of_range();
                  }
                  lVar9 = lVar9 + uVar4 * 200;
                  lVar8 = *(long *)(lVar9 + 0x50);
                  if ((ulong)(*(long *)(lVar9 + 0x58) - lVar8 >> 2) <= uVar3) goto LAB_0105ccf8;
                  *(undefined4 *)(lVar8 + uVar3 * 4) = *(undefined4 *)((long)local_160 + lVar6 + 8);
                }
                lVar6 = lVar6 + 0xc;
              } while (lVar6 != 0x120);
            }
          }
        }
LAB_0105ccd0:
        uVar4 = uVar4 + 1;
      } while (uVar4 < (ulong)((lVar10 >> 3) * -0x70a3d70a3d70a3d7));
    }
  }
  return;
}


