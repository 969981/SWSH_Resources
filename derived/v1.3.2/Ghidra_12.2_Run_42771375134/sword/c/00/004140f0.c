/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 004140f0; name: FUN_004140f0
 */


undefined8 FUN_004140f0(undefined4 *param_1,undefined8 *param_2)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  undefined4 uVar5;
  uint uVar6;
  byte bVar7;
  undefined *puVar8;
  long lVar9;
  undefined4 *puVar10;
  undefined4 *puVar11;
  long lVar12;
  uint uVar13;
  
  bVar7 = *(byte *)*param_2;
  *param_2 = (byte *)*param_2 + 1;
  param_1[2] = (uint)bVar7;
  uVar5 = *(undefined4 *)*param_2;
  *param_2 = (undefined4 *)*param_2 + 1;
  *param_1 = uVar5;
  uVar5 = *(undefined4 *)*param_2;
  *param_2 = (undefined4 *)*param_2 + 1;
  param_1[1] = uVar5;
  if (*(long *)(param_1 + 4) != 0) {
    param_1[6] = 0;
    FUN_00404870(*(undefined4 *)PTR_DAT_02712a90);
    *(undefined8 *)(param_1 + 4) = 0;
    param_1[7] = 0;
  }
  uVar6 = *(uint *)*param_2;
  *param_2 = (uint *)*param_2 + 1;
  puVar8 = PTR_DAT_02712a90;
  if (uVar6 != 0) {
    lVar9 = FUN_00404690(*(undefined4 *)PTR_DAT_02712a90,(ulong)uVar6 << 2);
    *(long *)(param_1 + 4) = lVar9;
    if (lVar9 == 0) {
      return 2;
    }
    uVar13 = 0;
    param_1[7] = uVar6;
    do {
      uVar2 = param_1[6];
      uVar3 = param_1[7];
      if (uVar2 < uVar3) {
        if (uVar3 <= uVar2) goto LAB_004142cc;
LAB_004142b4:
        puVar11 = (undefined4 *)(*(long *)(param_1 + 4) + (ulong)(uint)param_1[6] * 4);
        param_1[6] = param_1[6] + 1;
      }
      else {
        uVar3 = uVar3 + 1;
        puVar11 = (undefined4 *)FUN_00404690(*(undefined4 *)puVar8,(ulong)uVar3 << 2);
        if (puVar11 != (undefined4 *)0x0) {
          puVar10 = *(undefined4 **)(param_1 + 4);
          if ((puVar10 != (undefined4 *)0x0) && (puVar10 != puVar11)) {
            uVar4 = param_1[6];
            if (uVar4 != 0) {
              *puVar11 = *puVar10;
              if (uVar4 != 1) {
                uVar1 = uVar4 + 3 & 3;
                if ((ulong)uVar4 - 2 < 3) {
                  lVar12 = 1;
                }
                else {
                  lVar9 = 0;
                  do {
                    lVar12 = lVar9;
                    lVar9 = lVar12 * 4;
                    puVar11[lVar12 + 1] = *(undefined4 *)(*(long *)(param_1 + 4) + lVar9 + 4);
                    puVar11[lVar12 + 2] = *(undefined4 *)(*(long *)(param_1 + 4) + lVar9 + 8);
                    puVar11[lVar12 + 3] = *(undefined4 *)(*(long *)(param_1 + 4) + lVar9 + 0xc);
                    puVar11[lVar12 + 4] = *(undefined4 *)(*(long *)(param_1 + 4) + lVar9 + 0x10);
                    lVar9 = lVar12 + 4;
                  } while (((ulong)uVar4 - 1) - (ulong)uVar1 != lVar12 + 4);
                  lVar12 = lVar12 + 5;
                }
                if (uVar1 != 0) {
                  lVar12 = lVar12 << 2;
                  lVar9 = -(ulong)uVar1;
                  do {
                    *(undefined4 *)((long)puVar11 + lVar12) =
                         *(undefined4 *)(*(long *)(param_1 + 4) + lVar12);
                    lVar12 = lVar12 + 4;
                    lVar9 = lVar9 + 1;
                  } while (lVar9 != 0);
                }
              }
              puVar10 = *(undefined4 **)(param_1 + 4);
            }
            FUN_00404870(*(undefined4 *)puVar8,puVar10);
          }
          *(undefined4 **)(param_1 + 4) = puVar11;
          param_1[7] = uVar3;
          if (uVar2 < uVar3) goto LAB_004142b4;
        }
LAB_004142cc:
        puVar11 = (undefined4 *)0x0;
      }
      uVar5 = *(undefined4 *)*param_2;
      uVar13 = uVar13 + 1;
      *param_2 = (undefined4 *)*param_2 + 1;
      *puVar11 = uVar5;
    } while (uVar13 != uVar6);
  }
  return 1;
}


