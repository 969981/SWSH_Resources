/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0115afe0; name: FUN_0115afe0
 */


void FUN_0115afe0(undefined8 param_1,undefined8 param_2)

{
  undefined ***pppuVar1;
  int iVar2;
  code *pcVar3;
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
  
  iVar2 = (int)param_2;
  if (iVar2 == 2) {
    local_f0 = &PTR_LAB_02678338;
    uStack_e8 = param_1;
    local_d0 = &local_f0;
    FUN_011593a0(param_1,1,&local_f0);
    if (&local_f0 == local_d0) {
      pcVar3 = (code *)(*local_d0)[4];
LAB_0115b0cc:
      (*pcVar3)();
    }
    else if (local_d0 != (undefined ***)0x0) {
      pcVar3 = (code *)(*local_d0)[5];
      goto LAB_0115b0cc;
    }
    local_120 = &PTR_LAB_02678380;
    uStack_118 = param_1;
    local_100 = &local_120;
    FUN_011593a0(param_1,0,&local_120);
    if (&local_120 == local_100) {
      pcVar3 = (code *)(*local_100)[4];
LAB_0115b180:
      (*pcVar3)();
    }
    else if (local_100 != (undefined ***)0x0) {
      pcVar3 = (code *)(*local_100)[5];
      goto LAB_0115b180;
    }
    local_150 = &PTR_LAB_026783c8;
    uStack_148 = param_1;
    local_130 = &local_150;
    FUN_011593a0(param_1,2,&local_150);
    pppuVar1 = local_130;
    if (&local_150 == local_130) goto LAB_0115b03c;
LAB_0115b14c:
    if (pppuVar1 == (undefined ***)0x0) goto LAB_0115b15c;
    pcVar3 = (code *)(*pppuVar1)[5];
  }
  else {
    if (iVar2 == 1) {
      local_90 = &PTR_LAB_026782a8;
      uStack_88 = param_1;
      local_70 = &local_90;
      FUN_011593a0(param_1,param_2,&local_90);
      if (&local_90 == local_70) {
        pcVar3 = (code *)(*local_70)[4];
LAB_0115b118:
        (*pcVar3)();
      }
      else if (local_70 != (undefined ***)0x0) {
        pcVar3 = (code *)(*local_70)[5];
        goto LAB_0115b118;
      }
      local_c0 = &PTR_LAB_026782f0;
      uStack_b8 = param_1;
      local_a0 = &local_c0;
      FUN_011593a0(param_1,0,&local_c0);
      pppuVar1 = local_a0;
      if (&local_c0 != local_a0) goto LAB_0115b14c;
    }
    else {
      if (iVar2 != 0) {
        return;
      }
      local_60 = &PTR_LAB_02678260;
      uStack_58 = param_1;
      local_40 = &local_60;
      FUN_011593a0(param_1,1,&local_60);
      pppuVar1 = local_40;
      if (&local_60 != local_40) goto LAB_0115b14c;
    }
LAB_0115b03c:
    pcVar3 = (code *)(*pppuVar1)[4];
  }
  (*pcVar3)();
LAB_0115b15c:
  FUN_01159450(param_1);
  return;
}


