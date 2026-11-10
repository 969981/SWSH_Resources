/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00558ed0; name: FUN_00558ed0
 */


uint FUN_00558ed0(long param_1)

{
  long *plVar1;
  float *pfVar2;
  uint uVar3;
  undefined4 uVar4;
  uint uVar5;
  bool bVar6;
  undefined *puVar7;
  uint uVar8;
  int iVar9;
  ulong uVar10;
  long *plVar11;
  long *plVar12;
  long lVar13;
  long lVar14;
  long *plVar15;
  undefined8 uVar16;
  ulong uVar17;
  long lVar18;
  float *pfVar19;
  long lVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  float fVar28;
  float fVar29;
  float local_228;
  float fStack_224;
  float local_220;
  float fStack_21c;
  float local_218 [4];
  float local_208 [60];
  long alStack_118 [19];
  
  puVar7 = PTR_DAT_027139b0;
  iVar9 = *(int *)PTR_DAT_027139b0;
  if (iVar9 < 1) {
    plVar15 = (long *)FUN_005b9a50(*(undefined8 *)PTR_PTR_02713988,0x29c08,
                                   "../src/GPU\\GPUClassUtil.h",0x49,0);
    FUN_0056dc10(plVar15,0);
    *(long **)PTR_DAT_027139b8 = plVar15;
    *(undefined4 *)puVar7 = 1;
  }
  else {
    plVar15 = *(long **)PTR_DAT_027139b8;
    *(int *)PTR_DAT_027139b0 = iVar9 + 1;
    if (1 < iVar9 + 1) goto LAB_00558fbc;
  }
  if (plVar15 == (long *)0x0) {
    iVar9 = 0;
  }
  else {
    uVar16 = *(undefined8 *)PTR_PTR_02713988;
    (**(code **)(*plVar15 + 0x20))(plVar15);
    FUN_005b9b10(uVar16,plVar15);
    iVar9 = 0;
    *(undefined8 *)PTR_DAT_027139b8 = 0;
  }
LAB_00558fbc:
  *(int *)puVar7 = iVar9;
  uVar8 = *(uint *)(param_1 + 0x3d8);
  uVar17 = (ulong)uVar8;
  uVar4 = *(undefined4 *)(param_1 + 0x2e4);
  lVar18 = (long)(int)uVar8;
  if (0 < (int)uVar8) {
    plVar11 = (long *)(*(long *)(param_1 + 800) + 0x28);
    plVar12 = alStack_118 + 2;
    uVar10 = uVar17;
    do {
      lVar14 = *plVar11;
      plVar1 = plVar11 + -2;
      plVar11 = plVar11 + 7;
      lVar20 = *plVar1;
      if (lVar14 != 0) {
        lVar20 = lVar14;
      }
      uVar10 = uVar10 - 1;
      *plVar12 = lVar20;
      plVar12 = plVar12 + 1;
    } while (uVar10 != 0);
    if (0xf < (int)uVar8) {
      uVar10 = FUN_00557700(param_1);
      uVar16 = *(undefined8 *)(param_1 + 0x318);
      bVar6 = true;
      switch(*(undefined4 *)(param_1 + 0xd4)) {
      case 0x1c:
      case 0x1d:
      case 0x1e:
      case 0x1f:
      case 0x20:
      case 0x31:
      case 0x32:
      case 0x33:
      case 0x34:
      case 0x3d:
      case 0x3e:
      case 0x3f:
      case 0x40:
      case 0x41:
      case 0x57:
      case 0x58:
      case 0x5b:
      case 0x5d:
        if ((uVar10 & 1) == 0) {
          bVar6 = true;
        }
        else {
          if (*(char *)(param_1 + 0x411) != '\0') {
            FUN_00540e00(*(undefined8 *)(param_1 + 0x20),0);
          }
          bVar6 = false;
        }
      }
      fVar21 = (float)FUN_00558300(param_1);
      if (((DAT_0275ea70 & 1) == 0) && (iVar9 = __cxa_guard_acquire(&DAT_0275ea70), iVar9 != 0)) {
        DAT_0275ea88 = 0x3f8000003f800000;
        DAT_0275ea90 = 0x3f8000003f800000;
        __cxa_guard_release(&DAT_0275ea70);
      }
      puVar7 = PTR_DAT_02713c40;
      iVar9 = *(int *)(*(long *)(param_1 + 0x170) + 0x2c);
      uVar5 = (iVar9 + *(int *)(param_1 + 0x414)) - 1;
      if ((int)(uVar8 - 3) <= (int)uVar5) {
        uVar5 = uVar8 - 3;
      }
      if (0 < (int)uVar8) {
        iVar9 = -*(int *)(param_1 + 0x414) - iVar9;
        if (iVar9 <= (int)(2 - uVar8)) {
          iVar9 = 2 - uVar8;
        }
        uVar10 = 0;
        pfVar19 = local_208 + 2;
        do {
          fVar22 = powf(*(float *)(param_1 + 0x3fc),(float)(int)uVar10);
          fVar22 = fVar21 * (1.0 / fVar22);
          if ((uVar10 < uVar5) ||
             (fVar24 = *(float *)(*(long *)(param_1 + 0x170) + 0x28), fVar24 <= 0.0)) {
            pfVar19[-2] = fVar22;
            pfVar19[-1] = fVar22;
            *pfVar19 = fVar22;
          }
          else {
            uVar3 = iVar9 + 1 + (int)uVar10;
            pfVar2 = (float *)(puVar7 + (ulong)((uVar3 & ((int)uVar3 >> 0x1f ^ 0xffffffffU)) % 3 + 1
                                               ) * 0x10);
            fVar26 = DAT_0275ea88._4_4_ + fVar24 * (pfVar2[1] - DAT_0275ea88._4_4_);
            fVar25 = (float)DAT_0275ea88 + fVar24 * (*pfVar2 - (float)DAT_0275ea88);
            fVar23 = fVar25;
            if (fVar25 <= 0.0) {
              fVar23 = -fVar25;
            }
            fVar27 = (float)DAT_0275ea90 + fVar24 * (pfVar2[2] - (float)DAT_0275ea90);
            fVar28 = fVar26;
            if (fVar26 <= 0.0) {
              fVar28 = -fVar26;
            }
            fVar29 = fVar27;
            if (fVar27 <= 0.0) {
              fVar29 = -fVar27;
            }
            fVar23 = fVar22 * (3.0 / (fVar23 + fVar28 + fVar29));
            fVar22 = (DAT_0275ea90._4_4_ + fVar24 * (pfVar2[3] - DAT_0275ea90._4_4_)) * fVar23;
            pfVar19[-2] = fVar25 * fVar23;
            pfVar19[-1] = fVar26 * fVar23;
            *pfVar19 = fVar27 * fVar23;
          }
          uVar10 = uVar10 + 1;
          pfVar19[1] = fVar22;
          pfVar19 = pfVar19 + 4;
        } while (uVar17 != uVar10);
        if (1 < (int)uVar8) {
          lVar20 = lVar18 + 1;
          plVar11 = alStack_118 + lVar18;
          pfVar19 = local_218 + lVar18 * 4;
          lVar18 = lVar18 * 0x38 + -0x58;
          do {
            lVar14 = *(long *)(param_1 + 800) + lVar18;
            if (*(long *)(lVar14 + 0x18) != 0) {
              fVar21 = *pfVar19;
              fVar22 = pfVar19[1];
              fVar24 = pfVar19[-4];
              fVar25 = pfVar19[-3];
              fVar28 = pfVar19[-2];
              fVar27 = pfVar19[-1];
              local_218[0] = fVar21 / fVar24;
              local_218[1] = fVar22 / fVar25;
              fVar23 = pfVar19[2];
              fVar26 = pfVar19[3];
              local_218[2] = fVar23 / fVar28;
              local_218[3] = fVar26 / fVar27;
              lVar13 = *(long *)(lVar14 + 0x18);
              lVar14 = *(long *)(*(long *)(param_1 + 800) + lVar18);
              if (lVar13 != 0) {
                lVar14 = lVar13;
              }
              lVar13 = *plVar11;
              *plVar11 = lVar14;
              local_228 = 1.0 / (fVar21 / fVar24);
              fStack_224 = 1.0 / (fVar22 / fVar25);
              local_220 = 1.0 / (fVar23 / fVar28);
              fStack_21c = 1.0 / (fVar26 / fVar27);
              FUN_0057e050(0,0,0x3ec00000,0x3f800000,plVar15,plVar11[1],lVar14,0,local_218,0,0,0,1,
                           &local_228,lVar13,0xffffffff);
              uVar17 = (ulong)((int)uVar17 - 1);
            }
            lVar20 = lVar20 + -1;
            plVar11 = plVar11 + -1;
            lVar18 = lVar18 + -0x38;
            pfVar19 = pfVar19 + -4;
          } while (2 < lVar20);
        }
      }
      iVar9 = *(int *)(param_1 + 0xe0);
      if (*(int *)(param_1 + 0x3d8) <= *(int *)(param_1 + 0xe0)) {
        iVar9 = *(int *)(param_1 + 0x3d8);
      }
      if (0 < iVar9) {
        lVar18 = 0;
        do {
          lVar20 = alStack_118[lVar18 + 2];
          do {
            lVar14 = lVar20;
            lVar20 = *(long *)(lVar14 + 0x120);
          } while (lVar20 != 0);
          plVar11 = *(long **)(lVar14 + 0xa8);
          (**(code **)(*plVar11 + 0x88))(plVar11,1);
          lVar18 = lVar18 + 1;
          iVar9 = *(int *)(param_1 + 0xe0);
          if (*(int *)(param_1 + 0x3d8) <= *(int *)(param_1 + 0xe0)) {
            iVar9 = *(int *)(param_1 + 0x3d8);
          }
        } while (lVar18 < iVar9);
      }
      uVar8 = FUN_0058d2d0(0x3f800000,*(undefined4 *)(param_1 + 0x1ec),plVar15,uVar16,uVar17,
                           alStack_118 + 2,local_208,uVar4,0);
      iVar9 = *(int *)(param_1 + 0xe0);
      if (*(int *)(param_1 + 0x3d8) <= *(int *)(param_1 + 0xe0)) {
        iVar9 = *(int *)(param_1 + 0x3d8);
      }
      if (0 < iVar9) {
        lVar18 = 0;
        do {
          lVar20 = alStack_118[lVar18 + 2];
          do {
            lVar14 = lVar20;
            lVar20 = *(long *)(lVar14 + 0x120);
          } while (lVar20 != 0);
          plVar11 = *(long **)(lVar14 + 0xa8);
          (**(code **)(*plVar11 + 0x88))(plVar11,0);
          lVar18 = lVar18 + 1;
          iVar9 = *(int *)(param_1 + 0xe0);
          if (*(int *)(param_1 + 0x3d8) <= *(int *)(param_1 + 0xe0)) {
            iVar9 = *(int *)(param_1 + 0x3d8);
          }
        } while (lVar18 < iVar9);
      }
      if (bVar6 || (int)uVar8 < 0) {
        uVar8 = uVar8 & (int)uVar8 >> 0x1f;
      }
      else {
        if (*(char *)(param_1 + 0x411) != '\0') {
          FUN_00571510(plVar15,0x10,0);
        }
        uVar8 = 0;
      }
      return uVar8;
    }
  }
                    /* WARNING: Subroutine does not return */
  memset(alStack_118 + lVar18 + 2,0,(ulong)(0xf - uVar8) * 8 + 8);
}


