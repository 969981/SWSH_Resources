/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00c0bc00; name: FUN_00c0bc00
 */


void FUN_00c0bc00(undefined8 param_1,undefined8 param_2)

{
  undefined ***pppuVar1;
  code *pcVar2;
  undefined **local_180;
  undefined8 uStack_178;
  undefined ***local_160;
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
  
  if ((int)param_2 == 1) {
    local_120 = &PTR_LAB_0263b980;
    uStack_118 = param_1;
    local_100 = &local_120;
    FUN_00bef0c0(param_1,2,&local_120);
    if (&local_120 == local_100) {
      pcVar2 = (code *)(*local_100)[4];
LAB_00c0bcf4:
      (*pcVar2)();
    }
    else if (local_100 != (undefined ***)0x0) {
      pcVar2 = (code *)(*local_100)[5];
      goto LAB_00c0bcf4;
    }
    local_150 = &PTR_LAB_0263b9c8;
    uStack_148 = param_1;
    local_130 = &local_150;
    FUN_00bef0c0(param_1,7,&local_150);
    if (&local_150 == local_130) {
      pcVar2 = (code *)(*local_130)[4];
LAB_00c0bd8c:
      (*pcVar2)();
    }
    else if (local_130 != (undefined ***)0x0) {
      pcVar2 = (code *)(*local_130)[5];
      goto LAB_00c0bd8c;
    }
    local_180 = &PTR_LAB_0263ba10;
    uStack_178 = param_1;
    local_160 = &local_180;
    FUN_00bef0c0(param_1,1,&local_180);
    pppuVar1 = local_160;
    if (&local_180 == local_160) goto LAB_00c0be0c;
LAB_00c0bdc0:
    if (pppuVar1 == (undefined ***)0x0) goto LAB_00c0be18;
    pcVar2 = (code *)(*pppuVar1)[5];
  }
  else {
    if ((int)param_2 != 0) {
      return;
    }
    local_60 = &PTR_LAB_0263b860;
    uStack_58 = param_1;
    local_40 = &local_60;
    FUN_00bef0c0(param_1,param_2,&local_60);
    if (&local_60 == local_40) {
      pcVar2 = (code *)(*local_40)[4];
LAB_00c0bca8:
      (*pcVar2)();
    }
    else if (local_40 != (undefined ***)0x0) {
      pcVar2 = (code *)(*local_40)[5];
      goto LAB_00c0bca8;
    }
    local_90 = &PTR_LAB_0263b8a8;
    uStack_88 = param_1;
    local_70 = &local_90;
    FUN_00bef0c0(param_1,2,&local_90);
    if (&local_90 == local_70) {
      pcVar2 = (code *)(*local_70)[4];
LAB_00c0bd40:
      (*pcVar2)();
    }
    else if (local_70 != (undefined ***)0x0) {
      pcVar2 = (code *)(*local_70)[5];
      goto LAB_00c0bd40;
    }
    local_c0 = &PTR_LAB_0263b8f0;
    uStack_b8 = param_1;
    local_a0 = &local_c0;
    FUN_00bef0c0(param_1,7,&local_c0);
    if (&local_c0 == local_a0) {
      pcVar2 = (code *)(*local_a0)[4];
LAB_00c0bdd8:
      (*pcVar2)();
    }
    else if (local_a0 != (undefined ***)0x0) {
      pcVar2 = (code *)(*local_a0)[5];
      goto LAB_00c0bdd8;
    }
    local_f0 = &PTR_LAB_0263b938;
    uStack_e8 = param_1;
    local_d0 = &local_f0;
    FUN_00bef0c0(param_1,1,&local_f0);
    pppuVar1 = local_d0;
    if (&local_f0 != local_d0) goto LAB_00c0bdc0;
LAB_00c0be0c:
    pcVar2 = (code *)(*pppuVar1)[4];
  }
  (*pcVar2)();
LAB_00c0be18:
  FUN_00bef170(param_1);
  FUN_00bef3d0(param_1);
  return;
}


