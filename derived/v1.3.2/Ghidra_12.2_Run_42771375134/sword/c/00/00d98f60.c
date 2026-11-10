/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00d98f60; name: FUN_00d98f60
 */


ulong FUN_00d98f60(undefined8 param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  byte bVar2;
  int iVar3;
  long lVar4;
  long *plVar5;
  byte *pbVar6;
  long lVar7;
  ulong uVar8;
  long local_258 [12];
  undefined4 local_1f8;
  long local_1f0;
  undefined8 local_1e8;
  undefined8 local_1e0;
  undefined8 local_1d8;
  undefined8 local_1d0;
  undefined8 local_1c8;
  undefined8 local_1c0;
  undefined8 local_1b8;
  undefined8 local_1b0;
  undefined8 local_1a8;
  undefined8 local_1a0;
  undefined8 local_198;
  undefined4 local_190;
  long local_188;
  undefined8 local_180;
  undefined8 local_178;
  undefined8 local_170;
  undefined8 local_168;
  undefined8 local_160;
  undefined8 local_158;
  undefined8 local_150;
  undefined8 local_148;
  undefined8 local_140;
  undefined8 local_138;
  undefined8 local_130;
  undefined4 local_128;
  undefined1 auStack_120 [8];
  char *local_118;
  long local_108;
  byte local_100 [104];
  long local_98;
  undefined8 local_90;
  undefined8 local_88;
  undefined8 local_80;
  undefined8 local_78;
  undefined8 local_70;
  undefined8 local_68;
  undefined8 local_60;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 local_48;
  undefined8 local_40;
  undefined4 local_38;
  undefined8 local_28;
  
  lVar7 = *(long *)(*(long *)PTR_DAT_02710848 + 0x90);
  local_28 = param_2;
  if (lVar7 != 0) {
    (**(code **)(*(long *)(lVar7 + 0x48) + 0x10))();
  }
  if (*(long *)(lVar7 + 0x688) == 0) {
    if (((*PTR_DAT_02715558 & 1) == 0) &&
       (iVar3 = __cxa_guard_acquire(PTR_DAT_02715558), iVar3 != 0)) {
      lVar4 = FUN_006e5e60();
      *(long *)PTR_DAT_02715560 = lVar4;
      if (lVar4 != 0) {
        (**(code **)(*(long *)(lVar4 + 0x48) + 0x10))();
      }
      FUN_001001c0(PTR_LAB_02715568,PTR_DAT_02715560,&PTR_LOOP_025db000);
      __cxa_guard_release(PTR_DAT_02715558);
    }
    local_98 = *(long *)PTR_DAT_02715560;
    if (local_98 != 0) {
      (**(code **)(*(long *)(local_98 + 0x48) + 0x10))();
    }
  }
  else {
    FUN_006e7120(&local_98,*(long *)(lVar7 + 0x688),&local_28);
  }
  FUN_006cf0c0(auStack_120,&local_98);
  if (local_98 != 0) {
    (**(code **)(*(long *)(local_98 + 0x48) + 0x18))();
    local_98 = 0;
  }
  (**(code **)(*(long *)(lVar7 + 0x48) + 0x18))((long *)(lVar7 + 0x48));
  local_128 = 0;
  local_180 = 0;
  local_188 = 0x62;
  local_138 = 0;
  local_130 = 0;
  local_148 = 0;
  local_140 = 0;
  local_158 = 0;
  local_150 = 0;
  local_168 = 0;
  local_160 = 0;
  local_178 = 0;
  local_170 = 0;
  if (*local_118 == '\0') {
    lVar7 = FUN_006e5e60();
    if (lVar7 != 0) {
      (**(code **)(*(long *)(lVar7 + 0x48) + 0x10))();
    }
  }
  else {
    FUN_006cf520(&local_98,*(undefined8 *)PTR_DAT_02710440);
    lVar7 = local_98;
  }
  puVar1 = (undefined8 *)PTR_PTR_02710928;
  if (lVar7 != 0) {
    puVar1 = (undefined8 *)(lVar7 + 0x60);
  }
  local_1f8 = 0;
  local_258[10] = 0;
  local_258[0xb] = 0;
  local_258[8] = 0;
  local_258[9] = 0;
  local_258[6] = 0;
  local_258[7] = 0;
  local_258[4] = 0;
  local_258[5] = 0;
  local_258[2] = 0;
  local_258[3] = 0;
  local_258[0] = 0;
  local_258[1] = 0;
  snprintf((char *)local_258,100,"%s",*puVar1);
  local_100[0x60] = 0;
  local_100[0x61] = 0;
  local_100[0x62] = 0;
  local_100[99] = 0;
  local_100[0x50] = 0;
  local_100[0x51] = 0;
  local_100[0x52] = 0;
  local_100[0x53] = 0;
  local_100[0x54] = 0;
  local_100[0x55] = 0;
  local_100[0x56] = 0;
  local_100[0x57] = 0;
  local_100[0x58] = 0;
  local_100[0x59] = 0;
  local_100[0x5a] = 0;
  local_100[0x5b] = 0;
  local_100[0x5c] = 0;
  local_100[0x5d] = 0;
  local_100[0x5e] = 0;
  local_100[0x5f] = 0;
  local_100[0x40] = 0;
  local_100[0x41] = 0;
  local_100[0x42] = 0;
  local_100[0x43] = 0;
  local_100[0x44] = 0;
  local_100[0x45] = 0;
  local_100[0x46] = 0;
  local_100[0x47] = 0;
  local_100[0x48] = 0;
  local_100[0x49] = 0;
  local_100[0x4a] = 0;
  local_100[0x4b] = 0;
  local_100[0x4c] = 0;
  local_100[0x4d] = 0;
  local_100[0x4e] = 0;
  local_100[0x4f] = 0;
  local_100[0x30] = 0;
  local_100[0x31] = 0;
  local_100[0x32] = 0;
  local_100[0x33] = 0;
  local_100[0x34] = 0;
  local_100[0x35] = 0;
  local_100[0x36] = 0;
  local_100[0x37] = 0;
  local_100[0x38] = 0;
  local_100[0x39] = 0;
  local_100[0x3a] = 0;
  local_100[0x3b] = 0;
  local_100[0x3c] = 0;
  local_100[0x3d] = 0;
  local_100[0x3e] = 0;
  local_100[0x3f] = 0;
  local_100[0x20] = 0;
  local_100[0x21] = 0;
  local_100[0x22] = 0;
  local_100[0x23] = 0;
  local_100[0x24] = 0;
  local_100[0x25] = 0;
  local_100[0x26] = 0;
  local_100[0x27] = 0;
  local_100[0x28] = 0;
  local_100[0x29] = 0;
  local_100[0x2a] = 0;
  local_100[0x2b] = 0;
  local_100[0x2c] = 0;
  local_100[0x2d] = 0;
  local_100[0x2e] = 0;
  local_100[0x2f] = 0;
  local_100[0x10] = 0;
  local_100[0x11] = 0;
  local_100[0x12] = 0;
  local_100[0x13] = 0;
  local_100[0x14] = 0;
  local_100[0x15] = 0;
  local_100[0x16] = 0;
  local_100[0x17] = 0;
  local_100[0x18] = 0;
  local_100[0x19] = 0;
  local_100[0x1a] = 0;
  local_100[0x1b] = 0;
  local_100[0x1c] = 0;
  local_100[0x1d] = 0;
  local_100[0x1e] = 0;
  local_100[0x1f] = 0;
  local_100[0] = 0;
  local_100[1] = 0;
  local_100[2] = 0;
  local_100[3] = 0;
  local_100[4] = 0;
  local_100[5] = 0;
  local_100[6] = 0;
  local_100[7] = 0;
  local_100[8] = 0;
  local_100[9] = 0;
  local_100[10] = 0;
  local_100[0xb] = 0;
  local_100[0xc] = 0;
  local_100[0xd] = 0;
  local_100[0xe] = 0;
  local_100[0xf] = 0;
  if ((char)local_188 == '\0') {
    if ((char)local_258[0] == '\0') {
      local_190 = 0;
      local_1a0 = 0;
      local_198 = 0;
      local_1b0 = 0;
      local_1a8 = 0;
      local_1c0 = 0;
      local_1b8 = 0;
      local_1d0 = 0;
      local_1c8 = 0;
      local_1e0 = 0;
      local_1d8 = 0;
      local_1f0 = 0;
      local_1e8 = 0;
      goto LAB_00d991e4;
    }
    plVar5 = local_258;
LAB_00d99144:
    snprintf((char *)local_100,100,"%s",plVar5);
  }
  else {
    if ((char)local_258[0] == '\0') {
      plVar5 = &local_188;
      goto LAB_00d99144;
    }
    snprintf((char *)local_100,100,"%s_%s",(char *)&local_188,(char *)local_258);
  }
  local_38 = 0;
  local_48 = 0;
  local_40 = 0;
  local_58 = 0;
  local_50 = 0;
  local_68 = 0;
  local_60 = 0;
  local_78 = 0;
  local_70 = 0;
  local_88 = 0;
  local_80 = 0;
  local_98 = 0;
  local_90 = 0;
  snprintf((char *)&local_98,100,"%s",local_100);
  local_1f0 = local_98;
  local_1d0 = local_78;
  local_1d8 = local_80;
  local_1e0 = local_88;
  local_1e8 = local_90;
  local_1b0 = local_58;
  local_1b8 = local_60;
  local_1c0 = local_68;
  local_1c8 = local_70;
  local_190 = local_38;
  local_198 = local_40;
  local_1a0 = local_48;
  local_1a8 = local_50;
LAB_00d991e4:
  local_188 = local_1f0;
  local_168 = local_1d0;
  local_170 = local_1d8;
  local_178 = local_1e0;
  local_180 = local_1e8;
  local_148 = local_1b0;
  local_150 = local_1b8;
  local_158 = local_1c0;
  local_160 = local_1c8;
  local_128 = local_190;
  local_130 = local_198;
  local_138 = local_1a0;
  local_140 = local_1a8;
  if (lVar7 != 0) {
    (**(code **)(*(long *)(lVar7 + 0x48) + 0x18))((long *)(lVar7 + 0x48));
  }
  uVar8 = 0xcbf29ce484222645;
  local_100[0x60] = 0;
  local_100[0x61] = 0;
  local_100[0x62] = 0;
  local_100[99] = 0;
  local_100[0x50] = 0;
  local_100[0x51] = 0;
  local_100[0x52] = 0;
  local_100[0x53] = 0;
  local_100[0x54] = 0;
  local_100[0x55] = 0;
  local_100[0x56] = 0;
  local_100[0x57] = 0;
  local_100[0x58] = 0;
  local_100[0x59] = 0;
  local_100[0x5a] = 0;
  local_100[0x5b] = 0;
  local_100[0x5c] = 0;
  local_100[0x5d] = 0;
  local_100[0x5e] = 0;
  local_100[0x5f] = 0;
  local_100[0x40] = 0;
  local_100[0x41] = 0;
  local_100[0x42] = 0;
  local_100[0x43] = 0;
  local_100[0x44] = 0;
  local_100[0x45] = 0;
  local_100[0x46] = 0;
  local_100[0x47] = 0;
  local_100[0x48] = 0;
  local_100[0x49] = 0;
  local_100[0x4a] = 0;
  local_100[0x4b] = 0;
  local_100[0x4c] = 0;
  local_100[0x4d] = 0;
  local_100[0x4e] = 0;
  local_100[0x4f] = 0;
  local_100[0x30] = 0;
  local_100[0x31] = 0;
  local_100[0x32] = 0;
  local_100[0x33] = 0;
  local_100[0x34] = 0;
  local_100[0x35] = 0;
  local_100[0x36] = 0;
  local_100[0x37] = 0;
  local_100[0x38] = 0;
  local_100[0x39] = 0;
  local_100[0x3a] = 0;
  local_100[0x3b] = 0;
  local_100[0x3c] = 0;
  local_100[0x3d] = 0;
  local_100[0x3e] = 0;
  local_100[0x3f] = 0;
  local_100[0x20] = 0;
  local_100[0x21] = 0;
  local_100[0x22] = 0;
  local_100[0x23] = 0;
  local_100[0x24] = 0;
  local_100[0x25] = 0;
  local_100[0x26] = 0;
  local_100[0x27] = 0;
  local_100[0x28] = 0;
  local_100[0x29] = 0;
  local_100[0x2a] = 0;
  local_100[0x2b] = 0;
  local_100[0x2c] = 0;
  local_100[0x2d] = 0;
  local_100[0x2e] = 0;
  local_100[0x2f] = 0;
  local_100[0x10] = 0;
  local_100[0x11] = 0;
  local_100[0x12] = 0;
  local_100[0x13] = 0;
  local_100[0x14] = 0;
  local_100[0x15] = 0;
  local_100[0x16] = 0;
  local_100[0x17] = 0;
  local_100[0x18] = 0;
  local_100[0x19] = 0;
  local_100[0x1a] = 0;
  local_100[0x1b] = 0;
  local_100[0x1c] = 0;
  local_100[0x1d] = 0;
  local_100[0x1e] = 0;
  local_100[0x1f] = 0;
  local_100[0] = 0;
  local_100[1] = 0;
  local_100[2] = 0;
  local_100[3] = 0;
  local_100[4] = 0;
  local_100[5] = 0;
  local_100[6] = 0;
  local_100[7] = 0;
  local_100[8] = 0;
  local_100[9] = 0;
  local_100[10] = 0;
  local_100[0xb] = 0;
  local_100[0xc] = 0;
  local_100[0xd] = 0;
  local_100[0xe] = 0;
  local_100[0xf] = 0;
  if ((char)local_188 != '\0') {
    snprintf((char *)local_100,100,"pane_%s",(char *)&local_188);
    if (local_100[0] != 0) {
      pbVar6 = (byte *)((ulong)local_100 | 1);
      bVar2 = local_100[0];
      do {
        uVar8 = (uVar8 ^ bVar2) * 0x100000001b3;
        bVar2 = *pbVar6;
        pbVar6 = pbVar6 + 1;
      } while (bVar2 != 0);
    }
  }
  if (local_108 != 0) {
    (**(code **)(*(long *)(local_108 + 0x48) + 0x18))();
  }
  return uVar8;
}


