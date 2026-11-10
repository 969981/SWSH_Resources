/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 004e6f50; name: FUN_004e6f50
 */


undefined8 FUN_004e6f50(undefined8 *param_1,uint param_2)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  long lVar6;
  ulong uVar7;
  long lVar8;
  ulong uVar9;
  
  uVar2 = *(uint *)(param_1 + 3);
  uVar9 = (ulong)uVar2;
  if (uVar2 <= param_2) {
    if (*(uint *)((long)param_1 + 0x1c) < param_2) {
      uVar1 = *(uint *)((long)param_1 + 0x1c) + (param_2 - uVar2);
      puVar4 = param_1;
      if (2 < uVar1) {
        puVar4 = (undefined8 *)FUN_00404750(*(undefined4 *)PTR_DAT_02712a90,(ulong)uVar1 << 3,8);
      }
      if (puVar4 == (undefined8 *)0x0) {
        return 0;
      }
      puVar5 = (undefined8 *)param_1[2];
      if ((puVar5 != (undefined8 *)0x0) && (puVar5 != puVar4)) {
        uVar3 = *(uint *)(param_1 + 3);
        if (uVar3 != 0) {
          uVar7 = 0;
          puVar5 = puVar4;
          do {
            if (puVar5 != (undefined8 *)0x0) {
              *puVar5 = 0;
            }
            lVar8 = uVar7 * 8;
            uVar7 = uVar7 + 1;
            *puVar5 = *(undefined8 *)(param_1[2] + lVar8);
            puVar5 = puVar5 + 1;
          } while (uVar3 != uVar7);
          puVar5 = (undefined8 *)param_1[2];
        }
        if (param_1 != puVar5) {
          FUN_004047f0(*(undefined4 *)PTR_DAT_02712a90);
        }
      }
      param_1[2] = puVar4;
      *(uint *)((long)param_1 + 0x1c) = uVar1;
    }
    if (uVar2 < param_2) {
      uVar7 = uVar9;
      if ((param_2 - uVar2 & 1) != 0) {
        puVar4 = (undefined8 *)(param_1[2] + uVar9 * 8);
        if (puVar4 != (undefined8 *)0x0) {
          *puVar4 = 0;
        }
        uVar7 = uVar9 + 1;
      }
      if ((ulong)param_2 - 1 != uVar9) {
        lVar6 = param_2 - uVar7;
        lVar8 = uVar7 << 3;
        do {
          if (param_1[2] + lVar8 != 0) {
            *(undefined8 *)(param_1[2] + lVar8) = 0;
          }
          if (param_1[2] + lVar8 != -8) {
            *(undefined8 *)(param_1[2] + lVar8 + 8) = 0;
          }
          lVar6 = lVar6 + -2;
          lVar8 = lVar8 + 0x10;
        } while (lVar6 != 0);
      }
    }
  }
  *(uint *)(param_1 + 3) = param_2;
  return 1;
}


