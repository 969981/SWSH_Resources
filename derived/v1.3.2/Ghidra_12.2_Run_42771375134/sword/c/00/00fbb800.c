/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00fbb800; name: FUN_00fbb800
 */


/* WARNING: Type propagation algorithm not settling */

void FUN_00fbb800(long param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  char cVar2;
  char *pcVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  ulong uVar6;
  long lVar7;
  long lVar8;
  char cVar9;
  undefined4 *puVar10;
  ulong uVar11;
  undefined8 uVar12;
  undefined4 *puVar13;
  undefined4 *puVar14;
  undefined4 local_2e0 [4];
  undefined1 local_2d0;
  char local_2c8;
  undefined8 local_2c0;
  char local_2b8;
  undefined8 local_2b6;
  undefined8 local_2ae;
  undefined8 local_2a6;
  undefined8 local_29e;
  char local_294;
  undefined8 local_290;
  undefined8 uStack_288;
  char local_280;
  undefined8 local_27c;
  undefined8 local_274;
  undefined8 local_26c;
  undefined8 local_264;
  undefined8 local_25c;
  undefined8 local_254;
  undefined8 local_24c;
  char local_244;
  undefined1 local_240;
  char local_23c;
  undefined8 local_238;
  undefined8 local_230;
  undefined8 local_228;
  undefined4 local_220;
  undefined8 local_21c;
  undefined8 local_214;
  undefined8 local_20c;
  undefined5 uStack_204;
  undefined3 local_1ff;
  undefined5 uStack_1fc;
  char local_1f0;
  undefined1 auStack_1e0 [176];
  char local_130;
  undefined8 local_12c;
  undefined8 local_124;
  undefined8 local_11c;
  undefined8 local_114;
  undefined8 local_10c;
  undefined8 local_104;
  undefined8 local_fc;
  undefined8 local_f4;
  undefined8 local_ec;
  undefined4 local_e4;
  char local_e0;
  undefined8 local_d8;
  undefined8 local_d0;
  undefined8 local_c8;
  undefined8 local_c0;
  undefined8 local_b8;
  undefined8 local_b0;
  undefined8 local_a8;
  undefined8 local_a0;
  undefined8 local_98;
  undefined4 local_90;
  undefined8 local_80;
  long local_78;
  undefined8 local_70;
  undefined8 local_68;
  long local_60;
  long local_58;
  
  pcVar3 = (char *)FUN_01225e70(param_2);
  if (*pcVar3 == '\0') {
    return;
  }
  puVar13 = *(undefined4 **)(param_1 + 0x68);
  puVar14 = *(undefined4 **)(param_1 + 0x70);
  if (puVar13 != puVar14) {
    uVar4 = FUN_01225e50(puVar13);
    uVar5 = FUN_01225e50(param_2);
    uVar6 = FUN_0121ae60(uVar4,uVar5);
    if ((uVar6 & 1) == 0) {
      do {
        puVar13 = puVar13 + 0xa4;
        if (puVar14 == puVar13) {
          puVar13 = puVar14;
          goto LAB_00fbb8ac;
        }
        uVar4 = FUN_01225e50(puVar13);
        uVar5 = FUN_01225e50(param_2);
        uVar6 = FUN_0121ae60(uVar4,uVar5);
      } while ((uVar6 & 1) == 0);
    }
  }
LAB_00fbb8ac:
  puVar14 = *(undefined4 **)(param_1 + 0x70);
  lVar7 = FUN_01225e70(param_2);
  cVar2 = FUN_01223b70(lVar7 + 0x10);
  if (puVar14 == puVar13) {
    if (cVar2 != *(char *)(param_1 + 0x47)) {
      return;
    }
    if ((ulong)((*(long *)(param_1 + 0x78) - *(long *)(param_1 + 0x68) >> 4) * -0x7063e7063e7063e7)
        <= (ulong)((*(long *)(param_1 + 0x70) - *(long *)(param_1 + 0x68) >> 4) *
                  -0x7063e7063e7063e7)) {
      return;
    }
    local_2e0[0] = *param_2;
    local_2d0 = *(undefined1 *)(param_2 + 4);
    local_2c8 = *(char *)(param_2 + 6) != '\0';
    if ((bool)local_2c8) {
      local_2c0 = *(undefined8 *)(param_2 + 8);
    }
    local_2b8 = *(char *)(param_2 + 10) != '\0';
    if ((bool)local_2b8) {
      local_2b6 = *(undefined8 *)((long)param_2 + 0x2a);
      local_2ae = *(undefined8 *)((long)param_2 + 0x32);
      local_2a6 = *(undefined8 *)((long)param_2 + 0x3a);
      local_29e = *(undefined8 *)((long)param_2 + 0x42);
    }
    local_294 = *(char *)(param_2 + 0x13) != '\0';
    if ((bool)local_294) {
      local_290 = *(undefined8 *)(param_2 + 0x14);
      uStack_288 = *(undefined8 *)(param_2 + 0x16);
    }
    local_280 = *(char *)(param_2 + 0x18) != '\0';
    if ((bool)local_280) {
      local_27c = *(undefined8 *)(param_2 + 0x19);
      local_274 = *(undefined8 *)(param_2 + 0x1b);
      local_26c = *(undefined8 *)(param_2 + 0x1d);
      local_264 = *(undefined8 *)(param_2 + 0x1f);
      local_25c = *(undefined8 *)(param_2 + 0x21);
      local_254 = *(undefined8 *)(param_2 + 0x23);
      local_24c = *(undefined8 *)(param_2 + 0x25);
    }
    local_244 = '\0';
    if (*(char *)(param_2 + 0x27) != '\0') {
      local_240 = *(undefined1 *)(param_2 + 0x28);
      local_23c = *(char *)(param_2 + 0x29) != '\0';
      if ((bool)local_23c) {
        local_238 = *(undefined8 *)(param_2 + 0x2a);
        local_230 = *(undefined8 *)(param_2 + 0x2c);
        local_228 = *(undefined8 *)(param_2 + 0x2e);
        local_220 = param_2[0x30];
      }
      local_21c = *(undefined8 *)(param_2 + 0x31);
      local_214 = *(undefined8 *)(param_2 + 0x33);
      local_20c = *(undefined8 *)(param_2 + 0x35);
      uStack_1fc = (undefined5)((ulong)*(undefined8 *)((long)param_2 + 0xe1) >> 0x18);
      uStack_204 = (undefined5)*(undefined8 *)(param_2 + 0x37);
      local_1ff = (undefined3)((ulong)*(undefined8 *)(param_2 + 0x37) >> 0x28);
      local_244 = '\x01';
    }
    local_1f0 = 0;
    cVar2 = *(char *)(param_2 + 0x3c);
    if (cVar2 != '\0') {
      memcpy(auStack_1e0,param_2 + 0x40,0xb0);
    }
    local_130 = *(char *)(param_2 + 0x6c) != '\0';
    if ((bool)local_130) {
      local_12c = *(undefined8 *)(param_2 + 0x6d);
      local_124 = *(undefined8 *)(param_2 + 0x6f);
      local_10c = *(undefined8 *)(param_2 + 0x75);
      local_104 = *(undefined8 *)(param_2 + 0x77);
      local_114 = *(undefined8 *)(param_2 + 0x73);
      local_11c = *(undefined8 *)(param_2 + 0x71);
      local_ec = *(undefined8 *)(param_2 + 0x7d);
      local_f4 = *(undefined8 *)(param_2 + 0x7b);
      local_fc = *(undefined8 *)(param_2 + 0x79);
      local_e4 = param_2[0x7f];
    }
    local_e0 = *(char *)(param_2 + 0x80) != '\0';
    if ((bool)local_e0) {
      local_d8 = *(undefined8 *)(param_2 + 0x82);
      local_d0 = *(undefined8 *)(param_2 + 0x84);
      local_c8 = *(undefined8 *)(param_2 + 0x86);
      local_c0 = *(undefined8 *)(param_2 + 0x88);
      local_b8 = *(undefined8 *)(param_2 + 0x8a);
    }
    local_a8 = *(undefined8 *)(param_2 + 0x8e);
    local_98 = *(undefined8 *)(param_2 + 0x92);
    local_90 = param_2[0x94];
    local_b0 = *(undefined8 *)(param_2 + 0x8c);
    local_a0 = *(undefined8 *)(param_2 + 0x90);
    local_1f0 = cVar2 != '\0';
    local_80 = nn::os::GetSystemTick();
    local_58 = 0;
    local_60 = 0;
    local_68 = 0;
    nn::os::GetSystemTick();
    lVar7 = nn::os::ConvertToTimeSpan();
    nn::os::GetSystemTick();
    lVar8 = nn::os::ConvertToTimeSpan();
    uVar11 = lVar8 - lVar7;
    uVar6 = ((long)uVar11 >> 0x20) * 0xd7b634db + ((uVar11 & 0xffffffff) * 0xd7b634db >> 0x20);
    local_78 = (((long)uVar11 >> 0x20) * 0x431bde82 + ((long)uVar6 >> 0x20) +
                ((long)((uVar11 & 0xffffffff) * 0x431bde82 + (uVar6 & 0xffffffff)) >> 0x20) >> 0x12)
               - ((long)uVar11 >> 0x3f);
    nn::os::GetSystemTick();
    local_70 = nn::os::ConvertToTimeSpan();
    puVar13 = *(undefined4 **)(param_1 + 0x70);
    if (puVar13 == *(undefined4 **)(param_1 + 0x78)) {
      FUN_00fc0e60((undefined8 *)(param_1 + 0x68),local_2e0);
    }
    else {
      uVar4 = *(undefined8 *)(param_1 + 0x80);
      lVar7 = nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_02710860);
      if (0xf < *(ulong *)(lVar7 + 0x80)) {
                    /* WARNING: Subroutine does not return */
        abort();
      }
      *(undefined8 *)(lVar7 + *(ulong *)(lVar7 + 0x80) * 8) = uVar4;
      *(long *)(lVar7 + 0x80) = *(long *)(lVar7 + 0x80) + 1;
      *puVar13 = local_2e0[0];
      *(undefined1 *)(puVar13 + 4) = 0;
      *(undefined1 *)(puVar13 + 4) = local_2d0;
      *(undefined1 *)(puVar13 + 6) = 0;
      if (local_2c8 != '\0') {
        *(undefined8 *)(puVar13 + 8) = local_2c0;
        *(undefined1 *)(puVar13 + 6) = 1;
      }
      *(undefined1 *)(puVar13 + 10) = 0;
      if (local_2b8 != '\0') {
        *(undefined8 *)((long)puVar13 + 0x2a) = local_2b6;
        *(undefined8 *)((long)puVar13 + 0x42) = local_29e;
        *(undefined8 *)((long)puVar13 + 0x3a) = local_2a6;
        *(undefined8 *)((long)puVar13 + 0x32) = local_2ae;
        *(undefined1 *)(puVar13 + 10) = 1;
      }
      *(undefined1 *)(puVar13 + 0x13) = 0;
      if (local_294 != '\0') {
        *(undefined8 *)(puVar13 + 0x14) = local_290;
        *(undefined8 *)(puVar13 + 0x16) = uStack_288;
        *(undefined1 *)(puVar13 + 0x13) = 1;
      }
      *(undefined1 *)(puVar13 + 0x18) = 0;
      if (local_280 != '\0') {
        *(undefined8 *)(puVar13 + 0x1d) = local_26c;
        *(undefined8 *)(puVar13 + 0x1b) = local_274;
        *(undefined8 *)(puVar13 + 0x19) = local_27c;
        *(undefined8 *)(puVar13 + 0x1f) = local_264;
        *(undefined8 *)(puVar13 + 0x25) = local_24c;
        *(undefined8 *)(puVar13 + 0x23) = local_254;
        *(undefined8 *)(puVar13 + 0x21) = local_25c;
        *(undefined1 *)(puVar13 + 0x18) = 1;
      }
      *(undefined1 *)(puVar13 + 0x27) = 0;
      if (local_244 != '\0') {
        *(undefined1 *)(puVar13 + 0x28) = local_240;
        *(undefined1 *)(puVar13 + 0x29) = 0;
        if (local_23c != '\0') {
          *(undefined8 *)(puVar13 + 0x2a) = local_238;
          puVar13[0x30] = local_220;
          *(undefined8 *)(puVar13 + 0x2c) = local_230;
          *(undefined8 *)(puVar13 + 0x2e) = local_228;
          *(undefined1 *)(puVar13 + 0x29) = 1;
        }
        *(undefined8 *)(puVar13 + 0x31) = local_21c;
        *(undefined8 *)(puVar13 + 0x33) = local_214;
        *(ulong *)((long)puVar13 + 0xe1) = CONCAT53(uStack_1fc,local_1ff);
        *(ulong *)(puVar13 + 0x37) = CONCAT35(local_1ff,uStack_204);
        *(undefined8 *)(puVar13 + 0x35) = local_20c;
        *(undefined1 *)(puVar13 + 0x27) = 1;
      }
      *(undefined1 *)(puVar13 + 0x3c) = 0;
      if (local_1f0 != '\0') {
        memcpy(puVar13 + 0x40,auStack_1e0,0xb0);
        *(undefined1 *)(puVar13 + 0x3c) = 1;
      }
      *(undefined1 *)(puVar13 + 0x6c) = 0;
      if (local_130 != '\0') {
        *(undefined8 *)(puVar13 + 0x6f) = local_124;
        *(undefined8 *)(puVar13 + 0x6d) = local_12c;
        *(undefined8 *)(puVar13 + 0x77) = local_104;
        *(undefined8 *)(puVar13 + 0x75) = local_10c;
        *(undefined8 *)(puVar13 + 0x73) = local_114;
        *(undefined8 *)(puVar13 + 0x71) = local_11c;
        puVar13[0x7f] = local_e4;
        *(undefined8 *)(puVar13 + 0x7d) = local_ec;
        *(undefined8 *)(puVar13 + 0x7b) = local_f4;
        *(undefined8 *)(puVar13 + 0x79) = local_fc;
        *(undefined1 *)(puVar13 + 0x6c) = 1;
      }
      *(undefined1 *)(puVar13 + 0x80) = 0;
      if (local_e0 != '\0') {
        *(undefined8 *)(puVar13 + 0x82) = local_d8;
        *(undefined8 *)(puVar13 + 0x84) = local_d0;
        *(undefined8 *)(puVar13 + 0x8a) = local_b8;
        *(undefined8 *)(puVar13 + 0x88) = local_c0;
        *(undefined8 *)(puVar13 + 0x86) = local_c8;
        *(undefined1 *)(puVar13 + 0x80) = 1;
      }
      *(undefined8 *)(puVar13 + 0x8c) = local_b0;
      puVar13[0x94] = local_90;
      *(undefined8 *)(puVar13 + 0x92) = local_98;
      *(undefined8 *)(puVar13 + 0x90) = local_a0;
      *(undefined8 *)(puVar13 + 0x8e) = local_a8;
      *(undefined8 *)(puVar13 + 0x98) = local_80;
      *(undefined8 *)(puVar13 + 0x9c) = local_70;
      *(long *)(puVar13 + 0x9a) = local_78;
      *(undefined8 *)(puVar13 + 0x9e) = local_68;
      *(long *)(puVar13 + 0xa0) = local_60;
      if (local_60 != 0) {
        (**(code **)(*(long *)(local_60 + 0x48) + 0x10))();
      }
      *(long *)(puVar13 + 0xa2) = local_58;
      if (local_58 != 0) {
        (**(code **)(*(long *)(local_58 + 0x48) + 0x10))();
      }
      *(long *)(lVar7 + 0x80) = *(long *)(lVar7 + 0x80) + -1;
      *(long *)(param_1 + 0x70) = *(long *)(param_1 + 0x70) + 0x290;
    }
    if (local_58 != 0) {
      (**(code **)(*(long *)(local_58 + 0x48) + 0x18))();
      local_58 = 0;
    }
    if (local_60 == 0) {
      return;
    }
    (**(code **)(*(long *)(local_60 + 0x48) + 0x18))();
    return;
  }
  if (cVar2 == *(char *)(param_1 + 0x47)) {
    *puVar13 = *param_2;
    FUN_00c515a0(puVar13 + 4,param_2 + 4);
    if (*(char *)(puVar13 + 0x3c) == '\0') {
      if (*(char *)(param_2 + 0x3c) != '\0') {
        memcpy(puVar13 + 0x40,param_2 + 0x40,0xb0);
        *(undefined1 *)(puVar13 + 0x3c) = 1;
      }
      cVar9 = *(char *)(puVar13 + 0x6c);
      cVar2 = *(char *)(param_2 + 0x6c);
    }
    else if (*(char *)(param_2 + 0x3c) == '\0') {
      *(undefined1 *)(puVar13 + 0x3c) = 0;
      cVar9 = *(char *)(puVar13 + 0x6c);
      cVar2 = *(char *)(param_2 + 0x6c);
    }
    else {
      memcpy(puVar13 + 0x40,param_2 + 0x40,0xa1);
      cVar9 = *(char *)(puVar13 + 0x6c);
      cVar2 = *(char *)(param_2 + 0x6c);
    }
    if (cVar9 == '\0') {
      if (cVar2 != '\0') {
        uVar4 = *(undefined8 *)(param_2 + 0x6d);
        *(undefined8 *)(puVar13 + 0x6f) = *(undefined8 *)(param_2 + 0x6f);
        *(undefined8 *)(puVar13 + 0x6d) = uVar4;
        uVar4 = *(undefined8 *)(param_2 + 0x73);
        uVar5 = *(undefined8 *)(param_2 + 0x75);
        uVar12 = *(undefined8 *)(param_2 + 0x71);
        *(undefined8 *)(puVar13 + 0x77) = *(undefined8 *)(param_2 + 0x77);
        *(undefined8 *)(puVar13 + 0x75) = uVar5;
        *(undefined8 *)(puVar13 + 0x73) = uVar4;
        *(undefined8 *)(puVar13 + 0x71) = uVar12;
        uVar4 = *(undefined8 *)(param_2 + 0x79);
        uVar12 = *(undefined8 *)(param_2 + 0x7d);
        uVar5 = *(undefined8 *)(param_2 + 0x7b);
        puVar13[0x7f] = param_2[0x7f];
        *(undefined8 *)(puVar13 + 0x7d) = uVar12;
        *(undefined8 *)(puVar13 + 0x79) = uVar4;
        *(undefined8 *)(puVar13 + 0x7b) = uVar5;
        *(undefined1 *)(puVar13 + 0x6c) = 1;
      }
      cVar2 = *(char *)(puVar13 + 0x80);
      cVar9 = *(char *)(param_2 + 0x80);
    }
    else if (cVar2 == '\0') {
      *(undefined1 *)(puVar13 + 0x6c) = 0;
      cVar2 = *(char *)(puVar13 + 0x80);
      cVar9 = *(char *)(param_2 + 0x80);
    }
    else {
      uVar4 = *(undefined8 *)(param_2 + 0x6d);
      *(undefined8 *)(puVar13 + 0x6f) = *(undefined8 *)(param_2 + 0x6f);
      *(undefined8 *)(puVar13 + 0x6d) = uVar4;
      uVar4 = *(undefined8 *)(param_2 + 0x73);
      uVar5 = *(undefined8 *)(param_2 + 0x75);
      uVar12 = *(undefined8 *)(param_2 + 0x71);
      *(undefined8 *)(puVar13 + 0x77) = *(undefined8 *)(param_2 + 0x77);
      *(undefined8 *)(puVar13 + 0x75) = uVar5;
      *(undefined8 *)(puVar13 + 0x73) = uVar4;
      *(undefined8 *)(puVar13 + 0x71) = uVar12;
      uVar4 = *(undefined8 *)(param_2 + 0x79);
      uVar5 = *(undefined8 *)(param_2 + 0x7b);
      uVar12 = *(undefined8 *)(param_2 + 0x7d);
      puVar13[0x7f] = param_2[0x7f];
      *(undefined8 *)(puVar13 + 0x7b) = uVar5;
      *(undefined8 *)(puVar13 + 0x7d) = uVar12;
      *(undefined8 *)(puVar13 + 0x79) = uVar4;
      cVar2 = *(char *)(puVar13 + 0x80);
      cVar9 = *(char *)(param_2 + 0x80);
    }
    if (cVar2 == '\0') {
      if (cVar9 != '\0') {
        *(undefined8 *)(puVar13 + 0x82) = *(undefined8 *)(param_2 + 0x82);
        uVar4 = *(undefined8 *)(param_2 + 0x86);
        uVar5 = *(undefined8 *)(param_2 + 0x88);
        uVar12 = *(undefined8 *)(param_2 + 0x8a);
        *(undefined8 *)(puVar13 + 0x84) = *(undefined8 *)(param_2 + 0x84);
        *(undefined8 *)(puVar13 + 0x8a) = uVar12;
        *(undefined8 *)(puVar13 + 0x88) = uVar5;
        *(undefined8 *)(puVar13 + 0x86) = uVar4;
        *(undefined1 *)(puVar13 + 0x80) = 1;
      }
    }
    else if (cVar9 == '\0') {
      *(undefined1 *)(puVar13 + 0x80) = 0;
    }
    else {
      *(undefined8 *)(puVar13 + 0x82) = *(undefined8 *)(param_2 + 0x82);
      uVar4 = *(undefined8 *)(param_2 + 0x84);
      uVar5 = *(undefined8 *)(param_2 + 0x86);
      uVar12 = *(undefined8 *)(param_2 + 0x88);
      *(undefined8 *)(puVar13 + 0x8a) = *(undefined8 *)(param_2 + 0x8a);
      *(undefined8 *)(puVar13 + 0x88) = uVar12;
      *(undefined8 *)(puVar13 + 0x86) = uVar5;
      *(undefined8 *)(puVar13 + 0x84) = uVar4;
    }
    uVar4 = *(undefined8 *)(param_2 + 0x8e);
    uVar1 = param_2[0x94];
    *(undefined8 *)(puVar13 + 0x92) = *(undefined8 *)(param_2 + 0x92);
    *(undefined8 *)(puVar13 + 0x8e) = uVar4;
    *(undefined8 *)(puVar13 + 0x8c) = *(undefined8 *)(param_2 + 0x8c);
    uVar4 = *(undefined8 *)(param_2 + 0x90);
    puVar13[0x94] = uVar1;
    *(undefined8 *)(puVar13 + 0x90) = uVar4;
    lVar7 = FUN_00fba2d0(puVar13 + 0xa0);
    if (lVar7 != 0) {
      FUN_00ed5c50(lVar7,puVar13);
    }
    nn::os::GetSystemTick();
    lVar7 = nn::os::ConvertToTimeSpan();
    uVar11 = lVar7 - *(long *)(puVar13 + 0x9c);
    uVar6 = ((long)uVar11 >> 0x20) * 0xd7b634db + ((uVar11 & 0xffffffff) * 0xd7b634db >> 0x20);
    *(long *)(puVar13 + 0x9a) =
         (((long)uVar11 >> 0x20) * 0x431bde82 + ((long)uVar6 >> 0x20) +
          ((long)((uVar11 & 0xffffffff) * 0x431bde82 + (uVar6 & 0xffffffff)) >> 0x20) >> 0x12) -
         ((long)uVar11 >> 0x3f);
    nn::os::GetSystemTick();
    uVar4 = nn::os::ConvertToTimeSpan();
    *(undefined8 *)(puVar13 + 0x9c) = uVar4;
    return;
  }
  FUN_00fbdff0(param_1,puVar13);
  puVar10 = *(undefined4 **)(param_1 + 0x70);
  puVar14 = puVar13 + 0xa4;
  if (puVar14 != puVar10) {
    do {
      *puVar13 = puVar13[0xa4];
      FUN_00fc1090(puVar13 + 4,puVar13 + 0xa8);
      if (*(char *)(puVar13 + 0x3c) == '\0') {
        if (*(char *)(puVar13 + 0xe0) != '\0') {
          memcpy(puVar13 + 0x40,puVar13 + 0xe4,0xb0);
          *(undefined1 *)(puVar13 + 0x3c) = 1;
        }
        cVar9 = *(char *)(puVar13 + 0x6c);
        cVar2 = *(char *)(puVar13 + 0x110);
joined_r0x00fbc0b0:
        if (cVar9 != '\0') goto LAB_00fbc0b4;
LAB_00fbc170:
        if (cVar2 != '\0') {
          puVar13[0x7f] = puVar13[0x123];
          *(undefined8 *)(puVar13 + 0x6f) = *(undefined8 *)(puVar13 + 0x113);
          *(undefined8 *)(puVar13 + 0x6d) = *(undefined8 *)(puVar13 + 0x111);
          *(undefined8 *)(puVar13 + 0x77) = *(undefined8 *)(puVar13 + 0x11b);
          *(undefined8 *)(puVar13 + 0x75) = *(undefined8 *)(puVar13 + 0x119);
          *(undefined8 *)(puVar13 + 0x73) = *(undefined8 *)(puVar13 + 0x117);
          *(undefined8 *)(puVar13 + 0x71) = *(undefined8 *)(puVar13 + 0x115);
          *(undefined8 *)(puVar13 + 0x7d) = *(undefined8 *)(puVar13 + 0x121);
          *(undefined8 *)(puVar13 + 0x7b) = *(undefined8 *)(puVar13 + 0x11f);
          *(undefined8 *)(puVar13 + 0x79) = *(undefined8 *)(puVar13 + 0x11d);
          *(undefined1 *)(puVar13 + 0x6c) = 1;
        }
        cVar2 = *(char *)(puVar13 + 0x80);
        cVar9 = *(char *)(puVar13 + 0x124);
joined_r0x00fbc218:
        if (cVar2 == '\0') goto LAB_00fbc25c;
LAB_00fbc21c:
        if (cVar9 == '\0') {
          *(undefined1 *)(puVar13 + 0x80) = 0;
        }
        else {
          *(undefined8 *)(puVar13 + 0x82) = *(undefined8 *)(puVar13 + 0x126);
          *(undefined8 *)(puVar13 + 0x8a) = *(undefined8 *)(puVar13 + 0x12e);
          *(undefined8 *)(puVar13 + 0x88) = *(undefined8 *)(puVar13 + 300);
          *(undefined8 *)(puVar13 + 0x86) = *(undefined8 *)(puVar13 + 0x12a);
          *(undefined8 *)(puVar13 + 0x84) = *(undefined8 *)(puVar13 + 0x128);
        }
      }
      else {
        if (*(char *)(puVar13 + 0xe0) == '\0') {
          *(undefined1 *)(puVar13 + 0x3c) = 0;
          cVar9 = *(char *)(puVar13 + 0x6c);
          cVar2 = *(char *)(puVar13 + 0x110);
          goto joined_r0x00fbc0b0;
        }
        memcpy(puVar13 + 0x40,puVar13 + 0xe4,0xa1);
        cVar2 = *(char *)(puVar13 + 0x110);
        if (*(char *)(puVar13 + 0x6c) == '\0') goto LAB_00fbc170;
LAB_00fbc0b4:
        if (cVar2 != '\0') {
          puVar13[0x7f] = puVar13[0x123];
          *(undefined8 *)(puVar13 + 0x6f) = *(undefined8 *)(puVar13 + 0x113);
          *(undefined8 *)(puVar13 + 0x6d) = *(undefined8 *)(puVar13 + 0x111);
          *(undefined8 *)(puVar13 + 0x77) = *(undefined8 *)(puVar13 + 0x11b);
          *(undefined8 *)(puVar13 + 0x75) = *(undefined8 *)(puVar13 + 0x119);
          *(undefined8 *)(puVar13 + 0x73) = *(undefined8 *)(puVar13 + 0x117);
          *(undefined8 *)(puVar13 + 0x71) = *(undefined8 *)(puVar13 + 0x115);
          *(undefined8 *)(puVar13 + 0x7d) = *(undefined8 *)(puVar13 + 0x121);
          *(undefined8 *)(puVar13 + 0x7b) = *(undefined8 *)(puVar13 + 0x11f);
          *(undefined8 *)(puVar13 + 0x79) = *(undefined8 *)(puVar13 + 0x11d);
          cVar2 = *(char *)(puVar13 + 0x80);
          cVar9 = *(char *)(puVar13 + 0x124);
          goto joined_r0x00fbc218;
        }
        *(undefined1 *)(puVar13 + 0x6c) = 0;
        cVar9 = *(char *)(puVar13 + 0x124);
        if (*(char *)(puVar13 + 0x80) != '\0') goto LAB_00fbc21c;
LAB_00fbc25c:
        if (cVar9 != '\0') {
          *(undefined8 *)(puVar13 + 0x82) = *(undefined8 *)(puVar13 + 0x126);
          *(undefined8 *)(puVar13 + 0x8a) = *(undefined8 *)(puVar13 + 0x12e);
          *(undefined8 *)(puVar13 + 0x88) = *(undefined8 *)(puVar13 + 300);
          *(undefined8 *)(puVar13 + 0x86) = *(undefined8 *)(puVar13 + 0x12a);
          *(undefined8 *)(puVar13 + 0x84) = *(undefined8 *)(puVar13 + 0x128);
          *(undefined1 *)(puVar13 + 0x80) = 1;
        }
      }
      *(undefined8 *)(puVar13 + 0x8c) = *(undefined8 *)(puVar13 + 0x130);
      puVar13[0x94] = puVar13[0x138];
      *(undefined8 *)(puVar13 + 0x92) = *(undefined8 *)(puVar13 + 0x136);
      *(undefined8 *)(puVar13 + 0x90) = *(undefined8 *)(puVar13 + 0x134);
      *(undefined8 *)(puVar13 + 0x8e) = *(undefined8 *)(puVar13 + 0x132);
      *(undefined8 *)(puVar13 + 0x9e) = *(undefined8 *)(puVar13 + 0x142);
      *(undefined8 *)(puVar13 + 0x9c) = *(undefined8 *)(puVar13 + 0x140);
      *(undefined8 *)(puVar13 + 0x9a) = *(undefined8 *)(puVar13 + 0x13e);
      *(undefined8 *)(puVar13 + 0x98) = *(undefined8 *)(puVar13 + 0x13c);
      if (*(long *)(puVar13 + 0xa0) != 0) {
        (**(code **)(*(long *)(*(long *)(puVar13 + 0xa0) + 0x48) + 0x18))();
        *(undefined8 *)(puVar13 + 0xa0) = 0;
      }
      uVar4 = *(undefined8 *)(puVar13 + 0x144);
      *(undefined8 *)(puVar13 + 0x144) = 0;
      *(undefined8 *)(puVar13 + 0xa0) = uVar4;
      if (*(long *)(puVar13 + 0xa2) != 0) {
        (**(code **)(*(long *)(*(long *)(puVar13 + 0xa2) + 0x48) + 0x18))();
        *(undefined8 *)(puVar13 + 0xa2) = 0;
      }
      uVar4 = *(undefined8 *)(puVar13 + 0x146);
      *(undefined8 *)(puVar13 + 0x146) = 0;
      *(undefined8 *)(puVar13 + 0xa2) = uVar4;
      puVar13 = puVar13 + 0xa4;
    } while (puVar10 + -0xa4 != puVar13);
    puVar14 = *(undefined4 **)(param_1 + 0x70);
    if (puVar14 == puVar13) goto LAB_00fbc414;
  }
  do {
    if (*(long *)(puVar14 + -2) != 0) {
      (**(code **)(*(long *)(*(long *)(puVar14 + -2) + 0x48) + 0x18))();
      *(undefined8 *)(puVar14 + -2) = 0;
    }
    if (*(long *)(puVar14 + -4) != 0) {
      (**(code **)(*(long *)(*(long *)(puVar14 + -4) + 0x48) + 0x18))();
      *(undefined8 *)(puVar14 + -4) = 0;
    }
    if (*(char *)(puVar14 + -0x24) != '\0') {
      *(undefined1 *)(puVar14 + -0x24) = 0;
    }
    if (*(char *)(puVar14 + -0x38) != '\0') {
      *(undefined1 *)(puVar14 + -0x38) = 0;
    }
    if (*(char *)(puVar14 + -0x68) != '\0') {
      *(char *)(puVar14 + -0x68) = '\0';
    }
    if (*(char *)(puVar14 + -0x7d) != '\0') {
      if (*(char *)(puVar14 + -0x7b) != '\0') {
        *(char *)(puVar14 + -0x7b) = '\0';
      }
      *(char *)(puVar14 + -0x7d) = '\0';
    }
    if (*(char *)(puVar14 + -0x8c) != '\0') {
      *(char *)(puVar14 + -0x8c) = '\0';
    }
    if (*(char *)(puVar14 + -0x91) != '\0') {
      *(char *)(puVar14 + -0x91) = '\0';
    }
    if (*(char *)(puVar14 + -0x9a) != '\0') {
      *(char *)(puVar14 + -0x9a) = '\0';
    }
    if (*(char *)(puVar14 + -0x9e) != '\0') {
      *(char *)(puVar14 + -0x9e) = '\0';
    }
    pcVar3 = (char *)(puVar14 + -0xa0);
    puVar14 = puVar14 + -0xa4;
    if (*pcVar3 != '\0') {
      *pcVar3 = '\0';
    }
  } while (puVar13 != puVar14);
LAB_00fbc414:
  *(undefined4 **)(param_1 + 0x70) = puVar13;
  return;
}


