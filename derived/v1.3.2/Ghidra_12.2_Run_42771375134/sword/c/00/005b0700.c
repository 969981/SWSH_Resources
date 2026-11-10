/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 005b0700; name: FUN_005b0700
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4
FUN_005b0700(float param_1,float param_2,long param_3,int param_4,int param_5,long param_6,
            long param_7,long param_8,float *param_9,uint param_10)

{
  float *pfVar1;
  uint uVar2;
  uint uVar3;
  byte bVar4;
  undefined *puVar5;
  bool bVar6;
  undefined4 uVar7;
  int iVar8;
  long *plVar9;
  float *pfVar10;
  ulong uVar11;
  long lVar12;
  long lVar13;
  int *piVar14;
  uint uVar15;
  ulong uVar16;
  long *plVar17;
  int iVar18;
  undefined8 uVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  undefined4 uVar24;
  float fVar25;
  undefined4 uVar26;
  float fVar27;
  undefined4 local_94;
  float local_78;
  float local_74;
  
  lVar13 = param_6;
  do {
    lVar12 = lVar13;
    lVar13 = *(long *)(lVar12 + 0x120);
  } while (lVar13 != 0);
  uVar7 = (**(code **)(**(long **)(lVar12 + 0xa8) + 0x80))();
  lVar13 = param_6;
  do {
    lVar12 = lVar13;
    lVar13 = *(long *)(lVar12 + 0x120);
  } while (lVar13 != 0);
  plVar9 = *(long **)(lVar12 + 0xa8);
  (**(code **)(*plVar9 + 0x78))(plVar9,8);
  if (param_8 == 0) {
    local_94 = 0xffffffff;
    if (*PTR_DAT_027139e0 != '\0') goto LAB_005b07f4;
LAB_005b0828:
    uVar16 = 0;
  }
  else {
    lVar13 = param_8;
    do {
      lVar12 = lVar13;
      lVar13 = *(long *)(lVar12 + 0x120);
    } while (lVar13 != 0);
    local_94 = (**(code **)(**(long **)(lVar12 + 0xa8) + 0x80))();
    lVar13 = param_8;
    do {
      lVar12 = lVar13;
      lVar13 = *(long *)(lVar12 + 0x120);
    } while (lVar13 != 0);
    plVar9 = *(long **)(lVar12 + 0xa8);
    (**(code **)(*plVar9 + 0x88))(plVar9,1);
    if (*PTR_DAT_027139e0 == '\0') goto LAB_005b0828;
LAB_005b07f4:
    if (*(char *)(param_3 + 0x3f0) == '\0') goto LAB_005b0828;
    uVar16 = (ulong)(*(float *)(param_3 + 0x3f4) + *(float *)(param_3 + 0x3f4) != 0.0);
  }
  puVar5 = PTR_DAT_027139b0;
  iVar8 = *(int *)PTR_DAT_027139b0;
  if (iVar8 < 1) {
    plVar9 = (long *)FUN_005b9a50(*(undefined8 *)PTR_PTR_02713988,0x29c08,
                                  "../src/GPU\\GPUClassUtil.h",0x49,0);
    FUN_0056dc10(plVar9,0);
    *(long **)PTR_DAT_027139b8 = plVar9;
    *(undefined4 *)puVar5 = 1;
    if (plVar9 != (long *)0x0) goto LAB_005b0864;
LAB_005b08f0:
    iVar8 = 0;
  }
  else {
    plVar9 = *(long **)PTR_DAT_027139b8;
    *(int *)PTR_DAT_027139b0 = iVar8 + 1;
    if (iVar8 + 1 < 2) {
      if (plVar9 == (long *)0x0) goto LAB_005b08f0;
LAB_005b0864:
      uVar19 = *(undefined8 *)PTR_PTR_02713988;
      (**(code **)(*plVar9 + 0x20))(plVar9);
      FUN_005b9b10(uVar19,plVar9);
      iVar8 = 0;
      *(undefined8 *)PTR_DAT_027139b8 = 0;
    }
  }
  *(int *)puVar5 = iVar8;
  FUN_0059d300(param_7,0,0,1,0,0);
  FUN_0059d000(0,0);
  bVar4 = *(byte *)(param_3 + 0x251);
  uVar11 = (ulong)bVar4;
  if (param_5 == 2) {
    iVar8 = *(int *)((long)plVar9 + (long)param_4 * 4 + uVar16 * 0x14 + uVar11 * 0x50 + 0x1b2b8);
joined_r0x005b0984:
    if (iVar8 != 0) {
      iVar18 = param_4;
      goto LAB_005b0a78;
    }
  }
  else {
    if (param_5 == 1) {
      lVar13 = (long)plVar9 + (long)param_4 * 4 + uVar16 * 0x14 + uVar11 * 0x50;
      piVar14 = (int *)(lVar13 + 0x1b218);
      uVar15 = 0xb178;
LAB_005b09ec:
      if ((param_10 & 1) == 0) {
        piVar14 = (int *)(lVar13 + (ulong)(uVar15 | 0x10000));
      }
      iVar8 = *piVar14;
      goto joined_r0x005b0984;
    }
    if (param_5 == 0) {
      lVar13 = (long)plVar9 + (long)param_4 * 4 + uVar16 * 0x14 + uVar11 * 0x50;
      piVar14 = (int *)(lVar13 + 0x1b0d8);
      uVar15 = 0xb038;
      goto LAB_005b09ec;
    }
  }
  iVar18 = param_4 + -1;
  if (param_5 == 2) {
    iVar8 = *(int *)((long)plVar9 + (long)param_4 * 4 + uVar16 * 0x14 + uVar11 * 0x50 + 0x1b2b4);
  }
  else {
    if (param_5 == 1) {
      lVar13 = (long)plVar9 + (long)param_4 * 4 + uVar16 * 0x14 + uVar11 * 0x50;
      piVar14 = (int *)(lVar13 + 0x1b214);
      uVar15 = 0xb174;
    }
    else {
      if (param_5 != 0) {
        iVar8 = 0;
        goto LAB_005b0a78;
      }
      lVar13 = (long)plVar9 + (long)param_4 * 4 + uVar16 * 0x14 + uVar11 * 0x50;
      piVar14 = (int *)(lVar13 + 0x1b0d4);
      uVar15 = 0xb034;
    }
    if ((param_10 & 1) == 0) {
      piVar14 = (int *)(lVar13 + (ulong)(uVar15 | 0x10000));
    }
    iVar8 = *piVar14;
  }
LAB_005b0a78:
  plVar17 = (long *)plVar9[6];
  (**(code **)(*plVar17 + 0xe8))(plVar17,iVar8);
  FUN_005b0e60(param_3,bVar4 != 0,uVar16);
  fVar21 = 0.0;
  FUN_005b11b0(0,param_3,bVar4 != 0,uVar16,iVar18);
  pfVar10 = (float *)FUN_00573970();
  *pfVar10 = param_2;
  pfVar10[1] = 0.0;
  pfVar10[2] = 0.0;
  pfVar10[3] = param_1;
  if ((int)uVar16 != 0) {
    fVar20 = 0.0;
    if (*(char *)(param_3 + 0x3f0) != '\0') {
      fVar20 = *(float *)(param_3 + 0x3f4) + *(float *)(param_3 + 0x3f4);
      fVar21 = fVar20 * DAT_01d4bc88;
      if (fVar20 * DAT_01d4bc88 <= 0.0) {
        fVar21 = -(fVar20 * DAT_01d4bc88);
      }
      fVar20 = fVar20 * DAT_01d4bd94;
    }
    if (fVar20 <= 0.0) {
      fVar20 = -fVar20;
    }
    if (fVar21 <= fVar20) {
      fVar21 = fVar20;
    }
    *pfVar10 = fVar21 + param_2;
    local_74 = param_1 - fVar21;
    local_78 = 0.0;
    pfVar1 = &local_74;
    if (param_1 - fVar21 <= 0.0) {
      pfVar1 = &local_78;
    }
    pfVar10[3] = *pfVar1;
  }
  if (param_5 == 2) {
    fVar21 = DAT_01d4bec4;
    fVar20 = DAT_01d4c554;
  }
  else {
    fVar22 = *(float *)(param_3 + 0x178);
    fVar20 = fVar22 + fVar22 + 0.5;
    bVar6 = (param_10 & 1) == 0;
    fVar21 = fVar22 + 0.25;
    if (bVar6) {
      fVar21 = fVar20;
    }
    if (bVar6) {
      fVar20 = fVar22 * 4.0 + 1.0;
    }
  }
  fVar20 = -1.0 / (fVar20 - fVar21);
  pfVar10[4] = fVar20;
  pfVar10[5] = 1.0 - fVar21 * fVar20;
  pfVar10[6] = 0.0;
  pfVar10[7] = 0.0;
  pfVar10[8] = *param_9;
  pfVar10[9] = param_9[1];
  pfVar10[10] = param_9[2];
  pfVar10[0xb] = param_9[3];
  (**(code **)(*plVar17 + 0xb0))(plVar17,(int)plVar9[0x20],pfVar10,3);
  lVar13 = param_6;
  do {
    lVar12 = lVar13;
    lVar13 = *(long *)(lVar12 + 0x120);
  } while (lVar13 != 0);
  (**(code **)(*plVar17 + 0xd0))(plVar17,(int)plVar9[8],*(undefined8 *)(lVar12 + 0xa8));
  if (param_8 == 0) {
    lVar13 = param_6;
    do {
      lVar12 = lVar13;
      lVar13 = *(long *)(lVar12 + 0x120);
    } while (lVar13 != 0);
    uVar19 = *(undefined8 *)(lVar12 + 0xa8);
  }
  else {
    lVar13 = param_8;
    do {
      lVar12 = lVar13;
      lVar13 = *(long *)(lVar12 + 0x120);
    } while (lVar13 != 0);
    uVar19 = *(undefined8 *)(lVar12 + 0xa8);
  }
  (**(code **)(*plVar17 + 0xd0))(plVar17,*(undefined4 *)((long)plVar9 + 0x44),uVar19);
  (**(code **)(*plVar17 + 0xd0))(plVar17,(int)plVar9[9],*(undefined8 *)(param_3 + 0x260));
  (**(code **)(*plVar17 + 0xd0))
            (plVar17,*(undefined4 *)((long)plVar9 + 0x4c),
             *(undefined8 *)(*(long *)(param_3 + 0x2d0) + (long)*(int *)(param_3 + 0x2ac) * 8));
  fVar22 = *(float *)(param_6 + 0x88);
  fVar25 = *(float *)(param_6 + 0x8c);
  fVar20 = (float)NEON_ucvtf(*(undefined4 *)(param_6 + 0x58));
  fVar21 = (float)NEON_ucvtf(*(undefined4 *)(param_6 + 0x54));
  fVar23 = *(float *)(param_6 + 0x90);
  fVar27 = *(float *)(param_6 + 0x94);
  uVar26 = NEON_ucvtf(*(undefined4 *)(param_7 + 0x58));
  uVar24 = NEON_ucvtf(*(undefined4 *)(param_7 + 0x54));
  if (((DAT_027635f0 & 1) == 0) && (iVar8 = __cxa_guard_acquire(&DAT_027635f0), iVar8 != 0)) {
    _DAT_0276350c = 0xdd5254a56c078966;
    _DAT_02763514 = 0x3df95b3b9523b81;
    __cxa_guard_release(&DAT_027635f0);
  }
  uVar19 = _DAT_02763514;
  uVar15 = DAT_0276350c ^ DAT_0276350c << 0xb;
  uVar15 = uVar15 ^ (int)uVar15 >> 8 ^ DAT_02763518;
  uVar2 = uVar15 ^ DAT_02763518 >> 0x13;
  uVar3 = DAT_02763510 ^ DAT_02763510 << 0xb;
  _DAT_02763514 = CONCAT44(uVar3 ^ (int)uVar3 >> 8 ^ uVar2 ^ uVar15 >> 0x13,uVar2);
  _DAT_0276350c = uVar19;
  uVar24 = FUN_00572300(0,0,uVar24,uVar26,0,0,fVar22 * fVar21 + fVar23,fVar25 * fVar20 + fVar27,
                        plVar9,0);
  do {
    lVar13 = param_6;
    param_6 = *(long *)(lVar13 + 0x120);
  } while (param_6 != 0);
  plVar9 = *(long **)(lVar13 + 0xa8);
  (**(code **)(*plVar9 + 0x78))(plVar9,uVar7);
  if (param_8 != 0) {
    do {
      lVar13 = param_8;
      param_8 = *(long *)(lVar13 + 0x120);
    } while (param_8 != 0);
    plVar9 = *(long **)(lVar13 + 0xa8);
    (**(code **)(*plVar9 + 0x78))(plVar9,local_94);
  }
  return uVar24;
}


