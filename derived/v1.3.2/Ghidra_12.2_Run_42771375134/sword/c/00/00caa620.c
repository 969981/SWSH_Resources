/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00caa620; name: FUN_00caa620
 */


void FUN_00caa620(long param_1,long *param_2)

{
  long lVar1;
  int iVar2;
  undefined8 *puVar3;
  ulong uVar4;
  undefined8 uVar5;
  long lVar6;
  ulong uVar7;
  long lVar8;
  undefined1 *puVar9;
  long local_160;
  long local_158;
  long local_150;
  long *plStack_148;
  long local_130;
  long local_128;
  long local_120;
  long *plStack_118;
  long local_100;
  long local_f8;
  long local_f0;
  long *plStack_e8;
  long local_d0;
  long local_c8;
  long local_c0;
  long *plStack_b8;
  long local_a0;
  long local_98;
  long local_90;
  long *plStack_88;
  long local_70 [2];
  
  if (*(long *)(param_1 + 0x1580) == 0) {
    local_70[0] = 0;
  }
  else {
    FUN_00c80dd0(local_70);
  }
  puVar3 = (undefined8 *)FUN_00cbe970(local_70[0],0x18);
  uVar5 = *puVar3;
  if (local_70[0] != 0) {
    (**(code **)(*(long *)(local_70[0] + 0x48) + 0x18))();
    local_70[0] = 0;
  }
  lVar6 = *param_2;
  if (param_2[1] != lVar6) {
    uVar7 = 0;
    do {
      lVar8 = lVar6 + uVar7 * 0x60;
      puVar9 = (undefined1 *)(lVar8 + 0x58);
      *puVar9 = 1;
      *(undefined8 *)(lVar8 + 0x50) = uVar5;
      if ((int)uVar7 != 0) {
        lVar6 = lVar6 + uVar7 * 0x60;
        lVar8 = 0;
        do {
          while( true ) {
            lVar1 = *param_2 + lVar8;
            iVar2 = *(int *)(lVar6 + 8);
            if (iVar2 != *(int *)(lVar1 + 8)) break;
            if (iVar2 - 4U < 2) {
              if ((((*(long *)(lVar6 + 0x10) != *(long *)(lVar1 + 0x10)) ||
                   (*(long *)(lVar6 + 0x18) != *(long *)(lVar1 + 0x18))) ||
                  (*(long *)(lVar6 + 0x20) != *(long *)(lVar1 + 0x20))) ||
                 (*(long *)(lVar6 + 0x28) != *(long *)(lVar1 + 0x28))) break;
            }
            else if ((1 < iVar2 - 2U) ||
                    (uVar4 = FUN_014ad9e0(lVar6 + 0x30,lVar1 + 0x30), (uVar4 & 1) == 0)) break;
            *puVar9 = 0;
            lVar8 = lVar8 + 0x60;
            if (uVar7 * 0x60 == lVar8) goto LAB_00caa794;
          }
          lVar8 = lVar8 + 0x60;
        } while (uVar7 * 0x60 != lVar8);
      }
LAB_00caa794:
      lVar6 = *param_2;
      uVar7 = (ulong)((int)uVar7 + 1);
    } while (uVar7 < (ulong)((param_2[1] - lVar6 >> 5) * -0x5555555555555555));
  }
  FUN_00cb4f10(&local_a0,param_2);
  if (local_a0 != 0) {
    local_98 = local_a0;
    (**(code **)(*plStack_88 + 0x18))(plStack_88,local_a0,local_90 - local_a0,8);
  }
  FUN_00cb4f10(&local_d0,param_2);
  FUN_00caaa00(param_1,&local_d0,param_1 + 0x1698,0x1c);
  if (local_d0 != 0) {
    local_c8 = local_d0;
    (**(code **)(*plStack_b8 + 0x18))(plStack_b8,local_d0,local_c0 - local_d0,8);
  }
  FUN_00cb4f10(&local_100,param_2);
  FUN_00caaa00(param_1,&local_100,param_1 + 0x1858,8);
  if (local_100 != 0) {
    local_f8 = local_100;
    (**(code **)(*plStack_e8 + 0x18))(plStack_e8,local_100,local_f0 - local_100,8);
  }
  FUN_00cb4f10(&local_130,param_2);
  FUN_00caaca0(param_1,&local_130,param_1 + 0x18d8,0x1c);
  if (local_130 != 0) {
    local_128 = local_130;
    (**(code **)(*plStack_118 + 0x18))(plStack_118,local_130,local_120 - local_130,8);
  }
  FUN_00cb4f10(&local_160,param_2);
  FUN_00caaca0(param_1,&local_160,param_1 + 0x1a98,7);
  if (local_160 != 0) {
    local_158 = local_160;
    (**(code **)(*plStack_148 + 0x18))(plStack_148,local_160,local_150 - local_160,8);
  }
  lVar6 = *param_2;
  lVar8 = param_2[1];
joined_r0x00caa924:
  do {
    if (lVar6 == lVar8) {
      return;
    }
    if (*(char *)(lVar6 + 0x58) == '\0') goto switchD_00caa950_default;
    switch(*(undefined4 *)(lVar6 + 8)) {
    case 2:
      FUN_00caaec0(param_1,lVar6,param_1 + 0x1698,0x1c);
    default:
switchD_00caa950_default:
      break;
    case 3:
      FUN_00caaec0(param_1,lVar6,param_1 + 0x1858,8);
      break;
    case 4:
      FUN_00cab0f0(param_1,lVar6,param_1 + 0x18d8,0x1c);
      break;
    case 5:
      goto switchD_00caa950_caseD_5;
    }
    lVar6 = lVar6 + 0x60;
  } while( true );
switchD_00caa950_caseD_5:
  FUN_00cab0f0(param_1,lVar6,param_1 + 0x1a98,7);
  lVar6 = lVar6 + 0x60;
  goto joined_r0x00caa924;
}


