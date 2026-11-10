/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00727660; name: FUN_00727660
 */


void FUN_00727660(long param_1,uint param_2)

{
  long *plVar1;
  long *plVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  int iVar6;
  long *plVar7;
  long *plVar8;
  ulong uVar9;
  long local_80 [3];
  long local_68;
  
  lVar3 = *(long *)(param_1 + 0x328) - *(long *)(param_1 + 800);
  if (lVar3 != 0) {
    uVar9 = 0;
    do {
      FUN_006cf0a0(local_80,&DAT_0260b8b0);
      lVar4 = *(long *)(*(long *)(param_1 + 0x218) + 0x290) + uVar9 * 0x4c0;
      plVar1 = *(long **)(lVar4 + 0xa8);
      plVar2 = *(long **)(lVar4 + 0xb0);
      plVar8 = plVar1;
      if (plVar1 == plVar2) {
        plVar7 = plVar2;
      }
      else {
        plVar7 = plVar1;
        if (*plVar1 != local_80[0]) {
          do {
            plVar7 = plVar7 + 4;
            if (plVar2 == plVar7) {
              plVar7 = plVar2;
              plVar8 = plVar2;
              goto LAB_00727740;
            }
          } while (*plVar7 != local_80[0]);
          plVar8 = plVar7;
        }
      }
LAB_00727740:
      iVar6 = (int)((ulong)((long)plVar8 - (long)plVar1) >> 5);
      if (plVar7 == plVar2) {
        iVar6 = -1;
      }
      if (local_68 != 0) {
        (**(code **)(*(long *)(local_68 + 0x48) + 0x18))();
        local_68 = 0;
      }
      if (-1 < iVar6) {
        if ((ulong)((*(long *)(param_1 + 0x328) - *(long *)(param_1 + 800) >> 3) *
                   -0x70a3d70a3d70a3d7) <= uVar9) {
LAB_007277e0:
                    /* WARNING: Subroutine does not return */
          std::__vector_base_common<true>::__throw_out_of_range();
        }
        lVar4 = *(long *)(param_1 + 800) + uVar9 * 200;
        lVar5 = *(long *)(lVar4 + 0x50);
        if ((ulong)(*(long *)(lVar4 + 0x58) - lVar5 >> 2) <= (ulong)(long)iVar6) goto LAB_007277e0;
        *(float *)(lVar5 + (long)iVar6 * 4) = (float)param_2;
      }
      uVar9 = uVar9 + 1;
    } while (uVar9 < (ulong)((lVar3 >> 3) * -0x70a3d70a3d70a3d7));
  }
  return;
}


