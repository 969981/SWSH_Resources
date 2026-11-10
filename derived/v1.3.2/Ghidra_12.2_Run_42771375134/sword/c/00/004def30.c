/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 004def30; name: FUN_004def30
 */


undefined8 FUN_004def30(short *param_1,short *param_2,int param_3,ulong param_4,ulong param_5)

{
  short *psVar1;
  byte bVar2;
  int iVar3;
  undefined *puVar4;
  undefined *puVar5;
  uint uVar6;
  long lVar7;
  int iVar8;
  long lVar9;
  ulong uVar10;
  byte *pbVar11;
  short *psVar12;
  short *psVar13;
  int iVar14;
  ulong uVar15;
  
  puVar5 = PTR_DAT_027135e8;
  puVar4 = PTR_DAT_027135e0;
  if (param_3 != 0) {
    uVar10 = param_5 & 0xffffffff;
    psVar12 = param_2 + (param_5 & 0xffffffff);
    pbVar11 = (byte *)((long)param_1 + 0x23);
    psVar13 = param_2 + uVar10 * 2;
    do {
      iVar8 = (int)*param_1;
      uVar15 = (ulong)*(byte *)(param_1 + 1);
      lVar7 = 0;
      lVar9 = 4;
      *param_2 = *param_1;
      do {
        bVar2 = *(byte *)((long)param_1 + lVar9);
        iVar3 = ((bVar2 & 7) << 1 | 1) * (int)*(short *)(puVar4 + uVar15 * 2);
        iVar14 = iVar3 + 7;
        if (-1 < iVar3) {
          iVar14 = iVar3;
        }
        iVar3 = -(iVar14 >> 3);
        if ((bVar2 & 8) == 0) {
          iVar3 = iVar14 >> 3;
        }
        iVar3 = iVar3 + iVar8;
        lVar9 = lVar9 + 1;
        iVar8 = -0x8000;
        if (-0x8001 < iVar3) {
          iVar8 = 0x7fff;
        }
        if ((short)iVar3 != iVar3) {
          iVar3 = iVar8;
        }
        uVar6 = (int)uVar15 + (int)*(short *)(puVar5 + (ulong)(bVar2 & 0xf) * 2);
        *(short *)((long)psVar12 + lVar7) = (short)iVar3;
        if (0x57 < (int)uVar6) {
          uVar6 = 0x58;
        }
        uVar6 = uVar6 & ((int)uVar6 >> 0x1f ^ 0xffffffffU);
        iVar8 = (bVar2 >> 3 & 0xe | 1) * (int)*(short *)(puVar4 + (ulong)uVar6 * 2);
        iVar14 = iVar8 + 7;
        if (-1 < iVar8) {
          iVar14 = iVar8;
        }
        iVar8 = -(iVar14 >> 3);
        if ((bVar2 & 0x80) == 0) {
          iVar8 = iVar14 >> 3;
        }
        iVar8 = iVar3 + iVar8;
        iVar14 = -0x8000;
        if (-0x8001 < iVar8) {
          iVar14 = 0x7fff;
        }
        if ((short)iVar8 != iVar8) {
          iVar8 = iVar14;
        }
        uVar6 = uVar6 + (int)*(short *)(puVar5 + (ulong)(bVar2 >> 4) * 2);
        *(short *)((long)psVar13 + lVar7) = (short)iVar8;
        lVar7 = lVar7 + uVar10 * 4;
        if (0x57 < (int)uVar6) {
          uVar6 = 0x58;
        }
        uVar15 = (ulong)(uVar6 & ((int)uVar6 >> 0x1f ^ 0xffffffffU));
      } while ((int)lVar9 != 0x23);
      iVar3 = ((*pbVar11 & 7) << 1 | 1) * (int)*(short *)(puVar4 + uVar15 * 2);
      iVar14 = iVar3 + 7;
      if (-1 < iVar3) {
        iVar14 = iVar3;
      }
      iVar3 = -(iVar14 >> 3);
      if ((*pbVar11 & 8) == 0) {
        iVar3 = iVar14 >> 3;
      }
      psVar1 = param_2 + uVar10 * 0x3f;
      param_2 = psVar1 + uVar10;
      iVar3 = iVar3 + iVar8;
      iVar8 = 0x7fff;
      if (iVar3 < -0x8000) {
        iVar8 = 0x8000;
      }
      param_3 = param_3 + -1;
      param_1 = (short *)((long)param_1 + (param_4 & 0xffffffff));
      pbVar11 = pbVar11 + (param_4 & 0xffffffff);
      psVar12 = psVar12 + uVar10 * 0x40;
      psVar13 = psVar13 + uVar10 * 0x40;
      if ((short)iVar3 != iVar3) {
        iVar3 = iVar8;
      }
      *psVar1 = (short)iVar3;
    } while (param_3 != 0);
  }
  return 1;
}


