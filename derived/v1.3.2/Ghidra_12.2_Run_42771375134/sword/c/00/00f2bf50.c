/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00f2bf50; name: FUN_00f2bf50
 */


undefined1  [16] FUN_00f2bf50(long param_1,int param_2)

{
  long *plVar1;
  long *plVar2;
  ulong uVar3;
  undefined8 *puVar4;
  long lVar5;
  long lVar6;
  long *plVar7;
  long *plVar8;
  undefined8 uVar9;
  undefined8 uVar11;
  undefined1 auVar10 [16];
  undefined1 auStack_18 [8];
  
  lVar5 = *(long *)(param_1 + (long)param_2 * 8 + 0x68);
  uVar9 = 0;
  uVar11 = 0;
  if ((lVar5 == 0) || (lVar5 = *(long *)(lVar5 + 0x560), lVar5 == 0)) goto LAB_00f2c034;
  lVar5 = FUN_007959b0(0,lVar5,auStack_18);
  uVar9 = 0;
  uVar11 = 0;
  if (lVar5 == 0) goto LAB_00f2c034;
  lVar6 = *(long *)(*(long *)(lVar5 + 0x218) + 0x290);
  plVar1 = *(long **)(lVar6 + 0xd8);
  plVar2 = *(long **)(lVar6 + 0xe0);
  if (plVar1 == plVar2) {
    plVar7 = plVar2;
LAB_00f2bff8:
    lVar6 = *(long *)(lVar5 + 800);
    plVar8 = plVar1;
    if (*(long *)(lVar5 + 0x328) == lVar6) {
LAB_00f2c058:
                    /* WARNING: Subroutine does not return */
      std::__vector_base_common<true>::__throw_out_of_range();
    }
  }
  else {
    plVar7 = plVar1;
    if (*plVar1 == 0x28418c4c56d4c403) goto LAB_00f2bff8;
    do {
      plVar7 = plVar7 + 4;
      if (plVar2 == plVar7) {
        lVar6 = *(long *)(lVar5 + 800);
        plVar7 = plVar2;
        plVar8 = plVar2;
        if (*(long *)(lVar5 + 0x328) != lVar6) goto LAB_00f2c008;
        goto LAB_00f2c058;
      }
    } while (*plVar7 != 0x28418c4c56d4c403);
    lVar6 = *(long *)(lVar5 + 800);
    plVar8 = plVar7;
    if (*(long *)(lVar5 + 0x328) == lVar6) goto LAB_00f2c058;
  }
LAB_00f2c008:
  uVar3 = ((long)plVar8 - (long)plVar1) * 0x8000000 >> 0x20;
  if (plVar7 == plVar2) {
    uVar3 = 0xffffffffffffffff;
  }
  if ((ulong)(*(long *)(lVar6 + 0x88) - *(long *)(lVar6 + 0x80) >> 4) <= uVar3) {
                    /* WARNING: Subroutine does not return */
    std::__vector_base_common<true>::__throw_out_of_range();
  }
  puVar4 = (undefined8 *)(*(long *)(lVar6 + 0x80) + uVar3 * 0x10);
  uVar11 = puVar4[1];
  uVar9 = *puVar4;
LAB_00f2c034:
  auVar10._8_8_ = uVar11;
  auVar10._0_8_ = uVar9;
  return auVar10;
}


