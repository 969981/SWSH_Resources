/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 007ead00; name: FUN_007ead00
 */


/* WARNING: Type propagation algorithm not settling */

void FUN_007ead00(long param_1,undefined8 param_2,undefined8 param_3,undefined4 param_4,
                 string *param_5)

{
  byte *pbVar1;
  ulong uVar2;
  string *psVar3;
  byte bVar4;
  ulong *puVar5;
  byte *pbVar6;
  byte local_d0 [16];
  void *local_c0;
  ulong local_b8;
  ulong local_b0;
  void *local_a8;
  ulong local_a0;
  ulong local_98;
  void *local_90;
  ulong local_88;
  ulong local_80;
  void *local_78;
  ulong local_70;
  ulong local_68;
  void *local_60;
  ulong local_58;
  ulong local_50;
  void *local_48;
  
  if (*(long *)(param_1 + 0x90) == 0) {
    bVar4 = *(byte *)(param_1 + 0xb0);
    if ((bVar4 & 1) == 0) {
      if (bVar4 >> 1 == 0) goto LAB_007eb0c4;
    }
    else if (*(long *)(param_1 + 0xb8) == 0) {
LAB_007eb0c4:
      std::operator+("\"",param_5);
      puVar5 = (ulong *)std::string::append((char *)&local_70);
      local_58 = *puVar5;
      local_50 = puVar5[1];
      local_48 = (void *)puVar5[2];
      puVar5[1] = 0;
      puVar5[2] = 0;
      *puVar5 = 0;
      FUN_007eaaf0(param_1,param_2,param_3,param_4,&local_58);
      if ((local_58 & 1) != 0) {
        operator_delete(local_48);
      }
      if ((local_70 & 1) == 0) {
        return;
      }
      local_c0 = local_60;
      goto LAB_007eb134;
    }
  }
  else {
    std::operator+("\"",(string *)(param_1 + 0x98));
    puVar5 = (ulong *)std::string::append((char *)local_d0);
    local_b8 = *puVar5;
    local_b0 = puVar5[1];
    local_a8 = (void *)puVar5[2];
    puVar5[1] = 0;
    puVar5[2] = 0;
    *puVar5 = 0;
    pbVar6 = (byte *)**(undefined8 **)(param_1 + 0x90);
    pbVar1 = *(byte **)(pbVar6 + 0x10);
    if ((*pbVar6 & 1) == 0) {
      pbVar1 = pbVar6 + 1;
    }
    puVar5 = (ulong *)std::string::append((char *)&local_b8,(ulong)pbVar1);
    local_a0 = *puVar5;
    local_98 = puVar5[1];
    local_90 = (void *)puVar5[2];
    puVar5[1] = 0;
    puVar5[2] = 0;
    *puVar5 = 0;
    puVar5 = (ulong *)std::string::append((char *)&local_a0);
    local_88 = *puVar5;
    local_80 = puVar5[1];
    local_78 = (void *)puVar5[2];
    puVar5[1] = 0;
    puVar5[2] = 0;
    *puVar5 = 0;
    uVar2 = param_1 + 0x39;
    if ((*(byte *)(param_1 + 0x38) & 1) != 0) {
      uVar2 = *(ulong *)(param_1 + 0x48);
    }
    puVar5 = (ulong *)std::string::append((char *)&local_88,uVar2);
    local_70 = *puVar5;
    local_68 = puVar5[1];
    local_60 = (void *)puVar5[2];
    puVar5[1] = 0;
    puVar5[2] = 0;
    *puVar5 = 0;
    puVar5 = (ulong *)std::string::append((char *)&local_70);
    local_58 = *puVar5;
    local_50 = puVar5[1];
    local_48 = (void *)puVar5[2];
    puVar5[1] = 0;
    puVar5[2] = 0;
    *puVar5 = 0;
    FUN_007eaaf0(param_1,param_2,param_3,param_4,&local_58);
    if ((local_58 & 1) != 0) {
      operator_delete(local_48);
    }
    if ((local_70 & 1) != 0) {
      operator_delete(local_60);
    }
    if ((local_88 & 1) != 0) {
      operator_delete(local_78);
    }
    if ((local_a0 & 1) != 0) {
      operator_delete(local_90);
    }
    if ((local_b8 & 1) != 0) {
      operator_delete(local_a8);
    }
    if ((local_d0[0] & 1) != 0) {
      operator_delete(local_c0);
    }
    bVar4 = *(byte *)(param_1 + 0xb0);
  }
  if ((bVar4 & 1) == 0) {
    if (bVar4 >> 1 == 0) {
      return;
    }
  }
  else if (*(long *)(param_1 + 0xb8) == 0) {
    return;
  }
  std::operator+("\"",param_5);
  puVar5 = (ulong *)std::string::append((char *)local_d0);
  local_b8 = *puVar5;
  local_b0 = puVar5[1];
  local_a8 = (void *)puVar5[2];
  puVar5[1] = 0;
  puVar5[2] = 0;
  *puVar5 = 0;
  uVar2 = *(ulong *)(param_1 + 0xc0);
  if ((*(byte *)(param_1 + 0xb0) & 1) == 0) {
    uVar2 = param_1 + 0xb1;
  }
  puVar5 = (ulong *)std::string::append((char *)&local_b8,uVar2);
  local_a0 = *puVar5;
  local_98 = puVar5[1];
  local_90 = (void *)puVar5[2];
  puVar5[1] = 0;
  puVar5[2] = 0;
  *puVar5 = 0;
  puVar5 = (ulong *)std::string::append((char *)&local_a0);
  local_88 = *puVar5;
  local_80 = puVar5[1];
  local_78 = (void *)puVar5[2];
  puVar5[1] = 0;
  puVar5[2] = 0;
  *puVar5 = 0;
  psVar3 = *(string **)(param_5 + 0x10);
  if (((byte)*param_5 & 1) == 0) {
    psVar3 = param_5 + 1;
  }
  puVar5 = (ulong *)std::string::append((char *)&local_88,(ulong)psVar3);
  local_70 = *puVar5;
  local_68 = puVar5[1];
  local_60 = (void *)puVar5[2];
  puVar5[1] = 0;
  puVar5[2] = 0;
  *puVar5 = 0;
  puVar5 = (ulong *)std::string::append((char *)&local_70);
  local_58 = *puVar5;
  local_50 = puVar5[1];
  local_48 = (void *)puVar5[2];
  puVar5[1] = 0;
  puVar5[2] = 0;
  *puVar5 = 0;
  FUN_007eaaf0(param_1,param_2,param_3,param_4,&local_58);
  if ((local_58 & 1) != 0) {
    operator_delete(local_48);
  }
  if ((local_70 & 1) != 0) {
    operator_delete(local_60);
  }
  if ((local_88 & 1) != 0) {
    operator_delete(local_78);
  }
  if ((local_a0 & 1) != 0) {
    operator_delete(local_90);
  }
  if ((local_b8 & 1) != 0) {
    operator_delete(local_a8);
  }
  if ((local_d0[0] & 1) == 0) {
    return;
  }
LAB_007eb134:
  operator_delete(local_c0);
  return;
}


