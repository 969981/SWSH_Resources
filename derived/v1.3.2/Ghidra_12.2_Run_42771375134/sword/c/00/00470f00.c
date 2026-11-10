/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00470f00; name: FUN_00470f00
 */


undefined8 FUN_00470f00(long *param_1,int param_2)

{
  undefined *puVar1;
  uint uVar2;
  long lVar3;
  long lVar4;
  uint uVar5;
  undefined *puVar6;
  long lVar7;
  undefined8 uVar8;
  long lVar9;
  undefined8 *puVar10;
  undefined4 *puVar11;
  long *plVar12;
  ulong uVar13;
  uint *puVar14;
  long lVar15;
  
  uVar2 = *(int *)((long)param_1 + 0xc) + param_2;
  lVar7 = FUN_00404690(*(undefined4 *)PTR_DAT_02712a90,(ulong)uVar2 * 0x30);
  uVar8 = 0;
  if (lVar7 != 0) {
    lVar9 = *param_1;
    if ((lVar9 != 0) && (lVar9 != lVar7)) {
      uVar5 = *(uint *)(param_1 + 1);
      if (uVar5 != 0) {
        uVar13 = 0;
        puVar1 = PTR_DAT_027131c0 + 0x10;
        do {
          plVar12 = (long *)(lVar7 + uVar13 * 0x30);
          lVar9 = lVar7 + uVar13 * 0x30;
          if (plVar12 != (long *)0x0) {
            *(undefined1 *)(lVar9 + 0x10) = 0;
            *(undefined8 *)(lVar9 + 0x18) = 0;
            *(undefined8 *)(lVar9 + 0x20) = 0;
            *(undefined8 *)(lVar9 + 8) = 0;
            *plVar12 = (long)puVar1;
          }
          lVar15 = uVar13 * 0x30;
          lVar3 = lVar7 + lVar15;
          lVar4 = *param_1 + lVar15;
          *(undefined1 *)(lVar3 + 0x28) = *(undefined1 *)(lVar4 + 0x28);
          *(undefined8 *)(lVar3 + 8) = *(undefined8 *)(lVar4 + 8);
          *(undefined1 *)(lVar9 + 0x10) = *(undefined1 *)(lVar4 + 0x10);
          plVar12 = (long *)(lVar3 + 0x18);
          puVar10 = (undefined8 *)*plVar12;
          if (puVar10 == (undefined8 *)0x0) {
            lVar9 = lVar7 + uVar13 * 0x30;
            puVar14 = (uint *)(lVar9 + 0x20);
            puVar11 = (undefined4 *)(lVar9 + 0x24);
          }
          else {
            puVar14 = (uint *)(lVar7 + uVar13 * 0x30 + 0x20);
            if (*puVar14 != 0) {
              lVar9 = (ulong)*puVar14 * 0x30;
              do {
                (**(code **)*puVar10)(puVar10);
                lVar9 = lVar9 + -0x30;
                puVar10 = puVar10 + 6;
              } while (lVar9 != 0);
              puVar10 = (undefined8 *)*plVar12;
            }
            puVar6 = PTR_DAT_02712a90;
            *puVar14 = 0;
            FUN_00404870(*(undefined4 *)puVar6,puVar10);
            *plVar12 = 0;
            puVar11 = (undefined4 *)(lVar7 + uVar13 * 0x30 + 0x24);
            *puVar11 = 0;
          }
          *plVar12 = *(long *)(lVar4 + 0x18);
          *puVar14 = *(uint *)(lVar4 + 0x20);
          *puVar11 = *(undefined4 *)(lVar4 + 0x24);
          *(long *)(lVar4 + 0x18) = 0;
          *(undefined8 *)(lVar4 + 0x20) = 0;
          (*(code *)**(undefined8 **)(*param_1 + lVar15))();
          uVar13 = uVar13 + 1;
        } while (uVar13 != uVar5);
        lVar9 = *param_1;
      }
      FUN_00404870(*(undefined4 *)PTR_DAT_02712a90,lVar9);
    }
    uVar8 = 1;
    *param_1 = lVar7;
    *(uint *)((long)param_1 + 0xc) = uVar2;
  }
  return uVar8;
}


