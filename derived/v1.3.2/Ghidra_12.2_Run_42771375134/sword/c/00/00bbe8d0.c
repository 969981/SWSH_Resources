/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00bbe8d0; name: FUN_00bbe8d0
 */


void FUN_00bbe8d0(long param_1,int param_2)

{
  undefined8 uVar1;
  ulong uVar2;
  long lVar3;
  undefined8 local_40;
  long local_38;
  
  if (param_2 == 0) {
    lVar3 = param_1 + 0x100;
    uVar1 = FUN_00ffdc80(lVar3,"poke_panel");
    FUN_00ffdc80(lVar3,"poke_panel");
    local_40 = FUN_016b8190();
    local_38 = FUN_016b7950(uVar1,&local_40);
    if ((local_38 == 0x1c25f63e48ab9462) || (local_38 == -0x4ae43aff5c18c875)) {
      FUN_00ffda40(lVar3,&local_38);
      FUN_016b3850();
      return;
    }
    FUN_0167b9b0(*(undefined8 *)(*(long *)(param_1 + 0x600) + 0x60),
                 *(long *)(param_1 + 0x600) + 0x90,0);
    FUN_00bc1240(param_1);
    *(undefined4 *)(param_1 + 0x608) = 7;
    return;
  }
  if (param_2 != 4) {
    if (param_2 == 1) {
      FUN_00ffa160(param_1,0,1);
      *(undefined4 *)(param_1 + 0x608) = 1;
      return;
    }
    return;
  }
  if (*(char *)(param_1 + 0x60c) == '\0') {
    *(undefined4 *)(param_1 + 0x610) = 1;
    FUN_00ffdc80(param_1 + 0x100,"poke_panel");
    local_38 = FUN_016b8190();
    FUN_00bb50c0(param_1,&local_38,0);
    *(undefined1 *)(param_1 + 0x60c) = 1;
  }
  else {
    uVar2 = FUN_00bbd240(param_1);
    if ((uVar2 & 1) == 0) {
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
      local_38 = FUN_016b8190();
      FUN_00bb50c0(param_1,&local_38,0);
    }
  }
  FUN_00ffdc80(param_1 + 0x100,"poke_panel");
  local_38 = FUN_016b8190();
  switch(*(undefined4 *)(param_1 + 0x5cc)) {
  case 0:
    FUN_00bbba00(param_1,&local_38);
    lVar3 = *(long *)(param_1 + 0x4c0);
    break;
  case 1:
    FUN_00bbc160(param_1,&local_38);
    lVar3 = *(long *)(param_1 + 0x4c0);
    break;
  case 2:
  case 4:
    FUN_00bbc7e0(param_1,&local_38);
    lVar3 = *(long *)(param_1 + 0x4c0);
    goto joined_r0x00bbeb28;
  default:
    FUN_00bbcd10(param_1,&local_38);
    lVar3 = *(long *)(param_1 + 0x4c0);
joined_r0x00bbeb28:
    if (lVar3 == 0) {
      return;
    }
    goto LAB_00bbead0;
  }
  if (lVar3 != 0) {
LAB_00bbead0:
    FUN_016d2080();
  }
  return;
}


