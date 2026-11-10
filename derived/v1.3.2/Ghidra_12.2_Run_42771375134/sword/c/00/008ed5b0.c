/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 008ed5b0; name: FUN_008ed5b0
 */


ulong FUN_008ed5b0(long param_1,ulong param_2)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  
  if (param_2 == 1) {
    return 0;
  }
  if (param_2 == 0) {
    uVar3 = *(ulong *)(param_1 + 8);
    uVar2 = *(ulong *)(param_1 + 0x10);
    uVar4 = uVar2 ^ uVar3;
    *(ulong *)(param_1 + 8) = uVar4 ^ (uVar3 >> 0x28 | uVar3 << 0x18) ^ uVar4 << 0x10;
    *(ulong *)(param_1 + 0x10) = uVar4 >> 0x1b | uVar4 << 0x25;
    return uVar2 + uVar3;
  }
  uVar2 = (0x40 - LZCOUNT(param_2)) -
          (ulong)((0xffffffffffffffffU >> (0x41U - (0x40 - LZCOUNT(param_2)) & 0x3f) & param_2) == 0
                 );
  uVar3 = uVar2 >> 6;
  if ((uVar2 & 0x3f) != 0) {
    uVar3 = uVar3 + 1;
  }
  uVar4 = 0;
  if (uVar3 != 0) {
    uVar4 = uVar2 / uVar3;
  }
  uVar1 = 0;
  if (uVar3 <= uVar2) {
    uVar1 = 0xffffffffffffffff >> (-uVar4 & 0x3f);
  }
  uVar3 = *(ulong *)(param_1 + 8);
  uVar2 = *(ulong *)(param_1 + 0x10);
  do {
    uVar5 = uVar3 ^ uVar2;
    uVar4 = uVar3 + uVar2;
    uVar2 = uVar5 >> 0x1b | uVar5 << 0x25;
    uVar3 = uVar5 ^ (uVar3 >> 0x28 | uVar3 << 0x18) ^ uVar5 << 0x10;
    uVar4 = uVar4 & uVar1;
  } while (param_2 <= uVar4);
  *(ulong *)(param_1 + 8) = uVar3;
  *(ulong *)(param_1 + 0x10) = uVar2;
  return uVar4;
}


