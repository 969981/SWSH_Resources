/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 012b81e0; name: FUN_012b81e0
 */


void FUN_012b81e0(undefined1 *param_1,undefined8 param_2,undefined8 param_3)

{
  code *pcVar1;
  char local_5a8 [8];
  undefined8 local_5a0;
  undefined8 uStack_598;
  undefined8 local_590;
  undefined8 uStack_588;
  undefined4 local_580;
  code *local_570;
  code *local_568;
  undefined1 *local_560;
  undefined1 *local_558;
  undefined8 *apuStack_550 [12];
  undefined4 local_4f0;
  code *local_4e0;
  code *local_4d8;
  undefined1 *local_4d0;
  undefined1 *local_4c8;
  undefined8 *apuStack_4c0 [12];
  undefined4 local_460;
  code *local_450;
  code *local_448;
  undefined1 *local_440;
  undefined1 *local_438;
  undefined8 *apuStack_430 [12];
  undefined4 local_3d0;
  code *local_3c0;
  code *local_3b8;
  undefined1 *local_3b0;
  undefined1 *local_3a8;
  undefined8 *local_3a0 [12];
  undefined4 local_340;
  code *local_330;
  code *local_328;
  undefined1 *local_320;
  undefined1 *local_318;
  undefined8 *local_310 [12];
  undefined4 local_2b0;
  code *local_2a0;
  code *local_298;
  undefined1 *local_290;
  undefined1 *local_288;
  undefined8 *local_280 [12];
  undefined4 local_220;
  code *local_210;
  code *local_208;
  undefined1 *local_200;
  undefined1 *local_1f8;
  undefined8 *local_1f0 [12];
  undefined4 local_190;
  code *local_180;
  code *local_178;
  undefined1 *local_170;
  undefined1 *local_168;
  undefined8 *local_160 [12];
  undefined4 local_100;
  code *local_f0;
  code *local_e8;
  undefined1 *local_e0;
  undefined1 *local_d8;
  undefined8 *local_d0 [13];
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 *local_58;
  undefined8 local_50;
  undefined4 local_44;
  
  local_58 = &local_50;
  local_570 = FUN_012baee0;
  local_568 = FUN_012bb630;
  local_580 = 7;
  apuStack_550[0] = &local_68;
  local_560 = &LAB_012bba30;
  local_558 = &LAB_012bba40;
  local_4e0 = FUN_012bba50;
  local_4d8 = FUN_012bc1a0;
  local_4d0 = &LAB_012bc900;
  local_4c8 = &LAB_012bc910;
  local_460 = 6;
  local_450 = FUN_012bc920;
  local_448 = FUN_012bd070;
  local_440 = &LAB_012bd300;
  local_438 = &LAB_012bd310;
  local_3d0 = 2;
  local_3c0 = FUN_012bd320;
  local_3b8 = FUN_012bda70;
  local_3b0 = &LAB_012be040;
  local_3a8 = &LAB_012be050;
  local_340 = 3;
  local_330 = FUN_012be060;
  local_328 = FUN_012be0a0;
  local_320 = &LAB_012bed60;
  local_318 = &LAB_012bed70;
  local_2b0 = 4;
  local_2a0 = FUN_012bed80;
  local_298 = FUN_012bedc0;
  local_290 = &LAB_012bf350;
  local_288 = &LAB_012bf360;
  local_220 = 5;
  local_210 = FUN_012bf370;
  local_208 = FUN_012bfac0;
  local_200 = &LAB_012bfe20;
  local_1f8 = &LAB_012bfe30;
  local_180 = FUN_012bfe40;
  local_178 = FUN_012c0590;
  local_170 = &LAB_012c1010;
  local_168 = &LAB_012c1020;
  local_e0 = &LAB_012c1aa0;
  local_100 = 8;
  local_e8 = FUN_012c1780;
  local_f0 = FUN_012c1030;
  local_44 = 7;
  local_4f0 = 0;
  local_190 = 1;
  local_d8 = &LAB_012c1ab0;
  apuStack_4c0[0] = apuStack_550[0];
  apuStack_430[0] = apuStack_550[0];
  local_3a0[0] = apuStack_550[0];
  local_310[0] = apuStack_550[0];
  local_280[0] = apuStack_550[0];
  local_1f0[0] = apuStack_550[0];
  local_160[0] = apuStack_550[0];
  local_d0[0] = apuStack_550[0];
  local_68 = param_2;
  uStack_60 = param_3;
  local_50 = param_2;
  FUN_012baee0(local_5a8,apuStack_550,&local_44);
  if (local_5a8[0] == '\0') {
    local_44 = local_4f0;
    (*local_4e0)(local_5a8,apuStack_4c0,&local_44);
    if (local_5a8[0] == '\0') {
      local_44 = local_460;
      (*local_450)(local_5a8,apuStack_430,&local_44);
      if (local_5a8[0] == '\0') {
        local_44 = local_3d0;
        (*local_3c0)(local_5a8,local_3a0,&local_44);
        if (local_5a8[0] == '\0') {
          local_44 = local_340;
          (*local_330)(local_5a8,local_310,&local_44);
          if (local_5a8[0] == '\0') {
            local_44 = local_2b0;
            (*local_2a0)(local_5a8,local_280,&local_44);
            if (local_5a8[0] == '\0') {
              local_44 = local_220;
              (*local_210)(local_5a8,local_1f0,&local_44);
              if (local_5a8[0] == '\0') {
                local_44 = local_190;
                (*local_180)(local_5a8,local_160,&local_44);
                if (local_5a8[0] == '\0') {
                  local_44 = local_100;
                  (*local_f0)(local_5a8,local_d0,&local_44);
                  if (local_5a8[0] == '\0') {
                    *param_1 = 0;
                    pcVar1 = local_e8;
                    goto joined_r0x012b86ec;
                  }
                }
              }
            }
          }
        }
      }
    }
    *(undefined8 *)(param_1 + 0x18) = local_590;
    *(undefined8 *)(param_1 + 0x20) = uStack_588;
    *(undefined8 *)(param_1 + 8) = local_5a0;
    *(undefined8 *)(param_1 + 0x10) = uStack_598;
    *param_1 = 1;
    pcVar1 = local_e8;
  }
  else {
    *(undefined8 *)(param_1 + 0x18) = local_590;
    *(undefined8 *)(param_1 + 0x20) = uStack_588;
    *(undefined8 *)(param_1 + 8) = local_5a0;
    *(undefined8 *)(param_1 + 0x10) = uStack_598;
    *param_1 = 1;
    pcVar1 = local_e8;
  }
joined_r0x012b86ec:
  local_e8 = pcVar1;
  if (pcVar1 != (code *)0x0) {
    local_d8 = (undefined1 *)0x0;
    local_e0 = (undefined1 *)0x0;
    local_e8 = (code *)0x0;
    local_f0 = (code *)0x0;
    (*pcVar1)(local_d0);
  }
  pcVar1 = local_178;
  if (local_178 != (code *)0x0) {
    local_168 = (undefined1 *)0x0;
    local_170 = (undefined1 *)0x0;
    local_178 = (code *)0x0;
    local_180 = (code *)0x0;
    (*pcVar1)(local_160);
  }
  pcVar1 = local_208;
  if (local_208 != (code *)0x0) {
    local_1f8 = (undefined1 *)0x0;
    local_200 = (undefined1 *)0x0;
    local_208 = (code *)0x0;
    local_210 = (code *)0x0;
    (*pcVar1)(local_1f0);
  }
  pcVar1 = local_298;
  if (local_298 != (code *)0x0) {
    local_288 = (undefined1 *)0x0;
    local_290 = (undefined1 *)0x0;
    local_298 = (code *)0x0;
    local_2a0 = (code *)0x0;
    (*pcVar1)(local_280);
  }
  pcVar1 = local_328;
  if (local_328 != (code *)0x0) {
    local_318 = (undefined1 *)0x0;
    local_320 = (undefined1 *)0x0;
    local_328 = (code *)0x0;
    local_330 = (code *)0x0;
    (*pcVar1)(local_310);
  }
  pcVar1 = local_3b8;
  if (local_3b8 != (code *)0x0) {
    local_3a8 = (undefined1 *)0x0;
    local_3b8 = (code *)0x0;
    local_3b0 = (undefined1 *)0x0;
    local_3c0 = (code *)0x0;
    (*pcVar1)(local_3a0);
  }
  pcVar1 = local_448;
  if (local_448 != (code *)0x0) {
    local_440 = (undefined1 *)0x0;
    local_438 = (undefined1 *)0x0;
    local_450 = (code *)0x0;
    local_448 = (code *)0x0;
    (*pcVar1)(apuStack_430);
  }
  pcVar1 = local_4d8;
  if (local_4d8 != (code *)0x0) {
    local_4d0 = (undefined1 *)0x0;
    local_4c8 = (undefined1 *)0x0;
    local_4e0 = (code *)0x0;
    local_4d8 = (code *)0x0;
    (*pcVar1)(apuStack_4c0);
  }
  pcVar1 = local_568;
  if (local_568 != (code *)0x0) {
    local_560 = (undefined1 *)0x0;
    local_558 = (undefined1 *)0x0;
    local_570 = (code *)0x0;
    local_568 = (code *)0x0;
    (*pcVar1)(apuStack_550);
  }
  return;
}


