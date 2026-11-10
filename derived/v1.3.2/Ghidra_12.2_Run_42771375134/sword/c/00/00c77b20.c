/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00c77b20; name: FUN_00c77b20
 */


undefined4 FUN_00c77b20(long param_1)

{
  uint uVar1;
  uint uVar2;
  undefined4 uVar3;
  long lVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  uint uVar8;
  
  if (*(float *)(param_1 + 0x1a8) < 12.0) {
    if (*(float *)(param_1 + 0x1a8) < 3.0) {
      return 0;
    }
    if ((int)(*(float *)PTR_DAT_0271c330 * 9.0) != 0) {
      lVar4 = *(long *)(param_1 + 8);
      uVar1 = (int)(*(float *)PTR_DAT_0271c330 * 9.0) + 1;
      if (uVar1 == 0) {
        uVar6 = *(ulong *)(lVar4 + 0x10);
        uVar5 = *(ulong *)(lVar4 + 8) ^ *(ulong *)(lVar4 + 8) << 0x17;
        uVar5 = uVar5 ^ uVar6 ^ uVar6 >> 5 ^ uVar5 >> 0x12;
        *(ulong *)(lVar4 + 8) = uVar6;
        *(ulong *)(lVar4 + 0x10) = uVar5;
        uVar8 = (int)uVar5 + (int)uVar6;
      }
      else {
        uVar5 = (0x20 - LZCOUNT(uVar1)) -
                (ulong)((0xffffffffU >> (ulong)(0x21U - (int)(0x20 - LZCOUNT(uVar1)) & 0x1f) & uVar1
                        ) == 0);
        uVar6 = uVar5 >> 6;
        if ((uVar5 & 0x3f) != 0) {
          uVar6 = uVar6 + 1;
        }
        uVar7 = 0;
        if (uVar6 != 0) {
          uVar7 = uVar5 / uVar6;
        }
        uVar2 = 0;
        if (uVar6 <= uVar5) {
          uVar2 = (uint)(0xffffffffffffffff >> (-uVar7 & 0x3f));
        }
        uVar6 = *(ulong *)(lVar4 + 8);
        uVar5 = *(ulong *)(lVar4 + 0x10);
        do {
          uVar7 = uVar5;
          uVar6 = uVar6 ^ uVar6 << 0x17;
          uVar5 = uVar7 ^ uVar7 >> 5 ^ uVar6 ^ uVar6 >> 0x12;
          uVar8 = (int)uVar5 + (int)uVar7 & uVar2;
          uVar6 = uVar7;
        } while (uVar1 <= uVar8);
        *(ulong *)(lVar4 + 8) = uVar7;
        *(ulong *)(lVar4 + 0x10) = uVar5;
      }
      if (uVar8 != 0) {
        return 0;
      }
    }
  }
  uVar3 = 1;
  if (*(int *)(param_1 + 0x19c) == 1) {
    lVar4 = *(long *)(param_1 + 8);
    uVar6 = *(ulong *)(lVar4 + 0x10);
    uVar5 = *(ulong *)(lVar4 + 8) ^ *(ulong *)(lVar4 + 8) << 0x17;
    uVar5 = uVar6 ^ uVar6 >> 5 ^ uVar5 ^ uVar5 >> 0x12;
    *(ulong *)(lVar4 + 8) = uVar6;
    *(ulong *)(lVar4 + 0x10) = uVar5;
    uVar3 = 1;
    if (((int)uVar5 + (int)uVar6 & 1U) == 0) {
      uVar3 = 2;
    }
  }
  return uVar3;
}


