/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 01063270; name: FUN_01063270
 */


void FUN_01063270(long param_1,long *param_2,undefined8 *param_3)

{
  long *plVar1;
  long *plVar2;
  ulong uVar3;
  undefined8 *puVar4;
  int iVar5;
  ulong uVar6;
  long lVar7;
  long lVar8;
  long *plVar9;
  undefined8 uVar10;
  
  iVar5 = (int)(*(long *)(param_1 + 0x328) - *(long *)(param_1 + 800) >> 3) * -0x3d70a3d7;
  if (0 < iVar5) {
    uVar6 = 0;
    do {
      lVar7 = *(long *)(*(long *)(param_1 + 0x218) + 0x290) + uVar6 * 0x4c0;
      plVar1 = *(long **)(lVar7 + 0xd8);
      plVar2 = *(long **)(lVar7 + 0xe0);
      if (plVar2 != plVar1) {
        plVar9 = plVar1;
        if (*plVar1 != *param_2) {
          do {
            plVar9 = plVar9 + 4;
            if (plVar2 == plVar9) goto LAB_01063360;
          } while (*plVar9 != *param_2);
        }
        if ((plVar9 != plVar2) && (((long)plVar9 - (long)plVar1 & 0x1fffffffe0U) != 0x1fffffffe0)) {
          if ((ulong)((*(long *)(param_1 + 0x328) - *(long *)(param_1 + 800) >> 3) *
                     -0x70a3d70a3d70a3d7) <= uVar6) {
                    /* WARNING: Subroutine does not return */
            std::__vector_base_common<true>::__throw_out_of_range();
          }
          lVar7 = *(long *)(param_1 + 800) + uVar6 * 200;
          uVar10 = *param_3;
          uVar3 = ((long)plVar9 - (long)plVar1) * 0x8000000 >> 0x20;
          lVar8 = *(long *)(lVar7 + 0x80);
          if ((ulong)(*(long *)(lVar7 + 0x88) - lVar8 >> 4) <= uVar3) {
                    /* WARNING: Subroutine does not return */
            std::__vector_base_common<true>::__throw_out_of_range();
          }
          puVar4 = (undefined8 *)(lVar8 + uVar3 * 0x10);
          puVar4[1] = param_3[1];
          *puVar4 = uVar10;
        }
      }
LAB_01063360:
      uVar6 = uVar6 + 1;
    } while ((long)uVar6 < (long)iVar5);
  }
  return;
}


