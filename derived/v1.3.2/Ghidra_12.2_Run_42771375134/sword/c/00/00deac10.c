/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00deac10; name: FUN_00deac10
 */


void FUN_00deac10(long param_1)

{
  int *piVar1;
  float *pfVar2;
  float *pfVar3;
  char cVar4;
  int iVar5;
  bool bVar6;
  long *plVar7;
  undefined *puVar8;
  code *pcVar9;
  long lVar10;
  long *plVar11;
  long lVar12;
  int iVar13;
  float fVar14;
  float fVar15;
  ulong uVar16;
  float fVar17;
  float fVar18;
  float local_78;
  float fStack_74;
  undefined8 local_68;
  
  plVar7 = *(long **)(param_1 + 0x88);
  if (*(char *)((long)plVar7 + 0x44c) == '\0') {
    pcVar9 = *(code **)(*plVar7 + 0x178);
    puVar8 = PTR_DAT_0271e870;
  }
  else {
    pcVar9 = *(code **)(*plVar7 + 0x1c0);
    puVar8 = (undefined *)((long)plVar7 + 0x44c);
  }
  uVar16 = (*pcVar9)(0,plVar7,puVar8);
  fVar14 = *(float *)(param_1 + 0xe0) + 1.0;
  *(float *)(param_1 + 0xe0) = fVar14;
  fVar14 = fVar14 / *(float *)(param_1 + 0xd4);
  fVar15 = fVar14;
  if (1.0 < fVar14) {
    fVar15 = 1.0;
  }
  fVar17 = 0.0;
  iVar13 = *(int *)(param_1 + 0xe4);
  fVar18 = 0.0;
  if (0.0 <= fVar14) {
    fVar18 = fVar15;
  }
  if (iVar13 == 0) {
    fVar15 = *(float *)PTR_DAT_0271ed18;
    if ((fVar15 <= (float)uVar16) ||
       (fVar14 = (float)uVar16 + *(float *)(param_1 + 0xd8), uVar16 = (ulong)(uint)fVar14,
       fVar14 < fVar15)) {
      if ((float)uVar16 < fVar15) goto LAB_00deaf18;
    }
    else {
      lVar10 = *(long *)(*(long *)(param_1 + 0x88) + 0x588);
      if (lVar10 == 0) {
LAB_00dead94:
        lVar12 = 0;
      }
      else {
        (**(code **)(*(long *)(lVar10 + 0x48) + 0x10))((long *)(lVar10 + 0x48));
        if (*(int *)(lVar10 + 0x54) == 0) goto LAB_00dead94;
        piVar1 = (int *)(lVar10 + 0x54);
        iVar13 = *(int *)(lVar10 + 0x54);
        while( true ) {
          plVar11 = *(long **)(lVar10 + 0x58);
          plVar7 = (long *)FUN_0156b190();
          lVar12 = 0;
          if (plVar11 == (long *)0x0) break;
          while (plVar11 != plVar7) {
            plVar11 = (long *)*plVar11;
            if (plVar11 == (long *)0x0) {
              lVar12 = 0;
              goto LAB_00dead98;
            }
          }
          iVar5 = *piVar1;
          if (iVar5 == iVar13) {
            cVar4 = '\x01';
            bVar6 = (bool)ExclusiveMonitorPass(piVar1,0x10);
            if (bVar6) {
              *piVar1 = iVar13 + 1;
              cVar4 = ExclusiveMonitorsStatus();
            }
            if (cVar4 == '\0') {
              lVar12 = 0;
              if (*(long *)(lVar10 + 0x60) != 0) {
                lVar12 = *(long *)(lVar10 + 0x60) + -0x50;
              }
              break;
            }
          }
          else {
            ClearExclusiveLocal();
          }
          lVar12 = 0;
          iVar13 = iVar5;
          if (iVar5 == 0) break;
        }
      }
LAB_00dead98:
      local_68 = 0x47ac155f7fee7841;
      FUN_00dc04c0(lVar12,&local_68,1,0,0);
      if (lVar12 != 0) {
        (**(code **)(*(long *)(lVar12 + 0x48) + 0x18))((long *)(lVar12 + 0x48));
      }
      uVar16 = (ulong)(uint)fVar15;
      if (lVar10 != 0) {
        (**(code **)(*(long *)(lVar10 + 0x48) + 0x18))((long *)(lVar10 + 0x48));
      }
    }
    if ((fVar18 < 1.0) &&
       ((*(char *)(param_1 + 0xe8) != '\0' ||
        (*(float *)(param_1 + 0x78) <= *(float *)(param_1 + 0xa0))))) goto LAB_00deaf18;
    *(char *)(param_1 + 0xd1) = '\0';
    lVar10 = *(long *)(*(long *)(param_1 + 0x88) + 0x588);
    if (lVar10 == 0) {
LAB_00deae7c:
      lVar12 = 0;
    }
    else {
      (**(code **)(*(long *)(lVar10 + 0x48) + 0x10))((long *)(lVar10 + 0x48));
      if (*(int *)(lVar10 + 0x54) == 0) goto LAB_00deae7c;
      piVar1 = (int *)(lVar10 + 0x54);
      iVar13 = *(int *)(lVar10 + 0x54);
      while( true ) {
        plVar11 = *(long **)(lVar10 + 0x58);
        plVar7 = (long *)FUN_0156b190();
        lVar12 = 0;
        if (plVar11 == (long *)0x0) break;
        while (plVar11 != plVar7) {
          plVar11 = (long *)*plVar11;
          if (plVar11 == (long *)0x0) {
            lVar12 = 0;
            goto LAB_00deae80;
          }
        }
        iVar5 = *piVar1;
        if (iVar5 == iVar13) {
          cVar4 = '\x01';
          bVar6 = (bool)ExclusiveMonitorPass(piVar1,0x10);
          if (bVar6) {
            *piVar1 = iVar13 + 1;
            cVar4 = ExclusiveMonitorsStatus();
          }
          if (cVar4 == '\0') {
            lVar12 = 0;
            if (*(long *)(lVar10 + 0x60) != 0) {
              lVar12 = *(long *)(lVar10 + 0x60) + -0x50;
            }
            break;
          }
        }
        else {
          ClearExclusiveLocal();
        }
        lVar12 = 0;
        iVar13 = iVar5;
        if (iVar5 == 0) break;
      }
    }
LAB_00deae80:
    local_68 = 0x47ac155f7fee7841;
    FUN_00dc0720(lVar12,&local_68);
    if (lVar12 != 0) {
      (**(code **)(*(long *)(lVar12 + 0x48) + 0x18))((long *)(lVar12 + 0x48));
    }
    if (lVar10 != 0) {
      (**(code **)(*(long *)(lVar10 + 0x48) + 0x18))((long *)(lVar10 + 0x48));
    }
    iVar13 = *(int *)(param_1 + 0xe4) + 2;
    *(int *)(param_1 + 0xe4) = *(int *)(param_1 + 0xe4) + 1;
    cVar4 = *(char *)(param_1 + 0xd1);
joined_r0x00deaedc:
    if (cVar4 != '\0') {
      *(undefined4 *)(param_1 + 0xe4) = 0;
      goto LAB_00deaf18;
    }
    fVar15 = (float)uVar16 - *(float *)(param_1 + 0xdc);
    uVar16 = (ulong)(uint)fVar15;
    if (*(float *)(param_1 + 0xf4) < fVar15) goto LAB_00deaf18;
    fVar14 = *(float *)PTR_DAT_0271ecc8;
    *(int *)(param_1 + 0xe4) = iVar13;
    uVar16 = (ulong)(uint)fVar14;
    if (fVar14 <= fVar15) {
      uVar16 = (ulong)(uint)fVar15;
    }
  }
  else if (iVar13 != 2) {
    if (iVar13 != 1) goto LAB_00deaf18;
    iVar13 = 2;
    cVar4 = *(char *)(param_1 + 0xd1);
    goto joined_r0x00deaedc;
  }
  FUN_01528a20(0x26);
  *(undefined1 *)(param_1 + 0xd0) = 0;
LAB_00deaf18:
  (**(code **)(**(long **)(param_1 + 0x88) + 0x180))
            (uVar16,*(long **)(param_1 + 0x88),PTR_DAT_0271e870);
  fVar15 = *(float *)PTR_DAT_0271ecc8;
  if (fVar15 != *(float *)PTR_DAT_0271ed18) {
    fVar17 = ((float)uVar16 - fVar15) / (*(float *)PTR_DAT_0271ed18 - fVar15);
  }
  local_68 = CONCAT44(local_68._4_4_,fVar17);
  local_78 = 1.0;
  fStack_74 = 0.0;
  pfVar2 = &local_78;
  if (fVar17 <= 1.0) {
    pfVar2 = (float *)&local_68;
  }
  pfVar3 = &fStack_74;
  if (0.0 <= fVar17) {
    pfVar3 = pfVar2;
  }
  *(float *)(param_1 + 0xb8) =
       *(float *)(param_1 + 0xbc) +
       (*(float *)(param_1 + 0xc0) - *(float *)(param_1 + 0xbc)) * *pfVar3;
  return;
}


