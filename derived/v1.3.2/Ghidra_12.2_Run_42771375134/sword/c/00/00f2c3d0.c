/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00f2c3d0; name: FUN_00f2c3d0
 */


void FUN_00f2c3d0(long param_1,int param_2,undefined8 *param_3)

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
  undefined1 auStack_18 [8];
  
  lVar5 = *(long *)(param_1 + (long)param_2 * 8 + 0x68);
  if (lVar5 == 0) {
    return;
  }
  lVar5 = *(long *)(lVar5 + 0x560);
  if (lVar5 == 0) {
    return;
  }
  lVar5 = FUN_007959b0(lVar5,auStack_18);
  if (lVar5 == 0) {
    return;
  }
  lVar6 = *(long *)(*(long *)(lVar5 + 0x218) + 0x290);
  plVar1 = *(long **)(lVar6 + 0xd8);
  plVar2 = *(long **)(lVar6 + 0xe0);
  if (plVar1 == plVar2) {
    plVar7 = plVar2;
  }
  else {
    plVar7 = plVar1;
    if (*plVar1 != 0x28418c4c56d4c403) {
      do {
        plVar7 = plVar7 + 4;
        if (plVar2 == plVar7) {
          lVar6 = *(long *)(lVar5 + 800);
          plVar7 = plVar2;
          plVar8 = plVar2;
          if (*(long *)(lVar5 + 0x328) == lVar6) goto LAB_00f2c4d8;
          goto LAB_00f2c484;
        }
      } while (*plVar7 != 0x28418c4c56d4c403);
      lVar6 = *(long *)(lVar5 + 800);
      plVar8 = plVar7;
      if (*(long *)(lVar5 + 0x328) == lVar6) goto LAB_00f2c4d8;
      goto LAB_00f2c484;
    }
  }
  lVar6 = *(long *)(lVar5 + 800);
  plVar8 = plVar1;
  if (*(long *)(lVar5 + 0x328) == lVar6) {
LAB_00f2c4d8:
                    /* WARNING: Subroutine does not return */
    std::__vector_base_common<true>::__throw_out_of_range();
  }
LAB_00f2c484:
  uVar9 = *param_3;
  uVar3 = ((long)plVar8 - (long)plVar1) * 0x8000000 >> 0x20;
  if (plVar7 == plVar2) {
    uVar3 = 0xffffffffffffffff;
  }
  if ((ulong)(*(long *)(lVar6 + 0x88) - *(long *)(lVar6 + 0x80) >> 4) <= uVar3) {
                    /* WARNING: Subroutine does not return */
    std::__vector_base_common<true>::__throw_out_of_range();
  }
  puVar4 = (undefined8 *)(*(long *)(lVar6 + 0x80) + uVar3 * 0x10);
  puVar4[1] = param_3[1];
  *puVar4 = uVar9;
  return;
}


