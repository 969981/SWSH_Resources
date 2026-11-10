/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 004a2220; name: FUN_004a2220
 */


undefined8 FUN_004a2220(long *param_1,int param_2)

{
  undefined *puVar1;
  uint uVar2;
  uint uVar3;
  undefined *puVar4;
  long lVar5;
  undefined8 uVar6;
  long lVar7;
  undefined4 *puVar8;
  undefined8 *puVar9;
  undefined1 *puVar10;
  long *plVar11;
  long lVar12;
  ulong uVar13;
  uint *puVar14;
  long lVar15;
  
  puVar4 = PTR_DAT_02712a90;
  uVar2 = *(int *)((long)param_1 + 0xc) + param_2;
  lVar5 = FUN_00404690(*(undefined4 *)PTR_DAT_02712a90,(ulong)uVar2 * 0x28);
  uVar6 = 0;
  if (lVar5 != 0) {
    lVar7 = *param_1;
    if ((lVar7 != 0) && (lVar7 != lVar5)) {
      uVar3 = *(uint *)(param_1 + 1);
      if (uVar3 != 0) {
        uVar13 = 0;
        puVar1 = PTR_DAT_02713398 + 0x10;
        do {
          plVar11 = (long *)(lVar5 + uVar13 * 0x28);
          if (plVar11 == (long *)0x0) {
            lVar7 = lVar5 + uVar13 * 0x28;
            puVar8 = (undefined4 *)(lVar7 + 8);
            puVar10 = (undefined1 *)(lVar7 + 0xc);
          }
          else {
            lVar7 = lVar5 + uVar13 * 0x28;
            puVar8 = (undefined4 *)(lVar7 + 8);
            *puVar8 = 0;
            puVar10 = (undefined1 *)(lVar7 + 0xc);
            *puVar10 = 0;
            *(undefined8 *)(lVar7 + 0x10) = 0;
            *(undefined8 *)(lVar7 + 0x18) = 0;
            *plVar11 = (long)puVar1;
          }
          lVar15 = uVar13 * 0x28;
          lVar7 = *param_1 + lVar15;
          *(undefined4 *)(lVar5 + lVar15 + 0x20) = *(undefined4 *)(lVar7 + 0x20);
          *puVar8 = *(undefined4 *)(lVar7 + 8);
          *puVar10 = *(undefined1 *)(lVar7 + 0xc);
          plVar11 = (long *)(lVar5 + lVar15 + 0x10);
          puVar9 = (undefined8 *)*plVar11;
          if (puVar9 == (undefined8 *)0x0) {
            lVar12 = lVar5 + uVar13 * 0x28;
            puVar14 = (uint *)(lVar12 + 0x18);
            puVar8 = (undefined4 *)(lVar12 + 0x1c);
          }
          else {
            puVar14 = (uint *)(lVar5 + uVar13 * 0x28 + 0x18);
            if (*puVar14 != 0) {
              lVar12 = (ulong)*puVar14 * 0x28;
              do {
                (**(code **)*puVar9)(puVar9);
                lVar12 = lVar12 + -0x28;
                puVar9 = puVar9 + 5;
              } while (lVar12 != 0);
              puVar9 = (undefined8 *)*plVar11;
            }
            *puVar14 = 0;
            FUN_00404870(*(undefined4 *)puVar4,puVar9);
            *plVar11 = 0;
            puVar8 = (undefined4 *)(lVar5 + uVar13 * 0x28 + 0x1c);
            *puVar8 = 0;
          }
          *plVar11 = *(long *)(lVar7 + 0x10);
          *puVar14 = *(uint *)(lVar7 + 0x18);
          *puVar8 = *(undefined4 *)(lVar7 + 0x1c);
          *(long *)(lVar7 + 0x10) = 0;
          *(undefined8 *)(lVar7 + 0x18) = 0;
          (*(code *)**(undefined8 **)(*param_1 + lVar15))();
          uVar13 = uVar13 + 1;
        } while (uVar13 != uVar3);
        lVar7 = *param_1;
      }
      FUN_00404870(*(undefined4 *)puVar4,lVar7);
    }
    uVar6 = 1;
    *param_1 = lVar5;
    *(uint *)((long)param_1 + 0xc) = uVar2;
  }
  return uVar6;
}


