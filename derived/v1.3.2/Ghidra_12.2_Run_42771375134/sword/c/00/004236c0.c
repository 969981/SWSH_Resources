/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 004236c0; name: FUN_004236c0
 */


undefined8 FUN_004236c0(long param_1,long param_2)

{
  long lVar1;
  long lVar2;
  undefined8 *puVar3;
  char cVar4;
  uint uVar5;
  uint uVar6;
  int iVar7;
  int iVar8;
  undefined4 *puVar9;
  long lVar10;
  undefined1 uVar11;
  long lVar12;
  long *plVar13;
  ulong uVar14;
  undefined8 uVar15;
  float fVar16;
  float fVar17;
  
  lVar12 = *(long *)(param_1 + 0x158);
  iVar7 = *(int *)(lVar12 + 0x74);
  if (((*(int *)(param_1 + 0x1d4) != iVar7) ||
      (*(float *)(param_1 + 0x1d0) != *(float *)(lVar12 + 0x70))) ||
     (*(float *)(param_1 + 0x1cc) != *(float *)(lVar12 + 0x6c))) {
    plVar13 = *(long **)(param_1 + 0x160);
    lVar12 = *(long *)(param_1 + 0x140);
    if (lVar12 != 0) {
      if (*(int *)(param_1 + 0x128) != 0) {
        FUN_004291d0(lVar12,plVar13);
        FUN_0042b1b0(*(long *)(param_1 + 0x140) + 0x90,plVar13);
        if (1 < *(uint *)(param_1 + 0x128)) {
          uVar14 = 1;
          lVar12 = 0xa8;
          do {
            FUN_004291d0(*(long *)(param_1 + 0x140) + lVar12,plVar13);
            FUN_0042b1b0(*(long *)(param_1 + 0x140) + lVar12 + 0x90,plVar13);
            uVar14 = uVar14 + 1;
            lVar12 = lVar12 + 0xa8;
          } while (uVar14 < *(uint *)(param_1 + 0x128));
        }
        lVar12 = *(long *)(param_1 + 0x140);
      }
      (**(code **)(*plVar13 + 0x18))(plVar13,lVar12);
      plVar13 = *(long **)(param_1 + 0x160);
      *(undefined8 *)(param_1 + 0x140) = 0;
      iVar7 = *(int *)(*(long *)(param_1 + 0x158) + 0x74);
    }
    *(int *)(param_1 + 0x128) = iVar7;
    iVar7 = FUN_004224c0(param_1,plVar13);
    if (iVar7 != 1) {
      return 1;
    }
    if ((*(long *)(param_1 + 0x140) != 0) && (*(int *)(param_1 + 0x128) != 0)) {
      FUN_00429220();
      FUN_0042b1f0(*(long *)(param_1 + 0x140) + 0x90);
      if (1 < *(uint *)(param_1 + 0x128)) {
        uVar14 = 1;
        lVar12 = 0xa8;
        do {
          FUN_00429220(*(long *)(param_1 + 0x140) + lVar12);
          FUN_0042b1f0(*(long *)(param_1 + 0x140) + lVar12 + 0x90);
          uVar14 = uVar14 + 1;
          lVar12 = lVar12 + 0xa8;
        } while (uVar14 < *(uint *)(param_1 + 0x128));
      }
    }
  }
  lVar12 = *(long *)(param_1 + 0x158);
  if (*(char *)(param_1 + 0x1f9) == *(char *)(lVar12 + 0x99)) goto LAB_00423850;
  lVar12 = param_1 + 0xe8;
  FUN_0042b1b0(lVar12,*(undefined8 *)(param_1 + 0x160));
  lVar1 = param_1 + 0x100;
  FUN_0042b1b0(lVar1,*(undefined8 *)(param_1 + 0x160));
  lVar2 = param_1 + 0xb8;
  FUN_0042b1b0(lVar2,*(undefined8 *)(param_1 + 0x160));
  if ((*(char *)(param_1 + 0x138) != '\0') && (*(long *)(param_1 + 0x150) != 0)) {
    plVar13 = *(long **)(param_1 + 0x160);
    FUN_004289f0(*(long *)(param_1 + 0x150),plVar13);
    if (*(long *)(param_1 + 0x150) != 0) {
      (**(code **)(*plVar13 + 0x18))(plVar13);
    }
    *(undefined8 *)(param_1 + 0x150) = 0;
  }
  lVar10 = *(long *)(param_1 + 0x158);
  if ((*(char *)(lVar10 + 0x98) != '\0') &&
     ((((*(int *)(lVar10 + 0x80) != 0 || (*(int *)(lVar10 + 0x88) != 0)) ||
       (*(int *)(lVar10 + 0x90) != 0)) && (*(long *)(param_1 + 0x148) != 0)))) {
    (**(code **)(**(long **)(param_1 + 0x160) + 0x18))();
    lVar10 = *(long *)(param_1 + 0x158);
    *(undefined8 *)(param_1 + 0x148) = 0;
  }
  cVar4 = *(char *)(lVar10 + 0x99);
  uVar11 = 0;
  if (cVar4 != '\0') {
    uVar11 = 2;
  }
  *(undefined1 *)(param_1 + 0x138) = uVar11;
  uVar5 = *(uint *)(param_2 + 8);
  if ((uVar5 & 0xfffff000) == 0x8000) {
    *(undefined1 *)(param_1 + 0x138) = 0;
  }
  else if (cVar4 != '\0') {
    fVar16 = (float)NEON_ucvtf(*(undefined4 *)(param_1 + 0x130));
    iVar7 = (int)(*(float *)(lVar10 + 0x68) * DAT_01d4c6ac * fVar16);
    if (iVar7 != 0) {
      uVar15 = *(undefined8 *)(param_1 + 0x160);
      uVar6 = uVar5 >> 8 & 0xf;
      if ((uVar6 == 2) || ((uVar6 == 1 && ((uVar5 & 0x210000) != 0)))) {
        iVar8 = FUN_0042b140(lVar12,uVar15,iVar7);
        if (iVar8 != 1) {
          return 1;
        }
        iVar7 = FUN_0042b140(lVar1,uVar15,iVar7);
        if (iVar7 != 1) {
          return 1;
        }
      }
    }
  }
  FUN_0042b1f0(lVar12);
  FUN_0042b1f0(lVar1);
  if (*(char *)(param_1 + 0x138) != '\0') {
    lVar12 = *(long *)(param_1 + 0x158);
    uVar15 = *(undefined8 *)(param_1 + 0x160);
    fVar16 = exp2f(*(float *)(lVar12 + 100) * DAT_01d4c4d4);
    uVar14 = (ulong)*(uint *)(lVar12 + 0x5c);
    fVar16 = (float)NEON_fminnm(*(float *)(&PTR_DAT_025ec1d0)[uVar14 * 5] * fVar16,
                                *(float *)(&PTR_DAT_025ec1e0)[uVar14 * 5] * fVar16);
    fVar17 = (float)NEON_ucvtf(*(undefined4 *)(param_1 + 0x130));
    if (((int)(fVar17 * DAT_01d4c6ac * fVar16) != 0) &&
       (iVar7 = FUN_0042b140(lVar2,uVar15), iVar7 != 1)) {
      return 1;
    }
  }
  FUN_0042b1f0(lVar2);
  if (*(char *)(param_1 + 0x138) != '\0') {
    puVar9 = (undefined4 *)
             (**(code **)(**(long **)(param_1 + 0x160) + 0x10))(*(long **)(param_1 + 0x160),800);
    if (puVar9 != (undefined4 *)0x0) {
      *puVar9 = 0;
                    /* WARNING: Subroutine does not return */
      memset(puVar9 + 2,0,0x314);
    }
    goto LAB_00423f68;
  }
  if (*(long *)(param_1 + 0x150) != 0) {
    FUN_00428a30();
  }
  lVar12 = *(long *)(param_1 + 0x158);
  if ((*(char *)(lVar12 + 0x98) == '\0') ||
     (((*(int *)(lVar12 + 0x80) == 0 && (*(int *)(lVar12 + 0x88) == 0)) &&
      (*(int *)(lVar12 + 0x90) == 0)))) {
LAB_00423850:
    if (*(float *)(param_1 + 0x1c8) != *(float *)(lVar12 + 0x68)) {
LAB_00423860:
      lVar12 = param_1 + 0xe8;
      FUN_0042b1b0(lVar12,*(undefined8 *)(param_1 + 0x160));
      lVar1 = param_1 + 0x100;
      FUN_0042b1b0(lVar1,*(undefined8 *)(param_1 + 0x160));
      if (*(char *)(param_1 + 0x138) != '\0') {
        fVar16 = (float)NEON_ucvtf(*(undefined4 *)(param_1 + 0x130));
        iVar7 = (int)(*(float *)(*(long *)(param_1 + 0x158) + 0x68) * DAT_01d4c6ac * fVar16);
        if (iVar7 != 0) {
          uVar15 = *(undefined8 *)(param_1 + 0x160);
          uVar5 = *(uint *)(param_2 + 8) >> 8 & 0xf;
          if ((uVar5 == 2) || ((uVar5 == 1 && ((*(uint *)(param_2 + 8) & 0x210000) != 0)))) {
            iVar8 = FUN_0042b140(lVar12,uVar15,iVar7);
            if (iVar8 != 1) {
              return 1;
            }
            iVar7 = FUN_0042b140(lVar1,uVar15,iVar7);
            if (iVar7 != 1) {
              return 1;
            }
          }
        }
      }
      FUN_0042b1f0(lVar12);
      FUN_0042b1f0(lVar1);
      lVar12 = *(long *)(param_1 + 0x158);
    }
  }
  else {
    iVar7 = FUN_00422300(param_1);
    if (iVar7 != 1) {
      return 1;
    }
    lVar12 = *(long *)(param_1 + 0x158);
    if ((*(char *)(lVar12 + 0x98) == '\0') || (*(char *)(param_1 + 0x134) == '\0'))
    goto LAB_00423850;
    uVar14 = 0;
    lVar12 = 0xa0;
    do {
      puVar3 = (undefined8 *)(*(long *)(param_1 + 0x148) + lVar12);
      uVar14 = uVar14 + 1;
      *puVar3 = 0;
      puVar3[1] = 0;
      lVar12 = lVar12 + 0xc0;
    } while (uVar14 < *(byte *)(param_1 + 0x134));
    lVar12 = *(long *)(param_1 + 0x158);
    if (*(float *)(param_1 + 0x1c8) != *(float *)(lVar12 + 0x68)) goto LAB_00423860;
  }
  if (*(float *)(param_1 + 0x1c0) != *(float *)(lVar12 + 0x60)) {
    lVar12 = param_1 + 0xd0;
    FUN_0042b1b0(lVar12,*(undefined8 *)(param_1 + 0x160));
    fVar16 = DAT_01d4c6ac;
    fVar17 = (float)NEON_ucvtf(*(undefined4 *)(param_1 + 0x130));
    if (((int)(*(float *)(*(long *)(param_1 + 0x158) + 0x60) * DAT_01d4c6ac * fVar17) != 0) &&
       (iVar7 = FUN_0042b140(lVar12,*(undefined8 *)(param_1 + 0x160)), iVar7 != 1)) {
      return 1;
    }
    FUN_0042b1f0(lVar12);
    lVar12 = *(long *)(param_1 + 0x158);
    fVar17 = (float)NEON_ucvtf(*(undefined4 *)(param_1 + 0x130));
    *(int *)(param_1 + 0x120) =
         (int)((*(float *)(lVar12 + 8) + fVar16 * *(float *)(lVar12 + 0x60)) * fVar17);
  }
  if ((*(int *)(param_1 + 0x1bc) != *(int *)(lVar12 + 0x5c)) ||
     (*(float *)(param_1 + 0x1c4) != *(float *)(lVar12 + 100))) {
    lVar12 = param_1 + 0xb8;
    FUN_0042b1b0(lVar12,*(undefined8 *)(param_1 + 0x160));
    if (*(char *)(param_1 + 0x138) != '\0') {
      lVar1 = *(long *)(param_1 + 0x158);
      uVar15 = *(undefined8 *)(param_1 + 0x160);
      fVar16 = exp2f(*(float *)(lVar1 + 100) * DAT_01d4c4d4);
      uVar14 = (ulong)*(uint *)(lVar1 + 0x5c);
      fVar16 = (float)NEON_fminnm(*(float *)(&PTR_DAT_025ec1d0)[uVar14 * 5] * fVar16,
                                  *(float *)(&PTR_DAT_025ec1e0)[uVar14 * 5] * fVar16);
      fVar17 = (float)NEON_ucvtf(*(undefined4 *)(param_1 + 0x130));
      if (((int)(fVar17 * DAT_01d4c6ac * fVar16) != 0) &&
         (iVar7 = FUN_0042b140(lVar12,uVar15), iVar7 != 1)) {
        return 1;
      }
    }
    FUN_0042b1f0(lVar12);
    if (*(char *)(param_1 + 0x138) != '\0') {
      plVar13 = *(long **)(param_1 + 0x160);
      if (*(long *)(param_1 + 0x150) != 0) {
        FUN_004289f0(*(long *)(param_1 + 0x150),plVar13);
        if (*(long *)(param_1 + 0x150) != 0) {
          (**(code **)(*plVar13 + 0x18))(plVar13);
        }
        *(undefined8 *)(param_1 + 0x150) = 0;
        if (*(char *)(param_1 + 0x138) == '\0') goto LAB_00423b24;
        plVar13 = *(long **)(param_1 + 0x160);
      }
      puVar9 = (undefined4 *)(**(code **)(*plVar13 + 0x10))(plVar13,800);
      if (puVar9 != (undefined4 *)0x0) {
        *puVar9 = 0;
                    /* WARNING: Subroutine does not return */
        memset(puVar9 + 2,0,0x314);
      }
LAB_00423f68:
      *(undefined8 *)(param_1 + 0x150) = 0;
      return 1;
    }
LAB_00423b24:
    if (*(long *)(param_1 + 0x150) != 0) {
      FUN_00428a30();
    }
  }
  lVar12 = *(long *)(param_1 + 0x158);
  if (((*(char *)(param_1 + 0x1f8) == *(char *)(lVar12 + 0x98)) &&
      (iVar7 = *(int *)(param_1 + 0x1e0), iVar7 == *(int *)(lVar12 + 0x80))) &&
     (*(int *)(param_1 + 0x1e8) == *(int *)(lVar12 + 0x88))) {
    if ((*(char *)(param_1 + 0x1f8) != '\0') &&
       (*(int *)(param_1 + 0x1f0) != *(int *)(lVar12 + 0x90))) goto LAB_00423c5c;
  }
  else if (*(char *)(lVar12 + 0x98) != '\0') {
    iVar7 = *(int *)(lVar12 + 0x80);
LAB_00423c5c:
    if (((iVar7 != 0) || (*(int *)(lVar12 + 0x88) != 0)) || (*(int *)(lVar12 + 0x90) != 0)) {
      if (*(long *)(param_1 + 0x148) != 0) {
        (**(code **)(**(long **)(param_1 + 0x160) + 0x18))();
        *(undefined8 *)(param_1 + 0x148) = 0;
      }
      iVar7 = FUN_00422300(param_1);
      if (iVar7 != 1) {
        return 1;
      }
      lVar12 = *(long *)(param_1 + 0x158);
      if ((*(char *)(lVar12 + 0x98) != '\0') && (*(char *)(param_1 + 0x134) != '\0')) {
        uVar14 = 0;
        lVar12 = 0xa0;
        do {
          puVar3 = (undefined8 *)(*(long *)(param_1 + 0x148) + lVar12);
          uVar14 = uVar14 + 1;
          *puVar3 = 0;
          puVar3[1] = 0;
          lVar12 = lVar12 + 0xc0;
        } while (uVar14 < *(byte *)(param_1 + 0x134));
        lVar12 = *(long *)(param_1 + 0x158);
      }
    }
  }
  if (*(int *)(param_1 + 0x1e4) == *(int *)(lVar12 + 0x84)) {
    if (*(int *)(param_1 + 0x1ec) != *(int *)(lVar12 + 0x8c)) goto LAB_00423fa8;
LAB_00423cfc:
    if (*(int *)(param_1 + 500) == *(int *)(lVar12 + 0x94)) goto LAB_00423d18;
  }
  else {
    FUN_00422b00(param_1);
    lVar12 = *(long *)(param_1 + 0x158);
    if (*(int *)(param_1 + 0x1ec) == *(int *)(lVar12 + 0x8c)) goto LAB_00423cfc;
LAB_00423fa8:
    FUN_00423160(param_1);
    lVar12 = *(long *)(param_1 + 0x158);
    if (*(int *)(param_1 + 500) == *(int *)(lVar12 + 0x94)) goto LAB_00423d18;
  }
  FUN_00423240(param_1);
  lVar12 = *(long *)(param_1 + 0x158);
LAB_00423d18:
  memcpy((int *)(param_1 + 0x1bc),(void *)(lVar12 + 0x5c),0x40);
  *(undefined1 *)(lVar12 + 0x9a) = 0;
  return 0;
}


