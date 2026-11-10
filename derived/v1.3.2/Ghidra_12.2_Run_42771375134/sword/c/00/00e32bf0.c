/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00e32bf0; name: FUN_00e32bf0
 */


int FUN_00e32bf0(undefined8 param_1,int param_2,int param_3,long param_4)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  ulong *puVar5;
  uint uVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  
  if (param_3 - param_2 == 0) {
    uVar6 = 0;
  }
  else {
    puVar5 = *(ulong **)(*(long *)PTR_DAT_02710848 + 0x98);
    uVar1 = (param_3 - param_2) + 1;
    if (uVar1 == 0) {
      uVar8 = *puVar5;
      uVar6 = (int)puVar5[1] + (int)uVar8;
      uVar7 = puVar5[1] ^ uVar8;
      *puVar5 = uVar7 ^ (uVar8 >> 0x28 | uVar8 << 0x18) ^ uVar7 << 0x10;
      puVar5[1] = uVar7 >> 0x1b | uVar7 << 0x25;
    }
    else {
      uVar7 = (0x20 - LZCOUNT(uVar1)) -
              (ulong)((0xffffffffU >> (ulong)(0x21U - (int)(0x20 - LZCOUNT(uVar1)) & 0x1f) & uVar1)
                     == 0);
      uVar8 = uVar7 >> 6;
      if ((uVar7 & 0x3f) != 0) {
        uVar8 = uVar8 + 1;
      }
      uVar9 = 0;
      if (uVar8 != 0) {
        uVar9 = uVar7 / uVar8;
      }
      uVar3 = 0;
      if (uVar8 <= uVar7) {
        uVar3 = (uint)(0xffffffffffffffff >> (-uVar9 & 0x3f));
      }
      uVar8 = *puVar5;
      uVar7 = puVar5[1];
      do {
        uVar9 = uVar8 ^ uVar7;
        iVar2 = (int)uVar8;
        iVar4 = (int)uVar7;
        uVar7 = uVar9 >> 0x1b | uVar9 << 0x25;
        uVar8 = uVar9 ^ (uVar8 >> 0x28 | uVar8 << 0x18) ^ uVar9 << 0x10;
        uVar6 = iVar2 + iVar4 & uVar3;
      } while (uVar1 <= uVar6);
      *puVar5 = uVar8;
      puVar5[1] = uVar7;
    }
  }
  iVar2 = uVar6 + param_2;
  if ((*(byte *)(param_4 + 4) & 0x10) != 0) {
    iVar2 = param_3;
  }
  return iVar2;
}


