/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 004c8700; name: FUN_004c8700
 */


void FUN_004c8700(void)

{
  undefined4 uVar1;
  uint uVar2;
  undefined *puVar3;
  undefined *puVar4;
  long lVar5;
  uint uVar6;
  undefined8 *puVar7;
  uint uVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  ulong uVar11;
  long lVar12;
  int iVar13;
  long lVar14;
  
  puVar4 = PTR_DAT_027134f8;
  puVar3 = PTR_DAT_02712e28;
  uVar2 = *(int *)(PTR_DAT_027134f8 + 8) - 1;
  if (-1 < (int)uVar2) {
    iVar13 = 0;
    uVar6 = uVar2;
    do {
      while( true ) {
        lVar14 = (ulong)uVar6 * 8;
        lVar12 = *(long *)(*(long *)puVar4 + lVar14);
        if (((*(int *)(lVar12 + 0x348) == 1) || (*(int *)(lVar12 + 0x34c) != 0)) ||
           ((*(byte *)(lVar12 + 0x354) & 1) != 0)) break;
        uVar1 = *(undefined4 *)puVar3;
        if ((((*(long *)(lVar12 + 0x48) == 0) &&
             ((*(long *)(lVar12 + 0x70) == 0 || (*(long *)(*(long *)(lVar12 + 0x70) + 0x80) == 0))))
            && (lVar5 = FUN_0047d760(lVar12 + 0x70), lVar5 != 0)) &&
           (*(long *)(lVar5 + 0x118) == lVar12 || *(long *)(lVar5 + 0x118) == 0)) {
          FUN_0047b000();
        }
        FUN_004d43c0(lVar12);
        FUN_00404870(uVar1,lVar12);
        uVar8 = *(uint *)(puVar4 + 8);
        puVar9 = (undefined8 *)(*(long *)puVar4 + (ulong)uVar6 * 8);
        puVar7 = (undefined8 *)(*(long *)puVar4 + (ulong)uVar8 * 8 + -8);
        if (puVar9 < puVar7) {
          lVar12 = (ulong)uVar8 * 8;
          uVar11 = lVar12 + -9 + (ulong)(uVar2 - iVar13) * -8;
          if ((((uint)(uVar11 >> 3) & 0x1fffffff) + 1 & 7) != 0) {
            lVar12 = -((ulong)(((uint)(((int)lVar12 + -9) - (int)lVar14) >> 3) + 1) & 7);
            puVar10 = puVar9;
            do {
              puVar9 = puVar10 + 1;
              *puVar10 = *puVar9;
              lVar12 = lVar12 + 1;
              puVar10 = puVar9;
            } while (lVar12 != 0);
          }
          if (0x37 < uVar11) {
            do {
              *puVar9 = puVar9[1];
              puVar9[1] = puVar9[2];
              puVar9[2] = puVar9[3];
              puVar9[3] = puVar9[4];
              puVar9[4] = puVar9[5];
              puVar9[5] = puVar9[6];
              puVar9[6] = puVar9[7];
              puVar10 = puVar9 + 8;
              puVar9[7] = *puVar10;
              puVar9 = puVar10;
            } while (puVar10 < puVar7);
          }
          uVar8 = *(uint *)(puVar4 + 8);
        }
        *(uint *)(puVar4 + 8) = uVar8 - 1;
        uVar6 = uVar6 - 1;
        iVar13 = iVar13 + 1;
        if ((int)uVar6 < 0) {
          return;
        }
      }
      *(byte *)(lVar12 + 0x354) = *(byte *)(lVar12 + 0x354) & 0xfe;
      uVar6 = uVar6 - 1;
      iVar13 = iVar13 + 1;
    } while (-1 < (int)uVar6);
  }
  return;
}


