/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00ca44f0; name: FUN_00ca44f0
 */


void FUN_00ca44f0(long param_1,undefined4 *param_2,long *param_3)

{
  ulong uVar1;
  undefined8 *puVar2;
  long lVar3;
  long lVar4;
  long *plVar5;
  long lVar6;
  long *plVar7;
  long *plVar8;
  int iVar9;
  ulong uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  uint uVar13;
  
  lVar3 = *(long *)(param_1 + 0x328);
  lVar4 = *(long *)(param_1 + 800);
  if (lVar3 != lVar4) {
    uVar10 = 0;
    do {
      iVar9 = (int)uVar10;
      if (iVar9 != -1) {
        lVar6 = *(long *)(*(long *)(param_1 + 0x218) + 0x290) + (long)iVar9 * 0x4c0;
        plVar5 = *(long **)(lVar6 + 0xd8);
        plVar7 = *(long **)(lVar6 + 0xe0);
        if (plVar7 != plVar5) {
          plVar8 = plVar5;
          if (*plVar5 != *param_3) {
            do {
              plVar8 = plVar8 + 4;
              if (plVar7 == plVar8) goto LAB_00ca4644;
            } while (*plVar8 != *param_3);
          }
          if ((plVar8 != plVar7) && (((long)plVar8 - (long)plVar5 & 0x1fffffffe0U) != 0x1fffffffe0))
          {
            uVar11 = FUN_00795bb0(*param_2);
            uVar12 = FUN_00795bb0(param_2[1]);
            uVar13 = FUN_00795bb0(param_2[2]);
            if ((ulong)((*(long *)(param_1 + 0x328) - *(long *)(param_1 + 800) >> 3) *
                       -0x70a3d70a3d70a3d7) <= (ulong)(long)iVar9) {
LAB_00ca4680:
                    /* WARNING: Subroutine does not return */
              std::__vector_base_common<true>::__throw_out_of_range();
            }
            lVar3 = *(long *)(param_1 + 800) + (long)iVar9 * 200;
            lVar4 = *(long *)(lVar3 + 0x80);
            uVar1 = ((long)plVar8 - (long)plVar5) * 0x8000000 >> 0x20;
            if ((ulong)(*(long *)(lVar3 + 0x88) - lVar4 >> 4) <= uVar1) goto LAB_00ca4680;
            puVar2 = (undefined8 *)(lVar4 + uVar1 * 0x10);
            puVar2[1] = (ulong)uVar13;
            *puVar2 = CONCAT44(uVar12,uVar11);
            lVar3 = *(long *)(param_1 + 0x328);
            lVar4 = *(long *)(param_1 + 800);
          }
        }
      }
LAB_00ca4644:
      uVar10 = uVar10 + 1;
    } while (uVar10 < (ulong)((lVar3 - lVar4 >> 3) * -0x70a3d70a3d70a3d7));
  }
  return;
}


