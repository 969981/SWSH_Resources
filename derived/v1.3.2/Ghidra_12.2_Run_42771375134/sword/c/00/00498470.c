/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00498470; name: FUN_00498470
 */


void FUN_00498470(long param_1,long param_2)

{
  uint uVar1;
  int iVar2;
  undefined *puVar3;
  ulong uVar4;
  undefined4 *puVar5;
  ulong *puVar6;
  int iVar7;
  ulong uVar8;
  int iVar9;
  ulong uVar10;
  ulong *puVar11;
  ulong *puVar12;
  undefined4 *puVar13;
  ulong *puVar14;
  
  puVar3 = PTR_DAT_02712a90;
  uVar4 = (ulong)*(uint *)(param_1 + 0x10);
  if (*(uint *)(param_1 + 0x10) != 0) {
    puVar6 = *(ulong **)(param_1 + 8);
    puVar11 = puVar6;
LAB_004984b4:
    do {
      iVar7 = *(int *)(param_2 + 0x10) + -1;
      if (-1 < iVar7) {
        uVar8 = *puVar11;
        iVar9 = 0;
        do {
          while( true ) {
            iVar2 = iVar7 - iVar9;
            if (iVar2 < 0) {
              iVar2 = iVar2 + 1;
            }
            iVar2 = iVar9 + (iVar2 >> 1);
            uVar10 = *(ulong *)(*(long *)(param_2 + 8) + (long)iVar2 * 8);
            if (uVar8 > uVar10 || uVar10 == uVar8) break;
            iVar7 = iVar2 + -1;
            if (iVar7 < iVar9) goto LAB_00498530;
          }
          if (uVar8 <= uVar10) {
            if (*(long *)(param_2 + 8) + (long)iVar2 * 8 != 0) {
              puVar11 = puVar11 + 3;
              if (puVar6 + uVar4 * 3 == puVar11) {
                return;
              }
              goto LAB_004984b4;
            }
            break;
          }
          iVar9 = iVar2 + 1;
        } while (iVar9 <= iVar7);
      }
LAB_00498530:
      if (puVar11[1] != 0) {
        *(undefined4 *)(puVar11 + 2) = 0;
        FUN_00404870(*(undefined4 *)puVar3);
        puVar11[1] = 0;
        *(undefined4 *)((long)puVar11 + 0x14) = 0;
        puVar6 = *(ulong **)(param_1 + 8);
        uVar4 = (ulong)*(uint *)(param_1 + 0x10);
      }
      iVar7 = (int)uVar4;
      if (puVar11 < puVar6 + uVar4 * 3 + -3) {
        puVar13 = (undefined4 *)((long)puVar11 + 0x2c);
        puVar12 = puVar11;
        do {
          *(undefined8 *)(puVar13 + -0xb) = *(undefined8 *)(puVar13 + -5);
          if (*(long *)(puVar13 + -9) == 0) {
            puVar14 = (ulong *)(puVar13 + -7);
            puVar5 = puVar13 + -6;
          }
          else {
            puVar13[-7] = 0;
            puVar14 = puVar12 + 2;
            FUN_00404870(*(undefined4 *)puVar3);
            puVar5 = (undefined4 *)((long)puVar12 + 0x14);
            *(undefined8 *)(puVar13 + -9) = 0;
            puVar13[-6] = 0;
          }
          *(undefined8 *)(puVar13 + -9) = *(undefined8 *)(puVar13 + -3);
          *(undefined4 *)puVar14 = puVar13[-1];
          *puVar5 = *puVar13;
          puVar14 = (ulong *)(puVar13 + -5);
          *(undefined8 *)(puVar13 + -1) = 0;
          *(undefined8 *)(puVar13 + -3) = 0;
          puVar13 = puVar13 + 6;
          puVar12 = puVar12 + 3;
        } while (puVar14 < puVar6 + uVar4 * 3 + -3);
        iVar7 = *(int *)(param_1 + 0x10);
        puVar6 = *(ulong **)(param_1 + 8);
      }
      uVar1 = iVar7 - 1;
      uVar4 = (ulong)uVar1;
      *(uint *)(param_1 + 0x10) = uVar1;
    } while (puVar6 + (ulong)uVar1 * 3 != puVar11);
  }
  return;
}


