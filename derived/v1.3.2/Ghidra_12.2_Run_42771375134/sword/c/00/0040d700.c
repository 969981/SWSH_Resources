/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0040d700; name: FUN_0040d700
 */


void FUN_0040d700(long param_1)

{
  uint5 *puVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  byte bVar5;
  int iVar6;
  int iVar7;
  float fVar8;
  ulong uVar9;
  int iVar10;
  float fVar11;
  
  puVar1 = (uint5 *)(param_1 + 0x26b);
  bVar5 = *(byte *)(param_1 + 0x26f);
  uVar2 = *(uint *)puVar1;
  uVar9 = (ulong)*puVar1;
  if (((uVar2 >> 0x16 & 1) != 0) || ((*(byte *)(*(long *)(param_1 + 0x1f8) + 0xc) >> 1 & 1) == 0)) {
    iVar3 = *(int *)(param_1 + 0x288);
    fVar8 = (float)NEON_ucvtf((uint)*(ushort *)PTR_DAT_02712ac0);
    fVar8 = *(float *)(param_1 + 0x214) * fVar8;
    fVar11 = 0.5;
    if (fVar8 <= 0.0) {
      fVar11 = -0.5;
    }
    iVar10 = (int)(fVar11 + fVar8);
    iVar7 = 0;
    if (iVar10 != 0) {
      iVar7 = iVar3 / iVar10;
    }
    iVar6 = iVar3 - iVar7 * iVar10;
    iVar4 = *(int *)(param_1 + 0x264);
    iVar7 = iVar10;
    if (iVar10 < 0) {
      iVar7 = iVar10 + 1;
    }
    if (iVar7 >> 1 < iVar6 || iVar4 < iVar6) {
      uVar9 = (ulong)uVar2 & 0xfffffffffe3fffff | (ulong)bVar5 << 0x20 | 0x400000;
      *(int *)(param_1 + 0x288) = (iVar10 - iVar6) + iVar3;
      *(int *)(param_1 + 0x264) = iVar4 + (iVar10 - iVar6);
      *(uint *)puVar1 = (uint)uVar9;
      *(byte *)(param_1 + 0x26f) = bVar5;
    }
    else if (0 < iVar6) {
      *(int *)(param_1 + 0x288) = iVar3 - iVar6;
      *(int *)(param_1 + 0x264) = iVar4 - iVar6;
      uVar9 = (ulong)uVar2 & 0xfffffffffe3fffff | (ulong)bVar5 << 0x20 | 0x400000;
      *(uint *)puVar1 = (uint)uVar9;
      *(byte *)(param_1 + 0x26f) = bVar5;
    }
  }
  *(char *)(param_1 + 0x26f) = (char)(uVar9 >> 0x20);
  *(uint *)puVar1 = (uint)uVar9 | 0x20000000;
  return;
}


