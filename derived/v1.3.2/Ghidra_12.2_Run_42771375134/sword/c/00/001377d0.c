/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 001377d0; name: FUN_001377d0
 */


void FUN_001377d0(long param_1,uint param_2)

{
  uint *puVar1;
  ushort uVar2;
  uint uVar3;
  long lVar4;
  uint uVar5;
  long lVar6;
  uint uVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  ulong uVar10;
  
  lVar4 = *(long *)(param_1 + 0x80);
  puVar1 = (uint *)(lVar4 + (ulong)(param_2 & 0xffff) * 8);
  uVar7 = *puVar1;
  uVar10 = (ulong)uVar7;
  if ((puVar1[1] & 1) == 0) {
    *(undefined1 *)(param_1 + 0x119) = 1;
    uVar5 = *(uint *)(param_1 + 0xc0);
    *(undefined4 *)(param_1 + 0xc4) = 0;
    if (uVar7 < uVar5) {
      if (uVar5 != *(uint *)(param_1 + 0x94)) {
        uVar3 = uVar5 - 1;
        puVar9 = (undefined8 *)(*(long *)(param_1 + 0xa0) + (ulong)uVar3 * 0x18);
        puVar8 = (undefined8 *)(*(long *)(param_1 + 0xa0) + uVar10 * 0x18);
        lVar6 = *(long *)(param_1 + 0xb0);
        uVar2 = *(ushort *)(lVar6 + (ulong)uVar3 * 2);
        puVar8[2] = puVar9[2];
        puVar8[1] = puVar9[1];
        *puVar8 = *puVar9;
        *(ushort *)(lVar6 + uVar10 * 2) = uVar2;
        *(uint *)(lVar4 + (ulong)uVar2 * 8) = uVar7;
        uVar5 = *(uint *)(param_1 + 0xc0);
        uVar10 = (ulong)uVar3;
      }
      *(uint *)(param_1 + 0xc0) = uVar5 - 1;
    }
    lVar4 = *(long *)(param_1 + 0xb0);
    uVar7 = *(int *)(param_1 + 0x94) - 1;
    lVar6 = *(long *)(param_1 + 0xa0);
    *(uint *)(param_1 + 0x94) = uVar7;
  }
  else {
    *(undefined1 *)(param_1 + 0x118) = 1;
    if (*(uint *)(param_1 + 0xd0) <= uVar7 >> 5) {
      FUN_00136460(param_1 + 200,uVar10);
    }
    lVar4 = (ulong)(uVar7 >> 5) * 4;
    *(uint *)(*(long *)(param_1 + 200) + lVar4) =
         *(uint *)(*(long *)(param_1 + 200) + lVar4) | 1 << (ulong)(uVar7 & 0x1f);
    lVar4 = *(long *)(param_1 + 0xa8);
    lVar6 = *(long *)(param_1 + 0x98);
    uVar7 = *(int *)(param_1 + 0x8c) - 1;
    *(uint *)(param_1 + 0x8c) = uVar7;
  }
  puVar9 = (undefined8 *)(lVar6 + (ulong)uVar7 * 0x18);
  puVar8 = (undefined8 *)(lVar6 + uVar10 * 0x18);
  uVar2 = *(ushort *)(lVar4 + (ulong)uVar7 * 2);
  lVar6 = *(long *)(param_1 + 0x80);
  puVar8[2] = puVar9[2];
  puVar8[1] = puVar9[1];
  *puVar8 = *puVar9;
  *(ushort *)(lVar4 + uVar10 * 2) = uVar2;
  *(int *)(lVar6 + (ulong)uVar2 * 8) = (int)uVar10;
  *puVar1 = *(uint *)(param_1 + 0x78);
  puVar1[1] = 0xffffffff;
  *(uint *)(param_1 + 0x78) = param_2 & 0xffff;
  *(int *)(param_1 + 0x70) = *(int *)(param_1 + 0x70) + -1;
  return;
}


