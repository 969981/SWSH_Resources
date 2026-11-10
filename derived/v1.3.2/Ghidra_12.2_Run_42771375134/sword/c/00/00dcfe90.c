/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00dcfe90; name: FUN_00dcfe90
 */


void FUN_00dcfe90(long param_1,undefined8 param_2,undefined8 *param_3,undefined8 *param_4)

{
  undefined8 *puVar1;
  int iVar2;
  ulong uVar3;
  long lVar4;
  long *plVar5;
  long lVar6;
  long *plVar7;
  long *plVar8;
  undefined8 uVar9;
  
  iVar2 = FUN_0072c700(param_1 + 0x210);
  if (iVar2 < 0) {
    return;
  }
  lVar4 = *(long *)(*(long *)(param_1 + 0x218) + 0x290) + (long)iVar2 * 0x4c0;
  plVar7 = *(long **)(lVar4 + 0xd8);
  plVar5 = *(long **)(lVar4 + 0xe0);
  uVar3 = (ulong)iVar2;
  if (plVar5 == plVar7) {
LAB_00dcffa8:
    if (plVar5 == plVar7) {
      return;
    }
  }
  else {
    plVar8 = plVar7;
    if (*plVar7 != 0x15083c3ab707041d) {
      do {
        plVar8 = plVar8 + 4;
        if (plVar5 == plVar8) goto LAB_00dcffa8;
      } while (*plVar8 != 0x15083c3ab707041d);
    }
    iVar2 = (int)((ulong)((long)plVar8 - (long)plVar7) >> 5);
    if (plVar8 == plVar5) {
      iVar2 = -1;
    }
    if (iVar2 < 0) goto LAB_00dcffa8;
    if ((ulong)((*(long *)(param_1 + 0x328) - *(long *)(param_1 + 800) >> 3) * -0x70a3d70a3d70a3d7)
        <= uVar3) goto LAB_00dd0078;
    lVar4 = *(long *)(param_1 + 800) + uVar3 * 200;
    uVar9 = *param_3;
    lVar6 = *(long *)(lVar4 + 0x80);
    if ((ulong)(*(long *)(lVar4 + 0x88) - lVar6 >> 4) <= (ulong)(long)iVar2) goto LAB_00dd0078;
    puVar1 = (undefined8 *)(lVar6 + (long)iVar2 * 0x10);
    puVar1[1] = param_3[1];
    *puVar1 = uVar9;
    lVar4 = *(long *)(*(long *)(param_1 + 0x218) + 0x290) + uVar3 * 0x4c0;
    plVar7 = *(long **)(lVar4 + 0xd8);
    plVar5 = *(long **)(lVar4 + 0xe0);
    if (plVar5 == plVar7) {
      return;
    }
  }
  plVar8 = plVar7;
  if (*plVar7 != 0x158cf4f2b0bcd8aa) {
    do {
      plVar8 = plVar8 + 4;
      if (plVar5 == plVar8) {
        return;
      }
    } while (*plVar8 != 0x158cf4f2b0bcd8aa);
  }
  iVar2 = (int)((ulong)((long)plVar8 - (long)plVar7) >> 5);
  if (plVar8 == plVar5) {
    iVar2 = -1;
  }
  if (iVar2 < 0) {
    return;
  }
  if (uVar3 < (ulong)((*(long *)(param_1 + 0x328) - *(long *)(param_1 + 800) >> 3) *
                     -0x70a3d70a3d70a3d7)) {
    lVar4 = *(long *)(param_1 + 800) + uVar3 * 200;
    uVar9 = *param_4;
    lVar6 = *(long *)(lVar4 + 0x80);
    if ((ulong)(long)iVar2 < (ulong)(*(long *)(lVar4 + 0x88) - lVar6 >> 4)) {
      puVar1 = (undefined8 *)(lVar6 + (long)iVar2 * 0x10);
      puVar1[1] = param_4[1];
      *puVar1 = uVar9;
      return;
    }
  }
LAB_00dd0078:
                    /* WARNING: Subroutine does not return */
  std::__vector_base_common<true>::__throw_out_of_range();
}


