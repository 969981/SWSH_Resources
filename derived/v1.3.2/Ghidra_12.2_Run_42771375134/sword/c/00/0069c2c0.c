/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0069c2c0; name: FUN_0069c2c0
 */


void FUN_0069c2c0(long param_1,undefined8 *param_2,undefined8 *param_3,undefined8 *param_4)

{
  code *pcVar1;
  long lVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  undefined8 local_170;
  undefined8 local_168;
  undefined8 local_160;
  long local_158;
  undefined8 local_150;
  code *local_148;
  code *local_140;
  undefined8 local_138;
  undefined1 auStack_130 [96];
  undefined8 local_d0;
  code *local_c8;
  code *local_c0;
  undefined8 local_b8;
  undefined1 auStack_b0 [96];
  
  local_c0 = (code *)0x0;
  local_b8 = 0;
  local_d0 = 0;
  local_c8 = (code *)0x0;
  local_140 = (code *)0x0;
  local_138 = 0;
  local_150 = 0;
  local_148 = (code *)0x0;
  local_158 = 0;
  local_170 = *param_2;
  local_168 = param_2[1];
  local_160 = param_2[2];
  lVar2 = param_2[3];
  if (lVar2 != 0) {
    (**(code **)(*(long *)(lVar2 + 0x48) + 0x10))();
  }
  local_158 = lVar2;
  if ((code *)param_3[2] != (code *)0x0) {
    (*(code *)param_3[2])(param_3 + 4,auStack_130);
    pcVar1 = local_c8;
    local_150 = *param_3;
    local_148 = (code *)param_3[1];
    local_140 = (code *)param_3[2];
    local_138 = param_3[3];
    if (local_c8 != (code *)0x0) {
      local_c0 = (code *)0x0;
      local_b8 = 0;
      local_d0 = 0;
      local_c8 = (code *)0x0;
      (*pcVar1)(auStack_b0);
    }
  }
  if ((code *)param_4[2] != (code *)0x0) {
    (*(code *)param_4[2])(param_4 + 4,auStack_b0);
    local_d0 = *param_4;
    local_c8 = (code *)param_4[1];
    local_c0 = (code *)param_4[2];
    local_b8 = param_4[3];
  }
  puVar3 = *(undefined8 **)(param_1 + 0x208);
  if (puVar3 < *(undefined8 **)(param_1 + 0x210)) {
    uVar4 = *(undefined8 *)(param_1 + 0x218);
    lVar2 = nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_02710860);
    if (0xf < *(ulong *)(lVar2 + 0x80)) {
                    /* WARNING: Subroutine does not return */
      abort();
    }
    *(undefined8 *)(lVar2 + *(ulong *)(lVar2 + 0x80) * 8) = uVar4;
    *(long *)(lVar2 + 0x80) = *(long *)(lVar2 + 0x80) + 1;
    *puVar3 = local_170;
    puVar3[1] = local_168;
    puVar3[2] = local_160;
    puVar3[3] = local_158;
    if (local_158 != 0) {
      (**(code **)(*(long *)(local_158 + 0x48) + 0x10))();
    }
    puVar3[4] = 0;
    puVar3[6] = 0;
    puVar3[7] = 0;
    puVar3[5] = 0;
    if (local_140 != (code *)0x0) {
      (*local_140)(auStack_130,puVar3 + 8);
      puVar3[7] = local_138;
      puVar3[5] = local_148;
      puVar3[6] = local_140;
      puVar3[4] = local_150;
    }
    puVar3[0x14] = 0;
    puVar3[0x16] = 0;
    puVar3[0x17] = 0;
    puVar3[0x15] = 0;
    if (local_c0 != (code *)0x0) {
      (*local_c0)(auStack_b0,puVar3 + 0x18);
      puVar3[0x17] = local_b8;
      puVar3[0x15] = local_c8;
      puVar3[0x16] = local_c0;
      puVar3[0x14] = local_d0;
    }
    *(long *)(lVar2 + 0x80) = *(long *)(lVar2 + 0x80) + -1;
    *(long *)(param_1 + 0x208) = *(long *)(param_1 + 0x208) + 0x120;
    pcVar1 = local_c8;
  }
  else {
    FUN_0069e3e0(param_1 + 0x200,&local_170);
    pcVar1 = local_c8;
  }
  local_c8 = pcVar1;
  if (pcVar1 != (code *)0x0) {
    local_c0 = (code *)0x0;
    local_b8 = 0;
    local_d0 = 0;
    local_c8 = (code *)0x0;
    (*pcVar1)(auStack_b0);
  }
  pcVar1 = local_148;
  if (local_148 != (code *)0x0) {
    local_140 = (code *)0x0;
    local_138 = 0;
    local_150 = 0;
    local_148 = (code *)0x0;
    (*pcVar1)(auStack_130);
  }
  if (local_158 != 0) {
    (**(code **)(*(long *)(local_158 + 0x48) + 0x18))();
  }
  return;
}


