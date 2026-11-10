/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 003e33b0; name: FUN_003e33b0
 */


void FUN_003e33b0(long param_1,long *param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  bool bVar9;
  undefined4 uVar10;
  undefined8 *puVar11;
  long *plVar12;
  long *plVar13;
  undefined8 *puVar14;
  undefined8 *puVar15;
  long lVar16;
  uint uVar17;
  undefined *local_98;
  long local_90;
  undefined8 local_88;
  undefined8 local_80;
  undefined4 local_78;
  long local_70;
  char *local_68;
  
  uVar10 = (**(code **)(**(long **)(param_1 + 0x768) + 8))();
  *(undefined4 *)(param_1 + 0x830) = uVar10;
  if ((*(byte *)(param_1 + 0x110c) >> 2 & 1) != 0) {
    if (*(char *)(param_1 + 0x1ed8) != '\0') {
      FUN_003e3b00(param_1);
    }
    uVar17 = *(uint *)(param_1 + 0x1678);
    if (uVar17 != 2) {
      plVar13 = (long *)(param_1 + 0x1670);
      if (uVar17 != 0) {
        puVar11 = (undefined8 *)*plVar13;
        puVar15 = puVar11;
        do {
          puVar14 = puVar15 + 7;
          (**(code **)*puVar15)(puVar15);
          puVar15 = puVar14;
        } while (puVar14 < puVar11 + (ulong)uVar17 * 7);
      }
      uVar17 = *(uint *)(param_1 + 0x1628);
      *(undefined4 *)(param_1 + 0x1678) = 0;
      if (uVar17 != 0) {
        puVar11 = *(undefined8 **)(param_1 + 0x1620);
        puVar15 = puVar11;
        do {
          puVar14 = puVar15 + 7;
          (**(code **)*puVar15)(puVar15);
          puVar15 = puVar14;
        } while (puVar14 < puVar11 + (ulong)uVar17 * 7);
      }
      uVar17 = *(uint *)(param_1 + 0x1668);
      *(undefined4 *)(param_1 + 0x1628) = 0;
      if (uVar17 != 0) {
        puVar11 = *(undefined8 **)(param_1 + 0x1660);
        puVar15 = puVar11;
        do {
          puVar14 = puVar15 + 7;
          (**(code **)*puVar15)(puVar15);
          puVar15 = puVar14;
        } while (puVar14 < puVar11 + (ulong)uVar17 * 7);
      }
      uVar17 = *(uint *)(param_1 + 0x1658);
      *(undefined4 *)(param_1 + 0x1668) = 0;
      if (uVar17 != 0) {
        puVar11 = *(undefined8 **)(param_1 + 0x1650);
        puVar15 = puVar11;
        do {
          puVar14 = puVar15 + 7;
          (**(code **)*puVar15)(puVar15);
          puVar15 = puVar14;
        } while (puVar14 < puVar11 + (ulong)uVar17 * 7);
      }
      *(undefined4 *)(param_1 + 0x1658) = 0;
      if ((*(uint *)(param_1 + 0x167c) & 0x7ffffffe) == 0) {
        FUN_003f4d50(plVar13,2);
        uVar17 = *(uint *)(param_1 + 0x162c);
      }
      else {
        uVar17 = *(uint *)(param_1 + 0x162c);
      }
      if ((uVar17 & 0x7ffffffe) == 0) {
        FUN_003f4f40(param_1 + 0x1620,2);
      }
      if ((*(uint *)(param_1 + 0x163c) & 0x7ffffffe) == 0) {
        FUN_003f5130(param_1 + 0x1630,2);
      }
      if ((*(uint *)(param_1 + 0x164c) & 0x7ffffffe) == 0) {
        FUN_003f5320(param_1 + 0x1640,2);
      }
      if ((*(uint *)(param_1 + 0x166c) & 0x7ffffffe) == 0) {
        FUN_003f5560(param_1 + 0x1660,2);
        uVar17 = *(uint *)(param_1 + 0x165c);
      }
      else {
        uVar17 = *(uint *)(param_1 + 0x165c);
      }
      if ((uVar17 & 0x7ffffffe) == 0) {
        FUN_003f5750(param_1 + 0x1650,2);
      }
      puVar8 = PTR_DAT_02710dd8;
      puVar1 = PTR_DAT_02712940 + 0x10;
      puVar2 = PTR_DAT_02712930 + 0x10;
      puVar3 = PTR_DAT_02710dd8 + 0x10;
      uVar17 = 1;
      puVar4 = PTR_DAT_02712938 + 0x10;
      puVar5 = PTR_DAT_02712950 + 0x10;
      puVar6 = PTR_DAT_02712948 + 0x10;
      puVar7 = PTR_DAT_02712958 + 0x10;
      do {
        while( true ) {
          local_90 = *(long *)(param_1 + 0x18);
          local_88 = 0;
          local_80 = 0;
          local_78 = 0;
          local_68 = "ScScene.postCCDPass";
          if (*(uint *)(param_1 + 0x1678) < (*(uint *)(param_1 + 0x167c) & 0x7fffffff)) {
            plVar12 = (long *)(*(long *)(param_1 + 0x1670) +
                              (ulong)*(uint *)(param_1 + 0x1678) * 0x38);
            *plVar12 = (long)puVar3;
            plVar12[2] = 0;
            plVar12[1] = local_90;
            plVar12[3] = 0;
            *(undefined4 *)(plVar12 + 4) = 0;
            *plVar12 = (long)(PTR_DAT_02712930 + 0x10);
            plVar12[6] = (long)"ScScene.postCCDPass";
            plVar12[5] = param_1;
            *(int *)(param_1 + 0x1678) = *(int *)(param_1 + 0x1678) + 1;
          }
          else {
                    /* try { // try from 003e3744 to 003e374f has its CatchHandler @ 003e3af0 */
            local_98 = puVar2;
            local_70 = param_1;
            FUN_003f5940(plVar13,&local_98);
          }
          local_90 = *(long *)(param_1 + 0x18);
          local_88 = 0;
          local_80 = 0;
          local_78 = 0;
          local_68 = "ScScene.updateCCDSinglePass";
          if (*(uint *)(param_1 + 0x1628) < (*(uint *)(param_1 + 0x162c) & 0x7fffffff)) {
            plVar12 = (long *)(*(long *)(param_1 + 0x1620) +
                              (ulong)*(uint *)(param_1 + 0x1628) * 0x38);
            *plVar12 = (long)(puVar8 + 0x10);
            plVar12[2] = 0;
            plVar12[1] = local_90;
            plVar12[3] = 0;
            *(undefined4 *)(plVar12 + 4) = 0;
            *plVar12 = (long)(PTR_DAT_02712938 + 0x10);
            plVar12[6] = (long)"ScScene.updateCCDSinglePass";
            plVar12[5] = param_1;
            *(int *)(param_1 + 0x1628) = *(int *)(param_1 + 0x1628) + 1;
          }
          else {
                    /* try { // try from 003e37e0 to 003e37eb has its CatchHandler @ 003e3aec */
            local_98 = puVar4;
            local_70 = param_1;
            FUN_003f5b30(param_1 + 0x1620,&local_98);
          }
          local_90 = *(long *)(param_1 + 0x18);
          local_88 = 0;
          local_80 = 0;
          local_78 = 0;
          local_68 = "ScScene.updateCCDSinglePassStage2";
          if (*(uint *)(param_1 + 0x1638) < (*(uint *)(param_1 + 0x163c) & 0x7fffffff)) {
            plVar12 = (long *)(*(long *)(param_1 + 0x1630) +
                              (ulong)*(uint *)(param_1 + 0x1638) * 0x38);
            *plVar12 = (long)(puVar8 + 0x10);
            plVar12[2] = 0;
            plVar12[1] = local_90;
            plVar12[3] = 0;
            *(undefined4 *)(plVar12 + 4) = 0;
            *plVar12 = (long)(PTR_DAT_02712940 + 0x10);
            plVar12[6] = (long)"ScScene.updateCCDSinglePassStage2";
            plVar12[5] = param_1;
            *(int *)(param_1 + 0x1638) = *(int *)(param_1 + 0x1638) + 1;
          }
          else {
                    /* try { // try from 003e387c to 003e3887 has its CatchHandler @ 003e3ae8 */
            local_98 = puVar1;
            local_70 = param_1;
            FUN_003f5d20(param_1 + 0x1630,&local_98);
          }
          local_90 = *(long *)(param_1 + 0x18);
          local_88 = 0;
          local_80 = 0;
          local_78 = 0;
          local_68 = "ScScene.updateCCDSinglePassStage3";
          if (*(uint *)(param_1 + 0x1648) < (*(uint *)(param_1 + 0x164c) & 0x7fffffff)) {
            plVar12 = (long *)(*(long *)(param_1 + 0x1640) +
                              (ulong)*(uint *)(param_1 + 0x1648) * 0x38);
            *plVar12 = (long)(puVar8 + 0x10);
            plVar12[2] = 0;
            plVar12[1] = local_90;
            plVar12[3] = 0;
            *(undefined4 *)(plVar12 + 4) = 0;
            *plVar12 = (long)(PTR_DAT_02712948 + 0x10);
            plVar12[6] = (long)"ScScene.updateCCDSinglePassStage3";
            plVar12[5] = param_1;
            *(int *)(param_1 + 0x1648) = *(int *)(param_1 + 0x1648) + 1;
          }
          else {
                    /* try { // try from 003e3918 to 003e3923 has its CatchHandler @ 003e3ae4 */
            local_98 = puVar6;
            local_70 = param_1;
            FUN_003f5f10(param_1 + 0x1640,&local_98);
          }
          local_90 = *(long *)(param_1 + 0x18);
          local_88 = 0;
          local_80 = 0;
          local_78 = 0;
          local_68 = "ScScene.ccdBroadPhase";
          if (*(uint *)(param_1 + 0x1668) < (*(uint *)(param_1 + 0x166c) & 0x7fffffff)) {
            plVar12 = (long *)(*(long *)(param_1 + 0x1660) +
                              (ulong)*(uint *)(param_1 + 0x1668) * 0x38);
            *plVar12 = (long)(puVar8 + 0x10);
            plVar12[2] = 0;
            plVar12[1] = local_90;
            plVar12[3] = 0;
            *(undefined4 *)(plVar12 + 4) = 0;
            *plVar12 = (long)(PTR_DAT_02712950 + 0x10);
            plVar12[6] = (long)"ScScene.ccdBroadPhase";
            plVar12[5] = param_1;
            *(int *)(param_1 + 0x1668) = *(int *)(param_1 + 0x1668) + 1;
          }
          else {
                    /* try { // try from 003e39bc to 003e39c7 has its CatchHandler @ 003e3ae0 */
            local_98 = puVar5;
            local_70 = param_1;
            FUN_003f6100(param_1 + 0x1660,&local_98);
          }
          local_90 = *(long *)(param_1 + 0x18);
          local_88 = 0;
          local_80 = 0;
          local_78 = 0;
          local_68 = "ScScene.ccdBroadPhaseAABB";
          local_98 = puVar7;
          if ((*(uint *)(param_1 + 0x165c) & 0x7fffffff) <= *(uint *)(param_1 + 0x1658)) break;
          plVar12 = (long *)(*(long *)(param_1 + 0x1650) + (ulong)*(uint *)(param_1 + 0x1658) * 0x38
                            );
          *plVar12 = (long)(puVar8 + 0x10);
          plVar12[2] = 0;
          plVar12[1] = local_90;
          plVar12[3] = 0;
          *(undefined4 *)(plVar12 + 4) = 0;
          *plVar12 = (long)(PTR_DAT_02712958 + 0x10);
          plVar12[6] = (long)"ScScene.ccdBroadPhaseAABB";
          plVar12[5] = param_1;
          *(int *)(param_1 + 0x1658) = *(int *)(param_1 + 0x1658) + 1;
          bVar9 = 1 < uVar17;
          uVar17 = 2;
          local_70 = param_1;
          if (bVar9) goto LAB_003e341c;
        }
                    /* try { // try from 003e3a6c to 003e3a77 has its CatchHandler @ 003e3adc */
        local_70 = param_1;
        FUN_003f62f0(param_1 + 0x1650,&local_98);
        bVar9 = uVar17 < 2;
        uVar17 = 2;
      } while (bVar9);
    }
LAB_003e341c:
    FUN_0011e590(*(undefined8 *)(param_1 + 0x720));
    FUN_00123410(*(undefined8 *)(param_1 + 0x738));
    plVar13 = *(long **)(param_1 + 0x1660);
    *(undefined4 *)(plVar13 + 4) = 1;
    plVar13[3] = (long)param_2;
    if (param_2 != (long *)0x0) {
      (**(code **)(*param_2 + 0x20))();
      plVar13[2] = *(long *)(plVar13[3] + 0x10);
      plVar13 = *(long **)(param_1 + 0x1660);
    }
    lVar16 = *(long *)(param_1 + 0x1650);
    *(undefined4 *)(lVar16 + 0x20) = 1;
    *(long **)(lVar16 + 0x18) = plVar13;
    (**(code **)(*plVar13 + 0x20))(plVar13);
    *(undefined8 *)(lVar16 + 0x10) = *(undefined8 *)(*(long *)(lVar16 + 0x18) + 0x10);
    (**(code **)(**(long **)(param_1 + 0x1660) + 0x28))();
    (**(code **)(**(long **)(param_1 + 0x1650) + 0x28))();
  }
  return;
}


