/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00eb2e40; name: FUN_00eb2e40
 */


float FUN_00eb2e40(long param_1)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  ulong *puVar6;
  uint uVar7;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  
  iVar3 = *(int *)(param_1 + 0x91c);
  iVar4 = *(int *)(param_1 + 0x920) - iVar3;
  if (iVar4 == 0) {
    return (float)iVar3;
  }
  puVar6 = *(ulong **)(*(long *)PTR_DAT_02710848 + 0x98);
  uVar1 = iVar4 + 1;
  if (uVar1 == 0) {
    uVar9 = *puVar6;
    uVar8 = puVar6[1];
    uVar10 = uVar8 ^ uVar9;
    *puVar6 = uVar10 ^ (uVar9 >> 0x28 | uVar9 << 0x18) ^ uVar10 << 0x10;
    puVar6[1] = uVar10 >> 0x1b | uVar10 << 0x25;
    return (float)((int)uVar8 + (int)uVar9 + iVar3);
  }
  uVar8 = (0x20 - LZCOUNT(uVar1)) -
          (ulong)((0xffffffffU >> (ulong)(0x21U - (int)(0x20 - LZCOUNT(uVar1)) & 0x1f) & uVar1) == 0
                 );
  uVar9 = uVar8 >> 6;
  if ((uVar8 & 0x3f) != 0) {
    uVar9 = uVar9 + 1;
  }
  uVar10 = 0;
  if (uVar9 != 0) {
    uVar10 = uVar8 / uVar9;
  }
  uVar2 = 0;
  if (uVar9 <= uVar8) {
    uVar2 = (uint)(0xffffffffffffffff >> (-uVar10 & 0x3f));
  }
  uVar9 = *puVar6;
  uVar8 = puVar6[1];
  do {
    uVar10 = uVar9 ^ uVar8;
    iVar4 = (int)uVar9;
    iVar5 = (int)uVar8;
    uVar8 = uVar10 >> 0x1b | uVar10 << 0x25;
    uVar9 = uVar10 ^ (uVar9 >> 0x28 | uVar9 << 0x18) ^ uVar10 << 0x10;
    uVar7 = iVar4 + iVar5 & uVar2;
  } while (uVar1 <= uVar7);
  *puVar6 = uVar9;
  puVar6[1] = uVar8;
  return (float)(int)(uVar7 + iVar3);
}


