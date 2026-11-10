/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00471400; name: FUN_00471400
 */


undefined8 FUN_00471400(long *param_1,int param_2)

{
  undefined *puVar1;
  uint uVar2;
  long *plVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  undefined8 uVar8;
  long lVar9;
  undefined4 *puVar10;
  undefined4 *puVar11;
  ulong uVar12;
  long lVar13;
  
  uVar2 = *(int *)((long)param_1 + 0xc) + param_2;
  lVar7 = FUN_00404690(*(undefined4 *)PTR_DAT_02712a90,(ulong)uVar2 * 0x30);
  uVar8 = 0;
  if (lVar7 != 0) {
    lVar9 = *param_1;
    if ((lVar9 != 0) && (lVar9 != lVar7)) {
      uVar12 = (ulong)*(uint *)(param_1 + 1);
      if (*(uint *)(param_1 + 1) != 0) {
        lVar13 = 0;
        lVar9 = 0;
        puVar1 = PTR_DAT_027131d0 + 0x10;
        do {
          lVar6 = lVar13;
          if (lVar7 + lVar13 != 0) {
            plVar3 = (long *)(lVar7 + lVar13);
            *plVar3 = (long)puVar1;
            plVar3[1] = 0;
            *(undefined1 *)(plVar3 + 2) = 0;
            plVar3[3] = 0;
            plVar3[4] = 0;
            lVar6 = lVar9 * 0x30;
          }
          lVar4 = *param_1 + lVar13;
          lVar5 = lVar7 + lVar13;
          *(undefined1 *)(lVar5 + 0x28) = *(undefined1 *)(lVar4 + 0x28);
          *(undefined8 *)(lVar5 + 8) = *(undefined8 *)(lVar4 + 8);
          *(undefined1 *)(lVar7 + lVar6 + 0x10) = *(undefined1 *)(lVar4 + 0x10);
          if (*(long *)(lVar5 + 0x18) == 0) {
            lVar6 = lVar7 + lVar9 * 0x30;
            puVar11 = (undefined4 *)(lVar6 + 0x20);
            puVar10 = (undefined4 *)(lVar6 + 0x24);
          }
          else {
            puVar11 = (undefined4 *)(lVar5 + 0x20);
            *puVar11 = 0;
            FUN_00404870(*(undefined4 *)PTR_DAT_02712a90);
            *(undefined8 *)(lVar5 + 0x18) = 0;
            puVar10 = (undefined4 *)(lVar5 + 0x24);
            *puVar10 = 0;
          }
          *(undefined8 *)(lVar5 + 0x18) = *(undefined8 *)(lVar4 + 0x18);
          *puVar11 = *(undefined4 *)(lVar4 + 0x20);
          *puVar10 = *(undefined4 *)(lVar4 + 0x24);
          *(undefined8 *)(lVar4 + 0x18) = 0;
          *(undefined8 *)(lVar4 + 0x20) = 0;
          (*(code *)**(undefined8 **)(*param_1 + lVar13))();
          lVar9 = lVar9 + 1;
          lVar13 = lVar13 + 0x30;
          uVar12 = uVar12 - 1;
        } while (uVar12 != 0);
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


