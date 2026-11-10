/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 01215db0; name: FUN_01215db0
 */


/* WARNING: Type propagation algorithm not settling */

void FUN_01215db0(undefined4 *param_1,undefined4 param_2,char *param_3)

{
  char cVar1;
  undefined4 local_290 [4];
  char local_280 [8];
  undefined1 local_278;
  undefined1 local_268;
  undefined1 local_244;
  undefined1 local_230;
  undefined1 local_1f4;
  char local_1a0;
  undefined1 auStack_190 [176];
  char local_e0;
  undefined8 local_dc;
  undefined8 local_d4;
  undefined8 local_cc;
  undefined8 local_c4;
  undefined8 local_bc;
  undefined8 local_b4;
  undefined8 local_ac;
  undefined8 local_a4;
  undefined8 local_9c;
  undefined4 local_94;
  char local_90;
  undefined8 local_88;
  undefined8 local_80;
  undefined8 local_78;
  undefined8 local_70;
  undefined8 local_68;
  undefined1 local_60;
  undefined7 uStack_5f;
  undefined1 local_58;
  undefined7 uStack_57;
  undefined8 local_50;
  undefined8 local_48;
  undefined4 local_40;
  
  local_280[0] = '\0';
  local_278 = 0;
  local_268 = 0;
  local_244 = 0;
  local_230 = 0;
  local_1f4 = 0;
  local_1a0 = 0;
  local_60 = 0;
  local_58 = 0;
  local_40 = 0;
  local_48 = 0;
  local_50 = 0;
  local_90 = param_3[0x120] != '\0';
  if ((bool)local_90) {
    local_88 = *(undefined8 *)(param_3 + 0x128);
    local_80 = *(undefined8 *)(param_3 + 0x130);
    local_78 = *(undefined8 *)(param_3 + 0x138);
    local_70 = *(undefined8 *)(param_3 + 0x140);
    local_68 = *(undefined8 *)(param_3 + 0x148);
  }
  local_e0 = param_3[0xc0] != '\0';
  if ((bool)local_e0) {
    local_dc = *(undefined8 *)(param_3 + 0xc4);
    local_d4 = *(undefined8 *)(param_3 + 0xcc);
    local_b4 = *(undefined8 *)(param_3 + 0xec);
    local_bc = *(undefined8 *)(param_3 + 0xe4);
    local_cc = *(undefined8 *)(param_3 + 0xd4);
    local_c4 = *(undefined8 *)(param_3 + 0xdc);
    local_9c = *(undefined8 *)(param_3 + 0x104);
    local_94 = *(undefined4 *)(param_3 + 0x10c);
    local_a4 = *(undefined8 *)(param_3 + 0xfc);
    local_ac = *(undefined8 *)(param_3 + 0xf4);
  }
  cVar1 = *param_3;
  local_290[0] = param_2;
  if (cVar1 != '\0') {
    memcpy(auStack_190,param_3 + 0x10,0xb0);
  }
  local_1a0 = cVar1 != '\0';
  FUN_01225e20(local_290);
  *param_1 = local_290[0];
  FUN_00fc1090(param_1 + 4,local_280);
  if (*(char *)(param_1 + 0x3c) == '\0') {
    if (local_1a0 != '\0') {
      memcpy(param_1 + 0x40,auStack_190,0xb0);
      *(undefined1 *)(param_1 + 0x3c) = 1;
    }
    cVar1 = *(char *)(param_1 + 0x6c);
joined_r0x01215f68:
    if (cVar1 != '\0') goto LAB_01215f6c;
LAB_01216034:
    if (local_e0 != '\0') {
      *(undefined8 *)(param_1 + 0x6f) = local_d4;
      *(undefined8 *)(param_1 + 0x6d) = local_dc;
      *(undefined8 *)(param_1 + 0x77) = local_b4;
      *(undefined8 *)(param_1 + 0x75) = local_bc;
      *(undefined8 *)(param_1 + 0x73) = local_c4;
      *(undefined8 *)(param_1 + 0x71) = local_cc;
      param_1[0x7f] = local_94;
      *(undefined8 *)(param_1 + 0x7d) = local_9c;
      *(undefined8 *)(param_1 + 0x7b) = local_a4;
      *(undefined8 *)(param_1 + 0x79) = local_ac;
      *(undefined1 *)(param_1 + 0x6c) = 1;
    }
    cVar1 = *(char *)(param_1 + 0x80);
  }
  else {
    if (local_1a0 == '\0') {
      *(undefined1 *)(param_1 + 0x3c) = 0;
      cVar1 = *(char *)(param_1 + 0x6c);
      goto joined_r0x01215f68;
    }
    memcpy(param_1 + 0x40,auStack_190,0xa1);
    if (*(char *)(param_1 + 0x6c) == '\0') goto LAB_01216034;
LAB_01215f6c:
    if (local_e0 == '\0') {
      *(undefined1 *)(param_1 + 0x6c) = 0;
      cVar1 = *(char *)(param_1 + 0x80);
    }
    else {
      *(undefined8 *)(param_1 + 0x6f) = local_d4;
      *(undefined8 *)(param_1 + 0x6d) = local_dc;
      *(undefined8 *)(param_1 + 0x77) = local_b4;
      *(undefined8 *)(param_1 + 0x75) = local_bc;
      *(undefined8 *)(param_1 + 0x73) = local_c4;
      *(undefined8 *)(param_1 + 0x71) = local_cc;
      param_1[0x7f] = local_94;
      *(undefined8 *)(param_1 + 0x7b) = local_a4;
      *(undefined8 *)(param_1 + 0x7d) = local_9c;
      *(undefined8 *)(param_1 + 0x79) = local_ac;
      cVar1 = *(char *)(param_1 + 0x80);
    }
  }
  if (cVar1 == '\0') {
    if (local_90 != '\0') {
      *(undefined8 *)(param_1 + 0x82) = local_88;
      *(undefined8 *)(param_1 + 0x84) = local_80;
      *(undefined8 *)(param_1 + 0x8a) = local_68;
      *(undefined8 *)(param_1 + 0x88) = local_70;
      *(undefined8 *)(param_1 + 0x86) = local_78;
      *(undefined1 *)(param_1 + 0x80) = 1;
LAB_01216164:
      *(ulong *)(param_1 + 0x8c) = CONCAT71(uStack_5f,local_60);
      param_1[0x94] = local_40;
      *(undefined8 *)(param_1 + 0x92) = local_48;
      *(undefined8 *)(param_1 + 0x90) = local_50;
      *(ulong *)(param_1 + 0x8e) = CONCAT71(uStack_57,local_58);
      return;
    }
  }
  else {
    if (local_90 != '\0') {
      *(undefined8 *)(param_1 + 0x82) = local_88;
      *(undefined8 *)(param_1 + 0x8a) = local_68;
      *(undefined8 *)(param_1 + 0x88) = local_70;
      *(undefined8 *)(param_1 + 0x86) = local_78;
      *(undefined8 *)(param_1 + 0x84) = local_80;
      goto LAB_01216164;
    }
    *(undefined1 *)(param_1 + 0x80) = 0;
  }
  *(undefined8 *)(param_1 + 0x92) = local_48;
  *(ulong *)(param_1 + 0x8e) = CONCAT71(uStack_57,local_58);
  *(ulong *)(param_1 + 0x8c) = CONCAT71(uStack_5f,local_60);
  param_1[0x94] = local_40;
  *(undefined8 *)(param_1 + 0x90) = local_50;
  return;
}


