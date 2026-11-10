/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00e328a0; name: FUN_00e328a0
 */


undefined4 FUN_00e328a0(undefined8 param_1,ushort *param_2)

{
  uint uVar1;
  uint uVar2;
  undefined4 uVar3;
  ulong *puVar4;
  int iVar5;
  ulong uVar6;
  int iVar7;
  ulong uVar8;
  ulong uVar9;
  
  puVar4 = *(ulong **)(*(long *)PTR_DAT_02710848 + 0x98);
  uVar6 = *puVar4;
  uVar8 = puVar4[1];
  do {
    uVar9 = uVar6 ^ uVar8;
    iVar7 = (int)uVar8;
    iVar5 = (int)uVar6;
    uVar8 = uVar9 >> 0x1b | uVar9 << 0x25;
    uVar6 = uVar9 ^ (uVar6 >> 0x28 | uVar6 << 0x18) ^ uVar9 << 0x10;
    uVar2 = iVar5 + iVar7 & 0x7f;
  } while (99 < uVar2);
  *puVar4 = uVar6;
  puVar4[1] = uVar8;
  if (uVar2 < *param_2) {
    return 0;
  }
  uVar1 = (uint)*param_2 + (uint)param_2[3];
  if (uVar2 < uVar1) {
    return 1;
  }
  uVar1 = uVar1 + param_2[6];
  if (uVar2 < uVar1) {
    return 2;
  }
  uVar1 = uVar1 + param_2[9];
  if (uVar2 < uVar1) {
    return 3;
  }
  uVar1 = uVar1 + param_2[0xc];
  if (uVar2 < uVar1) {
    return 4;
  }
  uVar1 = uVar1 + param_2[0xf];
  if (uVar2 < uVar1) {
    return 5;
  }
  uVar1 = uVar1 + param_2[0x12];
  if (uVar2 < uVar1) {
    return 6;
  }
  uVar1 = uVar1 + param_2[0x15];
  if (uVar2 < uVar1) {
    return 7;
  }
  uVar1 = uVar1 + param_2[0x18];
  if (uVar2 < uVar1) {
    return 8;
  }
  uVar3 = 9;
  if (uVar1 + param_2[0x1b] <= uVar2) {
    uVar3 = 0xffffffff;
  }
  return uVar3;
}


