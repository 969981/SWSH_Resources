/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 005d2330; name: FUN_005d2330
 */


undefined8 FUN_005d2330(float param_1,float param_2,long *param_3,int param_4)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  double dVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  undefined8 uVar9;
  int iVar10;
  long lVar11;
  ulong uVar12;
  int iVar13;
  int iVar14;
  long lVar15;
  float fVar16;
  double dVar17;
  double dVar18;
  double __x;
  double dVar19;
  double __x_00;
  double dVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  double dVar25;
  double dVar26;
  double dVar27;
  double dVar28;
  float fVar29;
  float fVar30;
  float local_b8;
  float fStack_b4;
  float local_b0;
  float fStack_ac;
  
  lVar11 = *param_3;
  if (lVar11 == 0) {
    uVar9 = 0;
  }
  else {
    iVar6 = FUN_005ed170((int)param_3[2]);
    iVar7 = rand();
    iVar8 = rand();
    dVar5 = DAT_01cd5298;
    iVar13 = (int)param_3[3];
    if (0 < iVar13) {
      fVar24 = (float)iVar8 * DAT_01d4bda0 * DAT_01d4c330;
      fVar21 = (float)iVar7 * DAT_01d4bda0 * DAT_01d4c330;
      uVar12 = (ulong)*(uint *)((long)param_3 + 0x14);
      iVar7 = 0;
      do {
        if (0 < (int)uVar12) {
          lVar15 = 0;
          do {
            iVar13 = (int)uVar12;
            fVar30 = 1.0;
            fVar23 = 0.0;
            if (0 < param_4) {
              fVar29 = param_1;
              iVar13 = param_4;
              do {
                fVar16 = fVar29 * (float)(iVar7 + (int)fVar24);
                fVar22 = fVar29 * (float)((int)lVar15 + (int)fVar21);
                iVar10 = (int)fVar16;
                iVar8 = iVar10 * 0x39;
                iVar14 = (int)fVar22;
                uVar4 = iVar8 + iVar14 ^ (iVar8 + iVar14) * 0x2000;
                uVar1 = iVar8 + iVar14 + 1;
                uVar1 = uVar1 ^ uVar1 * 0x2000;
                uVar2 = iVar8 + 0x39 + iVar14 + 1;
                uVar2 = uVar2 ^ uVar2 * 0x2000;
                fVar16 = fVar16 - (float)iVar10;
                uVar3 = iVar8 + 0x39 + iVar14;
                uVar3 = uVar3 ^ uVar3 * 0x2000;
                fVar22 = fVar22 - (float)iVar14;
                dVar27 = (double)(1.0 - fVar22);
                dVar25 = dVar27 * dVar27 * 3.0;
                dVar17 = pow(dVar27,3.0);
                dVar28 = (double)fVar22;
                dVar26 = dVar28 * dVar28 * 3.0;
                dVar18 = pow(dVar28,3.0);
                dVar27 = pow(dVar27,3.0);
                dVar28 = pow(dVar28,3.0);
                __x = (double)(1.0 - fVar16);
                dVar19 = pow(__x,3.0);
                __x_00 = (double)fVar16;
                dVar20 = pow(__x_00,3.0);
                fVar29 = fVar29 + fVar29;
                iVar13 = iVar13 + -1;
                fVar16 = fVar30 * (((float)(1.0 - (double)((uVar4 * uVar4 * 0x3d73 + 0xc0ae5) *
                                                           uVar4 + 0x5208dd0d & 0x7fffffff) * dVar5)
                                    * (float)(dVar25 - (dVar17 + dVar17)) +
                                   (float)(1.0 - (double)((uVar1 * uVar1 * 0x3d73 + 0xc0ae5) * uVar1
                                                          + 0x5208dd0d & 0x7fffffff) * dVar5) *
                                   (float)(dVar26 - (dVar18 + dVar18))) *
                                   (float)(__x * __x * 3.0 - (dVar19 + dVar19)) +
                                  ((float)(1.0 - (double)((uVar3 * uVar3 * 0x3d73 + 0xc0ae5) * uVar3
                                                          + 0x5208dd0d & 0x7fffffff) * dVar5) *
                                   (float)(dVar25 - (dVar27 + dVar27)) +
                                  (float)(1.0 - (double)((uVar2 * uVar2 * 0x3d73 + 0xc0ae5) * uVar2
                                                         + 0x5208dd0d & 0x7fffffff) * dVar5) *
                                  (float)(dVar26 - (dVar28 + dVar28))) *
                                  (float)(__x_00 * __x_00 * 3.0 - (dVar20 + dVar20)));
                fVar30 = fVar30 * param_2;
                fVar23 = fVar23 + fVar16;
              } while (iVar13 != 0);
              iVar13 = *(int *)((long)param_3 + 0x14);
            }
            local_b8 = fVar23 * 0.5 + 0.5;
            if (local_b8 <= 0.0) {
              local_b8 = 0.0;
            }
            if (1.0 < local_b8) {
              local_b8 = 1.0;
            }
            fStack_b4 = local_b8;
            local_b0 = local_b8;
            fStack_ac = local_b8;
            FUN_005ed5a0((int)param_3[2],lVar11 + lVar15 * iVar6 + (long)(iVar7 * iVar6 * iVar13),
                         &local_b8);
            uVar12 = (ulong)*(int *)((long)param_3 + 0x14);
            lVar15 = lVar15 + 1;
          } while (lVar15 < (long)uVar12);
          iVar13 = (int)param_3[3];
        }
        iVar7 = iVar7 + 1;
      } while (iVar7 < iVar13);
    }
    uVar9 = 1;
  }
  return uVar9;
}


