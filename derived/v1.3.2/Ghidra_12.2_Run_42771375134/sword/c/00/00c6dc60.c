/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00c6dc60; name: FUN_00c6dc60
 */


void FUN_00c6dc60(long param_1,long *param_2)

{
  long *plVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  ulong uVar5;
  undefined8 *puVar6;
  long lVar7;
  undefined8 uVar8;
  long lVar9;
  undefined8 local_1e0;
  undefined8 local_1d8;
  char *pcStack_1d0;
  undefined8 local_1c8;
  long local_1c0;
  undefined8 local_1b8;
  undefined1 *local_1b0;
  undefined8 local_1a8;
  long local_1a0;
  undefined8 local_198;
  undefined1 *local_190;
  undefined8 local_188;
  long local_180;
  undefined8 local_178;
  undefined1 *local_170;
  undefined8 local_168;
  long local_160;
  undefined4 local_158;
  undefined8 local_150;
  undefined1 *local_148;
  undefined8 local_140;
  long local_138;
  undefined4 local_130;
  undefined8 local_128;
  char *pcStack_120;
  undefined8 local_118;
  long local_110;
  undefined8 local_108;
  char *local_100;
  undefined8 local_f8;
  long local_f0;
  undefined8 local_e8;
  char *local_e0;
  undefined8 local_d8;
  long local_d0;
  undefined8 local_c8;
  char *local_c0;
  undefined8 local_b8;
  long local_b0;
  undefined1 local_a8;
  undefined8 local_a4;
  undefined8 local_9c;
  undefined8 local_94;
  undefined8 local_8c;
  undefined8 local_84;
  undefined8 local_7c;
  undefined8 local_74;
  undefined8 local_6c;
  
  if (*(long *)(param_1 + 0xe8) == 0) {
    return;
  }
  if (*(int *)(*(long *)(param_1 + 0xe8) + 0x54) == 0) {
    return;
  }
  if (*(long *)(param_1 + 0x120) == 0) {
    return;
  }
  if (*(char *)(param_1 + 0x128) == '\0') {
    return;
  }
  plVar1 = (long *)FUN_00c7cc60(*(undefined8 *)(param_1 + 0xa0),9);
  if (((*(long *)(param_1 + 0xa8) != *plVar1) &&
      (plVar1 = (long *)FUN_00c7cc60(*(undefined8 *)(param_1 + 0xa0),10),
      *(long *)(param_1 + 0xa8) != *plVar1)) &&
     (plVar1 = (long *)FUN_00c7cc60(*(undefined8 *)(param_1 + 0xa0),0xd),
     *(long *)(param_1 + 0xa8) != *plVar1)) {
    return;
  }
  plVar1 = (long *)FUN_00c7cc60(*(undefined8 *)(param_1 + 0xa0),9);
  lVar7 = *(long *)(param_1 + 0xa8);
  lVar9 = *plVar1;
  uVar2 = FUN_00c7d7b0(*(undefined8 *)(param_1 + 0xa0));
  uVar8 = *(undefined8 *)(param_1 + 0x120);
  uVar3 = (**(code **)(*param_2 + 0x10))(param_2,0x80,8);
  lVar4 = nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_02710860);
  uVar5 = *(ulong *)(lVar4 + 0x80);
  if (lVar7 == lVar9) {
    if (0xf < uVar5) {
LAB_00c6e3a4:
                    /* WARNING: Subroutine does not return */
      abort();
    }
    *(long **)(lVar4 + uVar5 * 8) = param_2;
    *(long *)(lVar4 + 0x80) = *(long *)(lVar4 + 0x80) + 1;
    FUN_00c76d40(uVar3,param_2,uVar2,uVar8);
  }
  else {
    if (0xf < uVar5) goto LAB_00c6e3a4;
    *(long **)(lVar4 + uVar5 * 8) = param_2;
    *(long *)(lVar4 + 0x80) = *(long *)(lVar4 + 0x80) + 1;
    FUN_00c76dc0(uVar3,param_2,uVar2,uVar8);
  }
  *(long *)(lVar4 + 0x80) = *(long *)(lVar4 + 0x80) + -1;
  puVar6 = *(undefined8 **)(param_1 + 0x148);
  *(undefined8 *)(param_1 + 0x148) = uVar3;
  if (puVar6 != (undefined8 *)0x0) {
    (**(code **)*puVar6)(puVar6);
    (**(code **)(**(long **)(param_1 + 0x150) + 0x18))
              (*(long **)(param_1 + 0x150),puVar6,*(undefined8 *)(param_1 + 0x158),
               *(undefined8 *)(param_1 + 0x160));
  }
  *(long **)(param_1 + 0x150) = param_2;
  *(undefined8 *)(param_1 + 0x158) = 0x80;
  *(undefined8 *)(param_1 + 0x160) = 8;
  plVar1 = (long *)FUN_00c7cc60(*(undefined8 *)(param_1 + 0xa0),0x18);
  if ((*(long *)(param_1 + 200) == *plVar1) ||
     (plVar1 = (long *)FUN_00c7cc60(*(undefined8 *)(param_1 + 0xa0),0x1a),
     *(long *)(param_1 + 200) == *plVar1)) {
    local_158 = 0;
    local_1d8 = 0xcbf29ce484222645;
    pcStack_1d0 = "";
    local_1b8 = 0xcbf29ce484222645;
    local_1b0 = &DAT_01d38550;
    local_198 = 0xcbf29ce484222645;
    local_190 = &DAT_01d38550;
    local_130 = 0;
    local_178 = 0xcbf29ce484222645;
    local_170 = &DAT_01d38550;
    local_150 = 0xcbf29ce484222645;
    local_148 = &DAT_01d38550;
    local_128 = 0xcbf29ce484222645;
    pcStack_120 = "";
    local_108 = 0xcbf29ce484222645;
    local_100 = "";
    local_e8 = 0xcbf29ce484222645;
    local_e0 = "";
    local_c8 = 0xcbf29ce484222645;
    local_c0 = "";
    local_1c8 = 0;
    local_1c0 = 0;
    local_1a8 = 0;
    local_1a0 = 0;
    local_188 = 0;
    local_180 = 0;
    local_168 = 0;
    local_160 = 0;
    local_140 = 0;
    local_138 = 0;
    local_118 = 0;
    local_110 = 0;
    local_f8 = 0;
    local_f0 = 0;
    local_d8 = 0;
    local_d0 = 0;
    local_6c = 0;
    local_74 = 0;
    local_7c = 0;
    local_84 = 0;
    local_8c = 0;
    local_94 = 0;
    local_9c = 0;
    local_a4 = 0;
    local_a8 = 0;
    local_b8 = 0;
    local_b0 = 0;
    local_1e0 = *(undefined8 *)(param_1 + 0x120);
    puVar6 = (undefined8 *)FUN_00c7cc60(*(undefined8 *)(param_1 + 0xa0),0x21);
    local_1b8 = *puVar6;
    local_1b0 = (undefined1 *)puVar6[1];
    local_1a8 = puVar6[2];
    lVar7 = puVar6[3];
    if (lVar7 != 0) {
      (**(code **)(*(long *)(lVar7 + 0x48) + 0x10))();
    }
    local_1d8 = 0x530638bd11631529;
    pcStack_1d0 = "blink";
    local_1c8 = 5;
    local_1c0 = 0;
    local_1a0 = lVar7;
    puVar6 = (undefined8 *)FUN_00c7cc60(*(undefined8 *)(param_1 + 0xa0),0x23);
    local_198 = *puVar6;
    local_190 = (undefined1 *)puVar6[1];
    local_188 = puVar6[2];
    lVar7 = puVar6[3];
    if (lVar7 != 0) {
      (**(code **)(*(long *)(lVar7 + 0x48) + 0x10))();
    }
    local_180 = lVar7;
    puVar6 = (undefined8 *)FUN_00c7cc60(*(undefined8 *)(param_1 + 0xa0),0x24);
    local_178 = *puVar6;
    local_170 = (undefined1 *)puVar6[1];
    local_168 = puVar6[2];
    lVar7 = puVar6[3];
    if (lVar7 != 0) {
      (**(code **)(*(long *)(lVar7 + 0x48) + 0x10))();
    }
    uVar2 = *(undefined8 *)(param_1 + 0xa0);
    local_158 = 1;
    uVar3 = 0x25;
    local_160 = lVar7;
  }
  else {
    plVar1 = (long *)FUN_00c7cc60(*(undefined8 *)(param_1 + 0xa0),0x19);
    if ((*(long *)(param_1 + 200) != *plVar1) &&
       (plVar1 = (long *)FUN_00c7cc60(*(undefined8 *)(param_1 + 0xa0),0x1e),
       *(long *)(param_1 + 200) != *plVar1)) {
      return;
    }
    local_158 = 0;
    local_1b8 = 0xcbf29ce484222645;
    local_1b0 = &DAT_01d38550;
    local_198 = 0xcbf29ce484222645;
    local_190 = &DAT_01d38550;
    local_178 = 0xcbf29ce484222645;
    local_170 = &DAT_01d38550;
    local_130 = 0;
    local_150 = 0xcbf29ce484222645;
    local_148 = &DAT_01d38550;
    local_128 = 0xcbf29ce484222645;
    pcStack_120 = "";
    local_108 = 0xcbf29ce484222645;
    local_100 = "";
    local_e8 = 0xcbf29ce484222645;
    local_e0 = "";
    local_c8 = 0xcbf29ce484222645;
    local_c0 = "";
    local_1a8 = 0;
    local_1a0 = 0;
    local_188 = 0;
    local_180 = 0;
    local_168 = 0;
    local_160 = 0;
    local_140 = 0;
    local_138 = 0;
    local_118 = 0;
    local_110 = 0;
    local_f8 = 0;
    local_f0 = 0;
    local_d8 = 0;
    local_d0 = 0;
    local_6c = 0;
    local_74 = 0;
    local_7c = 0;
    local_84 = 0;
    local_8c = 0;
    local_94 = 0;
    local_9c = 0;
    local_a4 = 0;
    local_a8 = 0;
    local_b8 = 0;
    local_b0 = 0;
    local_1e0 = *(undefined8 *)(param_1 + 0x120);
    local_1d8 = 0x530638bd11631529;
    pcStack_1d0 = "blink";
    local_1c8 = 5;
    local_1c0 = 0;
    puVar6 = (undefined8 *)FUN_00c7cc60(*(undefined8 *)(param_1 + 0xa0),0x21);
    local_1b8 = *puVar6;
    local_1b0 = (undefined1 *)puVar6[1];
    local_1a8 = puVar6[2];
    lVar7 = puVar6[3];
    if (lVar7 != 0) {
      (**(code **)(*(long *)(lVar7 + 0x48) + 0x10))();
    }
    local_1a0 = lVar7;
    puVar6 = (undefined8 *)FUN_00c7cc60(*(undefined8 *)(param_1 + 0xa0),0x23);
    local_198 = *puVar6;
    local_190 = (undefined1 *)puVar6[1];
    local_188 = puVar6[2];
    lVar7 = puVar6[3];
    if (lVar7 != 0) {
      (**(code **)(*(long *)(lVar7 + 0x48) + 0x10))();
    }
    local_180 = lVar7;
    puVar6 = (undefined8 *)FUN_00c7cc60(*(undefined8 *)(param_1 + 0xa0),0x24);
    local_178 = *puVar6;
    local_170 = (undefined1 *)puVar6[1];
    local_168 = puVar6[2];
    lVar7 = puVar6[3];
    if (lVar7 != 0) {
      (**(code **)(*(long *)(lVar7 + 0x48) + 0x10))();
    }
    uVar2 = *(undefined8 *)(param_1 + 0xa0);
    uVar3 = 0x26;
    local_158 = 0;
    local_160 = lVar7;
  }
  puVar6 = (undefined8 *)FUN_00c7cc60(uVar2,uVar3);
  local_150 = *puVar6;
  local_148 = (undefined1 *)puVar6[1];
  local_140 = puVar6[2];
  lVar7 = puVar6[3];
  if (lVar7 != 0) {
    (**(code **)(*(long *)(lVar7 + 0x48) + 0x10))();
  }
  local_128 = 0x878504e9bfa18923;
  pcStack_120 = "Top/eye_default/eye_blink/eye01_01_start";
  local_118 = 0x28;
  local_108 = 0x913676e50d935bfa;
  local_100 = "Top/eye_default/eye_blink/eye01_03";
  local_e8 = 0x913677e50d935dad;
  local_f8 = 0x22;
  local_e0 = "Top/eye_default/eye_blink/eye01_02";
  local_d8 = 0x22;
  local_c8 = 0x74335660b0386836;
  local_c0 = "Top/eye_default/eye_blink/eye01_01_end";
  local_130 = 0;
  local_b8 = 0x26;
  local_138 = lVar7;
  FUN_00c77080(*(undefined8 *)(param_1 + 0x148),param_2,&local_1e0);
  if (local_b0 != 0) {
    (**(code **)(*(long *)(local_b0 + 0x48) + 0x18))();
    local_b0 = 0;
  }
  if (local_d0 != 0) {
    (**(code **)(*(long *)(local_d0 + 0x48) + 0x18))();
    local_d0 = 0;
  }
  if (local_f0 != 0) {
    (**(code **)(*(long *)(local_f0 + 0x48) + 0x18))();
    local_f0 = 0;
  }
  if (local_110 != 0) {
    (**(code **)(*(long *)(local_110 + 0x48) + 0x18))();
    local_110 = 0;
  }
  if (local_138 != 0) {
    (**(code **)(*(long *)(local_138 + 0x48) + 0x18))();
    local_138 = 0;
  }
  if (local_160 != 0) {
    (**(code **)(*(long *)(local_160 + 0x48) + 0x18))();
    local_160 = 0;
  }
  if (local_180 != 0) {
    (**(code **)(*(long *)(local_180 + 0x48) + 0x18))();
    local_180 = 0;
  }
  if (local_1a0 != 0) {
    (**(code **)(*(long *)(local_1a0 + 0x48) + 0x18))();
    local_1a0 = 0;
  }
  if (local_1c0 != 0) {
    (**(code **)(*(long *)(local_1c0 + 0x48) + 0x18))();
  }
  return;
}


