/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00496c50; name: FUN_00496c50
 */


undefined8 FUN_00496c50(long param_1,long param_2,long param_3,uint param_4)

{
  uint uVar1;
  ulong uVar2;
  uint uVar3;
  long *plVar4;
  long lVar5;
  long *plVar6;
  undefined4 *puVar7;
  ulong uVar8;
  
  plVar4 = *(long **)(param_1 + 8);
  uVar1 = *(uint *)(param_1 + 0x10);
  plVar6 = plVar4;
  if (uVar1 == 0) {
LAB_00496cb4:
    if (plVar6 != plVar4 + (ulong)uVar1 * 3) {
      plVar4 = plVar6 + 1;
      uVar1 = *(uint *)(plVar6 + 2);
      goto joined_r0x00496cd4;
    }
  }
  else {
    lVar5 = (ulong)uVar1 * 0x18;
    do {
      if (*plVar6 == param_2) goto LAB_00496cb4;
      lVar5 = lVar5 + -0x18;
      plVar6 = plVar6 + 3;
    } while (lVar5 != 0);
  }
  uVar3 = *(uint *)(param_1 + 0x14);
  if (uVar3 <= uVar1) {
    uVar2 = FUN_004972d0((long *)(param_1 + 8),1);
    if ((uVar2 & 1) == 0) {
      return 1;
    }
    uVar3 = *(uint *)(param_1 + 0x14);
  }
  if (uVar3 <= uVar1) {
    return 1;
  }
  uVar1 = *(uint *)(param_1 + 0x10);
  *(uint *)(param_1 + 0x10) = uVar1 + 1;
  plVar6 = (long *)(*(long *)(param_1 + 8) + (ulong)uVar1 * 0x18);
  if (plVar6 == (long *)0x0) {
    return 1;
  }
  lVar5 = *(long *)(param_1 + 8) + (ulong)uVar1 * 0x18;
  plVar4 = (long *)(lVar5 + 8);
  *plVar4 = 0;
  *(undefined8 *)(lVar5 + 0x10) = 0;
  *plVar6 = param_2;
  uVar1 = *(uint *)(lVar5 + 0x10);
joined_r0x00496cd4:
  if (uVar1 < param_4) {
    uVar2 = FUN_00497020(plVar4,param_4);
  }
  else {
    uVar2 = FUN_00497020(plVar4);
    if (param_4 == 0) {
      return 1;
    }
  }
  if ((uVar2 & 1) != 0) {
    uVar2 = (ulong)param_4;
    lVar5 = 0;
    puVar7 = (undefined4 *)(param_3 + 4);
    uVar8 = uVar2;
    do {
      *(undefined4 *)(*plVar4 + lVar5 + 4) = *puVar7;
      *(undefined4 *)(*plVar4 + lVar5) = puVar7[-1];
      puVar7 = puVar7 + 2;
      lVar5 = lVar5 + 0x10;
      uVar8 = uVar8 - 1;
    } while (uVar8 != 0);
    if (param_4 < *(uint *)(plVar4 + 1)) {
      puVar7 = (undefined4 *)(param_3 + (ulong)(param_4 - 1) * 8);
      lVar5 = uVar2 << 4;
      do {
        uVar2 = uVar2 + 1;
        *(undefined4 *)(*plVar4 + lVar5 + 4) = puVar7[1];
        *(undefined4 *)(*plVar4 + lVar5) = *puVar7;
        lVar5 = lVar5 + 0x10;
      } while (uVar2 < *(uint *)(plVar4 + 1));
    }
  }
  return 1;
}


