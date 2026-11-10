/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 004fea90; name: FUN_004fea90
 */


void FUN_004fea90(long param_1,ulong *param_2)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  undefined8 *puVar4;
  int iVar5;
  ulong uVar6;
  long lVar7;
  undefined8 *puVar8;
  int iVar9;
  undefined8 *puVar10;
  int iVar11;
  ulong *puVar12;
  
  uVar2 = *(uint *)(param_1 + 0x30);
  lVar7 = *(long *)(param_1 + 0x28);
  iVar5 = uVar2 - 1;
  iVar9 = 0;
  iVar11 = iVar5;
  do {
    while( true ) {
      iVar3 = iVar11 - iVar9;
      if (iVar3 < 0) {
        iVar3 = iVar3 + 1;
      }
      uVar1 = iVar9 + (iVar3 >> 1);
      puVar12 = *(ulong **)(lVar7 + (ulong)uVar1 * 8);
      if ((uint)puVar12[4] <= (uint)param_2[4]) break;
LAB_004feac8:
      iVar11 = uVar1 - 1;
      if (iVar11 < iVar9) goto LAB_004feba8;
    }
    if ((uint)param_2[4] == (uint)puVar12[4]) {
      if (*puVar12 < *param_2) goto LAB_004feac8;
      if (*puVar12 <= *param_2) {
        if (param_2[1] < puVar12[1]) goto LAB_004feac8;
        if (param_2[1] <= puVar12[1]) {
          puVar4 = (undefined8 *)(lVar7 + (ulong)uVar1 * 8);
          puVar8 = (undefined8 *)(lVar7 + (ulong)uVar2 * 8 + -8);
          if (puVar4 < puVar8) {
            uVar6 = (ulong)uVar2 * 8 + -9 + (ulong)uVar1 * -8;
            uVar2 = ((uint)(uVar6 >> 3) & 0x1fffffff) + 1;
            if ((uVar2 & 3) != 0) {
              lVar7 = -((ulong)uVar2 & 3);
              puVar10 = puVar4;
              do {
                puVar4 = puVar10 + 1;
                *puVar10 = *puVar4;
                lVar7 = lVar7 + 1;
                puVar10 = puVar4;
              } while (lVar7 != 0);
            }
            if (0x17 < uVar6) {
              do {
                *puVar4 = puVar4[1];
                puVar4[1] = puVar4[2];
                puVar4[2] = puVar4[3];
                puVar10 = puVar4 + 4;
                puVar4[3] = *puVar10;
                puVar4 = puVar10;
              } while (puVar10 < puVar8);
            }
            iVar5 = *(int *)(param_1 + 0x30) + -1;
          }
          *(int *)(param_1 + 0x30) = iVar5;
LAB_004feba8:
          *(undefined4 *)(param_2 + 4) = 0xffffffff;
          return;
        }
      }
    }
    iVar9 = uVar1 + 1;
    if (iVar11 < iVar9) goto LAB_004feba8;
  } while( true );
}


