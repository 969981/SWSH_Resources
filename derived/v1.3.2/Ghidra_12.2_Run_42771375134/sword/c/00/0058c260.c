/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0058c260; name: FUN_0058c260
 */


/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8
FUN_0058c260(undefined4 param_1,undefined4 param_2,float param_3,float param_4,float param_5,
            float param_6,float param_7,float param_8,long param_9,undefined8 *param_10,
            long *param_11,int param_12,uint param_13,uint param_14,float *param_15,
            undefined4 param_16,undefined4 param_17,float param_18,float param_19,float param_20,
            float param_21,float param_22,float param_23,undefined4 param_24,undefined4 param_25,
            undefined4 param_26)

{
  long lVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  float fVar5;
  float fVar6;
  bool bVar7;
  int iVar8;
  undefined8 uVar9;
  ulong uVar10;
  uint uVar11;
  int iVar12;
  ulong uVar13;
  long lVar14;
  uint uVar15;
  undefined8 *puVar16;
  undefined8 *puVar17;
  long lVar18;
  undefined8 *puVar19;
  long lVar20;
  ulong uVar21;
  long lVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  float fVar28;
  float fVar29;
  float fVar30;
  undefined8 local_168;
  undefined8 local_160;
  undefined8 local_158;
  undefined8 local_150;
  undefined8 local_148;
  undefined8 local_140;
  undefined8 local_138;
  undefined8 local_130;
  undefined8 local_128;
  undefined8 uStack_120;
  undefined8 local_118;
  undefined8 uStack_110;
  undefined8 local_108;
  undefined8 uStack_100;
  undefined8 local_f8;
  undefined8 uStack_f0;
  undefined8 local_e8;
  undefined8 local_e0;
  undefined8 local_d8;
  undefined8 local_d0;
  undefined8 local_c8;
  undefined8 local_c0;
  undefined8 local_b8;
  undefined8 local_b0;
  
  if (param_15 == (float *)0x0) {
    uVar21 = 0;
  }
  else {
    uVar21 = (ulong)(*param_15 != 0.0);
  }
  fVar23 = SQRT((float)param_12);
  if (NAN(fVar23)) {
    fVar23 = sqrtf((float)param_12);
  }
  iVar12 = (int)fVar23;
  uVar15 = iVar12 - 3;
  if (4 < (int)uVar15) {
    uVar15 = 5;
  }
  if (iVar12 < 4) {
    uVar15 = 0;
  }
  uVar10 = (ulong)uVar15;
  iVar8 = *(int *)(param_9 + uVar21 * 0x18 + uVar10 * 4 + 0x7e28);
  uVar13 = uVar10;
  if (3 < iVar12 && iVar8 == 0) {
    uVar13 = uVar10 - 1;
    iVar8 = *(int *)(param_9 + uVar21 * 0x18 + uVar13 * 4 + 0x7e28);
    if (1 < uVar15 && iVar8 == 0) {
      lVar14 = uVar10 - 2;
      iVar12 = *(int *)(param_9 + uVar21 * 0x18 + lVar14 * 4 + 0x7e28);
      bVar7 = iVar12 == 0;
      if (2 < uVar15 && iVar12 == 0) {
        lVar14 = uVar10 - 3;
        iVar12 = *(int *)(param_9 + uVar21 * 0x18 + lVar14 * 4 + 0x7e28);
        bVar7 = iVar12 == 0;
        if (3 < uVar15 && iVar12 == 0) {
          lVar14 = uVar10 - 4;
          iVar12 = *(int *)(param_9 + uVar21 * 0x18 + lVar14 * 4 + 0x7e28);
          bVar7 = iVar12 == 0;
          if (4 < uVar15 && iVar12 == 0) {
            iVar8 = *(int *)(param_9 + uVar21 * 0x18 + (uVar10 - 5) * 4 + 0x7e28);
            uVar13 = uVar10 - 5;
            goto joined_r0x0058c36c;
          }
        }
      }
      iVar12 = (int)lVar14;
      if (bVar7) {
        return 0xfffffffc;
      }
      goto LAB_0058c41c;
    }
  }
joined_r0x0058c36c:
  iVar12 = (int)uVar13;
  if (iVar8 == 0) {
    return 0xfffffffc;
  }
LAB_0058c41c:
  iVar12 = (iVar12 + 3) * (iVar12 + 3);
  (**(code **)(**(long **)(param_9 + 0x30) + 0xe8))();
  if (((DAT_02760718 & 1) == 0) && (iVar8 = __cxa_guard_acquire(&DAT_02760718), iVar8 != 0)) {
    __cxa_guard_release(&DAT_02760718);
  }
  fVar28 = (float)iVar12;
  fVar23 = SQRT(fVar28);
  if (NAN(fVar23)) {
    fVar23 = sqrtf(fVar28);
  }
  fVar6 = DAT_01d4c4d4;
  fVar5 = DAT_01d4bdf0;
  fVar27 = DAT_01d4bdcc;
  fVar26 = DAT_01d4bda0;
  if ((DAT_027605d5 != '\x01') || ((param_14 & 1) != 0)) {
    uVar11 = (uint)((long)(int)fVar23 + -3);
    uVar15 = uVar11;
    if (DAT_027605d5 == '\0') {
      uVar15 = 0;
    }
    if (DAT_027605d5 == '\0') {
      uVar11 = 5;
    }
    if ((int)uVar15 <= (int)uVar11) {
      lVar14 = (-(ulong)(uVar15 >> 0x1f) & 0xfffffff000000000 | (ulong)uVar15 << 4) + 0x30;
      puVar16 = &DAT_0275edd8 + (long)(int)uVar15 * 0x80;
      uVar2 = (param_13 ^ param_13 >> 0x1e) * 0x6c078965 + 1;
      uVar3 = (uVar2 ^ uVar2 >> 0x1e) * 0x6c078965 + 2;
      uVar4 = (uVar3 ^ uVar3 >> 0x1e) * 0x6c078965 + 3;
      lVar18 = (long)(int)uVar15;
      do {
        if (((DAT_02760720 & 1) == 0) && (iVar8 = __cxa_guard_acquire(&DAT_02760720), iVar8 != 0)) {
          DAT_027605fc = uVar2;
          DAT_02760600 = uVar3;
          DAT_02760604 = uVar4;
          DAT_02760608 = (uVar4 ^ uVar4 >> 0x1e) * 0x6c078965 + 4;
          __cxa_guard_release(&DAT_02760720);
        }
        if (-3 < lVar18) {
          lVar1 = lVar18 + 3;
          fVar30 = (float)(int)lVar1;
          lVar22 = 0;
          puVar17 = puVar16;
          do {
            lVar20 = 0;
            puVar19 = puVar17;
            do {
              uVar15 = DAT_027605fc;
              DAT_027605fc = DAT_02760600;
              uVar15 = uVar15 ^ uVar15 << 0xb;
              uVar15 = uVar15 ^ (int)uVar15 >> 8 ^ DAT_02760608 ^ DAT_02760608 >> 0x13;
              DAT_02760600 = DAT_02760604;
              DAT_02760604 = DAT_02760608;
              fVar25 = (float)(int)lVar22 / fVar30 +
                       (1.0 / fVar30) * ((float)(uVar15 & 0x7fffffff) * fVar26 + 0.0);
              fVar24 = SQRT(fVar25);
              DAT_02760608 = uVar15;
              if (NAN(fVar24)) {
                fVar24 = sqrtf(fVar25);
              }
              uVar15 = DAT_027605fc;
              DAT_027605fc = DAT_02760600;
              uVar15 = uVar15 ^ uVar15 << 0xb;
              uVar15 = uVar15 ^ (int)uVar15 >> 8 ^ DAT_02760608 ^ DAT_02760608 >> 0x13;
              fVar29 = fVar24 * fVar5 + fVar6;
              fVar24 = (float)(int)lVar20 / fVar30 +
                       (1.0 / fVar30) * ((float)(uVar15 & 0x7fffffff) * fVar26 + 0.0);
              fVar25 = (fVar24 + fVar24) * fVar27;
              DAT_02760600 = DAT_02760604;
              DAT_02760604 = DAT_02760608;
              DAT_02760608 = uVar15;
              fVar24 = cosf(fVar25);
              fVar25 = sinf(fVar25);
              lVar20 = lVar20 + 1;
              *puVar19 = 0;
              *(float *)(puVar19 + -1) = fVar29 * fVar24;
              *(float *)((long)puVar19 + -4) = fVar29 * fVar25;
              puVar19 = puVar19 + 2;
            } while (lVar20 < lVar1);
            lVar22 = lVar22 + 1;
            puVar17 = (undefined8 *)((long)puVar17 + lVar14);
          } while (lVar22 < lVar1);
        }
        puVar16 = puVar16 + 0x80;
        lVar14 = lVar14 + 0x10;
        bVar7 = lVar18 < (int)uVar11;
        lVar18 = lVar18 + 1;
      } while (bVar7);
    }
    DAT_027605d5 = '\x01';
  }
  (**(code **)(**(long **)(param_9 + 0x30) + 0xb0))
            (*(long **)(param_9 + 0x30),*(undefined4 *)(param_9 + 0xf8),
             &DAT_0275edd0 + ((long)(int)fVar23 + -3) * 0x100,iVar12);
  fVar23 = logf(param_18 + 1.0);
  DAT_02760c18 = fVar23 / DAT_01d4c4dc;
  DAT_02760c1c = 0.0;
  DAT_02760c20 = 0;
  DAT_02760c24 = 0;
  (**(code **)(**(long **)(param_9 + 0x30) + 0xb0))
            (*(long **)(param_9 + 0x30),*(undefined4 *)(param_9 + 0x104),&DAT_02760c18,1);
  fVar23 = 0.5 / param_4 + 0.5 / param_4;
  if (param_22 <= 0.0) {
    param_22 = DAT_01d4c73c;
  }
  DAT_02760c1c = param_20 / param_19;
  DAT_02760c20 = 0;
  DAT_02760c24 = 0;
  DAT_02760c38 = param_25;
  DAT_02760c3c = param_26;
  DAT_02760c28._4_4_ = param_21;
  if (param_21 <= fVar23) {
    DAT_02760c28._4_4_ = fVar23;
  }
  DAT_02760c30._4_4_ = param_22;
  if (param_22 <= fVar23) {
    DAT_02760c30._4_4_ = fVar23;
  }
  ram0x02760c50 = 0;
  fVar23 = param_4 / param_3;
  DAT_02760c18 = fVar23 * DAT_02760c1c;
  DAT_02760c28._0_4_ = fVar23 * DAT_02760c28._4_4_;
  DAT_02760c30._0_4_ = fVar23 * DAT_02760c30._4_4_;
  DAT_02760c40 = (param_20 * param_23) / fVar28;
  DAT_02760c44._0_4_ = param_24;
  DAT_02760c44._4_4_ = param_17;
  DAT_02760c4c._0_4_ = param_18;
  if ((int)uVar21 != 0) {
    ram0x02760c50 = CONCAT44(param_15[1] + DAT_01d4c1f4,*param_15 / DAT_01d4c6d8);
  }
  fVar23 = param_8 - param_6;
  fVar28 = param_7 - param_5;
  DAT_02760c5c._0_4_ = fVar23 * 0.5;
  DAT_02760c54._4_4_ = fVar28 * 0.5;
  DAT_02760c5c._4_4_ = (param_5 + 0.5) * fVar28;
  DAT_02760c64._0_4_ = (param_6 + 0.5) * fVar23;
  if (*(char *)(*(long *)(param_9 + 0x20) + 0x58) == '\0') {
    DAT_02760c5c._0_4_ = -(float)DAT_02760c5c;
  }
  fVar26 = 1.0;
  if ((param_13 & 1) != 0) {
    fVar26 = -1.0;
  }
  if ((int)param_13 < 0) {
    param_13 = param_13 + 1;
  }
  fVar27 = 1.0;
  if ((param_13 >> 1 & 1) != 0) {
    fVar27 = -1.0;
  }
  DAT_02760c64._4_4_ = (param_3 / fVar28) * fVar26;
  DAT_02760c6c._0_4_ = (param_4 / fVar23) * fVar27;
  ram0x02760c70 = 0;
  (**(code **)(**(long **)(param_9 + 0x30) + 0xb0))
            (*(long **)(param_9 + 0x30),*(undefined4 *)(param_9 + 0xfc),&DAT_02760c18,6);
  local_128 = *param_10;
  uStack_120 = param_10[1];
  local_118 = param_10[2];
  uStack_110 = param_10[3];
  local_108 = param_10[4];
  uStack_100 = param_10[5];
  local_f8 = param_10[6];
  uStack_f0 = param_10[7];
  FUN_005156a0(&local_168,param_10);
  local_d0 = local_150;
  local_d8 = local_158;
  local_e0 = local_160;
  local_e8 = local_168;
  local_b0 = local_130;
  local_b8 = local_138;
  local_c0 = local_140;
  local_c8 = local_148;
  (**(code **)(**(long **)(param_9 + 0x30) + 200))
            (*(long **)(param_9 + 0x30),*(undefined4 *)(param_9 + 0x144),&local_128,2);
  (**(code **)(*param_11 + 0x78))(param_11,4);
  (**(code **)(*param_11 + 0x88))(param_11,1);
  (**(code **)(**(long **)(param_9 + 0x30) + 0xd0))
            (*(long **)(param_9 + 0x30),*(undefined4 *)(param_9 + 0x40),param_11);
  uVar9 = FUN_00572010(param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8,param_9,
                       param_16);
  return uVar9;
}


