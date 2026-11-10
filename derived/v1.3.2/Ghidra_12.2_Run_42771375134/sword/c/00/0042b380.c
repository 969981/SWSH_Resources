/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0042b380; name: FUN_0042b380
 */


void FUN_0042b380(uint *param_1,undefined8 *param_2,undefined8 *param_3,uint param_4)

{
  uint uVar1;
  undefined4 uVar2;
  uint uVar3;
  uint uVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  ulong uVar7;
  long lVar8;
  uint uVar9;
  undefined8 *puVar10;
  undefined8 *puVar11;
  undefined8 *puVar12;
  int iVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  
  if (param_4 != 0) {
    uVar7 = (ulong)param_1[4];
    puVar6 = (undefined8 *)(*(long *)(param_1 + 2) + uVar7 * 4);
    uVar9 = *param_1;
    do {
      uVar9 = uVar9 - (int)uVar7;
      uVar1 = param_4;
      if (uVar9 <= param_4) {
        uVar1 = uVar9;
      }
      uVar3 = uVar1 >> 2;
      uVar9 = uVar1 & 3;
      if (uVar3 != 0) {
        uVar7 = (ulong)(uVar3 - 1);
        uVar4 = uVar1 >> 2 & 3;
        puVar10 = param_2;
        puVar11 = param_3;
        puVar12 = puVar6;
        if (2 < uVar3 - 1) {
          iVar13 = uVar4 - uVar3;
          do {
            uVar15 = puVar12[1];
            uVar14 = *puVar12;
            uVar16 = *puVar10;
            iVar13 = iVar13 + 4;
            puVar12[1] = puVar10[1];
            *puVar12 = uVar16;
            puVar11[1] = uVar15;
            *puVar11 = uVar14;
            uVar15 = puVar12[3];
            uVar14 = puVar12[2];
            uVar16 = puVar10[2];
            puVar12[3] = puVar10[3];
            puVar12[2] = uVar16;
            puVar11[3] = uVar15;
            puVar11[2] = uVar14;
            uVar15 = puVar12[5];
            uVar14 = puVar12[4];
            uVar16 = puVar10[4];
            puVar12[5] = puVar10[5];
            puVar12[4] = uVar16;
            puVar11[5] = uVar15;
            puVar11[4] = uVar14;
            uVar15 = puVar12[7];
            uVar14 = puVar12[6];
            puVar5 = puVar10 + 7;
            uVar16 = puVar10[6];
            puVar10 = puVar10 + 8;
            puVar12[7] = *puVar5;
            puVar12[6] = uVar16;
            puVar11[7] = uVar15;
            puVar11[6] = uVar14;
            puVar12 = puVar12 + 8;
            puVar11 = puVar11 + 8;
          } while (iVar13 != 0);
        }
        if (uVar4 != 0) {
          iVar13 = -uVar4;
          do {
            uVar15 = puVar12[1];
            uVar14 = *puVar12;
            iVar13 = iVar13 + 1;
            uVar16 = *puVar10;
            puVar12[1] = puVar10[1];
            *puVar12 = uVar16;
            puVar11[1] = uVar15;
            *puVar11 = uVar14;
            puVar10 = puVar10 + 2;
            puVar11 = puVar11 + 2;
            puVar12 = puVar12 + 2;
          } while (iVar13 != 0);
        }
        puVar6 = puVar6 + uVar7 * 2 + 2;
        param_2 = param_2 + uVar7 * 2 + 2;
        param_3 = param_3 + uVar7 * 2 + 2;
      }
      if (uVar9 != 0) {
        uVar2 = *(undefined4 *)puVar6;
        *(undefined4 *)puVar6 = *(undefined4 *)param_2;
        *(undefined4 *)param_3 = uVar2;
        if (uVar9 != 0 && uVar9 - 1 != 0) {
          uVar2 = *(undefined4 *)((long)puVar6 + 4);
          *(undefined4 *)((long)puVar6 + 4) = *(undefined4 *)((long)param_2 + 4);
          *(undefined4 *)((long)param_3 + 4) = uVar2;
          if (uVar9 != 2) {
            uVar2 = *(undefined4 *)(puVar6 + 1);
            *(undefined4 *)(puVar6 + 1) = *(undefined4 *)(param_2 + 1);
            *(undefined4 *)(param_3 + 1) = uVar2;
          }
        }
        lVar8 = (ulong)(uVar9 - 1) * 4;
        param_2 = (undefined8 *)((long)param_2 + lVar8 + 4);
        puVar6 = (undefined8 *)((long)puVar6 + lVar8 + 4);
        param_3 = (undefined8 *)((long)param_3 + lVar8 + 4);
      }
      uVar9 = *param_1;
      uVar3 = param_1[4] + uVar1;
      uVar7 = (ulong)uVar3;
      param_1[4] = uVar3;
      if (uVar3 == uVar9) {
        puVar6 = *(undefined8 **)(param_1 + 2);
        uVar7 = 0;
        param_1[4] = 0;
      }
      param_4 = param_4 - uVar1;
    } while (param_4 != 0);
  }
  return;
}


