/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 012130c0; name: FUN_012130c0
 */


/* WARNING: Type propagation algorithm not settling */

void FUN_012130c0(undefined4 *param_1,undefined4 param_2,char *param_3)

{
  char cVar1;
  undefined4 local_2a0 [4];
  char local_290 [8];
  undefined1 local_288;
  undefined1 local_278;
  undefined8 local_276;
  undefined8 local_26e;
  undefined8 local_266;
  undefined8 local_25e;
  undefined1 local_254;
  undefined8 local_250;
  undefined8 uStack_248;
  undefined1 local_240;
  undefined8 local_23c;
  undefined8 local_234;
  undefined8 local_22c;
  undefined8 local_224;
  undefined8 local_21c;
  undefined8 local_214;
  undefined8 local_20c;
  undefined1 local_204;
  char local_200;
  undefined1 local_1fc;
  undefined8 local_1f8;
  undefined8 local_1f0;
  undefined8 uStack_1e8;
  undefined4 local_1e0;
  undefined8 local_1dc;
  undefined8 local_1d4;
  undefined8 local_1cc;
  undefined5 uStack_1c4;
  undefined3 local_1bf;
  undefined5 uStack_1bc;
  char local_1b0;
  undefined1 auStack_1a0 [176];
  char local_f0;
  undefined8 local_ec;
  undefined8 local_e4;
  undefined8 local_dc;
  undefined8 local_d4;
  undefined8 local_cc;
  undefined8 local_c4;
  undefined8 local_bc;
  undefined8 local_b4;
  undefined8 local_ac;
  undefined4 local_a4;
  char local_a0;
  undefined8 local_98;
  undefined8 local_90;
  undefined8 local_88;
  undefined8 local_80;
  undefined8 local_78;
  undefined1 local_70;
  undefined7 uStack_6f;
  undefined1 local_68;
  undefined7 uStack_67;
  undefined8 local_60;
  undefined8 local_58;
  undefined4 local_50;
  
  local_290[0] = '\0';
  local_288 = 0;
  local_278 = 0;
  local_254 = 0;
  local_240 = 0;
  local_204 = 0;
  local_1b0 = 0;
  local_70 = 0;
  local_68 = 0;
  local_50 = 0;
  local_58 = 0;
  local_60 = 0;
  local_a0 = param_3[0x1e0] != '\0';
  if ((bool)local_a0) {
    local_98 = *(undefined8 *)(param_3 + 0x1e8);
    local_80 = *(undefined8 *)(param_3 + 0x200);
    local_90 = *(undefined8 *)(param_3 + 0x1f0);
    local_88 = *(undefined8 *)(param_3 + 0x1f8);
    local_78 = *(undefined8 *)(param_3 + 0x208);
  }
  local_f0 = param_3[400] != '\0';
  if ((bool)local_f0) {
    local_ec = *(undefined8 *)(param_3 + 0x194);
    local_e4 = *(undefined8 *)(param_3 + 0x19c);
    local_cc = *(undefined8 *)(param_3 + 0x1b4);
    local_c4 = *(undefined8 *)(param_3 + 0x1bc);
    local_d4 = *(undefined8 *)(param_3 + 0x1ac);
    local_dc = *(undefined8 *)(param_3 + 0x1a4);
    local_ac = *(undefined8 *)(param_3 + 0x1d4);
    local_b4 = *(undefined8 *)(param_3 + 0x1cc);
    local_bc = *(undefined8 *)(param_3 + 0x1c4);
    local_a4 = *(undefined4 *)(param_3 + 0x1dc);
  }
  cVar1 = param_3[0xd0];
  local_2a0[0] = param_2;
  if (cVar1 != '\0') {
    memcpy(auStack_1a0,param_3 + 0xe0,0xb0);
  }
  if (param_3[0x74] != '\0') {
    local_200 = param_3[0x78];
    local_1fc = param_3[0x7c] != '\0';
    if ((bool)local_1fc) {
      local_1f8 = *(undefined8 *)(param_3 + 0x80);
      local_1f0 = *(undefined8 *)(param_3 + 0x88);
      uStack_1e8 = *(undefined8 *)(param_3 + 0x90);
      local_1e0 = *(undefined4 *)(param_3 + 0x98);
    }
    local_1dc = *(undefined8 *)(param_3 + 0x9c);
    local_1d4 = *(undefined8 *)(param_3 + 0xa4);
    local_1cc = *(undefined8 *)(param_3 + 0xac);
    uStack_1bc = (undefined5)((ulong)*(undefined8 *)(param_3 + 0xb9) >> 0x18);
    uStack_1c4 = (undefined5)*(undefined8 *)(param_3 + 0xb4);
    local_1bf = (undefined3)((ulong)*(undefined8 *)(param_3 + 0xb4) >> 0x28);
    local_204 = 1;
  }
  if (param_3[0x38] != '\0') {
    local_23c = *(undefined8 *)(param_3 + 0x3c);
    local_234 = *(undefined8 *)(param_3 + 0x44);
    local_22c = *(undefined8 *)(param_3 + 0x4c);
    local_224 = *(undefined8 *)(param_3 + 0x54);
    local_21c = *(undefined8 *)(param_3 + 0x5c);
    local_214 = *(undefined8 *)(param_3 + 100);
    local_20c = *(undefined8 *)(param_3 + 0x6c);
    local_240 = 1;
  }
  if (param_3[0x24] != '\0') {
    local_250 = *(undefined8 *)(param_3 + 0x28);
    uStack_248 = *(undefined8 *)(param_3 + 0x30);
    local_254 = 1;
  }
  if (*param_3 != '\0') {
    local_276 = *(undefined8 *)(param_3 + 2);
    local_26e = *(undefined8 *)(param_3 + 10);
    local_266 = *(undefined8 *)(param_3 + 0x12);
    local_25e = *(undefined8 *)(param_3 + 0x1a);
    local_278 = 1;
  }
  local_1b0 = cVar1 != '\0';
  FUN_01225e20(local_2a0);
  *param_1 = local_2a0[0];
  FUN_00fc1090(param_1 + 4,local_290);
  if (*(char *)(param_1 + 0x3c) == '\0') {
    if (local_1b0 != '\0') {
      memcpy(param_1 + 0x40,auStack_1a0,0xb0);
      *(undefined1 *)(param_1 + 0x3c) = 1;
    }
    cVar1 = *(char *)(param_1 + 0x6c);
joined_r0x0121339c:
    if (cVar1 != '\0') goto LAB_012133a0;
LAB_01213464:
    if (local_f0 != '\0') {
      *(undefined8 *)(param_1 + 0x6f) = local_e4;
      *(undefined8 *)(param_1 + 0x6d) = local_ec;
      *(undefined8 *)(param_1 + 0x77) = local_c4;
      *(undefined8 *)(param_1 + 0x75) = local_cc;
      *(undefined8 *)(param_1 + 0x73) = local_d4;
      *(undefined8 *)(param_1 + 0x71) = local_dc;
      param_1[0x7f] = local_a4;
      *(undefined8 *)(param_1 + 0x7d) = local_ac;
      *(undefined8 *)(param_1 + 0x7b) = local_b4;
      *(undefined8 *)(param_1 + 0x79) = local_bc;
      *(undefined1 *)(param_1 + 0x6c) = 1;
    }
    cVar1 = *(char *)(param_1 + 0x80);
  }
  else {
    if (local_1b0 == '\0') {
      *(undefined1 *)(param_1 + 0x3c) = 0;
      cVar1 = *(char *)(param_1 + 0x6c);
      goto joined_r0x0121339c;
    }
    memcpy(param_1 + 0x40,auStack_1a0,0xa1);
    if (*(char *)(param_1 + 0x6c) == '\0') goto LAB_01213464;
LAB_012133a0:
    if (local_f0 == '\0') {
      *(undefined1 *)(param_1 + 0x6c) = 0;
      cVar1 = *(char *)(param_1 + 0x80);
    }
    else {
      *(undefined8 *)(param_1 + 0x6f) = local_e4;
      *(undefined8 *)(param_1 + 0x6d) = local_ec;
      *(undefined8 *)(param_1 + 0x77) = local_c4;
      *(undefined8 *)(param_1 + 0x75) = local_cc;
      *(undefined8 *)(param_1 + 0x73) = local_d4;
      *(undefined8 *)(param_1 + 0x71) = local_dc;
      param_1[0x7f] = local_a4;
      *(undefined8 *)(param_1 + 0x7b) = local_b4;
      *(undefined8 *)(param_1 + 0x7d) = local_ac;
      *(undefined8 *)(param_1 + 0x79) = local_bc;
      cVar1 = *(char *)(param_1 + 0x80);
    }
  }
  if (cVar1 == '\0') {
    if (local_a0 != '\0') {
      *(undefined8 *)(param_1 + 0x82) = local_98;
      *(undefined8 *)(param_1 + 0x84) = local_90;
      *(undefined8 *)(param_1 + 0x8a) = local_78;
      *(undefined8 *)(param_1 + 0x88) = local_80;
      *(undefined8 *)(param_1 + 0x86) = local_88;
      *(undefined1 *)(param_1 + 0x80) = 1;
LAB_01213594:
      *(ulong *)(param_1 + 0x8c) = CONCAT71(uStack_6f,local_70);
      param_1[0x94] = local_50;
      *(undefined8 *)(param_1 + 0x92) = local_58;
      *(undefined8 *)(param_1 + 0x90) = local_60;
      *(ulong *)(param_1 + 0x8e) = CONCAT71(uStack_67,local_68);
      return;
    }
  }
  else {
    if (local_a0 != '\0') {
      *(undefined8 *)(param_1 + 0x82) = local_98;
      *(undefined8 *)(param_1 + 0x8a) = local_78;
      *(undefined8 *)(param_1 + 0x88) = local_80;
      *(undefined8 *)(param_1 + 0x86) = local_88;
      *(undefined8 *)(param_1 + 0x84) = local_90;
      goto LAB_01213594;
    }
    *(undefined1 *)(param_1 + 0x80) = 0;
  }
  *(undefined8 *)(param_1 + 0x92) = local_58;
  *(ulong *)(param_1 + 0x8e) = CONCAT71(uStack_67,local_68);
  *(ulong *)(param_1 + 0x8c) = CONCAT71(uStack_6f,local_70);
  param_1[0x94] = local_50;
  *(undefined8 *)(param_1 + 0x90) = local_60;
  return;
}


