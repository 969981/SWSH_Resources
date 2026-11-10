/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0067ee80; name: FUN_0067ee80
 */


undefined8 FUN_0067ee80(long param_1,long param_2)

{
  char *pcVar1;
  long *plVar2;
  long *plVar3;
  undefined *puVar4;
  long *plVar5;
  ulong uVar6;
  long lVar7;
  undefined1 *puVar8;
  long lVar9;
  ulong uVar10;
  ulong uVar11;
  undefined1 *puVar12;
  long lVar13;
  ulong uVar14;
  long *plVar15;
  ulong uVar16;
  long *local_e0;
  undefined1 *local_d8;
  ulong local_d0;
  long local_c8;
  ulong local_c0;
  ulong local_b8;
  undefined *local_b0;
  long *local_a8;
  ulong local_a0;
  ulong uStack_98;
  undefined8 local_90;
  long *local_88;
  long *local_80;
  long *plStack_78;
  long local_70;
  ulong local_68;
  
  puVar4 = PTR_DAT_02713f98;
  if (*(long *)(param_2 + 0x10) == 0) {
    return 0;
  }
  local_a8 = *(long **)(param_1 + 8);
  local_a0 = 0;
  uStack_98 = 0;
  local_b0 = PTR_DAT_02713f98 + 0x10;
  local_70 = 0;
  local_68 = 0;
  local_80 = (long *)0x0;
  plStack_78 = (long *)0x0;
  local_90 = 0x30;
  local_88 = (long *)0x0;
  if (local_a8 == (long *)0x0) {
    local_a8 = (long *)FUN_005bc6f0();
  }
  uVar6 = *(ulong *)(param_2 + 0x10);
  if (uVar6 == 0) {
    uVar16 = 0;
  }
  else {
    uVar16 = 0;
    while( true ) {
      lVar7 = 0;
      do {
        pcVar1 = (char *)(((ulong)&local_e0 | 1) + lVar7);
        lVar7 = lVar7 + 1;
      } while (*pcVar1 != '\0');
      if ((uVar6 <= uVar16) || (lVar7 == 0)) break;
      uVar14 = 0;
      while (*(char *)(*(long *)(param_2 + 8) + uVar16 + uVar14) != ',') {
        uVar14 = uVar14 + 1;
        if (uVar6 <= uVar16 + uVar14) goto LAB_0067f22c;
      }
      if ((long)(uVar16 + uVar14) < 0) break;
      if ((long)uVar16 < (long)(uVar16 + uVar14)) {
        local_e0 = *(long **)(param_1 + 8);
        local_d8 = (undefined1 *)0x0;
        local_c0 = 0;
        local_b8 = 0;
        local_d0 = 0;
        local_c8 = 0;
        if (local_e0 == (long *)0x0) {
          lVar7 = FUN_005bc740();
          if (lVar7 == 0) {
            local_e0 = (long *)FUN_005bc6f0();
            uVar6 = *(ulong *)(param_2 + 0x10);
            if (uVar6 == 0) goto LAB_0067f044;
            goto LAB_0067ef80;
          }
          local_e0 = (long *)FUN_005bc740();
          uVar6 = *(ulong *)(param_2 + 0x10);
          if (uVar6 != 0) goto LAB_0067ef80;
LAB_0067f044:
          if (local_d8 == (undefined1 *)0x0) {
            uVar6 = 0;
          }
          else {
            uVar6 = 0;
            *local_d8 = 0;
          }
LAB_0067f158:
          local_d0 = uVar6;
        }
        else {
LAB_0067ef80:
          if (uVar16 <= uVar6 && uVar6 - uVar16 != 0) {
            uVar6 = uVar6 - uVar16;
            if (uVar14 != 0) {
              uVar6 = uVar14;
            }
            if (local_c0 <= uVar6) {
              uVar11 = uVar6 + 1;
              if (local_c8 == 0) {
                if (uVar11 <= local_c0 * 2) {
                  uVar11 = local_c0 * 2;
                }
              }
              else {
                uVar11 = local_c8 + uVar11;
              }
              FUN_005c5e00(&local_e0,uVar11,0);
            }
            lVar9 = *(long *)(param_2 + 8);
            lVar7 = lVar9 + uVar16;
            uVar11 = uVar6;
            if ((long)uVar6 < 0) {
              if (lVar7 == 0) goto LAB_0067f158;
              uVar10 = 0;
              do {
                uVar11 = uVar10;
                uVar10 = uVar11 + 1;
              } while (*(char *)(lVar7 + uVar11) != '\0');
            }
            if ((local_d8 != (undefined1 *)0x0) && (0 < (long)uVar11)) {
              uVar10 = uVar11 & 7;
              if (uVar11 - 1 < 7) {
                lVar13 = 0;
              }
              else {
                lVar13 = 0;
                do {
                  puVar8 = (undefined1 *)(lVar7 + 3 + lVar13);
                  puVar12 = local_d8 + lVar13 + 3;
                  lVar13 = lVar13 + 8;
                  puVar12[-3] = puVar8[-3];
                  puVar12[-2] = puVar8[-2];
                  puVar12[-1] = puVar8[-1];
                  *puVar12 = *puVar8;
                  puVar12[1] = puVar8[1];
                  puVar12[2] = puVar8[2];
                  puVar12[3] = puVar8[3];
                  puVar12[4] = puVar8[4];
                } while (uVar11 - uVar10 != lVar13);
              }
              if (uVar10 != 0) {
                lVar7 = -uVar10;
                puVar8 = (undefined1 *)(lVar9 + uVar16 + lVar13);
                puVar12 = local_d8 + lVar13;
                do {
                  lVar7 = lVar7 + 1;
                  *puVar12 = *puVar8;
                  puVar8 = puVar8 + 1;
                  puVar12 = puVar12 + 1;
                } while (lVar7 != 0);
              }
              local_d8[uVar11] = 0;
            }
            goto LAB_0067f158;
          }
        }
        if (local_a0 < uStack_98) goto LAB_0067f170;
joined_r0x0067efe0:
        if (local_70 == 0) {
          lVar7 = uStack_98 * 2;
          if (lVar7 == 0) {
            lVar7 = 1;
          }
          uVar6 = FUN_005d04d0(&local_b0,lVar7,1);
        }
        else {
          uVar6 = FUN_005d04d0(&local_b0,local_70 + uStack_98,1);
        }
        if ((uVar6 & 1) != 0) goto LAB_0067f170;
        local_a0 = 0;
        local_80 = (long *)0x0;
        plStack_78 = (long *)0x0;
      }
      else {
        local_c0 = 0;
        local_b8 = 0;
        local_d0 = 0;
        local_c8 = 0;
        local_e0 = (long *)0x0;
        local_d8 = (undefined1 *)0x0;
        lVar7 = FUN_005bc740();
        if (lVar7 == 0) {
          local_e0 = (long *)FUN_005bc6f0();
          if (uStack_98 <= local_a0) goto joined_r0x0067efe0;
        }
        else {
          local_e0 = (long *)FUN_005bc740();
          if (uStack_98 <= local_a0) goto joined_r0x0067efe0;
        }
LAB_0067f170:
        FUN_005c80d0(local_88 + local_a0 * 6,&local_e0);
        local_a0 = local_a0 + 1;
        plStack_78 = local_88 + local_a0 * 6;
        local_80 = local_88;
      }
      if ((((local_b8 & 1) == 0) && (local_d8 != (undefined1 *)0x0)) && (local_e0 != (long *)0x0)) {
        (**(code **)(*local_e0 + 0x48))
                  (local_e0,local_d8,"../../../../Include\\SiCore/SiCore_String.inl",0xe1);
      }
      uVar16 = uVar16 + uVar14 + 1;
      uVar6 = *(ulong *)(param_2 + 0x10);
      if (uVar6 == 0) break;
    }
  }
LAB_0067f22c:
  if (uVar16 < uVar6) {
    local_e0 = *(long **)(param_1 + 8);
    local_d8 = (undefined1 *)0x0;
    local_c0 = 0;
    local_b8 = 0;
    local_d0 = 0;
    local_c8 = 0;
    if (local_e0 == (long *)0x0) {
      lVar7 = FUN_005bc740();
      if (lVar7 == 0) {
        local_e0 = (long *)FUN_005bc6f0();
        uVar6 = *(ulong *)(param_2 + 0x10);
        if (uVar6 == 0) goto LAB_0067f2d8;
        goto LAB_0067f24c;
      }
      local_e0 = (long *)FUN_005bc740();
      uVar6 = *(ulong *)(param_2 + 0x10);
      if (uVar6 != 0) goto LAB_0067f24c;
LAB_0067f2d8:
      if (local_d8 == (undefined1 *)0x0) {
        uVar14 = 0;
      }
      else {
        uVar14 = 0;
        *local_d8 = 0;
      }
LAB_0067f3f4:
      local_d0 = uVar14;
    }
    else {
LAB_0067f24c:
      uVar14 = uVar6 - uVar16;
      if (uVar16 <= uVar6 && uVar14 != 0) {
        if (local_c0 <= uVar14) {
          uVar6 = uVar14 + 1;
          if (local_c8 == 0) {
            if (uVar6 <= local_c0 * 2) {
              uVar6 = local_c0 * 2;
            }
          }
          else {
            uVar6 = local_c8 + uVar6;
          }
          FUN_005c5e00(&local_e0,uVar6,0);
        }
        lVar9 = *(long *)(param_2 + 8);
        lVar7 = lVar9 + uVar16;
        uVar6 = uVar14;
        if ((long)uVar14 < 0) {
          if (lVar7 == 0) goto LAB_0067f3f4;
          uVar11 = 0;
          do {
            uVar6 = uVar11;
            uVar11 = uVar6 + 1;
          } while (*(char *)(lVar7 + uVar6) != '\0');
        }
        if ((local_d8 != (undefined1 *)0x0) && (0 < (long)uVar6)) {
          uVar11 = uVar6 & 3;
          if (uVar6 - 1 < 3) {
            lVar13 = 0;
          }
          else {
            lVar13 = 0;
            do {
              puVar8 = (undefined1 *)(lVar7 + 1 + lVar13);
              puVar12 = local_d8 + lVar13 + 1;
              lVar13 = lVar13 + 4;
              puVar12[-1] = puVar8[-1];
              *puVar12 = *puVar8;
              puVar12[1] = puVar8[1];
              puVar12[2] = puVar8[2];
            } while (uVar6 - uVar11 != lVar13);
          }
          if (uVar11 != 0) {
            lVar7 = -uVar11;
            puVar8 = (undefined1 *)(lVar9 + uVar16 + lVar13);
            puVar12 = local_d8 + lVar13;
            do {
              lVar7 = lVar7 + 1;
              *puVar12 = *puVar8;
              puVar8 = puVar8 + 1;
              puVar12 = puVar12 + 1;
            } while (lVar7 != 0);
          }
          local_d8[uVar6] = 0;
        }
        goto LAB_0067f3f4;
      }
    }
    if (local_a0 < uStack_98) goto LAB_0067f404;
joined_r0x0067f2a0:
    if (local_70 == 0) {
      lVar7 = uStack_98 * 2;
      if (lVar7 == 0) {
        lVar7 = 1;
      }
      uVar6 = FUN_005d04d0(&local_b0,lVar7,1);
    }
    else {
      uVar6 = FUN_005d04d0(&local_b0,local_70 + uStack_98,1);
    }
    if ((uVar6 & 1) != 0) goto LAB_0067f404;
    local_a0 = 0;
    local_80 = (long *)0x0;
    plStack_78 = (long *)0x0;
    if ((local_b8 & 1) == 0) goto LAB_0067f438;
LAB_0067f4cc:
    uVar6 = *(ulong *)(param_1 + 0x30);
    uVar16 = *(ulong *)(param_1 + 0x38);
    if (uVar16 <= uVar6) {
LAB_0067f474:
      if (*(long *)(param_1 + 0x60) == 0) {
        lVar7 = uVar16 * 2;
        if (lVar7 == 0) {
          lVar7 = 1;
        }
        uVar6 = FUN_00680340(param_1 + 0x20,lVar7,1);
      }
      else {
        uVar6 = FUN_00680340(param_1 + 0x20,*(long *)(param_1 + 0x60) + uVar16,1);
      }
      if ((uVar6 & 1) == 0) {
        *(undefined8 *)(param_1 + 0x30) = 0;
        *(undefined8 *)(param_1 + 0x50) = 0;
        *(undefined8 *)(param_1 + 0x58) = 0;
        plVar2 = local_a8;
        plVar3 = local_88;
        goto joined_r0x0067f510;
      }
      uVar6 = *(ulong *)(param_1 + 0x30);
    }
  }
  else {
    local_c0 = 0;
    local_b8 = 0;
    local_d0 = 0;
    local_c8 = 0;
    local_e0 = (long *)0x0;
    local_d8 = (undefined1 *)0x0;
    lVar7 = FUN_005bc740();
    if (lVar7 == 0) {
      local_e0 = (long *)FUN_005bc6f0();
      if (uStack_98 <= local_a0) goto joined_r0x0067f2a0;
    }
    else {
      local_e0 = (long *)FUN_005bc740();
      if (uStack_98 <= local_a0) goto joined_r0x0067f2a0;
    }
LAB_0067f404:
    FUN_005c80d0(local_88 + local_a0 * 6,&local_e0);
    local_a0 = local_a0 + 1;
    plStack_78 = local_88 + local_a0 * 6;
    local_80 = local_88;
    if ((local_b8 & 1) != 0) goto LAB_0067f4cc;
LAB_0067f438:
    if ((local_d8 != (undefined1 *)0x0) && (local_e0 != (long *)0x0)) {
      (**(code **)(*local_e0 + 0x48))
                (local_e0,local_d8,"../../../../Include\\SiCore/SiCore_String.inl",0xe1);
    }
    local_d8 = (undefined1 *)0x0;
    uVar6 = *(ulong *)(param_1 + 0x30);
    uVar16 = *(ulong *)(param_1 + 0x38);
    if (uVar16 <= uVar6) goto LAB_0067f474;
  }
  FUN_0066e1f0(*(long *)(param_1 + 0x48) + uVar6 * 0x50,&local_b0);
  lVar7 = *(long *)(param_1 + 0x30) + 1;
  *(long *)(param_1 + 0x30) = lVar7;
  *(long *)(param_1 + 0x50) = *(long *)(param_1 + 0x48);
  *(long *)(param_1 + 0x58) = *(long *)(param_1 + 0x48) + lVar7 * 0x50;
  plVar2 = local_a8;
  plVar3 = local_88;
joined_r0x0067f510:
  if ((((local_68 & 1) == 0) && (local_b0 = puVar4 + 0x10, plVar3 != (long *)0x0)) &&
     (plVar2 != (long *)0x0)) {
    local_a8 = plVar2;
    local_88 = plVar3;
    lVar7 = (**(code **)(*plVar2 + 0x50))(plVar2,plVar3);
    if (lVar7 != 0) {
      plVar15 = plVar3;
      do {
        if ((*(byte *)(plVar15 + 5) & 1) == 0) {
          if (plVar15[1] != 0) {
            plVar5 = (long *)*plVar15;
            if (plVar5 != (long *)0x0) {
              (**(code **)(*plVar5 + 0x48))
                        (plVar5,plVar15[1],"../../../../Include\\SiCore/SiCore_String.inl",0xe1);
            }
            plVar15[1] = 0;
          }
          plVar15[1] = 0;
        }
        plVar15 = plVar15 + 6;
        lVar7 = lVar7 + -1;
      } while (lVar7 != 0);
    }
    (**(code **)(*plVar2 + 0x48))(plVar2,plVar3,"../../../../Include\\SiCore/SiCore_Array.h",0x5f2);
  }
  return 1;
}


