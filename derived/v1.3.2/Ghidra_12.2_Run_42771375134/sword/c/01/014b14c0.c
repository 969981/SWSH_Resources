/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 014b14c0; name: FUN_014b14c0
 */


undefined4 FUN_014b14c0(uint *param_1)

{
  ulong uVar1;
  uint uVar2;
  ulong uVar3;
  ulong *puVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined8 local_40;
  undefined8 uStack_38;
  undefined8 local_30;
  undefined8 uStack_28;
  undefined8 local_20;
  undefined8 uStack_18;
  undefined8 local_10;
  undefined8 uStack_8;
  
  local_10 = 0;
  uStack_8 = 0;
  local_20 = 0;
  uStack_18 = 0;
  local_30 = 0;
  uStack_28 = 0;
  local_40 = 0;
  uStack_38 = 0;
  local_50 = 0;
  uStack_48 = 0;
  local_60 = 0;
  uStack_58 = 0;
  uVar3 = (ulong)*param_1;
  if (*param_1 != 0) {
    uVar3 = 1;
    local_60 = 1;
  }
  if (param_1[1] != 0) {
    uVar5 = uVar3 & 1;
    uVar3 = (ulong)((int)uVar3 + 1);
    *(undefined4 *)((ulong)&local_60 | uVar5 << 2) = 2;
  }
  if (param_1[2] != 0) {
    *(undefined4 *)((long)&local_60 + uVar3 * 4) = 3;
    uVar3 = (ulong)((int)uVar3 + 1);
  }
  if (param_1[3] != 0) {
    *(undefined4 *)((long)&local_60 + uVar3 * 4) = 4;
    uVar3 = (ulong)((int)uVar3 + 1);
  }
  if (param_1[4] != 0) {
    *(undefined4 *)((long)&local_60 + uVar3 * 4) = 5;
    uVar3 = (ulong)((int)uVar3 + 1);
  }
  if (param_1[5] != 0) {
    *(undefined4 *)((long)&local_60 + uVar3 * 4) = 6;
    uVar3 = (ulong)((int)uVar3 + 1);
  }
  if (param_1[6] != 0) {
    *(undefined4 *)((long)&local_60 + uVar3 * 4) = 7;
    uVar3 = (ulong)((int)uVar3 + 1);
  }
  if (param_1[7] != 0) {
    *(undefined4 *)((long)&local_60 + uVar3 * 4) = 8;
    uVar3 = (ulong)((int)uVar3 + 1);
  }
  if (param_1[8] != 0) {
    *(undefined4 *)((long)&local_60 + uVar3 * 4) = 9;
    uVar3 = (ulong)((int)uVar3 + 1);
  }
  if (param_1[9] != 0) {
    *(undefined4 *)((long)&local_60 + uVar3 * 4) = 10;
    uVar3 = (ulong)((int)uVar3 + 1);
  }
  if (param_1[10] != 0) {
    *(undefined4 *)((long)&local_60 + uVar3 * 4) = 0xb;
    uVar3 = (ulong)((int)uVar3 + 1);
  }
  if (param_1[0xb] != 0) {
    *(undefined4 *)((long)&local_60 + uVar3 * 4) = 0xc;
    uVar3 = (ulong)((int)uVar3 + 1);
  }
  if (param_1[0xc] != 0) {
    *(undefined4 *)((long)&local_60 + uVar3 * 4) = 0xd;
    uVar3 = (ulong)((int)uVar3 + 1);
  }
  if (param_1[0xd] != 0) {
    *(undefined4 *)((long)&local_60 + uVar3 * 4) = 0xe;
    uVar3 = (ulong)((int)uVar3 + 1);
  }
  if (param_1[0xe] != 0) {
    *(undefined4 *)((long)&local_60 + uVar3 * 4) = 0xf;
    uVar3 = (ulong)((int)uVar3 + 1);
  }
  if (param_1[0xf] != 0) {
    *(undefined4 *)((long)&local_60 + uVar3 * 4) = 0x10;
    uVar3 = (ulong)((int)uVar3 + 1);
  }
  if (param_1[0x10] != 0) {
    *(undefined4 *)((long)&local_60 + uVar3 * 4) = 0x11;
    uVar3 = (ulong)((int)uVar3 + 1);
  }
  if (param_1[0x11] != 0) {
    *(undefined4 *)((long)&local_60 + uVar3 * 4) = 0x12;
    uVar3 = (ulong)((int)uVar3 + 1);
  }
  if (param_1[0x12] != 0) {
    *(undefined4 *)((long)&local_60 + uVar3 * 4) = 0x13;
    uVar3 = (ulong)((int)uVar3 + 1);
  }
  if (param_1[0x13] != 0) {
    *(undefined4 *)((long)&local_60 + uVar3 * 4) = 0x14;
    uVar3 = (ulong)((int)uVar3 + 1);
  }
  if (param_1[0x14] != 0) {
    *(undefined4 *)((long)&local_60 + uVar3 * 4) = 0x15;
    uVar3 = (ulong)((int)uVar3 + 1);
  }
  if (param_1[0x15] != 0) {
    *(undefined4 *)((long)&local_60 + uVar3 * 4) = 0x16;
    uVar3 = (ulong)((int)uVar3 + 1);
  }
  if (param_1[0x16] != 0) {
    *(undefined4 *)((long)&local_60 + uVar3 * 4) = 0x17;
    uVar3 = (ulong)((int)uVar3 + 1);
  }
  uVar2 = (uint)uVar3;
  if (param_1[0x17] != 0) {
    *(undefined4 *)((long)&local_60 + uVar3 * 4) = 0x18;
    uVar2 = uVar2 + 1;
  }
  puVar4 = *(ulong **)(*(long *)PTR_DAT_02710848 + 0x98);
  if (uVar2 == 0) {
    uVar5 = *puVar4;
    uVar3 = puVar4[1] + uVar5;
    uVar6 = puVar4[1] ^ uVar5;
    *puVar4 = uVar6 ^ (uVar5 >> 0x28 | uVar5 << 0x18) ^ uVar6 << 0x10;
    puVar4[1] = uVar6 >> 0x1b | uVar6 << 0x25;
  }
  else if (uVar2 == 1) {
    uVar3 = 0;
  }
  else {
    uVar5 = (0x20 - LZCOUNT(uVar2)) -
            (ulong)((0xffffffffU >> (ulong)(0x21U - (int)(0x20 - LZCOUNT(uVar2)) & 0x1f) & uVar2) ==
                   0);
    uVar3 = uVar5 >> 6;
    if ((uVar5 & 0x3f) != 0) {
      uVar3 = uVar3 + 1;
    }
    uVar6 = 0;
    if (uVar3 != 0) {
      uVar6 = uVar5 / uVar3;
    }
    uVar1 = 0;
    if (uVar3 <= uVar5) {
      uVar1 = 0xffffffffffffffff >> (-uVar6 & 0x3f);
    }
    uVar5 = *puVar4;
    uVar6 = puVar4[1];
    do {
      uVar7 = uVar5 ^ uVar6;
      uVar3 = uVar5 + uVar6;
      uVar6 = uVar7 >> 0x1b | uVar7 << 0x25;
      uVar5 = uVar7 ^ (uVar5 >> 0x28 | uVar5 << 0x18) ^ uVar7 << 0x10;
      uVar3 = uVar3 & uVar1;
    } while (uVar2 <= (uint)uVar3);
    *puVar4 = uVar5;
    puVar4[1] = uVar6;
  }
  return *(undefined4 *)
          ((long)&local_60 + (-(uVar3 >> 0x1f & 1) & 0xfffffffc00000000 | (uVar3 & 0xffffffff) << 2)
          );
}


