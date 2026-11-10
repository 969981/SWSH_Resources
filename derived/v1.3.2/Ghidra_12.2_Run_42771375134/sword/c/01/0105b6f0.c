/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0105b6f0; name: FUN_0105b6f0
 */


undefined8 FUN_0105b6f0(long param_1,long *param_2,undefined8 *param_3)

{
  long *plVar1;
  long *plVar2;
  undefined8 *puVar3;
  ulong uVar4;
  ulong uVar5;
  long lVar6;
  long lVar7;
  long *plVar8;
  undefined8 uVar9;
  
  lVar6 = *(long *)(param_1 + 0x10);
  lVar7 = *(long *)(lVar6 + 0x328) - *(long *)(lVar6 + 800);
  if (lVar7 != 0) {
    uVar5 = (lVar7 >> 3) * -0x70a3d70a3d70a3d7;
    uVar4 = 0;
    do {
      lVar7 = *(long *)(*(long *)(lVar6 + 0x218) + 0x290) + uVar4 * 0x4c0;
      plVar1 = *(long **)(lVar7 + 0xd8);
      plVar2 = *(long **)(lVar7 + 0xe0);
      if (plVar2 != plVar1) {
        plVar8 = plVar1;
        if (*plVar1 != *param_2) {
          do {
            plVar8 = plVar8 + 4;
            if (plVar2 == plVar8) goto LAB_0105b794;
          } while (*plVar8 != *param_2);
        }
        if ((plVar8 != plVar2) && (((long)plVar8 - (long)plVar1 & 0x1fffffffe0U) != 0x1fffffffe0)) {
          if ((uVar4 & 0xffffffff) < uVar5) {
            lVar7 = *(long *)(lVar6 + 800) + (uVar4 & 0xffffffff) * 200;
            uVar4 = ((long)plVar8 - (long)plVar1) * 0x8000000 >> 0x20;
            lVar6 = *(long *)(lVar7 + 0x80);
            if (uVar4 < (ulong)(*(long *)(lVar7 + 0x88) - lVar6 >> 4)) {
              puVar3 = (undefined8 *)(lVar6 + uVar4 * 0x10);
              uVar9 = *puVar3;
              param_3[1] = puVar3[1];
              *param_3 = uVar9;
              return 1;
            }
          }
                    /* WARNING: Subroutine does not return */
          std::__vector_base_common<true>::__throw_out_of_range();
        }
      }
LAB_0105b794:
      uVar4 = uVar4 + 1;
    } while (uVar4 < uVar5);
  }
  return 0;
}


