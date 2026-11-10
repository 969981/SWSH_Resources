/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00509480; name: FUN_00509480
 */


uint * FUN_00509480(long *param_1,long *param_2,uint *param_3)

{
  ulong *puVar1;
  int iVar2;
  int iVar3;
  byte bVar4;
  byte bVar5;
  int iVar6;
  int iVar7;
  uint uVar8;
  undefined *puVar9;
  uint uVar10;
  uint uVar11;
  long lVar12;
  ulong uVar13;
  byte *pbVar14;
  int iVar15;
  uint uVar16;
  ulong uVar17;
  ulong uVar18;
  long lVar19;
  uint *puVar20;
  uint local_6c;
  
  lVar12 = *(long *)(param_1[3] + 0x40);
  bVar4 = *(byte *)(param_1 + 1);
  uVar16 = *(uint *)*param_1;
  uVar10 = bVar4 + 1;
  uVar11 = uVar10 & 0x1f;
  uVar10 = uVar10 >> 5;
  lVar19 = param_2[7];
  puVar1 = (ulong *)((uint *)*param_1 + uVar10);
  *(char *)(param_1 + 1) = (char)uVar11;
  *param_1 = (long)puVar1;
  iVar7 = *(int *)((long)param_1 + 0xc) - uVar10;
  *(int *)((long)param_1 + 0xc) = iVar7;
  puVar9 = PTR_DAT_02713940;
  if ((1 << (ulong)(bVar4 & 0x1f) & uVar16) == 0) {
    param_3 = (uint *)0x0;
  }
  else {
    iVar3 = *(int *)(&DAT_01d4b4bc + (long)(int)lVar19 * 4);
    uVar17 = 0;
    for (uVar10 = iVar3 - 1; iVar15 = (int)uVar17, uVar10 != 0; uVar10 = uVar10 >> 1) {
      uVar17 = (ulong)(iVar15 + 1);
    }
    uVar17 = -(uVar17 >> 0x1f) & 0xfffffffc00000000 | uVar17 << 2;
    uVar18 = *puVar1;
    uVar10 = *(uint *)(PTR_DAT_02713940 + uVar17);
    iVar2 = (int)(iVar15 + uVar11) >> 5;
    *(int *)((long)param_1 + 0xc) = iVar7 - iVar2;
    *(byte *)(param_1 + 1) = (byte)(iVar15 + uVar11) & 0x1f;
    *param_1 = (long)((long)puVar1 + (long)iVar2 * 4);
    *param_3 = uVar10 & (uint)(uVar18 >> uVar11);
    uVar10 = *(uint *)(puVar9 + uVar17);
    bVar4 = *(byte *)(param_1 + 1);
    uVar17 = *(ulong *)*param_1;
    iVar15 = iVar15 + (uint)bVar4;
    iVar7 = iVar15 >> 5;
    *(byte *)(param_1 + 1) = (byte)iVar15 & 0x1f;
    *param_1 = *param_1 + (long)iVar7 * 4;
    *(int *)((long)param_1 + 0xc) = *(int *)((long)param_1 + 0xc) - iVar7;
    param_3[1] = uVar10 & (uint)(uVar17 >> ((ulong)bVar4 & 0x3f));
    if (0 < (int)param_2[6]) {
      lVar19 = 0;
      local_6c = 2;
      do {
        uVar18 = (ulong)*(byte *)(param_2[1] + lVar19);
        pbVar14 = (byte *)(*param_2 + uVar18 * 0xb);
        bVar4 = *pbVar14;
        uVar17 = (ulong)bVar4;
        bVar5 = pbVar14[1];
        if (bVar5 == 0) {
          uVar10 = 0;
        }
        else {
          uVar10 = FUN_0050b620(lVar12 + (ulong)*(byte *)(*param_2 + uVar18 * 0xb + 2) * 0x20,
                                param_1);
        }
        if (bVar4 != 0) {
          puVar20 = param_3 + local_6c;
          do {
            while( true ) {
              uVar11 = uVar10 & (1 << (ulong)(bVar5 & 0x1f)) - 1U;
              uVar10 = (int)uVar10 >> (bVar5 & 0x1f);
              uVar13 = (ulong)*(byte *)(*param_2 + uVar18 * 0xb + (long)(int)uVar11 + 3);
              if (uVar13 == 0xff) break;
              uVar11 = FUN_0050b620(lVar12 + uVar13 * 0x20,param_1);
              uVar17 = uVar17 - 1;
              *puVar20 = uVar11;
              puVar20 = puVar20 + 1;
              if (uVar17 == 0) goto LAB_00509680;
            }
            uVar17 = uVar17 - 1;
            *puVar20 = 0;
            puVar20 = puVar20 + 1;
          } while (uVar17 != 0);
        }
LAB_00509680:
        local_6c = local_6c + bVar4;
        lVar19 = lVar19 + 1;
      } while (lVar19 < (int)param_2[6]);
    }
    if (2 < *(int *)((long)param_2 + 0x34)) {
      lVar19 = 0;
      do {
        lVar12 = param_2[2];
        iVar15 = (param_3[*(byte *)(param_2[4] + lVar19)] & 0x7fff) -
                 (param_3[*(byte *)(param_2[5] + lVar19)] & 0x7fff);
        uVar10 = (uint)*(ushort *)(lVar12 + (ulong)*(byte *)(param_2[5] + lVar19) * 2);
        iVar2 = *(ushort *)(lVar12 + (ulong)*(byte *)(param_2[4] + lVar19) * 2) - uVar10;
        iVar7 = -iVar15;
        if (-1 < iVar15) {
          iVar7 = iVar15;
        }
        iVar6 = 0;
        if (iVar2 != 0) {
          iVar6 = (int)(iVar7 * (*(ushort *)(lVar12 + lVar19 * 2 + 4) - uVar10)) / iVar2;
        }
        iVar7 = -iVar6;
        if (-1 < iVar15) {
          iVar7 = iVar6;
        }
        uVar10 = iVar7 + (param_3[*(byte *)(param_2[5] + lVar19)] & 0x7fff);
        uVar11 = param_3[lVar19 + 2];
        if (uVar11 == 0) {
          param_3[lVar19 + 2] = uVar10 | 0x8000;
        }
        else {
          uVar8 = iVar3 - uVar10;
          uVar16 = uVar8;
          if ((int)uVar10 <= (int)uVar8) {
            uVar16 = uVar10;
          }
          if ((int)uVar11 < (int)(uVar16 * 2)) {
            if ((uVar11 & 1) == 0) {
              uVar16 = (int)uVar11 >> 1;
            }
            else {
              uVar16 = -((int)(uVar11 + 1) >> 1);
            }
          }
          else {
            uVar16 = uVar11 - uVar10;
            if ((int)uVar8 <= (int)uVar10) {
              uVar16 = ~(uVar11 - uVar8);
            }
          }
          param_3[lVar19 + 2] = uVar16 + uVar10;
          param_3[*(byte *)(param_2[5] + lVar19)] = param_3[*(byte *)(param_2[5] + lVar19)] & 0x7fff
          ;
          param_3[*(byte *)(param_2[4] + lVar19)] = param_3[*(byte *)(param_2[4] + lVar19)] & 0x7fff
          ;
        }
        lVar12 = lVar19 + 3;
        lVar19 = lVar19 + 1;
      } while (lVar12 < *(int *)((long)param_2 + 0x34));
    }
  }
  return param_3;
}


