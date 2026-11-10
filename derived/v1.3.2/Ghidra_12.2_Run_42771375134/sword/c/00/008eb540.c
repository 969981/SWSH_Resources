/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 008eb540; name: FUN_008eb540
 */


int FUN_008eb540(long param_1)

{
  uint uVar1;
  ulong uVar2;
  int iVar3;
  ulong uVar4;
  int iVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  
  if (*(char *)(param_1 + 0x61) != '\0') {
    uVar4 = *(ulong *)(param_1 + 0x68);
    uVar6 = *(ulong *)(param_1 + 0x70);
    *(undefined1 *)(param_1 + 0x61) = 0;
    do {
      uVar7 = uVar4 ^ uVar6;
      iVar5 = (int)uVar6;
      iVar3 = (int)uVar4;
      uVar6 = uVar7 >> 0x1b | uVar7 << 0x25;
      uVar4 = uVar7 ^ (uVar4 >> 0x28 | uVar4 << 0x18) ^ uVar7 << 0x10;
      uVar1 = iVar3 + iVar5 & 0x7f;
    } while (100 < uVar1);
    *(ulong *)(param_1 + 0x68) = uVar4;
    *(ulong *)(param_1 + 0x70) = uVar6;
    if (uVar1 < 0x15) {
      return 0x173;
    }
  }
  uVar1 = *(uint *)(param_1 + 0x5c);
  if (uVar1 == 0) {
    return 0xa5;
  }
  iVar3 = uVar1 - 1;
  *(int *)(param_1 + 0x5c) = iVar3;
  if (iVar3 == 0) {
    uVar4 = 0;
  }
  else {
    uVar6 = (0x20 - LZCOUNT(uVar1)) -
            (ulong)((0xffffffffU >> (ulong)(0x21U - (int)(0x20 - LZCOUNT(uVar1)) & 0x1f) & uVar1) ==
                   0);
    uVar4 = uVar6 >> 6;
    if ((uVar6 & 0x3f) != 0) {
      uVar4 = uVar4 + 1;
    }
    uVar7 = 0;
    if (uVar4 != 0) {
      uVar7 = uVar6 / uVar4;
    }
    uVar2 = 0;
    if (uVar4 <= uVar6) {
      uVar2 = 0xffffffffffffffff >> (-uVar7 & 0x3f);
    }
    uVar6 = *(ulong *)(param_1 + 0x68);
    uVar7 = *(ulong *)(param_1 + 0x70);
    do {
      uVar8 = uVar6 ^ uVar7;
      uVar4 = uVar6 + uVar7;
      uVar7 = uVar8 >> 0x1b | uVar8 << 0x25;
      uVar6 = uVar8 ^ (uVar6 >> 0x28 | uVar6 << 0x18) ^ uVar8 << 0x10;
      uVar4 = uVar4 & uVar2;
    } while (uVar1 <= (uint)uVar4);
    uVar4 = uVar4 & 0xff;
    *(ulong *)(param_1 + 0x68) = uVar6;
    *(ulong *)(param_1 + 0x70) = uVar7;
  }
  iVar5 = *(int *)(param_1 + uVar4 * 4);
  *(undefined4 *)(param_1 + uVar4 * 4) = *(undefined4 *)(param_1 + (long)iVar3 * 4);
  *(undefined4 *)(param_1 + (long)*(int *)(param_1 + 0x5c) * 4) = 0;
  if ((iVar5 == 0x172) && (*(char *)(param_1 + 0x60) != '\0')) {
    *(undefined2 *)(param_1 + 0x60) = 0x100;
    iVar5 = 0x172;
  }
  return iVar5;
}


