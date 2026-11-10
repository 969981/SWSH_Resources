/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 004a4970; name: FUN_004a4970
 */


undefined8 FUN_004a4970(long param_1,ulong param_2)

{
  uint uVar1;
  ulong *puVar2;
  long lVar3;
  ulong uVar4;
  ulong uVar5;
  long lVar6;
  ulong uVar7;
  long *plVar8;
  long lVar9;
  undefined8 local_28;
  
  puVar2 = *(ulong **)(param_1 + 8);
  if (puVar2 == (ulong *)0x0) {
    puVar2 = (ulong *)FUN_00404690(*(undefined4 *)PTR_DAT_02712a90,0x28);
    if (puVar2 == (ulong *)0x0) {
      *(undefined8 *)(param_1 + 8) = 0;
      return 2;
    }
    *(undefined1 *)(puVar2 + 4) = 0;
    puVar2[2] = 0;
    puVar2[3] = 0;
    *puVar2 = 0;
    puVar2[1] = 0xffffffffffffffff;
    *(ulong **)(param_1 + 8) = puVar2;
  }
  uVar4 = 1L << (param_2 & 0x3f);
  if ((*puVar2 & uVar4) == 0) {
    *puVar2 = *puVar2 | uVar4;
    for (plVar8 = DAT_02739028; plVar8 != (long *)0x0; plVar8 = (long *)plVar8[1]) {
      while( true ) {
        lVar9 = plVar8[8];
        local_28 = (**(code **)(*plVar8 + 0x28))(plVar8);
        uVar1 = (**(code **)(*plVar8 + 0x30))(plVar8);
        if ((lVar9 != 0) && (FUN_004865e0(lVar9,plVar8,&local_28,uVar1 & 1), plVar8[8] == 0)) break;
        plVar8 = (long *)plVar8[1];
        if (plVar8 == (long *)0x0) goto LAB_004a4a48;
      }
      plVar8[8] = lVar9;
    }
LAB_004a4a48:
    lVar9 = *(long *)(param_1 + 8);
    *(undefined8 *)(lVar9 + 8) = 0xffffffffffffffff;
    if (*(uint *)(lVar9 + 0x18) != 0) {
      lVar3 = *(long *)(lVar9 + 0x10);
      uVar7 = (ulong)*(uint *)(lVar9 + 0x18) * 0x40 - 0x40;
      uVar4 = uVar7 >> 6;
      uVar1 = (int)uVar4 + 1;
      uVar5 = (ulong)uVar1 & 3;
      if (uVar7 < 0xc0) {
        uVar4 = 0xffffffffffffffff;
      }
      else {
        lVar6 = (uVar5 - 1) - uVar4;
        uVar4 = 0xffffffffffffffff;
        do {
          uVar4 = *(ulong *)(lVar3 + 0x30) & uVar4;
          *(ulong *)(lVar9 + 8) = uVar4;
          uVar4 = *(ulong *)(lVar3 + 0x70) & uVar4;
          *(ulong *)(lVar9 + 8) = uVar4;
          uVar4 = *(ulong *)(lVar3 + 0xb0) & uVar4;
          *(ulong *)(lVar9 + 8) = uVar4;
          puVar2 = (ulong *)(lVar3 + 0xf0);
          lVar3 = lVar3 + 0x100;
          uVar4 = *puVar2 & uVar4;
          lVar6 = lVar6 + 4;
          *(ulong *)(lVar9 + 8) = uVar4;
        } while (lVar6 != 0);
      }
      if ((uVar1 & 3) != 0) {
        lVar6 = -uVar5;
        puVar2 = (ulong *)(lVar3 + 0x30);
        do {
          uVar4 = *puVar2 & uVar4;
          lVar6 = lVar6 + 1;
          *(ulong *)(lVar9 + 8) = uVar4;
          puVar2 = puVar2 + 8;
        } while (lVar6 != 0);
      }
    }
  }
  return 1;
}


