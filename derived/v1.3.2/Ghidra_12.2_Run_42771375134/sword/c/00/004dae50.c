/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 004dae50; name: FUN_004dae50
 */


undefined8 FUN_004dae50(long *param_1,long param_2)

{
  float fVar1;
  long *plVar2;
  undefined4 *puVar3;
  undefined4 uVar4;
  byte bVar5;
  ushort uVar6;
  byte bVar7;
  float fVar8;
  uint uVar9;
  int iVar10;
  undefined4 uVar11;
  long *plVar12;
  undefined8 uVar13;
  long *plVar14;
  long lVar15;
  float *pfVar16;
  long *plVar17;
  int iVar18;
  int *piVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  int local_88;
  undefined4 uStack_84;
  undefined4 local_80;
  undefined4 uStack_7c;
  byte local_78 [4];
  undefined1 auStack_74 [4];
  
  plVar17 = *(long **)(param_1[0xe] + 0x18);
  lVar15 = plVar17[0x57];
  uVar4 = *(undefined4 *)((long)param_1 + 0x94);
  if (((int)lVar15 != -1) && (*(undefined1 *)(param_2 + 0x34) = 1, (int)lVar15 == 0)) {
    return 0;
  }
  *(undefined4 *)(param_2 + 8) = uVar4;
  fVar8 = DAT_01d4c2ec;
  fVar1 = DAT_01d4c158;
  local_80 = (undefined4)plVar17[0x3b];
  plVar12 = (long *)param_1[0xe];
  lVar15 = plVar12[3];
  plVar14 = plVar17 + 3;
  plVar2 = (long *)0x0;
  if (plVar17 != (long *)0x0) {
    plVar2 = plVar14;
  }
  fVar20 = *(float *)(lVar15 + 0x1b4) + *(float *)(lVar15 + 0x90);
  if (DAT_01d4c2ec <= fVar20 * DAT_01d4c158) {
    uVar9 = (uint)(DAT_01d4c714 + DAT_01d4bda4 * fVar20);
    fVar20 = (float)(uVar9 & 0x7fffff | 0x3f800000);
    fVar20 = (DAT_01d4c23c + fVar20 * (DAT_01d4c1d8 + DAT_01d4c46c * fVar20)) *
             (float)(uVar9 & 0xff800000);
    pfVar16 = (float *)plVar12[2];
  }
  else {
    fVar20 = 0.0;
    pfVar16 = (float *)plVar12[2];
  }
  if ((pfVar16 != (float *)0x0) &&
     (fVar20 = pfVar16[1] * fVar20, (*(byte *)(lVar15 + 0x94) & 1) != 0)) {
    fVar20 = *pfVar16 * fVar20;
  }
  uStack_7c = uVar4;
  uVar9 = (**(code **)(*plVar12 + 0x98))();
  puVar3 = (undefined4 *)0x0;
  if ((*(uint *)(plVar17 + 1) & 0x10) != 0) {
    puVar3 = &local_80;
  }
  FUN_004d06a0(fVar20,param_1,plVar2,uVar4,uVar9 & 1,auStack_74,local_78,puVar3);
  uVar11 = DAT_01d4c6b8;
  fVar22 = 0.0;
  fVar20 = (float)NEON_fminnm(*(undefined4 *)((long)plVar17 + 0x84),DAT_01d4c6b8);
  if (fVar20 <= 0.0) {
    fVar20 = 0.0;
  }
  fVar21 = *(float *)((long)param_1 + 0x324);
  if (fVar20 != fVar21) {
    *(undefined1 *)((long)param_1 + 0x32b) = 1;
    uVar6 = *(ushort *)PTR_DAT_027133f0;
    *(float *)((long)param_1 + 0x324) = fVar20;
    fVar20 = (float)NEON_ucvtf((uint)*(ushort *)(param_1 + 0x65));
    *(float *)(param_1 + 100) =
         *(float *)(param_1 + 100) + fVar20 * ((fVar21 - *(float *)(param_1 + 100)) / (float)uVar6);
  }
  fVar20 = (float)NEON_fminnm((int)plVar17[0x11],uVar11);
  fVar21 = *(float *)((long)param_1 + 0x334);
  if (fVar20 <= 0.0) {
    fVar20 = 0.0;
  }
  if (fVar20 != fVar21) {
    *(undefined1 *)((long)param_1 + 0x33b) = 1;
    uVar6 = *(ushort *)PTR_DAT_027133f0;
    *(float *)((long)param_1 + 0x334) = fVar20;
    fVar20 = (float)NEON_ucvtf((uint)*(ushort *)(param_1 + 0x67));
    *(float *)(param_1 + 0x66) =
         *(float *)(param_1 + 0x66) +
         fVar20 * ((fVar21 - *(float *)(param_1 + 0x66)) / (float)uVar6);
  }
  fVar20 = (float)NEON_ucvtf((uint)*(ushort *)(param_2 + 0x10));
  fVar20 = *(float *)((long)plVar17 + 0x214) * fVar20;
  fVar21 = 0.5;
  if (fVar20 <= 0.0) {
    fVar21 = -0.5;
  }
  iVar18 = (int)(fVar21 + fVar20);
  plVar12 = param_1 + 0x34;
  if (local_78[0] == 0) {
    if ((int)param_1[0x11] == 1) {
      (**(code **)(*param_1 + 0x90))(param_1);
    }
    else {
      if ((int)param_1[0x11] != 2) goto LAB_004db210;
      if ((*(byte *)(param_1 + 0xc) & 1) == 0) {
        iVar10 = *(int *)((long)param_1 + 0x84);
      }
      else {
        piVar19 = (int *)((long)param_1 + 0x84);
        (**(code **)(param_1[0x34] + 0x28))(plVar12,*piVar19);
        if (*piVar19 == 2) goto LAB_004db16c;
        (**(code **)(*plVar12 + 0x18))(plVar12);
        iVar10 = *piVar19;
      }
      if ((iVar10 == 1) && ((int)plVar17[0x51] < iVar18)) {
        local_88 = iVar18;
        uVar11 = (**(code **)(*plVar12 + 0x20))(plVar12,&local_88);
        *(undefined4 *)(param_2 + 0x30) = uVar11;
        bVar5 = *(byte *)((long)param_1 + 0x8c);
        goto joined_r0x004db14c;
      }
    }
LAB_004db16c:
    bVar7 = 0;
    bVar5 = *(byte *)((long)param_1 + 0x8c);
  }
  else {
    lVar15 = param_1[0xe];
    if ((((*(byte *)(param_1 + 0xc) & 1) == 0) || ((*(byte *)(lVar15 + 0x20) & 1) == 0)) &&
       ((int)param_1[0x11] == 2)) {
      if ((*(byte *)(lVar15 + 0x20) & 1) == 0) {
        iVar10 = FUN_004ddd90(lVar15,plVar17[0x52],(int)plVar17[0x53]);
        if (iVar10 != 1) {
          if (iVar10 != 0x3f) {
            (**(code **)(*param_1 + 0x90))(param_1);
          }
          local_78[0] = 0;
          bVar5 = *(byte *)((long)param_1 + 0x8c);
joined_r0x004db14c:
          bVar7 = 0;
          goto joined_r0x004db14c;
        }
      }
      else {
        iVar10 = (**(code **)(*plVar17 + 0x80))(plVar17,*(undefined4 *)((long)param_1 + 0x84));
        if (iVar10 == 1) {
          uVar13 = 1;
        }
        else {
          if (iVar10 == 2) goto LAB_004db368;
          uVar13 = 0;
        }
        iVar10 = (**(code **)(param_1[0x34] + 0x30))
                           (plVar12,*(undefined4 *)((long)param_1 + 0x84),uVar13);
        if (iVar10 != 1) {
LAB_004db368:
          (**(code **)(*param_1 + 0x90))(param_1);
          return 0;
        }
      }
    }
LAB_004db210:
    bVar7 = 1;
    bVar5 = *(byte *)((long)param_1 + 0x8c);
  }
joined_r0x004db14c:
  if ((bVar5 & 1) != 0) {
    iVar10 = (**(code **)(*plVar17 + 0x80))(plVar17,*(undefined4 *)((long)param_1 + 0x84));
    if (iVar10 == 2) {
      (**(code **)(*param_1 + 0x90))(param_1);
      bVar7 = 0;
    }
    else if (iVar10 == 1) {
      (**(code **)(*param_1 + 0xb0))(param_1);
      FUN_004d1210(param_1,1);
    }
    *(byte *)((long)param_1 + 0x8c) = *(byte *)((long)param_1 + 0x8c) & 0xfe;
  }
  bVar5 = local_78[0];
  iVar10 = (int)plVar17[0x51];
  if (-1 < iVar10) {
    *(int *)(plVar17 + 0x51) = iVar10 - iVar18;
  }
  if ((int)param_1[0x11] != 0) {
    if ((*(byte *)(param_1 + 0xc) & 1) == 0) {
      if (local_78[0] != 0) {
        FUN_0048d110(plVar17,1);
      }
    }
    else if (local_78[0] == 0) {
      FUN_0048e540(plVar17);
    }
  }
  *(byte *)(param_1 + 0xc) = *(byte *)(param_1 + 0xc) & 0xfe | bVar5;
  if ((bool)(bVar7 & iVar10 < iVar18)) {
    if (param_1[0x31] != 0) {
      uVar13 = 1;
      goto LAB_004db334;
    }
    iVar18 = FUN_004db4a0(param_1);
    if (iVar18 == 1) {
      if ((*(ushort *)((long)plVar17 + 0x16c) >> 5 & 1) == 0) {
        (**(code **)(*plVar14 + 0x50))(plVar14,0);
      }
      else if ((*(ushort *)((long)plVar17 + 0x16c) >> 9 & 1) != 0) {
        (**(code **)(*plVar14 + 0x58))(plVar14);
      }
      *(undefined4 *)(plVar17 + 0x27) = 0x42ca0000;
      *(undefined4 *)(param_2 + 8) = *(undefined4 *)((long)param_1 + 0x94);
      *(byte *)(param_1 + 0xc) = *(byte *)(param_1 + 0xc) & 0xfb;
      FUN_004d0100(param_1);
      local_88 = (int)plVar17[0x3b];
      plVar14 = (long *)param_1[0xe];
      lVar15 = plVar14[3];
      fVar20 = *(float *)(lVar15 + 0x1b4) + *(float *)(lVar15 + 0x90);
      uVar11 = *(undefined4 *)((long)param_1 + 0x94);
      if (fVar8 <= fVar20 * fVar1) {
        uVar9 = (uint)(DAT_01d4c714 + DAT_01d4bda4 * fVar20);
        fVar1 = (float)(uVar9 & 0x7fffff | 0x3f800000);
        fVar22 = (DAT_01d4c23c + fVar1 * (DAT_01d4c1d8 + DAT_01d4c46c * fVar1)) *
                 (float)(uVar9 & 0xff800000);
      }
      pfVar16 = (float *)plVar14[2];
      if ((pfVar16 != (float *)0x0) &&
         (fVar22 = pfVar16[1] * fVar22, (*(byte *)(lVar15 + 0x94) & 1) != 0)) {
        fVar22 = *pfVar16 * fVar22;
      }
      uStack_84 = uVar4;
      uVar9 = (**(code **)(*plVar14 + 0x98))();
      piVar19 = (int *)0x0;
      if ((*(uint *)(plVar17 + 1) & 0x10) != 0) {
        piVar19 = &local_88;
      }
      FUN_004d06a0(fVar22,param_1,plVar2,uVar11,uVar9 & 1,auStack_74,local_78,piVar19);
      uVar13 = 1;
      goto LAB_004db334;
    }
    (**(code **)(*param_1 + 0x90))(param_1);
  }
  uVar13 = 0;
LAB_004db334:
  *(byte *)(param_1 + 0xc) = *(byte *)(param_1 + 0xc) | 4;
  return uVar13;
}


