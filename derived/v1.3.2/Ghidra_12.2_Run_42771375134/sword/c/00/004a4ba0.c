/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 004a4ba0; name: FUN_004a4ba0
 */


void FUN_004a4ba0(long param_1,ulong param_2)

{
  undefined4 uVar1;
  uint uVar2;
  ulong *puVar3;
  ulong uVar4;
  ulong uVar5;
  long lVar6;
  ulong uVar7;
  long *plVar8;
  long lVar9;
  undefined8 local_28;
  
  puVar3 = *(ulong **)(param_1 + 8);
  if (puVar3 != (ulong *)0x0) {
    *puVar3 = *puVar3 & (1L << (param_2 & 0x3f) ^ 0xffffffffffffffffU);
    for (plVar8 = DAT_02739028; plVar8 != (long *)0x0; plVar8 = (long *)plVar8[1]) {
      while( true ) {
        lVar9 = plVar8[8];
        local_28 = (**(code **)(*plVar8 + 0x28))(plVar8);
        uVar2 = (**(code **)(*plVar8 + 0x30))(plVar8);
        if ((lVar9 != 0) && (FUN_004865e0(lVar9,plVar8,&local_28,uVar2 & 1), plVar8[8] == 0)) break;
        plVar8 = (long *)plVar8[1];
        if (plVar8 == (long *)0x0) goto LAB_004a4c40;
      }
      plVar8[8] = lVar9;
    }
LAB_004a4c40:
    plVar8 = *(long **)(param_1 + 8);
    uVar2 = *(uint *)(plVar8 + 3);
    if (*plVar8 == 0 && uVar2 == 0) {
      uVar1 = *(undefined4 *)PTR_DAT_02712a90;
      if (plVar8[2] != 0) {
        *(undefined4 *)(plVar8 + 3) = 0;
        FUN_00404870(uVar1);
        plVar8[2] = 0;
        *(undefined4 *)((long)plVar8 + 0x1c) = 0;
      }
      FUN_00404870(uVar1,plVar8);
      *(undefined8 *)(param_1 + 8) = 0;
      return;
    }
    plVar8[1] = -1;
    if (uVar2 != 0) {
      lVar9 = plVar8[2];
      uVar7 = (ulong)uVar2 * 0x40 - 0x40;
      uVar4 = uVar7 >> 6;
      uVar2 = (int)uVar4 + 1;
      uVar5 = (ulong)uVar2 & 3;
      if (uVar7 < 0xc0) {
        uVar4 = 0xffffffffffffffff;
      }
      else {
        lVar6 = (uVar5 - 1) - uVar4;
        uVar4 = 0xffffffffffffffff;
        do {
          uVar4 = *(ulong *)(lVar9 + 0x30) & uVar4;
          plVar8[1] = uVar4;
          uVar4 = *(ulong *)(lVar9 + 0x70) & uVar4;
          plVar8[1] = uVar4;
          uVar4 = *(ulong *)(lVar9 + 0xb0) & uVar4;
          plVar8[1] = uVar4;
          puVar3 = (ulong *)(lVar9 + 0xf0);
          lVar9 = lVar9 + 0x100;
          uVar4 = *puVar3 & uVar4;
          lVar6 = lVar6 + 4;
          plVar8[1] = uVar4;
        } while (lVar6 != 0);
      }
      if ((uVar2 & 3) != 0) {
        lVar6 = -uVar5;
        puVar3 = (ulong *)(lVar9 + 0x30);
        do {
          uVar4 = *puVar3 & uVar4;
          lVar6 = lVar6 + 1;
          plVar8[1] = uVar4;
          puVar3 = puVar3 + 8;
        } while (lVar6 != 0);
      }
    }
  }
  return;
}


