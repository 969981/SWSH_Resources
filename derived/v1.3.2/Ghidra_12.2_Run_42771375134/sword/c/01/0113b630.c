/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0113b630; name: FUN_0113b630
 */


undefined8 FUN_0113b630(long param_1)

{
  int *piVar1;
  int iVar2;
  char cVar3;
  char cVar4;
  bool bVar5;
  byte bVar6;
  ulong uVar7;
  undefined8 uVar8;
  long lVar9;
  undefined4 uVar10;
  code *pcVar11;
  long lVar12;
  long lVar13;
  long *plVar14;
  int iVar15;
  undefined1 *local_1e0;
  code *local_1d8;
  undefined1 *local_1d0;
  undefined1 *local_1c8;
  long alStack_1c0 [12];
  undefined1 *local_160;
  code *local_158;
  undefined1 *local_150;
  undefined1 *local_148;
  long local_140 [12];
  undefined1 *local_e0;
  code *local_d8;
  undefined1 *local_d0;
  undefined1 *local_c8;
  long alStack_c0 [12];
  undefined8 local_60;
  undefined1 auStack_58 [8];
  long local_48;
  
  lVar9 = param_1 + 0xc0;
  FUN_01134cf0(lVar9);
  uVar7 = FUN_011412a0(*(undefined8 *)(param_1 + 0x360));
  if (((uVar7 & 1) == 0) && (*(char *)(*(long *)(param_1 + 0x360) + 0x6b5) != '\0')) {
    switch(*(undefined4 *)(*(long *)(param_1 + 0x360) + 0x6b8)) {
    case 0:
      uVar10 = 6;
      break;
    case 1:
      uVar10 = 3;
      break;
    default:
      goto switchD_0113b690_caseD_2;
    case 3:
      uVar10 = 2;
      break;
    case 4:
      uVar10 = 1;
    }
    *(undefined4 *)(param_1 + 0x78) = uVar10;
  }
switchD_0113b690_caseD_2:
  uVar8 = 1;
  alStack_c0[0] = param_1;
  switch(*(undefined4 *)(param_1 + 0x7c)) {
  case 0:
    uVar7 = FUN_010367c0(*(undefined8 *)(param_1 + 0x360));
    if (((uVar7 & 1) == 0) &&
       (uVar7 = FUN_01036fd0(*(undefined8 *)(param_1 + 0x368)), (uVar7 & 1) != 0)) {
      FUN_0113b550(param_1);
    }
    break;
  case 1:
    uVar7 = (**(code **)(**(long **)(param_1 + 0x370) + 0x88))();
    if ((uVar7 & 1) != 0) {
      FUN_00ffa3d0(*(undefined8 *)(param_1 + 0x360),0);
      lVar9 = *(long *)(param_1 + 0x370);
      lVar12 = *(long *)(lVar9 + 0xba0);
joined_r0x0113be10:
      if (lVar12 != 0) {
        uVar7 = FUN_0103d280(lVar12);
        if ((uVar7 & 1) != 0) {
          uVar10 = 2;
          goto LAB_0113be2c;
        }
        lVar9 = *(long *)(param_1 + 0x370);
      }
      FUN_010364c0(lVar9,0);
      FUN_00ffa3d0(*(undefined8 *)(param_1 + 0x370),0);
      uVar10 = 1;
      goto LAB_0113be2c;
    }
    break;
  case 2:
    FUN_0113bff0(param_1);
    break;
  case 4:
    if (*(long *)(param_1 + 0x80) == 0) {
      local_e0 = (undefined1 *)0x0;
      FUN_01129df0(&local_60);
    }
    else {
      FUN_01128420(&local_e0);
      FUN_01129df0(&local_60,local_e0);
    }
    if (local_e0 != (undefined1 *)0x0) {
      (**(code **)(*(long *)(local_e0 + 0x48) + 0x18))();
    }
    if ((char)local_60 == '\0') {
      uVar10 = 5;
      goto LAB_0113be2c;
    }
    local_e0 = &LAB_0113cd40;
    local_d8 = FUN_0113cd50;
    local_d0 = &LAB_0113cd60;
    local_c8 = &LAB_0113cd70;
    local_160 = &LAB_0113cd80;
    local_158 = FUN_0113ce00;
    local_150 = &LAB_0113ce10;
    local_148 = &LAB_0113ce20;
    local_1e0 = &LAB_0113ce30;
    local_1d8 = FUN_0113ce40;
    local_1d0 = &LAB_0113ce50;
    local_1c8 = &LAB_0113ce60;
    alStack_1c0[0] = param_1;
    local_140[0] = param_1;
    FUN_01135190(lVar9,0,auStack_58,&local_e0,&local_160,&local_1e0);
    pcVar11 = local_1d8;
    if (local_1d8 != (code *)0x0) {
      local_1d0 = (undefined1 *)0x0;
      local_1c8 = (undefined1 *)0x0;
      local_1e0 = (undefined1 *)0x0;
      local_1d8 = (code *)0x0;
      (*pcVar11)(alStack_1c0);
    }
    pcVar11 = local_158;
    if (local_158 != (code *)0x0) {
      local_150 = (undefined1 *)0x0;
      local_148 = (undefined1 *)0x0;
      local_160 = (undefined1 *)0x0;
      local_158 = (code *)0x0;
      (*pcVar11)(local_140);
    }
    pcVar11 = local_d8;
    if (local_d8 != (code *)0x0) {
      local_d0 = (undefined1 *)0x0;
      local_c8 = (undefined1 *)0x0;
      local_e0 = (undefined1 *)0x0;
      local_d8 = (code *)0x0;
      (*pcVar11)(alStack_c0);
    }
    *(undefined4 *)(param_1 + 0x7c) = 3;
    break;
  case 5:
    local_1e0 = (undefined1 *)0x6b23ff5e5a9a290a;
    local_e0 = &LAB_0113ce70;
    local_d8 = FUN_0113cef0;
    local_d0 = &LAB_0113cf00;
    local_c8 = &LAB_0113cf10;
    local_160 = &LAB_0113cf20;
    local_158 = FUN_0113cf30;
    local_150 = &LAB_0113cf40;
    local_148 = &LAB_0113cf50;
    FUN_01134f50(lVar9,0,&local_1e0,&local_e0,&local_160);
    pcVar11 = local_158;
    goto joined_r0x0113bbe8;
  case 6:
    uVar8 = *(undefined8 *)(param_1 + 0xb0);
    *(undefined4 *)(param_1 + 0x7c) = 7;
    *(undefined1 *)(param_1 + 0x37c) = 0;
    FUN_01128420(&local_160,*(undefined8 *)(param_1 + 0x80));
    local_48 = *(long *)(local_160 + 0x3a0);
    if (local_48 != 0) {
      (**(code **)(*(long *)(local_48 + 0x48) + 0x10))();
    }
    local_e0 = &LAB_0113cf60;
    local_d8 = FUN_0113cf80;
    local_d0 = &LAB_0113cf90;
    local_c8 = &LAB_0113cfa0;
    bVar6 = FUN_0113ea70(uVar8,&local_48,&local_e0);
    pcVar11 = local_d8;
    *(byte *)(param_1 + 0x37c) = bVar6 & 1;
    if (local_d8 != (code *)0x0) {
      local_d0 = (undefined1 *)0x0;
      local_c8 = (undefined1 *)0x0;
      local_e0 = (undefined1 *)0x0;
      local_d8 = (code *)0x0;
      (*pcVar11)(alStack_c0);
    }
    if (local_48 != 0) {
      (**(code **)(*(long *)(local_48 + 0x48) + 0x18))();
      local_48 = 0;
    }
    if (local_160 != (undefined1 *)0x0) {
      (**(code **)(*(long *)(local_160 + 0x48) + 0x18))();
    }
    if (*(char *)(param_1 + 0x37c) != '\0') {
      local_1e0 = (undefined1 *)0x65a873e5d75aba64;
      local_e0 = &LAB_0113cfb0;
      local_d8 = FUN_0113cfc0;
      local_d0 = &LAB_0113cfd0;
      local_c8 = &LAB_0113cfe0;
      local_160 = &LAB_0113cff0;
      local_158 = FUN_0113d000;
      local_150 = &LAB_0113d010;
      local_148 = &LAB_0113d020;
      local_140[0] = param_1;
      alStack_c0[0] = param_1;
      FUN_011354c0(lVar9,0,&local_1e0,&local_e0,&local_160);
      pcVar11 = local_158;
      if (local_158 != (code *)0x0) {
        local_150 = (undefined1 *)0x0;
        local_148 = (undefined1 *)0x0;
        local_160 = (undefined1 *)0x0;
        local_158 = (code *)0x0;
        (*pcVar11)(local_140);
      }
      pcVar11 = local_d8;
      if (local_d8 != (code *)0x0) {
        local_d0 = (undefined1 *)0x0;
        local_c8 = (undefined1 *)0x0;
        local_e0 = (undefined1 *)0x0;
        local_d8 = (code *)0x0;
        (*pcVar11)(alStack_c0);
      }
    }
    break;
  case 8:
    local_1e0 = (undefined1 *)0x6b20fc5e5a97ee1a;
    local_e0 = &LAB_0113d030;
    local_d8 = (code *)&LAB_0113d0a0;
    local_d0 = &LAB_0113d0b0;
    local_c8 = &LAB_0113d0c0;
    local_160 = &LAB_0113d0d0;
    local_158 = (code *)&LAB_0113d0e0;
    local_150 = &LAB_0113d0f0;
    local_148 = &LAB_0113d100;
    goto LAB_0113bbc8;
  case 9:
    local_1e0 = (undefined1 *)0x6b23fb5e5a9a223e;
    local_e0 = &LAB_0113d110;
    local_d8 = FUN_0113d180;
    local_d0 = &LAB_0113d190;
    local_c8 = &LAB_0113d1a0;
    local_160 = &LAB_0113d1b0;
    local_158 = FUN_0113d1c0;
    local_150 = &LAB_0113d1d0;
    local_148 = &LAB_0113d1e0;
LAB_0113bbc8:
    local_140[0] = param_1;
    FUN_01134f50(lVar9,0,&local_1e0,&local_e0,&local_160);
    pcVar11 = local_158;
joined_r0x0113bbe8:
    local_158 = pcVar11;
    if (pcVar11 != (code *)0x0) {
      local_150 = (undefined1 *)0x0;
      local_148 = (undefined1 *)0x0;
      local_158 = (code *)0x0;
      local_160 = (undefined1 *)0x0;
      (*pcVar11)(local_140);
    }
    pcVar11 = local_d8;
    if (local_d8 != (code *)0x0) {
      plVar14 = alStack_c0;
      local_d0 = (undefined1 *)0x0;
      local_c8 = (undefined1 *)0x0;
      local_e0 = (undefined1 *)0x0;
      local_d8 = (code *)0x0;
LAB_0113bc14:
      (*pcVar11)(plVar14);
    }
LAB_0113bc18:
    uVar10 = 3;
LAB_0113be2c:
    *(undefined4 *)(param_1 + 0x7c) = uVar10;
    break;
  case 10:
    lVar9 = *(long *)(param_1 + 0xa0);
    if ((lVar9 != 0) && (*(int *)(lVar9 + 0x54) != 0)) {
      piVar1 = (int *)(lVar9 + 0x54);
      iVar15 = *(int *)(lVar9 + 0x54);
      do {
        while( true ) {
          uVar7 = FUN_01136750(*(undefined8 *)(lVar9 + 0x58));
          if ((uVar7 & 1) == 0) goto LAB_0113bd50;
          iVar2 = *piVar1;
          if (iVar2 != iVar15) break;
          cVar3 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
          if (bVar5) {
            *piVar1 = iVar15 + 1;
            cVar3 = ExclusiveMonitorsStatus();
          }
          if (cVar3 == '\0') {
            lVar9 = *(long *)(lVar9 + 0x60);
            if (lVar9 != 0) {
              FUN_0112a3d0(lVar9 + -0x50);
              (**(code **)(*(long *)(lVar9 + -8) + 0x18))((long *)(lVar9 + -8));
              uVar10 = 0xb;
              goto LAB_0113be2c;
            }
            goto LAB_0113bd50;
          }
          iVar15 = iVar2;
          if (iVar2 == 0) goto LAB_0113bd50;
        }
        ClearExclusiveLocal();
        iVar15 = iVar2;
      } while (iVar2 != 0);
    }
LAB_0113bd50:
    FUN_0112a3d0(0);
    uVar10 = 0xb;
    goto LAB_0113be2c;
  case 0xb:
    lVar12 = *(long *)(param_1 + 0xa0);
    if ((lVar12 != 0) && (*(int *)(lVar12 + 0x54) != 0)) {
      piVar1 = (int *)(lVar12 + 0x54);
      iVar15 = *(int *)(lVar12 + 0x54);
      do {
        while( true ) {
          uVar7 = FUN_01136750(*(undefined8 *)(lVar12 + 0x58));
          if ((uVar7 & 1) == 0) goto LAB_0113bd8c;
          iVar2 = *piVar1;
          if (iVar2 != iVar15) break;
          cVar3 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
          if (bVar5) {
            *piVar1 = iVar15 + 1;
            cVar3 = ExclusiveMonitorsStatus();
          }
          if (cVar3 == '\0') {
            lVar12 = *(long *)(lVar12 + 0x60);
            if (lVar12 != 0) {
              uVar7 = FUN_0112a3f0(lVar12 + -0x50);
              (**(code **)(*(long *)(lVar12 + -8) + 0x18))((long *)(lVar12 + -8));
              if ((uVar7 & 1) != 0) goto switchD_0113b6d4_caseD_3;
              goto LAB_0113bd98;
            }
            goto LAB_0113bd8c;
          }
          iVar15 = iVar2;
          if (iVar2 == 0) goto LAB_0113bd8c;
        }
        ClearExclusiveLocal();
        iVar15 = iVar2;
      } while (iVar2 != 0);
    }
LAB_0113bd8c:
    uVar7 = FUN_0112a3f0(0);
    if ((uVar7 & 1) != 0) break;
LAB_0113bd98:
    lVar12 = *(long *)(param_1 + 0xa0);
    cVar3 = DAT_00000068;
    if ((lVar12 != 0) && (*(int *)(lVar12 + 0x54) != 0)) {
      piVar1 = (int *)(lVar12 + 0x54);
      iVar15 = *(int *)(lVar12 + 0x54);
      do {
        while( true ) {
          uVar7 = FUN_01136750(*(undefined8 *)(lVar12 + 0x58));
          cVar3 = DAT_00000068;
          if ((uVar7 & 1) == 0) goto joined_r0x0113be04;
          iVar2 = *piVar1;
          if (iVar2 != iVar15) break;
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
          if (bVar5) {
            *piVar1 = iVar15 + 1;
            cVar4 = ExclusiveMonitorsStatus();
          }
          cVar3 = DAT_00000068;
          if (cVar4 == '\0') {
            lVar12 = *(long *)(lVar12 + 0x60);
            if (lVar12 != 0) {
              cVar3 = *(char *)(lVar12 + 0x18);
              (**(code **)(*(long *)(lVar12 + -8) + 0x18))();
            }
            goto joined_r0x0113be04;
          }
          iVar15 = iVar2;
          if (iVar2 == 0) goto joined_r0x0113be04;
        }
        ClearExclusiveLocal();
        iVar15 = iVar2;
      } while (iVar2 != 0);
    }
joined_r0x0113be04:
    if (cVar3 == '\0') {
      lVar9 = *(long *)(param_1 + 0x370);
      lVar12 = *(long *)(lVar9 + 0xba0);
      goto joined_r0x0113be10;
    }
    local_60 = 0x6b20f85e5a97e74e;
    lVar13 = *(long *)(param_1 + 0xa0);
    lVar12 = 0;
    if (lVar13 != 0) {
      if (*(int *)(lVar13 + 0x54) != 0) {
        piVar1 = (int *)(lVar13 + 0x54);
        iVar15 = *(int *)(lVar13 + 0x54);
        do {
          while( true ) {
            uVar7 = FUN_01136750(*(undefined8 *)(lVar13 + 0x58));
            if ((uVar7 & 1) == 0) goto LAB_0113bec0;
            iVar2 = *piVar1;
            if (iVar2 != iVar15) break;
            cVar3 = '\x01';
            bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
            if (bVar5) {
              *piVar1 = iVar15 + 1;
              cVar3 = ExclusiveMonitorsStatus();
            }
            if (cVar3 == '\0') {
              lVar12 = 0;
              if (*(long *)(lVar13 + 0x60) != 0) {
                lVar12 = *(long *)(lVar13 + 0x60) + -0x50;
              }
              goto LAB_0113bec4;
            }
            iVar15 = iVar2;
            if (iVar2 == 0) goto LAB_0113bec0;
          }
          ClearExclusiveLocal();
          iVar15 = iVar2;
        } while (iVar2 != 0);
      }
LAB_0113bec0:
      lVar12 = 0;
    }
LAB_0113bec4:
    local_e0 = &LAB_0113d1f0;
    local_d8 = FUN_0113d270;
    local_d0 = &LAB_0113d280;
    local_c8 = &LAB_0113d290;
    local_160 = &LAB_0113d2a0;
    local_158 = FUN_0113d390;
    local_150 = &LAB_0113d3a0;
    local_148 = &LAB_0113d3b0;
    local_1e0 = &LAB_0113d3c0;
    local_1d8 = FUN_0113d3d0;
    local_1d0 = &LAB_0113d3e0;
    local_1c8 = &LAB_0113d3f0;
    alStack_1c0[0] = param_1;
    local_140[0] = param_1;
    FUN_01135460(lVar9,0,&local_60,*(undefined4 *)(lVar12 + 0x6c),&local_e0,&local_160,&local_1e0);
    pcVar11 = local_1d8;
    if (local_1d8 != (code *)0x0) {
      local_1d0 = (undefined1 *)0x0;
      local_1c8 = (undefined1 *)0x0;
      local_1e0 = (undefined1 *)0x0;
      local_1d8 = (code *)0x0;
      (*pcVar11)(alStack_1c0);
    }
    pcVar11 = local_158;
    if (local_158 != (code *)0x0) {
      local_150 = (undefined1 *)0x0;
      local_148 = (undefined1 *)0x0;
      local_160 = (undefined1 *)0x0;
      local_158 = (code *)0x0;
      (*pcVar11)(local_140);
    }
    pcVar11 = local_d8;
    if (local_d8 != (code *)0x0) {
      local_d0 = (undefined1 *)0x0;
      local_c8 = (undefined1 *)0x0;
      local_e0 = (undefined1 *)0x0;
      local_d8 = (code *)0x0;
      (*pcVar11)(alStack_c0);
    }
    if (lVar12 != 0) {
      plVar14 = (long *)(lVar12 + 0x48);
      pcVar11 = *(code **)(*plVar14 + 0x18);
      goto LAB_0113bc14;
    }
    goto LAB_0113bc18;
  case 0xc:
    FUN_0113c380(param_1);
    break;
  case 0xd:
    FUN_0113c5b0(param_1);
    break;
  case 0xe:
    uVar7 = FUN_010367c0(*(undefined8 *)(param_1 + 0x360));
    if (((uVar7 & 1) == 0) &&
       (uVar7 = FUN_01037070(*(undefined8 *)(param_1 + 0x368)), (uVar7 & 1) != 0)) {
      uVar10 = 0xf;
      goto LAB_0113be2c;
    }
    break;
  case 0xf:
    goto switchD_0113b6d4_caseD_f;
  }
switchD_0113b6d4_caseD_3:
  uVar8 = 0;
switchD_0113b6d4_caseD_f:
  return uVar8;
}


