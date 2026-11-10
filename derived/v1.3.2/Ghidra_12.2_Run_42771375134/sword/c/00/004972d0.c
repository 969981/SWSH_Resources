/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 004972d0; name: FUN_004972d0
 */


undefined8 FUN_004972d0(long *param_1,int param_2)

{
  uint uVar1;
  undefined8 *puVar2;
  long lVar3;
  undefined *puVar4;
  long lVar5;
  undefined8 uVar6;
  long lVar7;
  undefined4 *puVar8;
  ulong uVar9;
  long lVar10;
  undefined8 *puVar11;
  long lVar12;
  
  puVar4 = PTR_DAT_02712a90;
  uVar1 = *(int *)((long)param_1 + 0xc) + param_2;
  lVar5 = FUN_00404690(*(undefined4 *)PTR_DAT_02712a90,(ulong)uVar1 * 0x18);
  uVar6 = 0;
  if (lVar5 != 0) {
    lVar7 = *param_1;
    if ((lVar7 != 0) && (lVar7 != lVar5)) {
      uVar9 = (ulong)*(uint *)(param_1 + 1);
      if (*(uint *)(param_1 + 1) != 0) {
        lVar7 = 0;
        lVar10 = 0;
        do {
          if (lVar5 + lVar7 != 0) {
            *(undefined8 *)(lVar5 + lVar7 + 8) = 0;
            *(undefined8 *)(lVar5 + lVar7 + 0x10) = 0;
          }
          lVar12 = *param_1;
          puVar2 = (undefined8 *)(lVar5 + lVar7);
          *puVar2 = *(undefined8 *)(lVar12 + lVar7);
          if (puVar2[1] == 0) {
            lVar3 = lVar5 + lVar10 * 0x18;
            puVar11 = (undefined8 *)(lVar3 + 0x10);
            puVar8 = (undefined4 *)(lVar3 + 0x14);
          }
          else {
            puVar11 = puVar2 + 2;
            *(undefined4 *)puVar11 = 0;
            FUN_00404870(*(undefined4 *)puVar4);
            puVar2[1] = 0;
            puVar8 = (undefined4 *)((long)puVar2 + 0x14);
            *puVar8 = 0;
          }
          lVar12 = lVar12 + lVar7;
          lVar7 = lVar7 + 0x18;
          puVar2[1] = *(undefined8 *)(lVar12 + 8);
          *(undefined4 *)puVar11 = *(undefined4 *)(lVar12 + 0x10);
          lVar10 = lVar10 + 1;
          uVar9 = uVar9 - 1;
          *puVar8 = *(undefined4 *)(lVar12 + 0x14);
          *(undefined8 *)(lVar12 + 8) = 0;
          *(undefined8 *)(lVar12 + 0x10) = 0;
        } while (uVar9 != 0);
        lVar7 = *param_1;
      }
      FUN_00404870(*(undefined4 *)puVar4,lVar7);
    }
    uVar6 = 1;
    *param_1 = lVar5;
    *(uint *)((long)param_1 + 0xc) = uVar1;
  }
  return uVar6;
}


