/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00588910; name: FUN_00588910
 */


int FUN_00588910(ulong param_1,ulong param_2,undefined8 param_3,undefined4 param_4,
                undefined4 param_5,undefined4 param_6,long param_7,ulong param_8,int param_9,
                long param_10,long param_11,long param_12,long *param_13,long *param_14,
                undefined8 *param_15,undefined8 param_16,undefined8 param_17,byte param_18,
                undefined8 param_19,undefined8 param_20,undefined8 param_21,undefined8 param_22,
                undefined4 param_23,byte param_24)

{
  uint uVar1;
  undefined8 uVar2;
  bool bVar3;
  int iVar4;
  long lVar5;
  long lVar6;
  long *plVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  undefined4 uVar12;
  float fVar13;
  undefined4 uVar14;
  undefined4 uVar15;
  float fVar16;
  undefined4 uVar17;
  undefined8 local_f8;
  undefined8 local_f0;
  undefined8 local_e8;
  undefined8 local_e0;
  undefined8 local_d8;
  undefined8 local_d0;
  undefined8 local_c8;
  undefined8 uStack_c0;
  undefined8 local_b8;
  undefined8 uStack_b0;
  
  if (*(long *)(param_7 + 0x29af8) == 0) {
    iVar4 = -4;
  }
  else {
    if (param_13 == (long *)0x0) {
      param_13 = *(long **)(param_7 + 0x29ab8);
    }
    if (param_14 == (long *)0x0) {
      param_14 = *(long **)(param_7 + 0x29ac8);
    }
    if ((param_8 & 1) != 0) {
      if (param_9 == 0) {
        return -6;
      }
      if (param_10 == 0) {
        return -6;
      }
      FUN_00588430(param_1,param_2,param_3,param_7,param_9,param_10,param_15,param_16,param_18 & 1,
                   param_20);
    }
    if (*(int *)(param_7 + 0x29af4) == 0) {
      iVar4 = 1;
    }
    else {
      iVar4 = -6;
      if ((param_11 != 0) && (param_12 != 0)) {
        if ((param_11 == param_12) && (*(char *)(*(long *)(param_7 + 0x20) + 0x14ef1) == '\0')) {
          iVar4 = -6;
        }
        else {
          uVar2 = *param_15;
          local_f0 = param_15[1];
          local_e8 = param_15[2];
          local_e0 = param_15[3];
          fVar16 = (float)local_f0;
          local_f8._0_4_ = (float)uVar2;
          fVar11 = (float)local_f8;
          local_f8._4_4_ = (float)((ulong)uVar2 >> 0x20);
          fVar13 = local_f8._4_4_;
          local_d8 = param_15[4];
          local_d0 = param_15[5];
          fVar8 = (float)local_f8 * (float)local_f8 + local_f8._4_4_ * local_f8._4_4_ +
                  (float)local_f0 * (float)local_f0;
          local_c8 = param_15[6];
          uStack_c0 = param_15[7];
          bVar3 = true;
          if ((fVar8 != 0.0) && (bVar3 = false, !NAN(fVar8))) {
            bVar3 = fVar8 == 1.0;
          }
          if (!bVar3) {
            fVar9 = SQRT(fVar8);
            if (NAN(fVar9)) {
              local_f8 = uVar2;
              fVar9 = sqrtf(fVar8);
            }
            fVar9 = 1.0 / fVar9;
            local_f8._0_4_ = fVar11 * fVar9;
            local_f8._4_4_ = fVar13 * fVar9;
            fVar16 = fVar16 * fVar9;
          }
          local_f0 = CONCAT44(local_f0._4_4_,fVar16);
          fVar16 = (float)local_e0;
          fVar11 = (float)local_e8;
          fVar13 = local_e8._4_4_;
          fVar8 = (float)local_e8 * (float)local_e8 + local_e8._4_4_ * local_e8._4_4_ +
                  (float)local_e0 * (float)local_e0;
          if ((fVar8 != 0.0) && (fVar8 != 1.0)) {
            fVar9 = SQRT(fVar8);
            if (NAN(fVar9)) {
              fVar9 = sqrtf(fVar8);
            }
            fVar9 = 1.0 / fVar9;
            local_e8._0_4_ = fVar11 * fVar9;
            local_e8._4_4_ = fVar13 * fVar9;
            fVar16 = fVar16 * fVar9;
          }
          fVar11 = (float)local_d8;
          fVar13 = local_d8._4_4_;
          local_e0 = CONCAT44(local_e0._4_4_,fVar16);
          fVar16 = (float)local_d0;
          fVar8 = (float)local_d8 * (float)local_d8 + local_d8._4_4_ * local_d8._4_4_ +
                  (float)local_d0 * (float)local_d0;
          if ((fVar8 != 0.0) && (fVar8 != 1.0)) {
            fVar9 = SQRT(fVar8);
            if (NAN(fVar9)) {
              fVar9 = sqrtf(fVar8);
            }
            fVar9 = 1.0 / fVar9;
            local_d8._0_4_ = fVar11 * fVar9;
            local_d8._4_4_ = fVar13 * fVar9;
            fVar16 = fVar16 * fVar9;
          }
          local_d0 = CONCAT44(local_d0._4_4_,fVar16);
          uVar15 = *(undefined4 *)(param_11 + 0x54);
          uVar17 = *(undefined4 *)(param_11 + 0x58);
          fVar13 = *(float *)(param_11 + 0x88);
          fVar8 = *(float *)(param_11 + 0x8c);
          fVar16 = *(float *)(param_11 + 0x90);
          fVar11 = *(float *)(param_11 + 0x94);
          uVar14 = *(undefined4 *)(param_12 + 0x54);
          uVar12 = *(undefined4 *)(param_12 + 0x58);
          iVar4 = FUN_0059d300(param_12,0,0,1,0,0);
          if (-1 < iVar4) {
            fVar9 = (float)NEON_ucvtf(uVar15);
            fVar10 = (float)NEON_ucvtf(uVar17);
            uVar14 = NEON_ucvtf(uVar14);
            fVar16 = fVar13 * fVar9 + fVar16;
            fVar11 = fVar8 * fVar10 + fVar11;
            uVar12 = NEON_ucvtf(uVar12);
            FUN_0059d000(0,0);
            lVar5 = param_11;
            do {
              lVar6 = lVar5;
              lVar5 = *(long *)(lVar6 + 0x120);
            } while (lVar5 != 0);
            local_b8 = 0x3f8000003f800000;
            uStack_b0 = 0x3f8000003f800000;
            FUN_00575a10(0,0,uVar14,uVar12,0,0,fVar16,fVar11,param_7,1,0,&local_b8,
                         *(undefined8 *)(lVar6 + 0xa8),0,0);
            uVar1 = (uint)param_24 &
                    (*(uint *)(*(long *)(param_12 + (long)*(int *)(param_12 + 0xa0) * 8 + 0xb8) +
                              0x5c) & 0x80000) >> 0x13;
            (**(code **)(**(long **)(param_7 + 0x20) + 0x160))(*(long **)(param_7 + 0x20),uVar1);
            (**(code **)(**(long **)(param_7 + 0x20) + 0x168))(*(long **)(param_7 + 0x20),uVar1);
            (**(code **)(*param_13 + 0x78))(param_13,0xf);
            (**(code **)(*param_14 + 0x78))(param_14,3);
            lVar5 = param_11;
            do {
              lVar6 = lVar5;
              lVar5 = *(long *)(lVar6 + 0x120);
            } while (lVar5 != 0);
            plVar7 = *(long **)(lVar6 + 0xa8);
            uVar15 = (**(code **)(*plVar7 + 0x80))(plVar7);
            (**(code **)(*plVar7 + 0x78))(plVar7,8);
            do {
              lVar5 = param_11;
              param_11 = *(long *)(lVar5 + 0x120);
            } while (param_11 != 0);
            iVar4 = FUN_00587720(uVar14,uVar12,0,0,fVar16,fVar11,param_1 & 0xffffffff,
                                 param_2 & 0xffffffff,param_7,*(int *)(param_7 + 0x29af4),
                                 *(long *)(param_7 + 0x29af8),*(undefined8 *)(lVar5 + 0xa8),param_13
                                 ,param_14,&local_f8,param_16,param_17,param_19,(int)param_3,param_4
                                 ,param_20,param_21,param_22,param_5,param_6,param_23,(char)uVar1,0)
            ;
            (**(code **)(*plVar7 + 0x78))(plVar7,uVar15);
            (**(code **)(**(long **)(param_7 + 0x20) + 0x160))(*(long **)(param_7 + 0x20),0);
            (**(code **)(**(long **)(param_7 + 0x20) + 0x168))(*(long **)(param_7 + 0x20),0);
          }
        }
      }
    }
  }
  return iVar4;
}


