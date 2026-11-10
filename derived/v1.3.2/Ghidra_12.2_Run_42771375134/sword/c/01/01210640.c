/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 01210640; name: FUN_01210640
 */


void FUN_01210640(undefined8 param_1,char *param_2)

{
  char cVar1;
  char cVar2;
  char cVar3;
  char cVar4;
  long lVar5;
  char *pcVar6;
  undefined1 local_1b8 [2];
  undefined2 local_1b6;
  undefined4 local_1b4;
  char local_1b0 [4];
  undefined8 local_1ac;
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
  undefined8 local_9c;
  char local_90;
  undefined8 local_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  undefined8 uStack_68;
  long local_58;
  
  cVar1 = *param_2;
  cVar2 = param_2[0xc0];
  cVar3 = param_2[0x110];
  cVar4 = param_2[0x120];
  local_1b0[0] = '\0';
  if (cVar1 != '\0') {
    memcpy(auStack_1a0,param_2 + 0x10,0xb0);
  }
  local_f0 = cVar2 != '\0';
  if ((bool)local_f0) {
    local_ac = *(undefined8 *)(param_2 + 0x104);
    local_bc = *(undefined8 *)(param_2 + 0xf4);
    local_b4 = *(undefined8 *)(param_2 + 0xfc);
    local_a4 = *(undefined4 *)(param_2 + 0x10c);
    local_ec = *(undefined8 *)(param_2 + 0xc4);
    local_e4 = *(undefined8 *)(param_2 + 0xcc);
    local_dc = *(undefined8 *)(param_2 + 0xd4);
    local_d4 = *(undefined8 *)(param_2 + 0xdc);
    local_cc = *(undefined8 *)(param_2 + 0xe4);
    local_c4 = *(undefined8 *)(param_2 + 0xec);
  }
  local_a0 = cVar3 != '\0';
  if ((bool)local_a0) {
    local_9c = *(undefined8 *)(param_2 + 0x114);
  }
  local_90 = cVar4 != '\0';
  if ((bool)local_90) {
    local_88 = *(undefined8 *)(param_2 + 0x128);
    local_80 = *(undefined8 *)(param_2 + 0x130);
    uStack_78 = *(undefined8 *)(param_2 + 0x138);
    local_70 = *(undefined8 *)(param_2 + 0x140);
    uStack_68 = *(undefined8 *)(param_2 + 0x148);
  }
  local_1b0[0] = cVar1 != '\0';
  FUN_012103a0(&local_58,param_1,2,local_1b0);
  if (local_90 != '\0') {
    local_90 = '\0';
  }
  if (local_a0 != '\0') {
    local_a0 = '\0';
  }
  if (local_f0 != '\0') {
    local_f0 = '\0';
  }
  if (local_1b0[0] != '\0') {
    local_1b0[0] = '\0';
  }
  if (local_58 != 0) {
    pcVar6 = (char *)FUN_011f5740(param_2);
    lVar5 = local_58;
    local_1b0[0] = '\0';
    if (*pcVar6 != '\0') {
      local_1ac = *(undefined8 *)(pcVar6 + 4);
      local_1b0[0] = '\x01';
      local_1b4 = FUN_012188c0((ulong)local_1b0 | 4);
      local_1b8[0] = 1;
      FUN_01225f60(lVar5,local_1b8);
      lVar5 = local_58;
      local_1b6 = FUN_012188d0((ulong)local_1b0 | 4);
      local_1b8[0] = 1;
      FUN_01225f70(lVar5,local_1b8);
      if (local_1b0[0] != '\0') {
        local_1b0[0] = '\0';
      }
    }
    FUN_01225f80(local_58);
  }
  return;
}


