/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 010a0c10; name: FUN_010a0c10
 */


void FUN_010a0c10(long param_1)

{
  char *pcVar1;
  uint *puVar2;
  char cVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  ulong uVar6;
  undefined8 uVar7;
  long lVar8;
  ulong uVar9;
  long local_2d0 [2];
  char local_2c0;
  char local_2b8;
  undefined8 local_2b0;
  char local_2a8;
  undefined8 local_2a6;
  undefined8 uStack_29e;
  undefined8 local_296;
  undefined8 uStack_28e;
  char local_284;
  undefined8 local_280;
  undefined8 uStack_278;
  char local_270;
  undefined8 local_26c;
  undefined8 local_264;
  undefined8 uStack_25c;
  undefined8 local_254;
  undefined8 uStack_24c;
  undefined8 local_244;
  undefined8 uStack_23c;
  char local_234;
  undefined1 local_230;
  char local_22c;
  undefined8 local_228;
  undefined8 local_220;
  undefined8 uStack_218;
  undefined4 local_210;
  undefined8 local_20c;
  undefined8 local_204;
  undefined8 local_1fc;
  undefined5 uStack_1f4;
  undefined3 local_1ef;
  undefined5 uStack_1ec;
  char local_1e0;
  undefined1 auStack_1d0 [176];
  char local_120;
  undefined8 local_11c;
  undefined8 uStack_114;
  undefined8 local_10c;
  undefined8 uStack_104;
  undefined8 local_fc;
  undefined8 uStack_f4;
  undefined8 local_ec;
  undefined8 local_e4;
  undefined8 uStack_dc;
  undefined4 local_d4;
  char local_d0;
  undefined8 local_c8;
  undefined8 local_c0;
  undefined8 uStack_b8;
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined8 local_a0;
  undefined8 local_98;
  undefined8 local_90;
  undefined8 local_88;
  undefined4 local_80;
  
  pcVar1 = (char *)(param_1 + 0x11b21);
  *pcVar1 = '\x01';
  if (*(char *)(param_1 + 0x11b10) == '\0') {
    FUN_010a2060(param_1);
    cVar3 = *pcVar1;
  }
  else {
    *(char *)(param_1 + 0x11b10) = '\0';
    uVar7 = *(undefined8 *)PTR_DAT_02710958;
    puVar4 = (undefined4 *)FUN_0120f210(uVar7);
    puVar5 = (undefined4 *)FUN_0120f220(uVar7);
    if (puVar4 != puVar5) {
      do {
        local_2d0[0] = CONCAT44(local_2d0[0]._4_4_,*puVar4);
        local_2c0 = *(char *)(puVar4 + 4);
        local_2b8 = *(char *)(puVar4 + 6) != '\0';
        if ((bool)local_2b8) {
          local_2b0 = *(undefined8 *)(puVar4 + 8);
        }
        local_2a8 = *(char *)(puVar4 + 10) != '\0';
        if ((bool)local_2a8) {
          local_2a6 = *(undefined8 *)((long)puVar4 + 0x2a);
          uStack_29e = *(undefined8 *)((long)puVar4 + 0x32);
          local_296 = *(undefined8 *)((long)puVar4 + 0x3a);
          uStack_28e = *(undefined8 *)((long)puVar4 + 0x42);
        }
        local_284 = *(char *)(puVar4 + 0x13) != '\0';
        if ((bool)local_284) {
          local_280 = *(undefined8 *)(puVar4 + 0x14);
          uStack_278 = *(undefined8 *)(puVar4 + 0x16);
        }
        local_270 = *(char *)(puVar4 + 0x18) != '\0';
        if ((bool)local_270) {
          local_26c = *(undefined8 *)(puVar4 + 0x19);
          local_264 = *(undefined8 *)(puVar4 + 0x1b);
          uStack_25c = *(undefined8 *)(puVar4 + 0x1d);
          local_254 = *(undefined8 *)(puVar4 + 0x1f);
          uStack_24c = *(undefined8 *)(puVar4 + 0x21);
          local_244 = *(undefined8 *)(puVar4 + 0x23);
          uStack_23c = *(undefined8 *)(puVar4 + 0x25);
        }
        local_234 = '\0';
        if (*(char *)(puVar4 + 0x27) != '\0') {
          local_230 = *(undefined1 *)(puVar4 + 0x28);
          local_22c = *(char *)(puVar4 + 0x29) != '\0';
          if ((bool)local_22c) {
            local_228 = *(undefined8 *)(puVar4 + 0x2a);
            local_220 = *(undefined8 *)(puVar4 + 0x2c);
            uStack_218 = *(undefined8 *)(puVar4 + 0x2e);
            local_210 = puVar4[0x30];
          }
          local_20c = *(undefined8 *)(puVar4 + 0x31);
          local_204 = *(undefined8 *)(puVar4 + 0x33);
          local_1fc = *(undefined8 *)(puVar4 + 0x35);
          uStack_1ec = (undefined5)((ulong)*(undefined8 *)((long)puVar4 + 0xe1) >> 0x18);
          uStack_1f4 = (undefined5)*(undefined8 *)(puVar4 + 0x37);
          local_1ef = (undefined3)((ulong)*(undefined8 *)(puVar4 + 0x37) >> 0x28);
          local_234 = '\x01';
        }
        local_1e0 = 0;
        cVar3 = *(char *)(puVar4 + 0x3c);
        if (cVar3 != '\0') {
          memcpy(auStack_1d0,puVar4 + 0x40,0xb0);
        }
        local_120 = *(char *)(puVar4 + 0x6c) != '\0';
        if ((bool)local_120) {
          uStack_114 = *(undefined8 *)(puVar4 + 0x6f);
          local_11c = *(undefined8 *)(puVar4 + 0x6d);
          local_10c = *(undefined8 *)(puVar4 + 0x71);
          uStack_104 = *(undefined8 *)(puVar4 + 0x73);
          local_fc = *(undefined8 *)(puVar4 + 0x75);
          uStack_f4 = *(undefined8 *)(puVar4 + 0x77);
          local_ec = *(undefined8 *)(puVar4 + 0x79);
          local_e4 = *(undefined8 *)(puVar4 + 0x7b);
          uStack_dc = *(undefined8 *)(puVar4 + 0x7d);
          local_d4 = puVar4[0x7f];
        }
        local_d0 = *(char *)(puVar4 + 0x80) != '\0';
        if ((bool)local_d0) {
          local_c8 = *(undefined8 *)(puVar4 + 0x82);
          local_c0 = *(undefined8 *)(puVar4 + 0x84);
          uStack_b8 = *(undefined8 *)(puVar4 + 0x86);
          local_b0 = *(undefined8 *)(puVar4 + 0x88);
          uStack_a8 = *(undefined8 *)(puVar4 + 0x8a);
        }
        local_98 = *(undefined8 *)(puVar4 + 0x8e);
        local_88 = *(undefined8 *)(puVar4 + 0x92);
        local_80 = puVar4[0x94];
        local_a0 = *(undefined8 *)(puVar4 + 0x8c);
        local_90 = *(undefined8 *)(puVar4 + 0x90);
        local_1e0 = cVar3 != '\0';
        FUN_010a1530(param_1,local_2d0,0);
        if (local_d0 != '\0') {
          local_d0 = '\0';
        }
        if (local_120 != '\0') {
          local_120 = '\0';
        }
        if (local_1e0 != '\0') {
          local_1e0 = '\0';
        }
        if (local_234 != '\0') {
          if (local_22c != '\0') {
            local_22c = '\0';
          }
          local_234 = '\0';
        }
        if (local_270 != '\0') {
          local_270 = '\0';
        }
        if (local_284 != '\0') {
          local_284 = '\0';
        }
        if (local_2a8 != '\0') {
          local_2a8 = '\0';
        }
        if (local_2b8 != '\0') {
          local_2b8 = '\0';
        }
        if (local_2c0 != '\0') {
          local_2c0 = '\0';
        }
        puVar4 = puVar4 + 0x98;
      } while (puVar4 != puVar5);
    }
    cVar3 = *pcVar1;
  }
  if (cVar3 != '\0') {
    FUN_01211940(local_2d0,*(undefined8 *)PTR_DAT_02710958);
    FUN_010a1530(param_1,local_2d0,1);
    if (local_d0 != '\0') {
      local_d0 = '\0';
    }
    if (local_120 != '\0') {
      local_120 = '\0';
    }
    if (local_1e0 != '\0') {
      local_1e0 = '\0';
    }
    if (local_234 != '\0') {
      if (local_22c != '\0') {
        local_22c = '\0';
      }
      local_234 = '\0';
    }
    if (local_270 != '\0') {
      local_270 = '\0';
    }
    if (local_284 != '\0') {
      local_284 = '\0';
    }
    if (local_2a8 != '\0') {
      local_2a8 = '\0';
    }
    if (local_2b8 != '\0') {
      local_2b8 = '\0';
    }
    if (local_2c0 != '\0') {
      local_2c0 = '\0';
    }
  }
  puVar2 = (uint *)(param_1 + 0x11af4);
  if (*puVar2 != 0) {
    local_2d0[0] = param_1 + 0x108;
    FUN_010a39b0(param_1 + 0xbc88,param_1 + 0xbc88 + (ulong)*puVar2 * 0xa0,local_2d0);
    uVar6 = (ulong)*puVar2;
    if (*puVar2 != 0) {
      uVar9 = 0;
      lVar8 = param_1 + 0xbc88;
      do {
        if (*(int *)(lVar8 + 4) != -1) {
          FUN_010a58e0(param_1 + 0x108,lVar8);
          uVar6 = (ulong)*puVar2;
        }
        uVar9 = uVar9 + 1;
        lVar8 = lVar8 + 0xa0;
      } while (uVar9 < uVar6);
    }
  }
  *(undefined4 *)(param_1 + 0xbc8c) = 0xffffffff;
  *(undefined4 *)(param_1 + 0xbd2c) = 0xffffffff;
  *(undefined4 *)(param_1 + 0xbdcc) = 0xffffffff;
  *(undefined4 *)(param_1 + 0xbe6c) = 0xffffffff;
  *(undefined4 *)(param_1 + 0xbf0c) = 0xffffffff;
  *(undefined4 *)(param_1 + 0xbfac) = 0xffffffff;
  *(undefined4 *)(param_1 + 0xc04c) = 0xffffffff;
  *(undefined4 *)(param_1 + 0xc0ec) = 0xffffffff;
  *(undefined4 *)(param_1 + 0xc18c) = 0xffffffff;
  *(undefined4 *)(param_1 + 0xc22c) = 0xffffffff;
  *(undefined4 *)(param_1 + 0xc2cc) = 0xffffffff;
  *(undefined4 *)(param_1 + 0xc36c) = 0xffffffff;
  *(undefined4 *)(param_1 + 0xc40c) = 0xffffffff;
  *(undefined4 *)(param_1 + 0xc4ac) = 0xffffffff;
  *(undefined4 *)(param_1 + 0xc54c) = 0xffffffff;
  *(undefined4 *)(param_1 + 0xc5ec) = 0xffffffff;
  *(undefined4 *)(param_1 + 0xc68c) = 0xffffffff;
  *(undefined4 *)(param_1 + 0xc72c) = 0xffffffff;
  *(undefined4 *)(param_1 + 0xc7cc) = 0xffffffff;
  *(undefined4 *)(param_1 + 0xc86c) = 0xffffffff;
  *(undefined4 *)(param_1 + 0xc90c) = 0xffffffff;
  *(undefined4 *)(param_1 + 0xc9ac) = 0xffffffff;
  *(undefined4 *)(param_1 + 0xca4c) = 0xffffffff;
  *(undefined4 *)(param_1 + 0xcaec) = 0xffffffff;
  *(undefined4 *)(param_1 + 0xcb8c) = 0xffffffff;
  *(undefined4 *)(param_1 + 0xcc2c) = 0xffffffff;
  *(undefined4 *)(param_1 + 0xcccc) = 0xffffffff;
  *(undefined4 *)(param_1 + 0xcd6c) = 0xffffffff;
  *(undefined4 *)(param_1 + 0xce0c) = 0xffffffff;
  *(undefined4 *)(param_1 + 0xceac) = 0xffffffff;
  *(undefined4 *)(param_1 + 0xcf4c) = 0xffffffff;
  *(undefined4 *)(param_1 + 0xcfec) = 0xffffffff;
  *(undefined4 *)(param_1 + 0xd08c) = 0xffffffff;
  *(undefined4 *)(param_1 + 0xd12c) = 0xffffffff;
  *(undefined4 *)(param_1 + 0xd1cc) = 0xffffffff;
  *(undefined4 *)(param_1 + 0xd26c) = 0xffffffff;
  *(undefined4 *)(param_1 + 0xd30c) = 0xffffffff;
  *(undefined4 *)(param_1 + 0xd3ac) = 0xffffffff;
  *(undefined4 *)(param_1 + 0xd44c) = 0xffffffff;
  *(undefined4 *)(param_1 + 0xd4ec) = 0xffffffff;
  *(undefined4 *)(param_1 + 0xd58c) = 0xffffffff;
  *(undefined4 *)(param_1 + 0xd62c) = 0xffffffff;
  *(undefined4 *)(param_1 + 0xd6cc) = 0xffffffff;
  *(undefined4 *)(param_1 + 0xd76c) = 0xffffffff;
  *(undefined4 *)(param_1 + 0xd80c) = 0xffffffff;
  *(undefined4 *)(param_1 + 0xd8ac) = 0xffffffff;
  *(undefined4 *)(param_1 + 0xd94c) = 0xffffffff;
  *(undefined4 *)(param_1 + 0xd9ec) = 0xffffffff;
  *(undefined4 *)(param_1 + 0xda8c) = 0xffffffff;
  *(undefined4 *)(param_1 + 0xdb2c) = 0xffffffff;
  *puVar2 = 0;
  return;
}


