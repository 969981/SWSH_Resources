/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00bf9bf0; name: FUN_00bf9bf0
 */


void FUN_00bf9bf0(undefined8 param_1,int param_2)

{
  undefined ***pppuVar1;
  code *pcVar2;
  undefined **local_150;
  undefined8 uStack_148;
  undefined ***local_130;
  undefined **local_120;
  undefined8 uStack_118;
  undefined ***local_100;
  undefined **local_f0;
  undefined8 uStack_e8;
  undefined ***local_d0;
  undefined **local_c0;
  undefined8 uStack_b8;
  undefined ***local_a0;
  undefined **local_90;
  undefined8 uStack_88;
  undefined ***local_70;
  undefined **local_60;
  undefined8 uStack_58;
  undefined ***local_40;
  
  local_40 = &local_60;
  local_60 = &PTR_LAB_026393c0;
  uStack_58 = param_1;
  if (param_2 == 1) {
    local_120 = &PTR_LAB_026394e0;
    uStack_118 = param_1;
    local_100 = &local_120;
    FUN_00bef0c0(param_1,0,&local_120);
    if (&local_120 == local_100) {
      pcVar2 = (code *)(*local_100)[4];
LAB_00bf9d44:
      (*pcVar2)();
    }
    else if (local_100 != (undefined ***)0x0) {
      pcVar2 = (code *)(*local_100)[5];
      goto LAB_00bf9d44;
    }
    local_150 = &PTR_LAB_02639528;
    uStack_148 = param_1;
    local_130 = &local_150;
    FUN_00bef0c0(param_1,1,&local_150);
    pppuVar1 = local_130;
    if (&local_150 != local_130) goto LAB_00bf9d78;
LAB_00bf9d30:
    pcVar2 = (code *)(*pppuVar1)[4];
LAB_00bf9d84:
    (*pcVar2)();
  }
  else {
    if (param_2 != 0) goto LAB_00bf9da8;
    local_90 = &PTR_LAB_02639408;
    uStack_88 = param_1;
    local_70 = &local_90;
    FUN_00bef0c0(param_1,3,&local_90);
    if (&local_90 == local_70) {
      pcVar2 = (code *)(*local_70)[4];
LAB_00bf9cb0:
      (*pcVar2)();
    }
    else if (local_70 != (undefined ***)0x0) {
      pcVar2 = (code *)(*local_70)[5];
      goto LAB_00bf9cb0;
    }
    local_c0 = &PTR_LAB_02639450;
    uStack_b8 = param_1;
    local_a0 = &local_c0;
    FUN_00bef0c0(param_1,0,&local_c0);
    if (&local_c0 == local_a0) {
      pcVar2 = (code *)(*local_a0)[4];
LAB_00bf9cfc:
      (*pcVar2)();
    }
    else if (local_a0 != (undefined ***)0x0) {
      pcVar2 = (code *)(*local_a0)[5];
      goto LAB_00bf9cfc;
    }
    local_f0 = &PTR_LAB_02639498;
    uStack_e8 = param_1;
    local_d0 = &local_f0;
    FUN_00bef0c0(param_1,1,&local_f0);
    pppuVar1 = local_d0;
    if (&local_f0 == local_d0) goto LAB_00bf9d30;
LAB_00bf9d78:
    if (pppuVar1 != (undefined ***)0x0) {
      pcVar2 = (code *)(*pppuVar1)[5];
      goto LAB_00bf9d84;
    }
  }
  FUN_00bef170(param_1);
  if (local_40 == (undefined ***)0x0) {
                    /* WARNING: Subroutine does not return */
    abort();
  }
  (*(code *)(*local_40)[6])();
LAB_00bf9da8:
  if (&local_60 == local_40) {
    pcVar2 = (code *)(*local_40)[4];
  }
  else {
    if (local_40 == (undefined ***)0x0) {
      return;
    }
    pcVar2 = (code *)(*local_40)[5];
  }
  (*pcVar2)();
  return;
}


