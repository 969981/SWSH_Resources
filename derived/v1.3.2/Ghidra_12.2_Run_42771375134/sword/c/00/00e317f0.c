/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00e317f0; name: FUN_00e317f0
 */


uint FUN_00e317f0(undefined8 param_1,undefined4 param_2,undefined4 param_3,long param_4)

{
  uint uVar1;
  uint uVar2;
  ushort *puVar3;
  ulong *puVar4;
  int iVar5;
  ulong uVar6;
  int iVar7;
  ulong uVar8;
  ulong uVar9;
  ushort local_38;
  undefined2 local_36;
  undefined2 local_34;
  
  FUN_008649f0(param_2,param_3);
  uVar1 = FUN_00864a10(0x11);
  local_38 = (ushort)uVar1;
  uVar2 = FUN_00864a10(0x12);
  local_36 = (undefined2)uVar2;
  local_34 = FUN_00864a10(0x13);
  if ((uVar1 & 0xffff) != (uVar2 & 0xffff)) {
    puVar4 = *(ulong **)(*(long *)PTR_DAT_02710848 + 0x98);
    uVar6 = *puVar4;
    uVar8 = puVar4[1];
    do {
      uVar9 = uVar6 ^ uVar8;
      iVar7 = (int)uVar8;
      iVar5 = (int)uVar6;
      uVar8 = uVar9 >> 0x1b | uVar9 << 0x25;
      uVar6 = uVar9 ^ (uVar6 >> 0x28 | uVar6 << 0x18) ^ uVar9 << 0x10;
      uVar1 = iVar5 + iVar7 & 0x7f;
    } while (99 < uVar1);
    *puVar4 = uVar6;
    puVar4[1] = uVar8;
    uVar6 = (ulong)(*(uint *)(param_4 + 4) >> 2) & 1;
    uVar6 = uVar6 | uVar6 << 1;
    if (uVar1 < (byte)(&DAT_02160b5c)[uVar6]) {
      puVar3 = &local_38;
    }
    else {
      uVar2 = (uint)(byte)(&DAT_02160b5c)[uVar6] + (uint)(byte)(&DAT_02160b5d)[uVar6];
      puVar3 = (ushort *)((ulong)&local_38 | 2);
      if ((uVar2 <= uVar1) &&
         (puVar3 = (ushort *)((ulong)&local_38 | 4), uVar2 + (byte)(&DAT_02160b5e)[uVar6] <= uVar1))
      {
        return 0;
      }
    }
    uVar1 = (uint)*puVar3;
  }
  return uVar1;
}


