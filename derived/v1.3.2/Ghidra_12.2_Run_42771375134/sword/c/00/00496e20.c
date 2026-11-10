/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00496e20; name: FUN_00496e20
 */


void FUN_00496e20(long param_1,long param_2,long param_3,long param_4,uint param_5)

{
  undefined4 *puVar1;
  long lVar2;
  uint uVar3;
  ulong uVar4;
  uint uVar5;
  long *plVar6;
  long lVar7;
  long *plVar8;
  ulong uVar9;
  long lVar10;
  
  *(byte *)(param_1 + 0x58) = *(byte *)(param_1 + 0x58) | 1;
  plVar6 = *(long **)(param_1 + 0x28);
  uVar3 = *(uint *)(param_1 + 0x30);
  plVar8 = plVar6;
  if (uVar3 == 0) {
LAB_00496ea8:
    if (plVar8 != plVar6 + (ulong)uVar3 * 3) {
      plVar6 = plVar8 + 1;
      uVar3 = *(uint *)(plVar8 + 2);
      goto joined_r0x00496ec8;
    }
  }
  else {
    lVar7 = (ulong)uVar3 * 0x18;
    do {
      if (*plVar8 == param_2) goto LAB_00496ea8;
      lVar7 = lVar7 + -0x18;
      plVar8 = plVar8 + 3;
    } while (lVar7 != 0);
  }
  uVar5 = *(uint *)(param_1 + 0x34);
  if (uVar5 <= uVar3) {
    uVar4 = FUN_004972d0((long *)(param_1 + 0x28),1);
    if ((uVar4 & 1) == 0) {
      return;
    }
    uVar5 = *(uint *)(param_1 + 0x34);
  }
  if (uVar5 <= uVar3) {
    return;
  }
  uVar3 = *(uint *)(param_1 + 0x30);
  *(uint *)(param_1 + 0x30) = uVar3 + 1;
  plVar8 = (long *)(*(long *)(param_1 + 0x28) + (ulong)uVar3 * 0x18);
  if (plVar8 == (long *)0x0) {
    return;
  }
  lVar7 = *(long *)(param_1 + 0x28) + (ulong)uVar3 * 0x18;
  plVar6 = (long *)(lVar7 + 8);
  *plVar6 = 0;
  *(undefined8 *)(lVar7 + 0x10) = 0;
  *plVar8 = param_2;
  uVar3 = *(uint *)(lVar7 + 0x10);
joined_r0x00496ec8:
  if (uVar3 < param_5) {
    uVar4 = FUN_00497020(plVar6,param_5);
  }
  else {
    uVar4 = FUN_00497020(plVar6);
    if (param_5 == 0) {
      return;
    }
  }
  if ((uVar4 & 1) != 0) {
    uVar4 = (ulong)param_5;
    lVar7 = 0;
    uVar9 = uVar4;
    do {
      lVar10 = lVar7 * 4;
      *(undefined4 *)(*plVar6 + lVar10 + 8) = *(undefined4 *)(param_3 + lVar7);
      puVar1 = (undefined4 *)(param_4 + lVar7);
      lVar7 = lVar7 + 4;
      uVar9 = uVar9 - 1;
      *(undefined4 *)(*plVar6 + lVar10 + 0xc) = *puVar1;
    } while (uVar9 != 0);
    if (param_5 < *(uint *)(plVar6 + 1)) {
      lVar7 = uVar4 << 4;
      lVar10 = (ulong)(param_5 - 1) * 4;
      do {
        uVar4 = uVar4 + 1;
        *(undefined4 *)(*plVar6 + lVar7 + 8) = *(undefined4 *)(param_3 + lVar10);
        lVar2 = *plVar6 + lVar7;
        lVar7 = lVar7 + 0x10;
        *(undefined4 *)(lVar2 + 0xc) = *(undefined4 *)(param_4 + lVar10);
      } while (uVar4 < *(uint *)(plVar6 + 1));
    }
  }
  return;
}


