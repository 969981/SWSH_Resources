/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 004bb750; name: FUN_004bb750
 */


undefined8 * FUN_004bb750(long *param_1,undefined8 *param_2)

{
  undefined4 *puVar1;
  undefined8 *puVar2;
  uint uVar3;
  undefined *puVar4;
  long lVar5;
  undefined8 *puVar6;
  long lVar7;
  ulong uVar8;
  uint uVar9;
  
  puVar4 = PTR_DAT_02712a90;
  uVar3 = *(uint *)(param_1 + 1);
  uVar9 = *(uint *)((long)param_1 + 0xc);
  if (uVar9 <= uVar3) {
    uVar9 = uVar9 + 1;
    lVar5 = FUN_00404690(*(undefined4 *)PTR_DAT_02712a90,(ulong)uVar9 * 0x18);
    if (lVar5 == 0) {
      return (undefined8 *)0x0;
    }
    lVar7 = *param_1;
    if ((lVar7 != 0) && (lVar7 != lVar5)) {
      uVar8 = (ulong)*(uint *)(param_1 + 1);
      if (*(uint *)(param_1 + 1) != 0) {
        lVar7 = 0;
        do {
          puVar6 = (undefined8 *)(lVar5 + lVar7);
          if (puVar6 != (undefined8 *)0x0) {
            puVar1 = (undefined4 *)(lVar5 + lVar7);
            *puVar1 = 0;
            *(undefined8 *)(puVar1 + 2) = 0;
            puVar1[4] = 0;
          }
          puVar2 = (undefined8 *)(*param_1 + lVar7);
          lVar7 = lVar7 + 0x18;
          *(undefined4 *)(puVar6 + 2) = *(undefined4 *)(puVar2 + 2);
          puVar6[1] = puVar2[1];
          uVar8 = uVar8 - 1;
          *puVar6 = *puVar2;
        } while (uVar8 != 0);
        lVar7 = *param_1;
      }
      FUN_00404870(*(undefined4 *)puVar4,lVar7);
    }
    *param_1 = lVar5;
    *(uint *)((long)param_1 + 0xc) = uVar9;
  }
  if (uVar3 < uVar9) {
    uVar9 = *(uint *)(param_1 + 1);
    *(uint *)(param_1 + 1) = uVar9 + 1;
    puVar6 = (undefined8 *)(*param_1 + (ulong)uVar9 * 0x18);
    if (puVar6 != (undefined8 *)0x0) {
      lVar5 = *param_1 + (ulong)uVar9 * 0x18;
      *(undefined4 *)puVar6 = 0;
      *(undefined8 *)(lVar5 + 8) = 0;
      *(undefined4 *)(lVar5 + 0x10) = 0;
      *(undefined4 *)(puVar6 + 2) = *(undefined4 *)(param_2 + 2);
      puVar6[1] = param_2[1];
      *puVar6 = *param_2;
    }
  }
  else {
    puVar6 = (undefined8 *)0x0;
  }
  return puVar6;
}


