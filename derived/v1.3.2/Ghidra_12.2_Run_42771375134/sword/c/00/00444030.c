/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00444030; name: FUN_00444030
 */


/* WARNING: Removing unreachable block (ram,0x004446b4) */
/* WARNING: Removing unreachable block (ram,0x00444448) */
/* WARNING: Removing unreachable block (ram,0x00444644) */

int FUN_00444030(long param_1,long param_2,long *param_3,uint param_4,uint param_5,uint param_6)

{
  int *piVar1;
  int iVar2;
  uint uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  byte bVar6;
  undefined *puVar7;
  int iVar8;
  long lVar9;
  long *plVar10;
  int *piVar11;
  char *param3;
  undefined4 *puVar12;
  undefined8 uVar13;
  int *piVar14;
  int *piVar15;
  long lVar16;
  bool bVar17;
  uint uVar18;
  int local_18c;
  int local_188;
  int local_184;
  char local_17c [4];
  undefined8 local_178;
  undefined8 uStack_170;
  undefined4 local_168;
  char acStack_164 [260];
  
  uVar4 = *(undefined4 *)(param_2 + 4);
  nn::os::LockMutex((MutexType *)PTR_DAT_02712fb8);
  if (*(int *)(param_2 + 0x28) == 2) {
    lVar9 = FUN_0044a9b0(param_1 + 0x88,*(undefined4 *)(param_2 + 4),*(undefined8 *)(param_2 + 0x38)
                        );
    if (lVar9 != 0) goto LAB_0044409c;
LAB_004440dc:
    nn::os::UnlockMutex((MutexType *)PTR_DAT_02712fb8);
    bVar17 = param_4 == 0;
    if (bVar17) {
      uVar18 = 0;
      param_5 = 0;
      puVar12 = (undefined4 *)(param_2 + 0x30);
    }
    else {
      uVar18 = ~param_5 & 1;
      puVar12 = (undefined4 *)(PTR_DAT_02712b90 + 0x18);
      param_5 = param_5 & 1;
    }
    uVar5 = *puVar12;
    plVar10 = (long *)FUN_00404690(*(undefined4 *)PTR_DAT_02712a90,0x80);
    if (plVar10 == (long *)0x0) {
      *param_3 = 0;
      iVar8 = 0x34;
    }
    else {
      if (*(int *)(param_2 + 0x28) == 2) {
        lVar9 = *(long *)(param_2 + 0x38);
      }
      else {
        lVar9 = 0;
      }
      *(undefined4 *)(plVar10 + 2) = *(undefined4 *)(param_2 + 4);
      plVar10[3] = lVar9;
      puVar7 = PTR_DAT_02712fc0;
      plVar10[6] = 0;
      plVar10[7] = 0;
      plVar10[5] = 0;
      *(undefined4 *)(plVar10 + 8) = uVar5;
      plVar10[0xc] = 0;
      plVar10[0xd] = 0;
      *plVar10 = (long)(puVar7 + 0x10);
      *(byte *)(plVar10 + 1) = *(byte *)(plVar10 + 1) & 0xfc | 2;
      *(undefined1 *)((long)plVar10 + 0x44) = 0;
      plVar10[9] = 0;
      *(uint *)((long)plVar10 + 0x7c) = param_5;
      *(uint *)(plVar10 + 0xe) = (uint)bVar17;
      *(uint *)((long)plVar10 + 0x74) = param_5 + uVar18;
      iVar8 = 1;
      *(byte *)(plVar10 + 0xf) = *(byte *)(plVar10 + 0xf) & 0xf8 | bVar17;
      plVar10[10] = 0;
      plVar10[0xb] = 0;
      *param_3 = (long)plVar10;
    }
  }
  else {
    lVar9 = FUN_0044a9b0(param_1 + 0x88,*(undefined4 *)(param_2 + 4),0);
    if (lVar9 == 0) goto LAB_004440dc;
LAB_0044409c:
    bVar6 = *(byte *)(lVar9 + 0x78);
    nn::os::UnlockMutex((MutexType *)PTR_DAT_02712fb8);
    if ((bVar6 & 1) != 0) {
      return 0x45;
    }
    *param_3 = lVar9;
    if ((param_5 & 1) != 0) {
      *(int *)(lVar9 + 0x7c) = *(int *)(lVar9 + 0x7c) + 1;
    }
    iVar8 = 1;
  }
  lVar9 = param_1 + 8;
  FUN_0044dd40(lVar9);
  uVar18 = *(uint *)(param_2 + 0x28);
  if (iVar8 == 1) {
    if (param_4 == 0) {
      if (uVar18 != 1) {
        if ((uVar18 | 1) == 3) {
          iVar8 = FUN_0044e100(lVar9,*(undefined8 *)(param_2 + 0x38),*(undefined4 *)(param_2 + 0x40)
                              );
          goto LAB_00444254;
        }
        goto LAB_004441f0;
      }
      uVar13 = *(undefined8 *)(param_2 + 0x20);
    }
    else {
LAB_004441f0:
      uVar13 = *(undefined8 *)(param_2 + 0x20);
      if (*(long *)(param_2 + 8) != 0) {
        iVar8 = FUN_0044dda0(lVar9,*(long *)(param_2 + 8),0,uVar13);
        goto LAB_00444254;
      }
    }
    iVar8 = FUN_0044e110(lVar9,uVar4,0,0,uVar13,1);
  }
LAB_00444254:
  local_168 = 0;
  local_17c[0] = '\0';
  local_178 = 0;
  uStack_170 = 0;
  if ((iVar8 != 1) || (iVar8 = FUN_00444740(param_1,&local_178,local_17c), iVar8 != 1)) {
LAB_00444710:
    FUN_0044e2c0(lVar9);
    return iVar8;
  }
  bVar17 = false;
LAB_004442bc:
  local_18c = 0;
  iVar8 = FUN_0044e400(lVar9,&local_188,8,&local_18c);
  if (iVar8 != 1) goto LAB_00444710;
  if (local_18c == 0) {
    iVar8 = 1;
    bVar17 = true;
  }
  else {
    if (local_18c != 8) {
      iVar8 = 7;
      goto LAB_00444710;
    }
    if (local_17c[0] == '\0') {
      if (0x53564e44 < local_188) {
        if (local_188 < 0x54494e49) {
          if (local_188 == 0x53564e45) {
            iVar8 = FUN_004460b0(param_1,local_184);
          }
          else {
            if (local_188 != 0x54414c50) goto switchD_004443c4_caseD_2;
            iVar8 = FUN_004463d0(param_1,local_184);
          }
          goto LAB_00444684;
        }
        if (local_188 == 0x54494e49) {
          piVar11 = (int *)FUN_0044e300(lVar9,local_184);
          if (piVar11 != (int *)0x0) {
            iVar8 = *piVar11;
            if (iVar8 == 0) {
              iVar8 = 1;
            }
            else {
              piVar11 = piVar11 + 1;
              do {
                while( true ) {
                  iVar2 = *piVar11;
                  uVar3 = piVar11[1];
                  piVar15 = piVar11 + 2;
                  piVar11 = piVar15;
                  if (uVar3 != 0) {
                    piVar11 = (int *)((long)piVar15 + (ulong)uVar3);
                  }
                  piVar1 = (int *)0x0;
                  if (uVar3 != 0) {
                    piVar1 = piVar15;
                  }
                  piVar14 = *(int **)PTR_DAT_02712fd0;
                  uVar3 = *(uint *)(PTR_DAT_02712fd0 + 8);
                  piVar15 = piVar14;
                  if (uVar3 == 0) break;
                  lVar16 = (ulong)uVar3 * 0x18;
                  do {
                    if (*piVar15 == iVar2) goto LAB_004445a0;
                    lVar16 = lVar16 + -0x18;
                    piVar15 = piVar15 + 6;
                  } while (lVar16 != 0);
LAB_004445b0:
                  piVar14 = *(int **)PTR_DAT_02712fd8;
                  uVar3 = *(uint *)(PTR_DAT_02712fd8 + 8);
                  piVar15 = piVar14;
                  if (uVar3 == 0) {
LAB_004445fc:
                    if (piVar15 != piVar14 + (ulong)uVar3 * 6) goto LAB_0044460c;
                  }
                  else {
                    lVar16 = (ulong)uVar3 * 0x18;
                    do {
                      if (*piVar15 == iVar2) goto LAB_004445fc;
                      lVar16 = lVar16 + -0x18;
                      piVar15 = piVar15 + 6;
                    } while (lVar16 != 0);
                  }
                  FUN_00433940(piVar1);
                  iVar8 = iVar8 + -1;
                  if (iVar8 == 0) goto LAB_0044462c;
                }
LAB_004445a0:
                if (piVar15 == piVar14 + (ulong)uVar3 * 6) goto LAB_004445b0;
LAB_0044460c:
                iVar8 = iVar8 + -1;
              } while (iVar8 != 0);
LAB_0044462c:
              iVar8 = 1;
            }
            goto LAB_00444340;
          }
          iVar8 = 2;
        }
        else {
          if (local_188 == 0x58444944) goto LAB_00444314;
switchD_004443c4_caseD_2:
          FUN_0044df40(lVar9,local_184,&local_18c);
          iVar8 = 7;
          if (local_18c == local_184) {
            iVar8 = 1;
          }
          bVar17 = (bool)(bVar17 | local_18c != local_184);
          if (iVar8 == 1) goto LAB_00444340;
        }
        goto LAB_00444710;
      }
      if (local_188 < 0x44495453) {
        if (local_188 == 0x41544144) goto code_r0x004443b0;
        if (local_188 != 0x43524948) goto switchD_004443c4_caseD_2;
        iVar8 = FUN_00445370(param_1,*param_3,uVar4);
      }
      else if (local_188 == 0x44495453) {
        iVar8 = FUN_00445800(param_1,local_184);
      }
      else {
        if (local_188 != 0x474d5453) goto switchD_004443c4_caseD_2;
        iVar8 = FUN_00445a90(param_1,local_184);
      }
    }
    else {
      if (local_188 != 0x41544144) {
        if (local_188 != 0x58444944) {
          if ((uint)local_178 < 0x80) {
            param3 = "an older";
          }
          else {
            param3 = "a newer";
          }
          snprintf(acStack_164,0x104,
                   "Load bank failed : incompatible bank version. Bank was generated with %s version of Wwise. The Bank version is %d and the current SDK version is %d"
                   ,param3,(uint)local_178,0x80);
          iVar8 = 0x40;
          goto LAB_00444710;
        }
LAB_00444314:
        if ((param_4 < 2) || (param_4 == 3)) {
          iVar8 = FUN_00445260(param_1,*param_3,local_184,uVar18 == 2);
          goto LAB_00444684;
        }
        if (param_4 == 2) goto switchD_004443c4_caseD_2;
switchD_004443c4_default:
        iVar8 = 1;
        goto LAB_00444340;
      }
code_r0x004443b0:
      switch(param_4) {
      case 0:
        if (uVar18 == 2 && (uVar18 | 1) == 3) {
          uVar13 = FUN_0044e300(lVar9);
          *(int *)(*param_3 + 0x38) = local_184;
          FUN_0044e600(lVar9);
          lVar16 = *param_3;
        }
        else {
          iVar8 = FUN_00444e00(param_1,local_184,uStack_170._6_2_ != 0,*param_3);
          if (iVar8 != 1) break;
          lVar16 = *param_3;
          uVar13 = *(undefined8 *)(lVar16 + 0x28);
        }
        iVar8 = FUN_00444f50(param_1,uVar13,lVar16);
        break;
      case 1:
      case 3:
        iVar8 = FUN_004448d0(param_1,*param_3,local_184,param_6 & 1);
        break;
      case 2:
        goto switchD_004443c4_caseD_2;
      default:
        goto switchD_004443c4_default;
      }
    }
LAB_00444684:
    if (iVar8 != 1) goto LAB_00444710;
  }
LAB_00444340:
  if (bVar17) goto LAB_00444710;
  goto LAB_004442bc;
}


