/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00867140; name: FUN_00867140
 */


ulong FUN_00867140(ulong *param_1,uint param_2)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  
  if (param_1 == (ulong *)0x0) {
    uVar6 = FUN_008660d0(param_2);
    return uVar6;
  }
  if (param_2 == 1) {
    return 0;
  }
  if (param_2 == 0) {
    uVar6 = *param_1;
    uVar5 = param_1[1];
    uVar7 = uVar5 ^ uVar6;
    *param_1 = uVar7 ^ (uVar6 >> 0x28 | uVar6 << 0x18) ^ uVar7 << 0x10;
    param_1[1] = uVar7 >> 0x1b | uVar7 << 0x25;
    return (ulong)(uint)((int)uVar5 + (int)uVar6);
  }
  uVar5 = (0x20 - LZCOUNT(param_2)) -
          (ulong)((0xffffffffU >> (ulong)(0x21U - (int)(0x20 - LZCOUNT(param_2)) & 0x1f) & param_2)
                 == 0);
  uVar6 = uVar5 >> 6;
  if ((uVar5 & 0x3f) != 0) {
    uVar6 = uVar6 + 1;
  }
  uVar7 = 0;
  if (uVar6 != 0) {
    uVar7 = uVar5 / uVar6;
  }
  uVar1 = 0;
  if (uVar6 <= uVar5) {
    uVar1 = (uint)(0xffffffffffffffff >> (-uVar7 & 0x3f));
  }
  uVar6 = *param_1;
  uVar5 = param_1[1];
  do {
    uVar7 = uVar6 ^ uVar5;
    iVar2 = (int)uVar6;
    iVar3 = (int)uVar5;
    uVar5 = uVar7 >> 0x1b | uVar7 << 0x25;
    uVar6 = uVar7 ^ (uVar6 >> 0x28 | uVar6 << 0x18) ^ uVar7 << 0x10;
    uVar4 = iVar2 + iVar3 & uVar1;
  } while (param_2 <= uVar4);
  *param_1 = uVar6;
  param_1[1] = uVar5;
  return (ulong)uVar4;
}


