/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 01216e80; name: FUN_01216e80
 */


/* WARNING: Type propagation algorithm not settling */

void FUN_01216e80(undefined4 *param_1,undefined4 param_2,long param_3)

{
  bool bVar1;
  char cVar2;
  undefined4 local_2a0 [4];
  char local_290 [8];
  undefined1 local_288;
  undefined1 local_278;
  undefined1 local_254;
  undefined1 local_240;
  undefined1 local_204;
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
  local_a0 = *(char *)(param_3 + 0x1f0) != '\0';
  if ((bool)local_a0) {
    local_98 = *(undefined8 *)(param_3 + 0x1f8);
    local_90 = *(undefined8 *)(param_3 + 0x200);
    local_88 = *(undefined8 *)(param_3 + 0x208);
    local_80 = *(undefined8 *)(param_3 + 0x210);
    local_78 = *(undefined8 *)(param_3 + 0x218);
  }
  local_f0 = *(char *)(param_3 + 0x1a0) != '\0';
  if ((bool)local_f0) {
    local_ec = *(undefined8 *)(param_3 + 0x1a4);
    local_e4 = *(undefined8 *)(param_3 + 0x1ac);
    local_cc = *(undefined8 *)(param_3 + 0x1c4);
    local_c4 = *(undefined8 *)(param_3 + 0x1cc);
    local_d4 = *(undefined8 *)(param_3 + 0x1bc);
    local_dc = *(undefined8 *)(param_3 + 0x1b4);
    local_ac = *(undefined8 *)(param_3 + 0x1e4);
    local_b4 = *(undefined8 *)(param_3 + 0x1dc);
    local_bc = *(undefined8 *)(param_3 + 0x1d4);
    local_a4 = *(undefined4 *)(param_3 + 0x1ec);
  }
  bVar1 = *(char *)(param_3 + 0xe0) != '\0';
  local_2a0[0] = param_2;
  if (bVar1) {
    memcpy(auStack_1a0,(void *)(param_3 + 0xf0),0xb0);
  }
  local_1b0 = bVar1;
  FUN_01217b30(local_290,param_3);
  FUN_01225e20(local_2a0);
  *param_1 = local_2a0[0];
  FUN_00fc1090(param_1 + 4,local_290);
  if (*(char *)(param_1 + 0x3c) == '\0') {
    if (local_1b0 != '\0') {
      memcpy(param_1 + 0x40,auStack_1a0,0xb0);
      *(undefined1 *)(param_1 + 0x3c) = 1;
    }
    cVar2 = *(char *)(param_1 + 0x6c);
joined_r0x01217070:
    if (cVar2 != '\0') goto LAB_01217074;
LAB_01217138:
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
    cVar2 = *(char *)(param_1 + 0x80);
  }
  else {
    if (local_1b0 == '\0') {
      *(undefined1 *)(param_1 + 0x3c) = 0;
      cVar2 = *(char *)(param_1 + 0x6c);
      goto joined_r0x01217070;
    }
    memcpy(param_1 + 0x40,auStack_1a0,0xa1);
    if (*(char *)(param_1 + 0x6c) == '\0') goto LAB_01217138;
LAB_01217074:
    if (local_f0 == '\0') {
      *(undefined1 *)(param_1 + 0x6c) = 0;
      cVar2 = *(char *)(param_1 + 0x80);
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
      cVar2 = *(char *)(param_1 + 0x80);
    }
  }
  if (cVar2 == '\0') {
    if (local_a0 != '\0') {
      *(undefined8 *)(param_1 + 0x82) = local_98;
      *(undefined8 *)(param_1 + 0x84) = local_90;
      *(undefined8 *)(param_1 + 0x8a) = local_78;
      *(undefined8 *)(param_1 + 0x88) = local_80;
      *(undefined8 *)(param_1 + 0x86) = local_88;
      *(undefined1 *)(param_1 + 0x80) = 1;
LAB_01217268:
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
      goto LAB_01217268;
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


