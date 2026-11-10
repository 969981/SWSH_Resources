/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00c983b0; name: FUN_00c983b0
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00c983b0(long *param_1,uint param_2,undefined8 param_3)

{
  int *piVar1;
  undefined *puVar2;
  undefined *puVar3;
  int iVar4;
  char cVar5;
  bool bVar6;
  ulong uVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  long *plVar11;
  int iVar12;
  ulong uVar13;
  int iVar14;
  long local_2a8;
  long local_2a0;
  long local_298;
  long local_290;
  long local_288;
  char local_27c [4];
  undefined *local_278;
  undefined4 local_270;
  undefined8 local_268;
  undefined4 local_260;
  long local_258;
  undefined8 uStack_250;
  undefined8 local_248;
  undefined8 local_240;
  long local_238;
  long local_230;
  long local_228;
  long local_220;
  long local_218;
  long local_210;
  long local_208;
  long local_200;
  long local_1f8;
  char local_1ec [4];
  undefined *local_1e8;
  undefined4 local_1e0;
  undefined8 local_1d8;
  undefined4 local_1d0;
  long local_1c8;
  undefined8 uStack_1c0;
  undefined8 local_1b8;
  undefined8 local_1b0;
  long local_1a8;
  long local_1a0;
  long local_198;
  long local_190;
  long local_188;
  long local_180;
  long local_178;
  long local_170;
  long local_168;
  char local_160;
  int local_15c;
  long local_158;
  undefined *local_150;
  undefined4 local_148;
  undefined8 local_140;
  undefined4 local_138;
  long local_130;
  undefined4 local_128;
  undefined1 local_124;
  undefined8 local_120;
  undefined8 uStack_118;
  undefined8 local_110;
  undefined8 uStack_108;
  char local_fc;
  undefined *local_f8;
  undefined4 local_f0;
  undefined8 local_e8;
  undefined4 local_e0;
  long local_d8;
  undefined4 local_d0;
  undefined1 local_cc;
  undefined8 local_c8;
  undefined8 local_c0;
  undefined8 uStack_b8;
  int local_ac;
  undefined *local_a8;
  undefined4 local_a0;
  undefined8 local_98;
  undefined4 local_90;
  long local_88;
  undefined4 local_80;
  undefined1 local_7c;
  undefined8 local_78;
  undefined8 local_70;
  undefined8 uStack_68;
  long local_58;
  
  puVar2 = PTR_DAT_0271c258;
  local_98 = 0;
  local_90 = 0;
  local_88 = 0;
  local_a8 = PTR_DAT_0271c500 + 0x10;
  local_70 = 0;
  uStack_68 = 0;
  local_80 = 0;
  local_7c = 0;
  local_78 = 0;
  local_a0 = 9;
  local_58 = 0;
  iVar12 = *(int *)PTR_DAT_0271c508;
  uVar13 = (ulong)iVar12;
  local_e8 = 0;
  local_e0 = 0;
  local_d8 = 0;
  local_d0 = 0;
  local_cc = 0;
  local_c0 = 0;
  uStack_b8 = 0;
  local_f8 = PTR_DAT_0271c510 + 0x10;
  local_c8 = 0;
  local_fc = '\0';
  local_140 = 0;
  local_138 = 0;
  local_f0 = 10;
  local_130 = 0;
  local_150 = PTR_DAT_0271c518 + 0x10;
  local_110 = 0;
  uStack_108 = 0;
  local_128 = 0;
  local_120 = 0;
  uStack_118 = 0;
  local_124 = 0;
  local_160 = '\0';
  local_1d8 = 0;
  local_1d0 = 0;
  local_158 = 0;
  local_148 = 0xb;
  local_278 = PTR_DAT_0271c258 + 0x10;
  local_1e0 = 7;
  local_270 = 7;
  local_1ec[0] = '\0';
  local_1b8 = 0;
  local_268 = 0;
  local_260 = 0;
  local_248 = 0;
  local_27c[0] = '\0';
  local_1c8 = 0;
  uStack_1c0 = 0;
  local_170 = 0;
  local_168 = 0;
  local_180 = 0;
  local_178 = 0;
  local_190 = 0;
  local_188 = 0;
  local_258 = 0;
  uStack_250 = 0;
  local_200 = 0;
  local_1f8 = 0;
  local_210 = 0;
  local_208 = 0;
  local_220 = 0;
  local_218 = 0;
  local_230 = 0;
  local_228 = 0;
  local_240 = 0;
  local_238 = 0;
  local_1a0 = 0;
  local_198 = 0;
  local_1b0 = 0;
  local_1a8 = 0;
  local_1e8 = local_278;
  local_15c = iVar12;
  local_ac = iVar12;
  FUN_00c99040(param_1,param_3,&local_a8,&local_58,&local_ac);
  if ((param_1[0x1a] == 0) || (*(int *)(param_1[0x1a] + 0x54) == 0)) {
    lVar9 = param_1[0xe];
    if ((lVar9 != 0) && (*(int *)(lVar9 + 0x54) != 0)) {
      piVar1 = (int *)(lVar9 + 0x54);
      iVar14 = *(int *)(lVar9 + 0x54);
      do {
        while( true ) {
          uVar7 = FUN_00c953c0(*(undefined8 *)(lVar9 + 0x58));
          if ((uVar7 & 1) == 0) goto LAB_00c985b8;
          iVar4 = *piVar1;
          if (iVar4 != iVar14) break;
          cVar5 = '\x01';
          bVar6 = (bool)ExclusiveMonitorPass(piVar1,0x10);
          if (bVar6) {
            *piVar1 = iVar14 + 1;
            cVar5 = ExclusiveMonitorsStatus();
          }
          if (cVar5 == '\0') {
            lVar10 = 0;
            if (*(long *)(lVar9 + 0x60) != 0) {
              lVar10 = *(long *)(lVar9 + 0x60) + -0x50;
            }
            goto LAB_00c985bc;
          }
          iVar14 = iVar4;
          if (iVar4 == 0) goto LAB_00c985b8;
        }
        ClearExclusiveLocal();
        iVar14 = iVar4;
      } while (iVar4 != 0);
    }
LAB_00c985b8:
    lVar10 = 0;
LAB_00c985bc:
    FUN_00caf180(&local_288,lVar10,&local_a8,0);
    if (param_1[0x1a] != 0) {
      (**(code **)(*(long *)(param_1[0x1a] + 0x48) + 0x18))();
      param_1[0x1a] = 0;
    }
    lVar9 = local_288;
    local_288 = 0;
    param_1[0x1a] = lVar9;
    if (lVar10 != 0) {
      (**(code **)(*(long *)(lVar10 + 0x48) + 0x18))((long *)(lVar10 + 0x48));
      lVar9 = param_1[0x1a];
    }
    lVar10 = local_58;
    iVar14 = local_ac;
    uVar7 = (ulong)local_ac;
    if (lVar9 != 0) {
      (**(code **)(*(long *)(lVar9 + 0x48) + 0x10))();
    }
    if ((-1 < iVar14) && (iVar14 < *(int *)(lVar10 + 8))) {
      lVar10 = *(long *)(lVar10 + 0x38);
      if (*(ulong *)(lVar10 + 0x48) <= uVar7) goto LAB_00c99038;
      lVar10 = *(long *)(lVar10 + 0x40);
      plVar11 = (long *)(lVar10 + uVar7 * 0x28 + 0x10);
      if (lVar9 != 0) {
        (**(code **)(*(long *)(lVar9 + 0x48) + 0x10))();
      }
      lVar8 = *plVar11;
      *plVar11 = lVar9;
      if (lVar8 != 0) {
        (**(code **)(*(long *)(lVar8 + 0x48) + 0x18))();
      }
      lVar10 = lVar10 + uVar7 * 0x28;
      *(undefined1 *)(lVar10 + 0x18) = 1;
      *(undefined8 *)(lVar10 + 0x1c) = 1;
    }
    if (lVar9 != 0) {
      (**(code **)(*(long *)(lVar9 + 0x48) + 0x18))((long *)(lVar9 + 0x48));
    }
  }
  if ((local_160 != '\0') && ((param_1[0x1c] == 0 || (*(int *)(param_1[0x1c] + 0x54) == 0)))) {
    lVar9 = param_1[0xe];
    if ((lVar9 != 0) && (*(int *)(lVar9 + 0x54) != 0)) {
      piVar1 = (int *)(lVar9 + 0x54);
      iVar14 = *(int *)(lVar9 + 0x54);
      do {
        while( true ) {
          uVar7 = FUN_00c953c0(*(undefined8 *)(lVar9 + 0x58));
          if ((uVar7 & 1) == 0) goto LAB_00c98718;
          iVar4 = *piVar1;
          if (iVar4 != iVar14) break;
          cVar5 = '\x01';
          bVar6 = (bool)ExclusiveMonitorPass(piVar1,0x10);
          if (bVar6) {
            *piVar1 = iVar14 + 1;
            cVar5 = ExclusiveMonitorsStatus();
          }
          if (cVar5 == '\0') {
            lVar10 = 0;
            if (*(long *)(lVar9 + 0x60) != 0) {
              lVar10 = *(long *)(lVar9 + 0x60) + -0x50;
            }
            goto LAB_00c9871c;
          }
          iVar14 = iVar4;
          if (iVar4 == 0) goto LAB_00c98718;
        }
        ClearExclusiveLocal();
        iVar14 = iVar4;
      } while (iVar4 != 0);
    }
LAB_00c98718:
    lVar10 = 0;
LAB_00c9871c:
    FUN_00caf180(&local_288,lVar10,&local_150,0);
    if (param_1[0x1c] != 0) {
      (**(code **)(*(long *)(param_1[0x1c] + 0x48) + 0x18))();
      param_1[0x1c] = 0;
    }
    lVar9 = local_288;
    local_288 = 0;
    param_1[0x1c] = lVar9;
    if (lVar10 != 0) {
      (**(code **)(*(long *)(lVar10 + 0x48) + 0x18))((long *)(lVar10 + 0x48));
      lVar9 = param_1[0x1c];
    }
    lVar10 = local_158;
    iVar14 = local_15c;
    uVar7 = (ulong)local_15c;
    if (lVar9 != 0) {
      (**(code **)(*(long *)(lVar9 + 0x48) + 0x10))();
    }
    if ((-1 < iVar14) && (iVar14 < *(int *)(lVar10 + 8))) {
      lVar10 = *(long *)(lVar10 + 0x38);
      if (*(ulong *)(lVar10 + 0x48) <= uVar7) goto LAB_00c99038;
      lVar10 = *(long *)(lVar10 + 0x40);
      plVar11 = (long *)(lVar10 + uVar7 * 0x28 + 0x10);
      if (lVar9 != 0) {
        (**(code **)(*(long *)(lVar9 + 0x48) + 0x10))();
      }
      lVar8 = *plVar11;
      *plVar11 = lVar9;
      if (lVar8 != 0) {
        (**(code **)(*(long *)(lVar8 + 0x48) + 0x18))();
      }
      lVar10 = lVar10 + uVar7 * 0x28;
      *(undefined1 *)(lVar10 + 0x18) = 1;
      *(undefined8 *)(lVar10 + 0x1c) = 1;
    }
    if (lVar9 != 0) {
      (**(code **)(*(long *)(lVar9 + 0x48) + 0x18))((long *)(lVar9 + 0x48));
    }
  }
  if ((local_fc != '\0') && ((param_1[0x1b] == 0 || (*(int *)(param_1[0x1b] + 0x54) == 0)))) {
    lVar9 = param_1[0xe];
    if ((lVar9 != 0) && (*(int *)(lVar9 + 0x54) != 0)) {
      piVar1 = (int *)(lVar9 + 0x54);
      iVar14 = *(int *)(lVar9 + 0x54);
      do {
        while( true ) {
          uVar7 = FUN_00c953c0(*(undefined8 *)(lVar9 + 0x58));
          if ((uVar7 & 1) == 0) goto LAB_00c98878;
          iVar4 = *piVar1;
          if (iVar4 != iVar14) break;
          cVar5 = '\x01';
          bVar6 = (bool)ExclusiveMonitorPass(piVar1,0x10);
          if (bVar6) {
            *piVar1 = iVar14 + 1;
            cVar5 = ExclusiveMonitorsStatus();
          }
          if (cVar5 == '\0') {
            lVar10 = 0;
            if (*(long *)(lVar9 + 0x60) != 0) {
              lVar10 = *(long *)(lVar9 + 0x60) + -0x50;
            }
            goto LAB_00c9887c;
          }
          iVar14 = iVar4;
          if (iVar4 == 0) goto LAB_00c98878;
        }
        ClearExclusiveLocal();
        iVar14 = iVar4;
      } while (iVar4 != 0);
    }
LAB_00c98878:
    lVar10 = 0;
LAB_00c9887c:
    FUN_00caf180(&local_288,lVar10,&local_f8,0);
    if (param_1[0x1b] != 0) {
      (**(code **)(*(long *)(param_1[0x1b] + 0x48) + 0x18))();
      param_1[0x1b] = 0;
    }
    lVar9 = local_288;
    local_288 = 0;
    param_1[0x1b] = lVar9;
    if (lVar10 != 0) {
      (**(code **)(*(long *)(lVar10 + 0x48) + 0x18))((long *)(lVar10 + 0x48));
      lVar9 = param_1[0x1b];
    }
    if (lVar9 != 0) {
      (**(code **)(*(long *)(lVar9 + 0x48) + 0x10))();
    }
    if ((-1 < iVar12) && (iVar12 < _DAT_00000008)) {
      if (*(ulong *)(_DAT_00000038 + 0x48) <= uVar13) {
LAB_00c99038:
                    /* WARNING: Subroutine does not return */
        abort();
      }
      lVar10 = *(long *)(_DAT_00000038 + 0x40);
      plVar11 = (long *)(lVar10 + uVar13 * 0x28 + 0x10);
      if (lVar9 != 0) {
        (**(code **)(*(long *)(lVar9 + 0x48) + 0x10))();
      }
      lVar8 = *plVar11;
      *plVar11 = lVar9;
      if (lVar8 != 0) {
        (**(code **)(*(long *)(lVar8 + 0x48) + 0x18))();
      }
      lVar10 = lVar10 + uVar13 * 0x28;
      *(undefined1 *)(lVar10 + 0x18) = 1;
      *(undefined8 *)(lVar10 + 0x1c) = 1;
    }
    if (lVar9 != 0) {
      (**(code **)(*(long *)(lVar9 + 0x48) + 0x18))((long *)(lVar9 + 0x48));
    }
  }
  lVar9 = param_1[0x1a];
  local_290 = lVar9;
  if (lVar9 != 0) {
    (**(code **)(*(long *)(lVar9 + 0x48) + 0x10))();
  }
  local_298 = param_1[0x1c];
  if (local_298 == 0) {
    FUN_00c9a2a0(param_1,&local_1e8,local_1ec,&local_278,local_27c,&local_290,&local_298);
  }
  else {
    plVar11 = (long *)(local_298 + 0x48);
    (**(code **)(*plVar11 + 0x10))(plVar11);
    FUN_00c9a2a0(param_1,&local_1e8,local_1ec,&local_278,local_27c,&local_290,&local_298);
    (**(code **)(*plVar11 + 0x18))(plVar11);
    local_298 = 0;
  }
  if (lVar9 != 0) {
    (**(code **)(*(long *)(lVar9 + 0x48) + 0x18))((long *)(lVar9 + 0x48));
    local_290 = 0;
  }
  if (local_1ec[0] == '\0') {
    lVar9 = param_1[0xe];
    if ((lVar9 != 0) && (*(int *)(lVar9 + 0x54) != 0)) {
      piVar1 = (int *)(lVar9 + 0x54);
      iVar12 = *(int *)(lVar9 + 0x54);
      do {
        while( true ) {
          uVar13 = FUN_00c953c0(*(undefined8 *)(lVar9 + 0x58));
          if ((uVar13 & 1) == 0) goto LAB_00c98ea0;
          iVar14 = *piVar1;
          if (iVar14 != iVar12) break;
          cVar5 = '\x01';
          bVar6 = (bool)ExclusiveMonitorPass(piVar1,0x10);
          if (bVar6) {
            *piVar1 = iVar12 + 1;
            cVar5 = ExclusiveMonitorsStatus();
          }
          if (cVar5 == '\0') {
            lVar10 = 0;
            if (*(long *)(lVar9 + 0x60) != 0) {
              lVar10 = *(long *)(lVar9 + 0x60) + -0x50;
            }
            local_2a0 = param_1[0x1a];
            goto joined_r0x00c99010;
          }
          iVar12 = iVar14;
          if (iVar14 == 0) goto LAB_00c98ea0;
        }
        ClearExclusiveLocal();
        iVar12 = iVar14;
      } while (iVar14 != 0);
    }
LAB_00c98ea0:
    lVar10 = 0;
    local_2a0 = param_1[0x1a];
joined_r0x00c99010:
    if (local_2a0 != 0) {
      (**(code **)(*(long *)(local_2a0 + 0x48) + 0x10))();
    }
    FUN_00c9a590(lVar10,param_2 & 1,&local_2a0,0,0);
    lVar9 = 0;
    if (local_2a0 != 0) {
      (**(code **)(*(long *)(local_2a0 + 0x48) + 0x18))();
      local_2a0 = 0;
      lVar9 = local_2a0;
    }
  }
  else {
    lVar9 = param_1[0xe];
    lVar10 = 0;
    if (lVar9 != 0) {
      if (*(int *)(lVar9 + 0x54) != 0) {
        piVar1 = (int *)(lVar9 + 0x54);
        iVar12 = *(int *)(lVar9 + 0x54);
        do {
          while( true ) {
            uVar13 = FUN_00c953c0(*(undefined8 *)(lVar9 + 0x58));
            if ((uVar13 & 1) == 0) goto LAB_00c98a48;
            iVar14 = *piVar1;
            if (iVar14 != iVar12) break;
            cVar5 = '\x01';
            bVar6 = (bool)ExclusiveMonitorPass(piVar1,0x10);
            if (bVar6) {
              *piVar1 = iVar12 + 1;
              cVar5 = ExclusiveMonitorsStatus();
            }
            if (cVar5 == '\0') {
              lVar10 = 0;
              if (*(long *)(lVar9 + 0x60) != 0) {
                lVar10 = *(long *)(lVar9 + 0x60) + -0x50;
              }
              goto LAB_00c98a4c;
            }
            iVar12 = iVar14;
            if (iVar14 == 0) goto LAB_00c98a48;
          }
          ClearExclusiveLocal();
          iVar12 = iVar14;
        } while (iVar14 != 0);
      }
LAB_00c98a48:
      lVar10 = 0;
    }
LAB_00c98a4c:
    FUN_00cb0000(&local_288,lVar10,param_2 & 1,&local_1e8,0,0,0);
    if (param_1[0x1f] != 0) {
      (**(code **)(*(long *)(param_1[0x1f] + 0x48) + 0x18))();
      param_1[0x1f] = 0;
    }
    lVar9 = local_288;
    local_288 = 0;
    param_1[0x1f] = lVar9;
    lVar9 = local_2a0;
  }
  local_2a0 = lVar9;
  if (lVar10 != 0) {
    (**(code **)(*(long *)(lVar10 + 0x48) + 0x18))((long *)(lVar10 + 0x48));
  }
  if (local_27c[0] == '\0') {
    lVar9 = param_1[0xe];
    if ((lVar9 != 0) && (*(int *)(lVar9 + 0x54) != 0)) {
      piVar1 = (int *)(lVar9 + 0x54);
      iVar12 = *(int *)(lVar9 + 0x54);
      do {
        while( true ) {
          uVar13 = FUN_00c953c0(*(undefined8 *)(lVar9 + 0x58));
          if ((uVar13 & 1) == 0) goto LAB_00c98f44;
          iVar14 = *piVar1;
          if (iVar14 != iVar12) break;
          cVar5 = '\x01';
          bVar6 = (bool)ExclusiveMonitorPass(piVar1,0x10);
          if (bVar6) {
            *piVar1 = iVar12 + 1;
            cVar5 = ExclusiveMonitorsStatus();
          }
          if (cVar5 == '\0') {
            lVar10 = 0;
            if (*(long *)(lVar9 + 0x60) != 0) {
              lVar10 = *(long *)(lVar9 + 0x60) + -0x50;
            }
            local_2a8 = param_1[0x1c];
            goto joined_r0x00c99030;
          }
          iVar12 = iVar14;
          if (iVar14 == 0) goto LAB_00c98f44;
        }
        ClearExclusiveLocal();
        iVar12 = iVar14;
      } while (iVar14 != 0);
    }
LAB_00c98f44:
    lVar10 = 0;
    local_2a8 = param_1[0x1c];
joined_r0x00c99030:
    if (local_2a8 != 0) {
      (**(code **)(*(long *)(local_2a8 + 0x48) + 0x10))();
    }
    FUN_00c9a590(lVar10,param_2 & 1,&local_2a8,0,0);
    lVar9 = 0;
    if (local_2a8 != 0) {
      (**(code **)(*(long *)(local_2a8 + 0x48) + 0x18))();
      local_2a8 = 0;
      lVar9 = local_2a8;
    }
  }
  else {
    lVar9 = param_1[0xe];
    lVar10 = 0;
    if (lVar9 != 0) {
      if (*(int *)(lVar9 + 0x54) != 0) {
        piVar1 = (int *)(lVar9 + 0x54);
        iVar12 = *(int *)(lVar9 + 0x54);
        do {
          while( true ) {
            uVar13 = FUN_00c953c0(*(undefined8 *)(lVar9 + 0x58));
            if ((uVar13 & 1) == 0) goto LAB_00c98afc;
            iVar14 = *piVar1;
            if (iVar14 != iVar12) break;
            cVar5 = '\x01';
            bVar6 = (bool)ExclusiveMonitorPass(piVar1,0x10);
            if (bVar6) {
              *piVar1 = iVar12 + 1;
              cVar5 = ExclusiveMonitorsStatus();
            }
            if (cVar5 == '\0') {
              lVar10 = 0;
              if (*(long *)(lVar9 + 0x60) != 0) {
                lVar10 = *(long *)(lVar9 + 0x60) + -0x50;
              }
              goto LAB_00c98b00;
            }
            iVar12 = iVar14;
            if (iVar14 == 0) goto LAB_00c98afc;
          }
          ClearExclusiveLocal();
          iVar12 = iVar14;
        } while (iVar14 != 0);
      }
LAB_00c98afc:
      lVar10 = 0;
    }
LAB_00c98b00:
    FUN_00cb0000(&local_288,lVar10,param_2 & 1,&local_278,0,0,0);
    if (param_1[0x20] != 0) {
      (**(code **)(*(long *)(param_1[0x20] + 0x48) + 0x18))();
      param_1[0x20] = 0;
    }
    lVar9 = local_288;
    local_288 = 0;
    param_1[0x20] = lVar9;
    lVar9 = local_2a8;
  }
  local_2a8 = lVar9;
  if (lVar10 != 0) {
    (**(code **)(*(long *)(lVar10 + 0x48) + 0x18))((long *)(lVar10 + 0x48));
  }
  if ((param_2 & 1) == 0) {
    FUN_00c97f60(param_1);
    *(undefined4 *)((long)param_1 + 0x94) = 3;
    if (*(char *)((long)param_1 + 0x7c) != '\0') {
      (**(code **)(*param_1 + 0x80))(param_1,param_1[0xd]);
    }
  }
  else {
    *(undefined4 *)((long)param_1 + 0x94) = 2;
  }
  local_278 = puVar2 + 0x10;
  if (local_1f8 != 0) {
    local_278 = puVar2 + 0x10;
    (**(code **)(*(long *)(local_1f8 + 0x48) + 0x18))();
    local_1f8 = 0;
  }
  if (local_200 != 0) {
    (**(code **)(*(long *)(local_200 + 0x48) + 0x18))();
    local_200 = 0;
  }
  if (local_208 != 0) {
    (**(code **)(*(long *)(local_208 + 0x48) + 0x18))();
    local_208 = 0;
  }
  if (local_210 != 0) {
    (**(code **)(*(long *)(local_210 + 0x48) + 0x18))();
    local_210 = 0;
  }
  if (local_218 != 0) {
    (**(code **)(*(long *)(local_218 + 0x48) + 0x18))();
    local_218 = 0;
  }
  if (local_220 != 0) {
    (**(code **)(*(long *)(local_220 + 0x48) + 0x18))();
    local_220 = 0;
  }
  if (local_228 != 0) {
    (**(code **)(*(long *)(local_228 + 0x48) + 0x18))();
    local_228 = 0;
  }
  if (local_230 != 0) {
    (**(code **)(*(long *)(local_230 + 0x48) + 0x18))();
    local_230 = 0;
  }
  if (local_238 != 0) {
    (**(code **)(*(long *)(local_238 + 0x48) + 0x18))();
    local_238 = 0;
  }
  puVar3 = PTR_DAT_0271c260;
  local_278 = PTR_DAT_0271c260 + 0x10;
  if (local_258 != 0) {
    (**(code **)(*(long *)(local_258 + 0x48) + 0x18))();
    local_258 = 0;
  }
  local_1e8 = puVar2 + 0x10;
  if (local_168 != 0) {
    (**(code **)(*(long *)(local_168 + 0x48) + 0x18))();
    local_168 = 0;
  }
  if (local_170 != 0) {
    (**(code **)(*(long *)(local_170 + 0x48) + 0x18))();
    local_170 = 0;
  }
  if (local_178 != 0) {
    (**(code **)(*(long *)(local_178 + 0x48) + 0x18))();
    local_178 = 0;
  }
  if (local_180 != 0) {
    (**(code **)(*(long *)(local_180 + 0x48) + 0x18))();
    local_180 = 0;
  }
  if (local_188 != 0) {
    (**(code **)(*(long *)(local_188 + 0x48) + 0x18))();
    local_188 = 0;
  }
  if (local_190 != 0) {
    (**(code **)(*(long *)(local_190 + 0x48) + 0x18))();
    local_190 = 0;
  }
  if (local_198 != 0) {
    (**(code **)(*(long *)(local_198 + 0x48) + 0x18))();
    local_198 = 0;
  }
  if (local_1a0 != 0) {
    (**(code **)(*(long *)(local_1a0 + 0x48) + 0x18))();
    local_1a0 = 0;
  }
  if (local_1a8 != 0) {
    (**(code **)(*(long *)(local_1a8 + 0x48) + 0x18))();
    local_1a8 = 0;
  }
  puVar2 = puVar3 + 0x10;
  local_1e8 = puVar2;
  if (local_1c8 != 0) {
    (**(code **)(*(long *)(local_1c8 + 0x48) + 0x18))();
    local_1c8 = 0;
  }
  local_150 = puVar2;
  if (local_130 != 0) {
    (**(code **)(*(long *)(local_130 + 0x48) + 0x18))();
    local_130 = 0;
  }
  puVar3 = puVar3 + 0x10;
  local_f8 = puVar3;
  if (local_d8 != 0) {
    (**(code **)(*(long *)(local_d8 + 0x48) + 0x18))();
    local_d8 = 0;
  }
  if (local_88 != 0) {
    local_a8 = puVar3;
    (**(code **)(*(long *)(local_88 + 0x48) + 0x18))();
  }
  return;
}


