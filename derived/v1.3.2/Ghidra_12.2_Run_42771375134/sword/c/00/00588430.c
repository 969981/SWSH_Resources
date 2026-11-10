/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00588430; name: FUN_00588430
 */


undefined4
FUN_00588430(float param_1,undefined1 param_2 [16],float param_3,long param_4,int param_5,
            undefined8 *param_6,undefined8 *param_7,float *param_8,ulong param_9,float *param_10)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  float fVar4;
  bool bVar5;
  bool bVar6;
  int iVar7;
  float *pfVar8;
  undefined8 uVar9;
  long lVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float local_110;
  float local_10c;
  float local_108;
  undefined4 local_104;
  undefined4 local_100;
  undefined4 uStack_fc;
  float local_f8;
  undefined1 auStack_f0 [4];
  undefined1 auStack_ec [4];
  undefined1 auStack_e8 [4];
  undefined1 auStack_e4 [4];
  float local_e0;
  float local_dc;
  undefined1 auStack_d8 [4];
  undefined1 auStack_d4 [4];
  undefined8 local_d0;
  undefined8 local_c8;
  undefined8 local_c0;
  undefined8 local_b8;
  undefined8 local_b0;
  undefined8 local_a8;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined1 auStack_58 [4];
  undefined1 auStack_54 [4];
  
  if (((param_5 != 0) && (param_6 != (undefined8 *)0x0)) &&
     ((*param_10 != 0.0 || (((param_10[1] != 0.0 || (param_10[2] != 0.0)) || (param_10[3] != 0.0))))
     )) {
    uVar1 = *param_7;
    local_c8 = param_7[1];
    local_c0 = param_7[2];
    local_b8 = param_7[3];
    local_d0._0_4_ = (float)uVar1;
    fVar14 = (float)local_d0;
    local_d0._4_4_ = (float)((ulong)uVar1 >> 0x20);
    fVar13 = local_d0._4_4_;
    fVar4 = (float)local_c8;
    fVar11 = (float)local_d0 * (float)local_d0 + local_d0._4_4_ * local_d0._4_4_ +
             (float)local_c8 * (float)local_c8;
    bVar5 = true;
    if ((fVar11 != 0.0) && (bVar5 = false, !NAN(fVar11))) {
      bVar5 = fVar11 == 1.0;
    }
    local_b0 = param_7[4];
    local_a8 = param_7[5];
    local_a0 = param_7[6];
    uStack_98 = param_7[7];
    fVar12 = (float)local_c8;
    if (!bVar5) {
      fVar12 = SQRT(fVar11);
      if (NAN(fVar12)) {
        local_d0 = uVar1;
        fVar12 = sqrtf(fVar11);
      }
      fVar12 = 1.0 / fVar12;
      local_d0._0_4_ = fVar14 * fVar12;
      local_d0._4_4_ = fVar12 * fVar13;
      fVar12 = fVar12 * fVar4;
    }
    fVar14 = (float)local_c0;
    fVar13 = local_c0._4_4_;
    local_c8 = CONCAT44(local_c8._4_4_,fVar12);
    fVar4 = (float)local_b8;
    fVar11 = (float)local_c0 * (float)local_c0 + local_c0._4_4_ * local_c0._4_4_ +
             (float)local_b8 * (float)local_b8;
    bVar5 = true;
    if ((fVar11 != 0.0) && (bVar5 = false, !NAN(fVar11))) {
      bVar5 = fVar11 == 1.0;
    }
    fVar12 = (float)local_b8;
    if (!bVar5) {
      fVar12 = SQRT(fVar11);
      if (NAN(fVar12)) {
        fVar12 = sqrtf(fVar11);
      }
      fVar12 = 1.0 / fVar12;
      local_c0._0_4_ = fVar14 * fVar12;
      local_c0._4_4_ = fVar12 * fVar13;
      fVar12 = fVar12 * fVar4;
    }
    fVar14 = (float)local_b0;
    fVar13 = local_b0._4_4_;
    local_b8 = CONCAT44(local_b8._4_4_,fVar12);
    fVar4 = (float)local_a8;
    fVar12 = (float)local_b0 * (float)local_b0 + local_b0._4_4_ * local_b0._4_4_ +
             (float)local_a8 * (float)local_a8;
    fVar11 = (float)local_a8;
    if ((fVar12 != 0.0) && (fVar12 != 1.0)) {
      fVar11 = SQRT(fVar12);
      if (NAN(fVar11)) {
        fVar11 = sqrtf(fVar12);
      }
      fVar11 = 1.0 / fVar11;
      local_b0._0_4_ = fVar14 * fVar11;
      local_b0._4_4_ = fVar11 * fVar13;
      fVar11 = fVar11 * fVar4;
    }
    local_a8 = CONCAT44(local_a8._4_4_,fVar11);
    FUN_0050f790(param_8,0,0,auStack_54,auStack_58,auStack_d4,auStack_d8,&local_dc,&local_e0,
                 auStack_e4,auStack_e8,auStack_ec,auStack_f0,0,0,0);
    *(undefined4 *)(param_4 + 0x29af4) = 0;
    if (0 < param_5) {
      if (param_1 <= local_dc) {
        param_1 = local_dc;
      }
      if ((param_9 & 1) == 0) {
        lVar10 = 0;
        do {
          local_100 = *(undefined4 *)param_6;
          uStack_fc = *(undefined4 *)((long)param_6 + 4);
          local_f8 = -*(float *)(param_6 + 1);
          FUN_00510120(&local_110,&local_100,&local_d0);
          bVar5 = false;
          bVar6 = true;
          if (0.0 < *(float *)((long)param_6 + 0x34)) {
            bVar5 = false;
            bVar6 = true;
            if (!NAN(local_108) && !NAN(param_1)) {
              bVar5 = local_108 == param_1;
              bVar6 = param_1 <= local_108;
            }
          }
          if (((bVar6 && !bVar5) && (local_dc < local_108)) && (local_108 < local_e0)) {
            local_104 = 0x3f800000;
            fVar14 = local_110 * *param_8 + local_108 * param_8[8];
            fVar13 = *(float *)((long)param_6 + 0xc) * param_3;
            if (fVar14 <= 0.0) {
              fVar14 = -fVar14;
            }
            if (local_108 < fVar14 - *param_8 * fVar13) {
              fVar14 = local_10c * param_8[5] + local_108 * param_8[9];
              if (fVar14 <= 0.0) {
                fVar14 = -fVar14;
              }
              if (local_108 < fVar14 - fVar13 * param_8[5]) goto LAB_00588874;
            }
            iVar7 = *(int *)(param_4 + 0x29af4);
            *(int *)(param_4 + 0x29af4) = iVar7 + 1;
            uVar9 = *param_6;
            pfVar8 = (float *)(*(long *)(param_4 + 0x29af8) + (long)iVar7 * 0x38);
            uVar1 = param_6[1];
            *(undefined8 *)(pfVar8 + 4) = param_6[2];
            *(undefined8 *)pfVar8 = uVar9;
            *(undefined8 *)(pfVar8 + 2) = uVar1;
            uVar1 = param_6[5];
            uVar2 = param_6[6];
            uVar9 = param_6[3];
            uVar3 = param_6[4];
            *pfVar8 = local_110;
            pfVar8[1] = local_10c;
            *(undefined8 *)(pfVar8 + 6) = uVar9;
            *(undefined8 *)(pfVar8 + 8) = uVar3;
            pfVar8[2] = local_108;
            *(undefined8 *)(pfVar8 + 10) = uVar1;
            *(undefined8 *)(pfVar8 + 0xc) = uVar2;
            iVar7 = *(int *)(param_4 + 0x29af4);
            if (*(int *)(param_4 + 0x29af0) <= iVar7) goto LAB_00588888;
          }
LAB_00588874:
          lVar10 = lVar10 + 1;
          param_6 = param_6 + 7;
        } while (lVar10 < param_5);
      }
      else {
        lVar10 = 0;
        do {
          FUN_00510120(&local_110,param_6,&local_d0);
          bVar5 = false;
          bVar6 = true;
          if (0.0 < *(float *)((long)param_6 + 0x34)) {
            bVar5 = false;
            bVar6 = true;
            if (!NAN(local_108) && !NAN(param_1)) {
              bVar5 = local_108 == param_1;
              bVar6 = param_1 <= local_108;
            }
          }
          if (bVar6 && !bVar5) {
            bVar5 = false;
            bVar6 = false;
            if (local_dc < local_108) {
              bVar5 = false;
              bVar6 = true;
              if (!NAN(local_108) && !NAN(local_e0)) {
                bVar5 = local_108 < local_e0;
                bVar6 = false;
              }
            }
            if (bVar5 != bVar6) {
              local_104 = 0x3f800000;
              fVar14 = local_110 * *param_8 + local_108 * param_8[8];
              fVar13 = *(float *)((long)param_6 + 0xc) * param_3;
              if (fVar14 <= 0.0) {
                fVar14 = -fVar14;
              }
              if (local_108 < fVar14 - *param_8 * fVar13) {
                fVar14 = local_10c * param_8[5] + local_108 * param_8[9];
                if (fVar14 <= 0.0) {
                  fVar14 = -fVar14;
                }
                if (local_108 < fVar14 - fVar13 * param_8[5]) goto LAB_00588748;
              }
              iVar7 = *(int *)(param_4 + 0x29af4);
              *(int *)(param_4 + 0x29af4) = iVar7 + 1;
              uVar9 = *param_6;
              pfVar8 = (float *)(*(long *)(param_4 + 0x29af8) + (long)iVar7 * 0x38);
              uVar1 = param_6[1];
              *(undefined8 *)(pfVar8 + 4) = param_6[2];
              *(undefined8 *)pfVar8 = uVar9;
              *(undefined8 *)(pfVar8 + 2) = uVar1;
              uVar1 = param_6[5];
              uVar2 = param_6[6];
              uVar9 = param_6[3];
              uVar3 = param_6[4];
              *pfVar8 = local_110;
              pfVar8[1] = local_10c;
              *(undefined8 *)(pfVar8 + 6) = uVar9;
              *(undefined8 *)(pfVar8 + 8) = uVar3;
              pfVar8[2] = local_108;
              *(undefined8 *)(pfVar8 + 10) = uVar1;
              *(undefined8 *)(pfVar8 + 0xc) = uVar2;
              iVar7 = *(int *)(param_4 + 0x29af4);
              if (*(int *)(param_4 + 0x29af0) <= iVar7) goto LAB_00588888;
            }
          }
LAB_00588748:
          lVar10 = lVar10 + 1;
          param_6 = param_6 + 7;
        } while (lVar10 < param_5);
      }
      iVar7 = *(int *)(param_4 + 0x29af4);
LAB_00588888:
      if (iVar7 != 0) {
        qsort(*(void **)(param_4 + 0x29af8),(long)iVar7,0x38,(__compar_fn_t)PTR_LAB_02713c98);
        return *(undefined4 *)(param_4 + 0x29af4);
      }
    }
  }
  return 0;
}


