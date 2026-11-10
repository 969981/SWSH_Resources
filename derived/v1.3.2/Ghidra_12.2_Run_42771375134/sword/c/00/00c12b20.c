/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00c12b20; name: FUN_00c12b20
 */


void FUN_00c12b20(undefined8 param_1,undefined4 param_2)

{
  undefined ***pppuVar1;
  code *pcVar2;
  undefined **local_330;
  undefined8 uStack_328;
  undefined ***local_310;
  undefined **local_300;
  undefined8 uStack_2f8;
  undefined ***local_2e0;
  undefined **local_2d0;
  undefined8 uStack_2c8;
  undefined ***local_2b0;
  undefined **local_2a0;
  undefined8 uStack_298;
  undefined ***local_280;
  undefined **local_270;
  undefined8 uStack_268;
  undefined ***local_250;
  undefined **local_240;
  undefined8 uStack_238;
  undefined ***local_220;
  undefined **local_210;
  undefined8 uStack_208;
  undefined ***local_1f0;
  undefined **local_1e0;
  undefined8 uStack_1d8;
  undefined ***local_1c0;
  undefined **local_1b0;
  undefined8 uStack_1a8;
  undefined ***local_190;
  undefined **local_180;
  undefined8 uStack_178;
  undefined ***local_160;
  undefined **local_150;
  undefined8 uStack_148;
  undefined ***local_130;
  undefined **local_120;
  undefined8 local_118;
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
  
  switch(param_2) {
  case 0:
    local_60 = &PTR_LAB_0263c1f0;
    uStack_58 = param_1;
    local_40 = &local_60;
    FUN_00bef0c0(param_1,0,&local_60);
    if (&local_60 == local_40) {
      pcVar2 = (code *)(*local_40)[4];
LAB_00c12c60:
      (*pcVar2)();
    }
    else if (local_40 != (undefined ***)0x0) {
      pcVar2 = (code *)(*local_40)[5];
      goto LAB_00c12c60;
    }
    local_90 = &PTR_LAB_0263c238;
    uStack_88 = param_1;
    local_70 = &local_90;
    FUN_00bef0c0(param_1,2,&local_90);
    if (&local_90 == local_70) {
      pcVar2 = (code *)(*local_70)[4];
LAB_00c12d90:
      (*pcVar2)();
    }
    else if (local_70 != (undefined ***)0x0) {
      pcVar2 = (code *)(*local_70)[5];
      goto LAB_00c12d90;
    }
    local_c0 = &PTR_LAB_0263c280;
    uStack_b8 = param_1;
    local_a0 = &local_c0;
    FUN_00bef0c0(param_1,7,&local_c0);
    if (&local_c0 == local_a0) {
      pcVar2 = (code *)(*local_a0)[4];
LAB_00c12ec0:
      (*pcVar2)();
    }
    else if (local_a0 != (undefined ***)0x0) {
      pcVar2 = (code *)(*local_a0)[5];
      goto LAB_00c12ec0;
    }
    local_f0 = &PTR_LAB_0263c2c8;
    uStack_e8 = param_1;
    local_d0 = &local_f0;
    FUN_00bef0c0(param_1,3,&local_f0);
    if (&local_f0 == local_d0) {
      pcVar2 = (code *)(*local_d0)[4];
LAB_00c12f8c:
      (*pcVar2)();
    }
    else if (local_d0 != (undefined ***)0x0) {
      pcVar2 = (code *)(*local_d0)[5];
      goto LAB_00c12f8c;
    }
    local_120 = &PTR_LAB_0263c310;
    local_118 = param_1;
    local_100 = &local_120;
    FUN_00bef0c0(param_1,1,&local_120);
    pppuVar1 = local_100;
    if (&local_120 != local_100) break;
LAB_00c12fc4:
    pcVar2 = (code *)(*pppuVar1)[4];
    goto LAB_00c12fcc;
  case 1:
    local_150 = &PTR_LAB_0263c358;
    uStack_148 = param_1;
    local_130 = &local_150;
    FUN_00bef0c0(param_1,0,&local_150);
    if (&local_150 == local_130) {
      pcVar2 = (code *)(*local_130)[4];
LAB_00c12cac:
      (*pcVar2)();
    }
    else if (local_130 != (undefined ***)0x0) {
      pcVar2 = (code *)(*local_130)[5];
      goto LAB_00c12cac;
    }
    local_180 = &PTR_LAB_0263c3a0;
    uStack_178 = param_1;
    local_160 = &local_180;
    FUN_00bef0c0(param_1,2,&local_180);
    if (&local_180 == local_160) {
      pcVar2 = (code *)(*local_160)[4];
LAB_00c12ddc:
      (*pcVar2)();
    }
    else if (local_160 != (undefined ***)0x0) {
      pcVar2 = (code *)(*local_160)[5];
      goto LAB_00c12ddc;
    }
    local_1b0 = &PTR_LAB_0263c3e8;
    uStack_1a8 = param_1;
    local_190 = &local_1b0;
    FUN_00bef0c0(param_1,7,&local_1b0);
    if (&local_1b0 == local_190) {
      pcVar2 = (code *)(*local_190)[4];
LAB_00c12f0c:
      (*pcVar2)();
    }
    else if (local_190 != (undefined ***)0x0) {
      pcVar2 = (code *)(*local_190)[5];
      goto LAB_00c12f0c;
    }
    local_1e0 = &PTR_LAB_0263c430;
    uStack_1d8 = param_1;
    local_1c0 = &local_1e0;
    FUN_00bef0c0(param_1,1,&local_1e0);
    pppuVar1 = local_1c0;
    if (&local_1e0 == local_1c0) goto LAB_00c12fc4;
    break;
  case 2:
    local_210 = &PTR_LAB_0263c478;
    uStack_208 = param_1;
    local_1f0 = &local_210;
    FUN_00bef0c0(param_1,2,&local_210);
    if (&local_210 == local_1f0) {
      pcVar2 = (code *)(*local_1f0)[4];
LAB_00c12cf8:
      (*pcVar2)();
    }
    else if (local_1f0 != (undefined ***)0x0) {
      pcVar2 = (code *)(*local_1f0)[5];
      goto LAB_00c12cf8;
    }
    local_240 = &PTR_LAB_0263c4c0;
    uStack_238 = param_1;
    local_220 = &local_240;
    FUN_00bef0c0(param_1,7,&local_240);
    if (&local_240 == local_220) {
      pcVar2 = (code *)(*local_220)[4];
LAB_00c12e28:
      (*pcVar2)();
    }
    else if (local_220 != (undefined ***)0x0) {
      pcVar2 = (code *)(*local_220)[5];
      goto LAB_00c12e28;
    }
    local_270 = &PTR_LAB_0263c508;
    uStack_268 = param_1;
    local_250 = &local_270;
    FUN_00bef0c0(param_1,3,&local_270);
    if (&local_270 == local_250) {
      pcVar2 = (code *)(*local_250)[4];
LAB_00c12f4c:
      (*pcVar2)();
    }
    else if (local_250 != (undefined ***)0x0) {
      pcVar2 = (code *)(*local_250)[5];
      goto LAB_00c12f4c;
    }
    local_2a0 = &PTR_LAB_0263c550;
    uStack_298 = param_1;
    local_280 = &local_2a0;
    FUN_00bef0c0(param_1,1,&local_2a0);
    pppuVar1 = local_280;
    if (&local_2a0 == local_280) goto LAB_00c12fc4;
    break;
  case 3:
    local_2d0 = &PTR_LAB_0263c598;
    uStack_2c8 = param_1;
    local_2b0 = &local_2d0;
    FUN_00bef0c0(param_1,2,&local_2d0);
    if (&local_2d0 == local_2b0) {
      pcVar2 = (code *)(*local_2b0)[4];
LAB_00c12d44:
      (*pcVar2)();
    }
    else if (local_2b0 != (undefined ***)0x0) {
      pcVar2 = (code *)(*local_2b0)[5];
      goto LAB_00c12d44;
    }
    local_300 = &PTR_LAB_0263c5e0;
    uStack_2f8 = param_1;
    local_2e0 = &local_300;
    FUN_00bef0c0(param_1,7,&local_300);
    if (&local_300 == local_2e0) {
      pcVar2 = (code *)(*local_2e0)[4];
LAB_00c12e74:
      (*pcVar2)();
    }
    else if (local_2e0 != (undefined ***)0x0) {
      pcVar2 = (code *)(*local_2e0)[5];
      goto LAB_00c12e74;
    }
    local_330 = &PTR_LAB_0263c628;
    uStack_328 = param_1;
    local_310 = &local_330;
    FUN_00bef0c0(param_1,1,&local_330);
    pppuVar1 = local_310;
    if (&local_330 == local_310) goto LAB_00c12fc4;
    break;
  default:
    goto switchD_00c12b54_default;
  }
  if (pppuVar1 != (undefined ***)0x0) {
    pcVar2 = (code *)(*pppuVar1)[5];
LAB_00c12fcc:
    (*pcVar2)();
  }
  FUN_00bef170(param_1);
  FUN_00bef3d0(param_1);
switchD_00c12b54_default:
  return;
}


