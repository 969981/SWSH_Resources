/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00bbe140; name: FUN_00bbe140
 */


void FUN_00bbe140(long param_1,undefined4 param_2)

{
  ushort uVar1;
  uint uVar2;
  uint uVar3;
  undefined8 uVar4;
  long lVar5;
  ulong uVar6;
  undefined4 uVar7;
  ulong uVar8;
  ushort *puVar9;
  long lVar10;
  int iVar11;
  long *plVar12;
  undefined8 local_68 [3];
  long local_50;
  long local_48;
  
  switch(param_2) {
  case 0:
    lVar5 = param_1 + 0x100;
    uVar4 = FUN_00ffdc80(lVar5,"poke_panel");
    FUN_00ffdc80(lVar5,"poke_panel");
    local_68[0] = FUN_016b8190();
    local_48 = FUN_016b7950(uVar4,local_68);
    if (local_48 < -0x28deae12defc8940) {
      if (local_48 != -0x4f66e07890fe68a9) {
        if (local_48 == -0x4ae43aff5c18c875) {
LAB_00bbe364:
          FUN_00ffda40(lVar5,&local_48);
          FUN_016b3850();
          goto LAB_00bbe614;
        }
LAB_00bbe204:
        if (*(int *)(param_1 + 0x61c) != 1) {
          FUN_0167b9b0(*(undefined8 *)(*(long *)(param_1 + 0x600) + 0x60),
                       *(long *)(param_1 + 0x600) + 0x90,0);
          uVar6 = FUN_00bc0b40(param_1);
          if ((uVar6 & 1) != 0) {
            FUN_006cf0a0(local_68,&DAT_02637c30);
            FUN_016d3620(local_68);
            if (local_50 != 0) {
              (**(code **)(*(long *)(local_50 + 0x48) + 0x18))();
            }
            uVar7 = 7;
            goto LAB_00bbe5f8;
          }
          goto LAB_00bbe4e0;
        }
        FUN_00ffdc80(lVar5,"poke_panel");
        uVar4 = FUN_016b8190();
        uVar2 = (uint)((ulong)uVar4 >> 0x20);
        uVar3 = uVar2 - 2;
        if (uVar2 < 2) {
LAB_00bbe51c:
          uVar2 = 0xffffffff;
          iVar11 = 2;
          uVar3 = 0xffffffff;
          uVar1 = *(ushort *)(param_1 + 0x6d8);
joined_r0x00bbe52c:
          uVar6 = (ulong)uVar1;
          if (uVar1 == 0) goto LAB_00bbe5b0;
LAB_00bbe530:
          uVar8 = 0;
          puVar9 = (ushort *)(*(long *)(param_1 + 0x6d0) + 6);
          do {
            if (((*(int *)(puVar9 + -3) == iVar11) && (uVar2 == puVar9[-1])) && (uVar3 == *puVar9))
            goto LAB_00bbe5b4;
            uVar8 = uVar8 + 1;
            puVar9 = puVar9 + 4;
          } while (uVar8 < uVar6);
        }
        else {
          if ((int)uVar4 != 0) {
            if (4 < uVar3) goto LAB_00bbe51c;
            lVar5 = *(long *)(*(long *)PTR_DAT_02710848 + 0x90);
            if (lVar5 != 0) {
              (**(code **)(*(long *)(lVar5 + 0x48) + 0x10))();
            }
            lVar10 = *(long *)(*(long *)PTR_DAT_02710798 + 0x228);
            if (lVar10 == 0) {
              uVar2 = FUN_0150b350(0);
            }
            else {
              plVar12 = (long *)(lVar10 + 0x48);
              (**(code **)(*plVar12 + 0x10))(plVar12);
              uVar2 = FUN_0150b350(lVar10);
              (**(code **)(*plVar12 + 0x18))(plVar12);
            }
            if (lVar5 != 0) {
              (**(code **)(*(long *)(lVar5 + 0x48) + 0x18))((long *)(lVar5 + 0x48));
            }
            uVar3 = FUN_00bcfb20(0,(int)uVar4 + -1,uVar3);
            iVar11 = 0;
            uVar1 = *(ushort *)(param_1 + 0x6d8);
            goto joined_r0x00bbe52c;
          }
          if (5 < (int)uVar3) goto LAB_00bbe51c;
          uVar2 = *(uint *)(param_1 + 0x614);
          iVar11 = 1;
          uVar3 = FUN_00bcfb20(1,0,uVar3);
          uVar6 = (ulong)*(ushort *)(param_1 + 0x6d8);
          if (*(ushort *)(param_1 + 0x6d8) != 0) goto LAB_00bbe530;
LAB_00bbe5b0:
          uVar8 = 0;
LAB_00bbe5b4:
          if ((int)uVar8 != (int)uVar6) {
            FUN_00bc0950(param_1);
            goto LAB_00bbe608;
          }
        }
        uVar6 = FUN_00bc0780(param_1);
        if ((uVar6 & 1) == 0) {
          uVar7 = 8;
LAB_00bbe5f8:
          *(undefined4 *)(param_1 + 0x608) = uVar7;
          return;
        }
        if (*(short *)(param_1 + 0x6da) == *(short *)(param_1 + 0x6d8)) {
switchD_00bbe178_caseD_1:
          FUN_00ffa160(param_1,0,1);
          *(undefined4 *)(param_1 + 0x608) = 1;
          return;
        }
      }
    }
    else if (local_48 != -0x28deae12defc8940) {
      if (local_48 == 0x1c25f63e48ab9462) goto LAB_00bbe364;
      goto LAB_00bbe204;
    }
LAB_00bbe608:
    if (*(long *)(param_1 + 0x4c0) != 0) {
      FUN_016d2080();
    }
LAB_00bbe614:
    FUN_006cf0a0(local_68,&DAT_02637c30);
    FUN_016d3620(local_68);
    if (local_50 == 0) {
      return;
    }
    (**(code **)(*(long *)(local_50 + 0x48) + 0x18))();
    return;
  case 1:
    goto switchD_00bbe178_caseD_1;
  case 2:
    if (*(short *)(param_1 + 0x6da) != *(short *)(param_1 + 0x6d8)) {
      FUN_00bc0420(param_1);
      if (*(long *)(param_1 + 0x4c0) == 0) {
        return;
      }
      goto LAB_00bbe384;
    }
    FUN_00bc0640();
    lVar5 = *(long *)(param_1 + 0x4c0);
    break;
  case 3:
    FUN_00bb7150(param_1);
    lVar5 = *(long *)(param_1 + 0x4c0);
    break;
  case 4:
    if (*(char *)(param_1 + 0x60c) == '\0') {
      *(undefined4 *)(param_1 + 0x610) = 1;
      FUN_00ffdc80(param_1 + 0x100,"poke_panel");
      local_68[0] = FUN_016b8190();
      FUN_00bb50c0(param_1,local_68,0);
      *(undefined1 *)(param_1 + 0x60c) = 1;
    }
    else {
      uVar6 = FUN_00bbd240(param_1);
      if ((uVar6 & 1) == 0) {
        if (*(char *)(param_1 + 0x60d) != '\0') {
          FUN_00ffd3a0(param_1 + 0x100,"anime_info_in");
          FUN_00ffcf80(param_1 + 0x100,"anime_info_out");
          *(undefined1 *)(param_1 + 0x60d) = 0;
        }
        *(undefined4 *)(param_1 + 0x610) = 0;
        *(undefined1 *)(param_1 + 0x60c) = 0;
      }
      else {
        *(undefined4 *)(param_1 + 0x610) = 2;
        FUN_00ffdc80(param_1 + 0x100,"poke_panel");
        local_68[0] = FUN_016b8190();
        FUN_00bb50c0(param_1,local_68,0);
      }
    }
    FUN_00ffdc80(param_1 + 0x100,"poke_panel");
    local_68[0] = FUN_016b8190();
    switch(*(undefined4 *)(param_1 + 0x5cc)) {
    case 0:
      FUN_00bbba00(param_1,local_68);
      break;
    case 1:
      FUN_00bbc160(param_1,local_68);
      break;
    case 2:
    case 4:
      FUN_00bbc7e0(param_1,local_68);
      break;
    default:
      FUN_00bbcd10(param_1,local_68);
    }
LAB_00bbe4e0:
    if (*(long *)(param_1 + 0x4c0) != 0) {
      FUN_016d2080();
    }
  default:
    goto switchD_00bbe178_default;
  }
  if (lVar5 != 0) {
LAB_00bbe384:
    FUN_016d2080();
    return;
  }
switchD_00bbe178_default:
  return;
}


