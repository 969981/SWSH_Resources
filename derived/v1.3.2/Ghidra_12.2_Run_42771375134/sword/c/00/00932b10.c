/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00932b10; name: FUN_00932b10
 */


undefined8 FUN_00932b10(long param_1,uint param_2,byte param_3)

{
  long lVar1;
  uint uVar2;
  int *piVar3;
  long lVar4;
  int iVar5;
  byte bVar6;
  undefined8 uVar7;
  long lVar8;
  uint uVar9;
  ulong uVar10;
  undefined4 *puVar11;
  uint *puVar12;
  ulong uVar13;
  
  if (9 < (int)param_2) {
    return 0;
  }
  lVar1 = param_1 + (ulong)param_2 * 4;
  if (*(int *)(lVar1 + 0x180) == 0) {
    return 0;
  }
  uVar13 = (ulong)param_2;
  lVar4 = param_1 + uVar13 * 4;
  uVar9 = *(uint *)(lVar4 + 0x158);
  if (uVar9 == 0) {
    return 0;
  }
  uVar10 = 0;
  piVar3 = (int *)(lVar4 + 0x158);
  while (*(uint *)(param_1 + uVar13 * 0x14 + uVar10 * 4 + 0x90) != (uint)param_3) {
    uVar2 = (int)uVar10 + 1;
    uVar10 = (ulong)uVar2;
    if (uVar9 <= uVar2) {
      return 0;
    }
  }
  uVar10 = 0;
  puVar11 = (undefined4 *)(param_1 + uVar13 * 0x14 + 0x94);
  while (puVar12 = (uint *)(param_1 + uVar13 * 0x14 + (uVar10 & 0xffffffff) * 4 + 0x90),
        *puVar12 != (uint)param_3) {
    uVar10 = uVar10 + 1;
    puVar11 = puVar11 + 1;
    if (uVar9 <= (uint)uVar10) {
      return 0;
    }
  }
  uVar9 = (uint)uVar10;
  if (uVar9 < 4) {
    if ((uVar10 & 1) != 0) {
      uVar10 = uVar10 + 1;
      puVar11[-1] = *puVar11;
    }
    if (uVar9 != 3) {
      lVar8 = uVar10 * 4 + 0x90;
      do {
        puVar11 = (undefined4 *)(param_1 + uVar13 * 0x14 + lVar8);
        lVar8 = lVar8 + 8;
        *puVar11 = puVar11[1];
        puVar11[1] = puVar11[2];
      } while (lVar8 != 0xa0);
    }
    puVar12 = (uint *)(param_1 + uVar13 * 0x14 + 0xa0);
  }
  *puVar12 = 0x1f;
  iVar5 = *piVar3;
  *piVar3 = iVar5 + -1;
  if (iVar5 + -1 == 0) {
    uVar7 = FUN_008ed090();
    lVar8 = param_1 + uVar13 * 0x14;
    *(undefined8 *)(param_1 + uVar13 * 8 + 0x18) = uVar7;
    *(undefined4 *)(lVar4 + 0x68) = 0;
    *piVar3 = 0;
    *(undefined4 *)(lVar1 + 0x180) = 0;
    *(undefined8 *)(lVar8 + 0x90) = 0x1f0000001f;
    *(undefined8 *)(lVar8 + 0x98) = 0x1f0000001f;
    *(undefined4 *)(lVar8 + 0xa0) = 0x1f;
    return 1;
  }
  lVar1 = param_1 + uVar13 * 8 + 0x18;
  bVar6 = FUN_008ed1f0(lVar1);
  if (bVar6 == param_3) {
    FUN_008ed220(lVar1,*(undefined4 *)(param_1 + uVar13 * 0x14 + 0x90));
    return 0;
  }
  return 0;
}


