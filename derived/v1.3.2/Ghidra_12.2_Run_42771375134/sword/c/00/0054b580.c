/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0054b580; name: FUN_0054b580
 */


/* WARNING: Type propagation algorithm not settling */

undefined8 FUN_0054b580(long param_1,long param_2,undefined4 param_3)

{
  bool bVar1;
  undefined1 *puVar2;
  char *pcVar3;
  undefined4 uVar4;
  long lVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined8 uVar8;
  int iVar9;
  int iVar10;
  long *plVar11;
  char cVar12;
  long lVar13;
  long lVar14;
  int iVar15;
  long lVar16;
  int iVar17;
  long lVar18;
  ulong uVar19;
  undefined1 auStack_c0 [16];
  undefined1 auStack_b0 [16];
  undefined1 auStack_a0 [16];
  long *local_90;
  undefined1 *local_88;
  undefined1 auStack_80 [8];
  undefined8 local_78;
  undefined1 auStack_70 [8];
  undefined8 local_68;
  
  puVar7 = PTR_DAT_02713be8;
  puVar6 = PTR_DAT_02713970;
  if (*(char *)(param_2 + 0x68) != '\0') {
    return 0;
  }
  lVar18 = *(long *)(param_2 + 0x30);
  lVar13 = *(long *)(param_2 + 0x38);
  lVar16 = *(long *)(param_2 + 0x40);
  if (*(int *)PTR_DAT_02713970 == 0 || *(int *)PTR_DAT_02713be8 == 0) {
    if (*(int *)PTR_DAT_02713970 == 0 || *(int *)PTR_DAT_02713be8 == 0) goto joined_r0x0054bc38;
  }
  else {
    FUN_00517ae0("C:/workspace/YEBIS_draft/src/GPU/TinyEffect/TinyEffect.cpp(%d) : PPFX FX: ",0xa07)
    ;
    FUN_00517ae0("CTinyEffect::CreateParameter(): \n%d: %s\n",param_3,
                 *(undefined8 *)(param_2 + 0x10));
    if (*(int *)puVar6 == 0 || *(int *)puVar7 == 0) goto joined_r0x0054bc38;
  }
  FUN_00517ae0("C:/workspace/YEBIS_draft/src/GPU/TinyEffect/TinyEffect.cpp(%d) : PPFX FX: ",0xa08);
  FUN_00517ae0("CTinyEffect::CreateParameter(programIndex: %d, pProgram->m_strName: \"%s\"):\n",
               param_3,*(undefined8 *)(param_2 + 0x10));
joined_r0x0054bc38:
  if ((((lVar18 != 0) && (lVar13 != 0)) && (lVar16 != 0)) &&
     (((lVar18 != DAT_0275e808 || (DAT_0275e810 != lVar13)) || (DAT_0275e818 != lVar16)))) {
    if (((*(long *)(param_2 + 0x30) != 0) && (*(long *)(param_2 + 0x38) != 0)) &&
       ((*(long *)(param_2 + 0x40) != 0 &&
        ((((*(long *)(param_2 + 0x30) != DAT_0275e808 || (*(long *)(param_2 + 0x38) != DAT_0275e810)
           ) || (*(long *)(param_2 + 0x40) != DAT_0275e818)) && (*(long *)(param_2 + 0x88) == 0)))))
       ) {
      plVar11 = (long *)FUN_005b9a50(*(undefined8 *)PTR_PTR_02713988,0x440,
                                     "C:/workspace/YEBIS_draft/src/GPU/TinyEffect/TinyEffect.cpp",
                                     0x35a3,0);
      *(undefined4 *)(plVar11 + 1) = 1;
      puVar6 = PTR_DAT_02713bf0;
      *(undefined4 *)(plVar11 + 7) = 0;
      plVar11[5] = 0;
      plVar11[6] = 0;
      plVar11[3] = 0;
      plVar11[4] = 0;
      *plVar11 = (long)(puVar6 + 0x10);
      plVar11[2] = 0;
                    /* WARNING: Subroutine does not return */
      memset(plVar11 + 8,0,0x400);
    }
    lVar18 = 0;
    iVar17 = -1;
    cVar12 = *(char *)(param_1 + 0x70);
LAB_0054b700:
    if (cVar12 != '\0') {
      cVar12 = '\x01';
      if (iVar17 < 0) goto LAB_0054b740;
LAB_0054b70c:
      bVar1 = cVar12 == '\0';
      cVar12 = '\0';
      if (bVar1) goto LAB_0054b740;
      lVar13 = *(long *)(param_1 + 0x328);
      iVar17 = *(int *)(*(long *)(lVar13 + (long)iVar17 * 8) + 0x2c) + iVar17;
      if (iVar17 < (int)((ulong)(*(long *)(param_1 + 0x330) - lVar13) >> 3)) {
        lVar13 = *(long *)(lVar13 + (long)iVar17 * 8);
        if (lVar13 != 0) goto LAB_0054b754;
LAB_0054b7ac:
        FUN_00550fe0(auStack_70,&DAT_01d38550);
        FUN_00551290(auStack_80,auStack_70);
LAB_0054b7c4:
        FUN_00551380(auStack_80);
        FUN_00551380(auStack_70);
        cVar12 = *(char *)(param_1 + 0x70);
        while (lVar18 != 0) {
          if (-1 < iVar17) goto LAB_0054b70c;
LAB_0054b740:
          iVar17 = iVar17 + 1;
          if ((cVar12 == '\0') ||
             (lVar13 = *(long *)(*(long *)(param_1 + 0x328) + (long)iVar17 * 8), lVar13 == 0))
          goto LAB_0054b7ac;
LAB_0054b754:
          FUN_00551290(auStack_70,lVar13 + 8);
          uVar8 = local_68;
          lVar16 = *(long *)(param_2 + 0x88);
          lVar18 = *(long *)(lVar16 + 0x10);
          if (*(long *)(lVar16 + 0x18) != lVar18) {
            uVar19 = 0;
            do {
              iVar9 = FUN_00552890(*(long *)(lVar18 + uVar19 * 8) + 8,uVar8);
              iVar10 = (int)uVar19;
              if (iVar9 != 0) {
                if ((-1 < iVar10) &&
                   (iVar10 < (int)((ulong)(*(long *)(lVar16 + 0x18) - *(long *)(lVar16 + 0x10)) >> 3
                                  ))) {
                  lVar18 = *(long *)(*(long *)(lVar16 + 0x10) + (long)iVar10 * 8);
                  if (lVar18 == 0) goto LAB_0054b834;
                  lVar16 = *(long *)(*(long *)(param_2 + 0x88) + 0x10);
                  iVar9 = *(int *)(lVar18 + 0x1c);
                  if ((int)((ulong)(*(long *)(*(long *)(param_2 + 0x88) + 0x18) - lVar16) >> 3) <=
                      iVar9) goto LAB_0054b834;
                  if (iVar9 < 0) {
                    if (lVar18 != 0) goto LAB_0054b834;
                  }
                  else if (*(long *)(lVar16 + (long)iVar9 * 8) != lVar18) goto LAB_0054b834;
                  if ((3 < *(int *)(lVar18 + 0x20) - 1U) || (*(int *)(lVar18 + 0x24) < 0))
                  goto LAB_0054b834;
                  FUN_00551290(auStack_80,auStack_70);
                  if (*(int *)(lVar13 + 0x1c) == 0) goto LAB_0054b7c4;
                  cVar12 = *(char *)(lVar13 + 0x41);
                  lVar16 = *(long *)(*(long *)(param_1 + 0x328) + (long)iVar17 * 8);
                  if (cVar12 != '\0') {
                    if (*(int *)(lVar16 + 0x2c) < 1) {
                      iVar9 = 0;
                      goto LAB_0054baa8;
                    }
                    lVar14 = *(long *)(param_2 + 0x88);
                    iVar10 = *(int *)(lVar18 + 0x1c);
                    iVar15 = 0;
                    iVar9 = 0;
                    goto LAB_0054b8bc;
                  }
                  lVar14 = *(long *)(*(long *)(param_2 + 0x88) + 0x10);
                  iVar9 = *(int *)(lVar18 + 0x1c);
                  if (iVar9 < (int)((ulong)(*(long *)(*(long *)(param_2 + 0x88) + 0x18) - lVar14) >>
                                   3)) {
                    if (iVar9 < 0) {
                      if (lVar18 == 0) goto LAB_0054bb64;
                    }
                    else if (*(long *)(lVar14 + (long)iVar9 * 8) == lVar18) {
LAB_0054bb64:
                      if (((*(int *)(lVar18 + 0x20) - 1U < 4) && (-1 < *(int *)(lVar18 + 0x24))) &&
                         (*(char *)(lVar18 + 0x18) != '\0')) {
                        iVar9 = 1;
                        goto LAB_0054b988;
                      }
                    }
                  }
                  iVar9 = 0;
                  goto LAB_0054bb90;
                }
                break;
              }
              lVar18 = *(long *)(lVar16 + 0x10);
              uVar19 = (ulong)(iVar10 + 1);
            } while (uVar19 < (ulong)(*(long *)(lVar16 + 0x18) - lVar18 >> 3));
          }
          lVar18 = 0;
LAB_0054b834:
          FUN_00551380(auStack_70);
          cVar12 = *(char *)(param_1 + 0x70);
        }
        goto LAB_0054b700;
      }
    }
    *(undefined1 *)(param_2 + 0x68) = 1;
    FUN_0054c110(param_1,param_2);
  }
  return 0;
LAB_0054b8bc:
  if ((int)((ulong)(*(long *)(lVar14 + 0x18) - *(long *)(lVar14 + 0x10)) >> 3) <= iVar10)
  goto LAB_0054b984;
  if (iVar10 < 0) {
    if (lVar18 != 0) goto LAB_0054b984;
  }
  else if (*(long *)(*(long *)(lVar14 + 0x10) + (long)iVar10 * 8) != lVar18) goto LAB_0054b984;
  if (3 < *(int *)(lVar18 + 0x20) - 1U) goto LAB_0054b984;
  lVar5 = 0;
  if (((0 < *(int *)(lVar18 + 0x24)) && (iVar15 < *(int *)(lVar18 + 0x24))) &&
     (lVar5 = lVar18,
     iVar10 < (int)((ulong)(*(long *)(lVar14 + 0x18) - *(long *)(lVar14 + 0x10)) >> 3))) {
    if (iVar10 < 0) {
      if (lVar18 == 0) goto LAB_0054b96c;
    }
    else if (*(long *)(*(long *)(lVar14 + 0x10) + (long)iVar10 * 8) == lVar18) {
LAB_0054b96c:
      if (*(char *)(lVar18 + 0x18) != '\0') {
        iVar9 = iVar15 + 1;
      }
    }
  }
  if ((lVar5 == 0) || (iVar15 = iVar15 + 1, *(int *)(lVar16 + 0x2c) <= iVar15)) goto LAB_0054b984;
  goto LAB_0054b8bc;
LAB_0054b984:
  if (iVar9 != 0) {
LAB_0054b988:
    iVar10 = FUN_00552890(auStack_80,"m44_ColorTransformMatrix");
    if (iVar10 == 0) {
      FUN_00552890(auStack_80,"am44_TransformMatrix");
    }
    plVar11 = (long *)FUN_005b9a50(*(undefined8 *)PTR_PTR_02713988,0x50,
                                   "C:/workspace/YEBIS_draft/src/GPU/TinyEffect/TinyEffect.cpp",
                                   0xeda,0);
    *plVar11 = param_1;
    FUN_00550fe0(plVar11 + 1,&DAT_01d38550);
    *(undefined1 *)(plVar11 + 3) = 0;
    plVar11[4] = 0;
    plVar11[6] = 0;
    *(undefined4 *)(plVar11 + 7) = 0;
    local_90 = plVar11;
    if (*(undefined8 **)(param_2 + 0x78) == *(undefined8 **)(param_2 + 0x80)) {
      FUN_005505c0(param_2 + 0x70,&local_90);
    }
    else {
      **(undefined8 **)(param_2 + 0x78) = plVar11;
      *(long *)(param_2 + 0x78) = *(long *)(param_2 + 0x78) + 8;
    }
    local_90[4] = lVar18;
    FUN_00551670(local_90 + 1,lVar16 + 8);
    *(char *)((long)local_90 + 0x3c) = cVar12;
    *(int *)(local_90 + 5) = iVar17;
    local_90[6] = lVar16;
    *(undefined4 *)(local_90 + 8) = 0;
    *(int *)(local_90 + 7) = iVar9;
    *(undefined4 *)((long)local_90 + 0x44) = *(undefined4 *)(local_90[4] + 0x2c);
    *(undefined4 *)(local_90 + 9) = *(undefined4 *)(local_90[4] + 0x30);
    cVar12 = *(char *)(lVar13 + 0x41);
  }
  if (cVar12 == '\0') {
LAB_0054bb90:
    if ((*(int *)PTR_DAT_02713970 != 0) && (*(int *)puVar7 != 0)) {
      FUN_00517ae0("C:/workspace/YEBIS_draft/src/GPU/TinyEffect/TinyEffect.cpp(%d) : PPFX FX: ",
                   0xfb0);
      pcVar3 = "";
      if (iVar9 != 0) {
        pcVar3 = " referenced";
      }
      FUN_00517ae0("cgParameter name: %s%s.\n",local_78,pcVar3);
    }
  }
  else {
LAB_0054baa8:
    uVar4 = *(undefined4 *)(lVar13 + 0x2c);
    FUN_00550fe0(auStack_b0,&DAT_01ce77a5);
    FUN_00552650(auStack_c0,iVar9);
    FUN_005516e0(auStack_a0,auStack_b0,auStack_c0);
    FUN_005528d0(&local_90,auStack_a0," elements referenced");
    FUN_00551380(auStack_a0);
    FUN_00551380(auStack_c0);
    FUN_00551380(auStack_b0);
    if ((*(int *)PTR_DAT_02713970 != 0) && (*(int *)puVar7 != 0)) {
      FUN_00517ae0("C:/workspace/YEBIS_draft/src/GPU/TinyEffect/TinyEffect.cpp(%d) : PPFX FX: ",
                   0xfaa);
      puVar2 = &DAT_01d38550;
      if (iVar9 != 0) {
        puVar2 = local_88;
      }
      FUN_00517ae0("cgParameter name: %s[%d]%s.\n",local_78,uVar4,puVar2);
    }
    FUN_00551380(&local_90);
  }
  goto LAB_0054b7c4;
}


