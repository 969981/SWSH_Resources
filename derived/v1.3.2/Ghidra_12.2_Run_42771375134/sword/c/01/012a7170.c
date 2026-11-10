/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 012a7170; name: FUN_012a7170
 */


/* WARNING: Type propagation algorithm not settling */

void FUN_012a7170(long param_1,long *param_2)

{
  undefined *puVar1;
  char *pcVar2;
  long lVar3;
  undefined1 *puVar4;
  char *pcVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  char cVar10;
  ulong uVar11;
  long lVar12;
  undefined8 uVar13;
  int iVar14;
  int iVar15;
  undefined8 *puVar16;
  char *pcVar17;
  long lVar18;
  long *plVar19;
  long lVar20;
  long *local_2a8;
  long *local_2a0;
  ulong local_290;
  ulong local_288;
  ulong local_280;
  ulong local_278;
  ulong local_270;
  ulong uStack_268;
  undefined8 local_260;
  undefined8 local_258;
  undefined8 uStack_250;
  undefined4 local_248;
  ulong local_1d0;
  undefined8 local_1c8;
  undefined8 auStack_1c0 [22];
  char local_110;
  ulong local_10c;
  ulong uStack_104;
  ulong local_fc;
  ulong uStack_f4;
  ulong local_ec;
  ulong uStack_e4;
  undefined8 local_dc;
  undefined8 local_d4;
  undefined8 local_cc;
  undefined4 local_c4;
  char local_c0;
  undefined8 local_bc;
  char local_b0;
  ulong local_a8;
  ulong local_a0;
  ulong local_98;
  ulong local_90;
  ulong local_88;
  undefined *local_78;
  long lStack_70;
  
  nn::os::LockMutex((MutexType *)(param_1 + 0xa0));
  if ((*(char *)(param_1 + 0xc0) == '\0') &&
     (thunk_FUN_011f3570(&local_1d0), *(char *)(param_1 + 0xc0) == '\0')) {
    *(undefined1 *)(param_1 + 0xc0) = 1;
  }
  puVar16 = *(undefined8 **)(param_1 + 0x80);
  pcVar2 = (char *)*puVar16;
  pcVar5 = (char *)puVar16[1];
  while (pcVar5 != pcVar2) {
    if (pcVar5[-0x30] != '\0') {
      pcVar5[-0x30] = '\0';
    }
    if (pcVar5[-0x40] != '\0') {
      pcVar5[-0x40] = '\0';
    }
    pcVar17 = pcVar5 + -0x150;
    if (pcVar5[-0x90] != '\0') {
      pcVar5[-0x90] = '\0';
    }
    pcVar5 = pcVar17;
    if (*pcVar17 != '\0') {
      *pcVar17 = '\0';
    }
  }
  puVar16[1] = pcVar2;
  lVar18 = *param_2;
  lVar3 = param_2[1];
  if (lVar18 != lVar3) {
    puVar1 = PTR_DAT_027272b8 + 0x10;
    do {
      local_2a0 = (long *)(param_1 + 0xd0);
      local_2a8 = (long *)(param_1 + 200);
      lVar12 = *(long *)(lVar18 + 0x40);
      if ((*(long *)(lVar18 + 0x48) != lVar12) &&
         ((int)*(long *)(lVar18 + 0x48) - (int)lVar12 == 200)) {
        local_78 = puVar1;
        lStack_70 = lVar12;
        uVar11 = FUN_01210290(&local_78);
        if ((uVar11 & 1) != 0) {
          lVar12 = (**(code **)(local_78 + 0x10))(&local_78);
          local_1d0 = local_1d0 & 0xffffffffffffff00;
          local_110 = '\0';
          local_c0 = '\0';
          local_b0 = '\0';
          FUN_0121ad90(&local_290,lVar12 + 5,0x28);
          local_98 = local_280;
          local_90 = local_278;
          local_88 = local_270;
          local_a8 = local_290;
          local_a0 = local_288;
          if (local_b0 == '\0') {
            local_b0 = '\x01';
          }
          local_290 = 6;
          uVar13 = FUN_012187d0(lVar12 + 0x2d,&local_290);
          if (local_c0 == '\0') {
            local_c0 = '\x01';
            local_bc = uVar13;
          }
          else {
            local_bc._0_6_ = (undefined6)uVar13;
          }
          FUN_0121cd80(&local_290,lVar12 + 0x33,0x31);
          local_10c = local_290;
          uStack_104 = local_288;
          local_ec = local_270;
          uStack_e4 = uStack_268;
          local_fc = local_280;
          uStack_f4 = local_278;
          local_c4 = local_248;
          local_d4 = local_258;
          local_cc = uStack_250;
          local_dc = local_260;
          if (local_110 == '\0') {
            local_110 = '\x01';
          }
          FUN_01223900(&local_290,lVar12 + 100,0x37);
          if ((char)local_1d0 == '\0') {
            memcpy(auStack_1c0,&local_290,0xb0);
            local_1d0 = CONCAT71(local_1d0._1_7_,1);
            uVar11 = local_288;
            uVar6 = local_280;
            uVar7 = local_278;
            uVar8 = local_270;
            uVar9 = uStack_268;
            local_288 = local_a8;
            local_280 = local_a0;
            local_278 = local_98;
            local_270 = local_90;
            uStack_268 = local_88;
          }
          else {
            memcpy(auStack_1c0,&local_290,0xa1);
            uVar11 = local_288;
            uVar6 = local_280;
            uVar7 = local_278;
            uVar8 = local_270;
            uVar9 = uStack_268;
            local_288 = local_a8;
            local_280 = local_a0;
            local_278 = local_98;
            local_270 = local_90;
            uStack_268 = local_88;
          }
          local_a8 = local_288;
          local_a0 = local_280;
          local_98 = local_278;
          local_90 = local_270;
          local_88 = uStack_268;
          if (local_b0 != '\0') {
            if (local_c0 != '\0') {
              if (local_110 != '\0') {
                local_290._1_7_ = (undefined7)(local_290 >> 8);
                local_290 = CONCAT71(local_290._1_7_,1);
                local_2a8 = (long *)*local_2a8;
                plVar19 = (long *)*local_2a0;
                if ((local_2a8 != plVar19) &&
                   (lVar20 = *local_2a8, lVar12 = FUN_0121b000(&local_288), lVar12 != lVar20)) {
                  do {
                    local_2a8 = local_2a8 + 1;
                    if (plVar19 == local_2a8) {
                      if ((long *)*local_2a0 != plVar19) goto LAB_012a769c;
                      goto LAB_012a7474;
                    }
                    lVar20 = *local_2a8;
                    lVar12 = FUN_0121b000(&local_288);
                  } while (lVar12 != lVar20);
                }
                if ((long *)*local_2a0 == local_2a8) {
LAB_012a7474:
                  if (*(char *)(param_1 + 0xc0) != '\0') {
                    uVar13 = FUN_0121aff0(&local_288);
                    uVar11 = FUN_011f4020(param_1 + 0xc1,uVar13);
                    if ((uVar11 & 1) != 0) {
                      goto joined_r0x012a74a0;
                    }
                  }
                  iVar15 = 0;
                  iVar14 = 0;
                  cVar10 = (char)local_290;
                }
                else {
LAB_012a769c:
joined_r0x012a74a0:
                  iVar15 = 3;
                  iVar14 = 3;
                  cVar10 = (char)local_290;
                }
                if (cVar10 != '\0') {
                  local_290 = local_290 & 0xffffffffffffff00;
                  iVar14 = iVar15;
                }
                uVar11 = local_288;
                uVar6 = local_280;
                uVar7 = local_278;
                uVar8 = local_270;
                uVar9 = uStack_268;
                if (iVar14 == 0) {
                  local_290 = local_290 & 0xffffffffffffff00;
                  if ((char)local_1d0 != '\0') {
                    memcpy(&local_280,auStack_1c0,0xb0);
                    local_290 = CONCAT71(local_290._1_7_,1);
                    FUN_01223ca0(&local_280);
                    cVar10 = FUN_01223390();
                    uVar11 = FUN_01223b60(&local_280);
                    if (((uVar11 & 1) == 0) || (5 < (byte)(cVar10 - 1U))) {
                      iVar14 = 3;
                    }
                    else {
                      iVar14 = *(int *)(&DAT_02168a70 + (long)(char)(cVar10 - 1U) * 4);
                    }
                    if ((char)local_290 != '\0') {
                      local_290 = local_290 & 0xffffffffffffff00;
                    }
                    uVar11 = local_288;
                    uVar6 = local_280;
                    uVar7 = local_278;
                    uVar8 = local_270;
                    uVar9 = uStack_268;
                    if (iVar14 != 0) goto joined_r0x012a76b8;
                  }
                  plVar19 = *(long **)(param_1 + 0x80);
                  puVar4 = (undefined1 *)plVar19[1];
                  uVar11 = local_288;
                  uVar6 = local_280;
                  uVar7 = local_278;
                  uVar8 = local_270;
                  uVar9 = uStack_268;
                  if ((ulong)(((long)puVar4 - *plVar19 >> 4) * -0x30c30c30c30c30c3) <
                      *(ulong *)(param_1 + 0x58)) {
                    if (puVar4 < (undefined1 *)plVar19[2]) {
                      lVar20 = plVar19[3];
                      lVar12 = nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_02710860);
                      if (0xf < *(ulong *)(lVar12 + 0x80)) {
                    /* WARNING: Subroutine does not return */
                        abort();
                      }
                      *(long *)(lVar12 + *(ulong *)(lVar12 + 0x80) * 8) = lVar20;
                      *(long *)(lVar12 + 0x80) = *(long *)(lVar12 + 0x80) + 1;
                      *puVar4 = 0;
                      puVar4[0xc0] = 0;
                      puVar4[0x110] = 0;
                      puVar4[0x120] = 0;
                      if (local_b0 != '\0') {
                        *(ulong *)(puVar4 + 0x128) = local_a8;
                        *(ulong *)(puVar4 + 0x130) = local_a0;
                        *(ulong *)(puVar4 + 0x138) = local_98;
                        *(ulong *)(puVar4 + 0x140) = local_90;
                        *(ulong *)(puVar4 + 0x148) = local_88;
                        puVar4[0x120] = 1;
                      }
                      if (local_c0 != '\0') {
                        *(undefined8 *)(puVar4 + 0x114) = local_bc;
                        puVar4[0x110] = 1;
                      }
                      if (local_110 != '\0') {
                        *(ulong *)(puVar4 + 0xcc) = uStack_104;
                        *(ulong *)(puVar4 + 0xc4) = local_10c;
                        *(ulong *)(puVar4 + 0xec) = uStack_e4;
                        *(ulong *)(puVar4 + 0xe4) = local_ec;
                        *(ulong *)(puVar4 + 0xdc) = uStack_f4;
                        *(ulong *)(puVar4 + 0xd4) = local_fc;
                        *(undefined4 *)(puVar4 + 0x10c) = local_c4;
                        *(undefined8 *)(puVar4 + 0xf4) = local_dc;
                        *(undefined8 *)(puVar4 + 0xfc) = local_d4;
                        *(undefined8 *)(puVar4 + 0x104) = local_cc;
                        puVar4[0xc0] = 1;
                      }
                      if ((char)local_1d0 != '\0') {
                        memcpy(puVar4 + 0x10,auStack_1c0,0xb0);
                        *puVar4 = 1;
                      }
                      *(long *)(lVar12 + 0x80) = *(long *)(lVar12 + 0x80) + -1;
                      plVar19[1] = plVar19[1] + 0x150;
                      uVar11 = local_288;
                      uVar6 = local_280;
                      uVar7 = local_278;
                      uVar8 = local_270;
                      uVar9 = uStack_268;
                    }
                    else {
                      FUN_012a7df0(plVar19,&local_1d0);
                      uVar11 = local_288;
                      uVar6 = local_280;
                      uVar7 = local_278;
                      uVar8 = local_270;
                      uVar9 = uStack_268;
                    }
                  }
                }
              }
            }
joined_r0x012a76b8:
            if (local_b0 != '\0') {
            }
          }
          uStack_268 = uVar9;
          local_270 = uVar8;
          local_278 = uVar7;
          local_280 = uVar6;
          local_288 = uVar11;
          local_b0 = 0;
          if (local_c0 != '\0') {
            local_c0 = '\0';
          }
          if (local_110 != '\0') {
            local_110 = '\0';
          }
          if ((char)local_1d0 != '\0') {
            local_1d0 = local_1d0 & 0xffffffffffffff00;
          }
        }
      }
      lVar18 = lVar18 + 0x60;
    } while (lVar18 != lVar3);
  }
  *(undefined8 *)(param_1 + 0xd0) = *(undefined8 *)(param_1 + 200);
  plVar19 = *(long **)(param_1 + 0x80);
  if (*plVar19 != plVar19[1]) {
    uVar13 = *(undefined8 *)(param_1 + 0x60);
    local_1d0 = *(ulong *)(param_1 + 0x68);
    *(long **)(param_1 + 0x60) = plVar19;
    *(undefined8 *)(param_1 + 0x80) = uVar13;
    local_1c8 = *(undefined8 *)(param_1 + 0x70);
    auStack_1c0[0] = *(undefined8 *)(param_1 + 0x78);
    *(undefined8 *)(param_1 + 0x70) = *(undefined8 *)(param_1 + 0x90);
    *(undefined8 *)(param_1 + 0x78) = *(undefined8 *)(param_1 + 0x98);
    *(undefined8 *)(param_1 + 0x68) = *(undefined8 *)(param_1 + 0x88);
    *(ulong *)(param_1 + 0x88) = local_1d0;
    *(undefined8 *)(param_1 + 0x90) = local_1c8;
    *(undefined8 *)(param_1 + 0x98) = auStack_1c0[0];
  }
  nn::os::UnlockMutex((MutexType *)(param_1 + 0xa0));
  return;
}


