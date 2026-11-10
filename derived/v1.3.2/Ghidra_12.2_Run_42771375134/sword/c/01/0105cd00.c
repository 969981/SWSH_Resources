/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0105cd00; name: FUN_0105cd00
 */


void FUN_0105cd00(long param_1,long *param_2)

{
  long *plVar1;
  long *plVar2;
  ulong uVar3;
  undefined8 *puVar4;
  void *__src;
  ulong uVar5;
  int iVar6;
  long lVar7;
  long *plVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  undefined8 uVar12;
  uint local_340 [4];
  undefined8 local_330 [94];
  
  if (*(long *)(param_1 + 0xc0) != 0) {
    lVar11 = *(long *)(*(long *)(param_1 + 0x10) + 0x328) -
             *(long *)(*(long *)(param_1 + 0x10) + 800);
    __src = (void *)FUN_0105c700();
    memcpy(local_340,__src,0x300);
    if (lVar11 != 0) {
      uVar5 = 0;
      do {
        lVar7 = *(long *)(*(long *)(*(long *)(param_1 + 0x10) + 0x218) + 0x290) + uVar5 * 0x4c0;
        plVar1 = *(long **)(lVar7 + 0xd8);
        plVar2 = *(long **)(lVar7 + 0xe0);
        if (plVar2 != plVar1) {
          plVar8 = plVar1;
          if (*plVar1 != *param_2) {
            do {
              plVar8 = plVar8 + 4;
              if (plVar2 == plVar8) goto LAB_0105ce50;
            } while (*plVar8 != *param_2);
          }
          if (plVar8 != plVar2) {
            iVar6 = (int)((ulong)((long)plVar8 - (long)plVar1) >> 5);
            if (iVar6 != -1) {
              lVar7 = 0;
              uVar3 = ((long)plVar8 - (long)plVar1) * 0x8000000 >> 0x20;
              do {
                if ((uVar5 == *(uint *)((long)local_340 + lVar7)) &&
                   (*(int *)((long)local_340 + lVar7 + 4) == iVar6)) {
                  lVar10 = *(long *)(*(long *)(param_1 + 0x10) + 800);
                  if ((ulong)((*(long *)(*(long *)(param_1 + 0x10) + 0x328) - lVar10 >> 3) *
                             -0x70a3d70a3d70a3d7) <= uVar5) {
LAB_0105ce78:
                    /* WARNING: Subroutine does not return */
                    std::__vector_base_common<true>::__throw_out_of_range();
                  }
                  lVar10 = lVar10 + uVar5 * 200;
                  uVar12 = *(undefined8 *)((long)local_330 + lVar7);
                  lVar9 = *(long *)(lVar10 + 0x80);
                  if ((ulong)(*(long *)(lVar10 + 0x88) - lVar9 >> 4) <= uVar3) goto LAB_0105ce78;
                  puVar4 = (undefined8 *)(lVar9 + uVar3 * 0x10);
                  puVar4[1] = *(undefined8 *)((long)local_330 + lVar7 + 8);
                  *puVar4 = uVar12;
                }
                lVar7 = lVar7 + 0x20;
              } while (lVar7 != 0x300);
            }
          }
        }
LAB_0105ce50:
        uVar5 = uVar5 + 1;
      } while (uVar5 < (ulong)((lVar11 >> 3) * -0x70a3d70a3d70a3d7));
    }
  }
  return;
}


