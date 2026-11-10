/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00bbdb90; name: FUN_00bbdb90
 */


void FUN_00bbdb90(long param_1,undefined4 param_2)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  undefined1 uVar4;
  undefined8 uVar5;
  undefined *puVar6;
  ulong uVar7;
  undefined4 *puVar8;
  long lVar9;
  uint uVar10;
  long local_58;
  undefined8 local_50 [3];
  long local_38;
  
  switch(param_2) {
  case 0:
    lVar9 = param_1 + 0x100;
    uVar5 = FUN_00ffdc80(lVar9,"poke_panel");
    FUN_00ffdc80(lVar9,"poke_panel");
    local_50[0] = FUN_016b8190();
    local_58 = FUN_016b7950(uVar5,local_50);
    if (local_58 < -0x28deae12defc8940) {
      if ((local_58 == -0x4f66e07890fe68a9) || (local_58 == -0x4ae43aff5c18c875)) {
LAB_00bbdd58:
        FUN_00ffda40(lVar9,&local_58);
        FUN_016b3850();
        puVar6 = &DAT_02637c30;
LAB_00bbde0c:
        FUN_006cf0a0(local_50,puVar6);
        FUN_016d3620(local_50);
        if (local_38 == 0) {
          return;
        }
        (**(code **)(*(long *)(local_38 + 0x48) + 0x18))();
        return;
      }
    }
    else if ((local_58 == -0x28deae12defc8940) || (local_58 == 0x1c25f63e48ab9462))
    goto LAB_00bbdd58;
    iVar2 = *(int *)(param_1 + 0x618);
    iVar3 = *(int *)(param_1 + 0x61c);
    if (iVar2 == 1) {
      if (iVar3 == 1) {
        if (*(char *)(param_1 + 0x620) == '\0') {
          uVar7 = FUN_00bbf470(param_1);
          if ((uVar7 & 1) == 0) {
            *(undefined4 *)(param_1 + 0x608) = 0x11;
            return;
          }
          return;
        }
      }
      else {
        if (iVar3 != 0) goto LAB_00bbdffc;
        if (*(char *)(param_1 + 0x620) == '\0') {
LAB_00bbe08c:
          FUN_0167b9b0(*(undefined8 *)(*(long *)(param_1 + 0x600) + 0x60),
                       *(long *)(param_1 + 0x600) + 0x90,0);
          uVar7 = FUN_00bbfa50(param_1);
          if ((uVar7 & 1) == 0) {
            FUN_006cf0a0(local_50,&DAT_02637c48);
            FUN_016d3620(local_50);
            if (local_38 != 0) {
              (**(code **)(*(long *)(local_38 + 0x48) + 0x18))();
            }
            *(undefined4 *)(param_1 + 0x608) = 8;
            return;
          }
          FUN_006cf0a0(local_50,&DAT_02637c30);
          FUN_016d3620(local_50);
          if (local_38 != 0) {
            (**(code **)(*(long *)(local_38 + 0x48) + 0x18))();
          }
          *(undefined4 *)(param_1 + 0x608) = 7;
          return;
        }
      }
      uVar7 = FUN_00bbf700(param_1);
    }
    else if (iVar3 == 1) {
      if (*(char *)(param_1 + 0x620) == '\0') {
        uVar7 = FUN_00bbff30(param_1);
      }
      else {
        if (iVar2 == 2) goto LAB_00bbe06c;
LAB_00bbdf24:
        if (iVar2 != 0) goto LAB_00bbdffc;
        uVar7 = FUN_00bc19f0(param_1);
      }
    }
    else {
      if (iVar3 == 2) {
        if (*(char *)(param_1 + 0x620) == '\0') {
          FUN_00bc00a0(param_1);
          return;
        }
        if (iVar2 == 2) {
          FUN_00bc3bd0(param_1);
          return;
        }
        if (iVar2 == 0) {
          FUN_00bc3760(param_1);
          return;
        }
        goto LAB_00bbdffc;
      }
      if (*(char *)(param_1 + 0x620) == '\0') goto LAB_00bbe08c;
      if (iVar2 != 2) goto LAB_00bbdf24;
LAB_00bbe06c:
      uVar7 = FUN_00bc1f00(param_1);
    }
    if ((uVar7 & 1) != 0) {
      return;
    }
LAB_00bbdffc:
    lVar9 = *(long *)(param_1 + 0x4c0);
    break;
  case 1:
    if ((*(int *)(param_1 + 0x61c) == 2) && (*(char *)(param_1 + 0x630) != '\0')) {
      FUN_00bbeb30(param_1);
      if (*(long *)(param_1 + 0x4c0) != 0) {
        FUN_016d2080();
      }
      puVar6 = &DAT_02637c00;
    }
    else {
      if (*(char *)(param_1 + 0x620) == '\0') {
        FUN_00ffa160(param_1,0,1);
        *(undefined4 *)(param_1 + 0x608) = 1;
        return;
      }
      if (*(int *)(param_1 + 0x618) == 1) {
        FUN_00bbecb0();
      }
      else {
        FUN_00bbf290(param_1);
      }
      puVar6 = &DAT_02637c18;
    }
    goto LAB_00bbde0c;
  case 2:
    FUN_00bb6760(param_1);
    lVar9 = *(long *)(param_1 + 0x4c0);
    goto joined_r0x00bbdca8;
  case 3:
    FUN_00bb7150(param_1);
    lVar9 = *(long *)(param_1 + 0x4c0);
joined_r0x00bbdca8:
    if (lVar9 == 0) {
      return;
    }
    FUN_016d2080();
    return;
  case 4:
    if (*(char *)(param_1 + 0x60c) == '\0') {
      *(undefined4 *)(param_1 + 0x610) = 1;
      if (*(char *)(param_1 + 0x620) == '\0') {
        FUN_00ffdc80(param_1 + 0x100,"poke_panel");
        local_50[0] = FUN_016b8190();
        FUN_00bb50c0(param_1,local_50,0);
      }
      else {
        if (*(int *)(param_1 + 0x618) == 1) {
          puVar8 = (undefined4 *)FUN_00bd0180(*(undefined8 *)(param_1 + 0x5f8));
          uVar1 = *puVar8;
          uVar4 = *(undefined1 *)(puVar8 + 1);
          uVar10 = (uint)*(byte *)((long)puVar8 + 5);
        }
        else {
          puVar8 = (undefined4 *)FUN_00bd2120(*(undefined8 *)(param_1 + 0x5f0));
          uVar10 = FUN_00bcfb20(*puVar8,(uint)puVar8[1] >> 8 & 0x3f,(uint)puVar8[1] >> 0xe & 0x3f);
          uVar1 = *puVar8;
          uVar4 = *(undefined1 *)(puVar8 + 1);
        }
        FUN_00bb7480(param_1,uVar1,uVar4,uVar10,0);
      }
      *(undefined1 *)(param_1 + 0x60c) = 1;
    }
    else {
      uVar7 = FUN_00bbd240(param_1);
      if ((uVar7 & 1) == 0) {
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
        if (*(char *)(param_1 + 0x620) == '\0') {
          FUN_00ffdc80(param_1 + 0x100,"poke_panel");
          local_50[0] = FUN_016b8190();
          FUN_00bb50c0(param_1,local_50,0);
        }
        else {
          if (*(int *)(param_1 + 0x618) == 1) {
            puVar8 = (undefined4 *)FUN_00bd0180(*(undefined8 *)(param_1 + 0x5f8));
            uVar1 = *puVar8;
            uVar4 = *(undefined1 *)(puVar8 + 1);
            uVar10 = (uint)*(byte *)((long)puVar8 + 5);
          }
          else {
            puVar8 = (undefined4 *)FUN_00bd2120(*(undefined8 *)(param_1 + 0x5f0));
            uVar10 = FUN_00bcfb20(*puVar8,(uint)puVar8[1] >> 8 & 0x3f,(uint)puVar8[1] >> 0xe & 0x3f)
            ;
            uVar1 = *puVar8;
            uVar4 = *(undefined1 *)(puVar8 + 1);
          }
          FUN_00bb7480(param_1,uVar1,uVar4,uVar10,0);
        }
      }
    }
    FUN_00ffdc80(param_1 + 0x100,"poke_panel");
    local_50[0] = FUN_016b8190();
    switch(*(undefined4 *)(param_1 + 0x5cc)) {
    case 0:
      FUN_00bbba00(param_1,local_50);
      lVar9 = *(long *)(param_1 + 0x4c0);
      break;
    case 1:
      FUN_00bbc160(param_1,local_50);
      lVar9 = *(long *)(param_1 + 0x4c0);
      break;
    case 2:
    case 4:
      FUN_00bbc7e0(param_1,local_50);
      lVar9 = *(long *)(param_1 + 0x4c0);
      break;
    default:
      FUN_00bbcd10(param_1,local_50);
      goto LAB_00bbdffc;
    }
    break;
  default:
    goto switchD_00bbdbc4_default;
  }
  if (lVar9 != 0) {
    FUN_016d2080();
  }
switchD_00bbdbc4_default:
  return;
}


