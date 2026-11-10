/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 012b79a0; name: FUN_012b79a0
 */


ulong FUN_012b79a0(long param_1)

{
  uint *puVar1;
  ulong uVar2;
  uint uVar3;
  ulong uVar4;
  int *piVar5;
  ulong uVar6;
  ulong *puVar7;
  ulong uVar8;
  ulong uVar9;
  long lVar10;
  
  uVar4 = FUN_0131acf0(*(undefined8 *)(param_1 + 0x60));
  if ((uVar4 & 1) == 0) {
    lVar10 = 0;
  }
  else {
    lVar10 = *(long *)(param_1 + 0x60);
  }
  FUN_0131acf0(lVar10);
  piVar5 = *(int **)(lVar10 + 0x130);
  if ((*(ushort *)((long)piVar5 - (long)*piVar5) < 5) ||
     (uVar4 = (ulong)((ushort *)((long)piVar5 - (long)*piVar5))[2], uVar4 == 0)) {
    piVar5 = (int *)0x0;
  }
  else {
    puVar1 = (uint *)((long)piVar5 + uVar4);
    piVar5 = (int *)((long)puVar1 + (ulong)*puVar1);
  }
  puVar1 = (uint *)((long)piVar5 + (ulong)*(ushort *)((long)piVar5 + (4 - (long)*piVar5)));
  puVar1 = (uint *)((long)puVar1 + (ulong)*puVar1);
  uVar3 = *puVar1;
  if (uVar3 == 0) {
    uVar4 = FUN_012b7af0(param_1,0);
    return uVar4;
  }
  if (uVar3 == 1) {
    uVar6 = 0;
  }
  else {
    uVar8 = (0x20 - LZCOUNT(uVar3)) -
            (ulong)((0xffffffffU >> (ulong)(0x21U - (int)(0x20 - LZCOUNT(uVar3)) & 0x1f) & uVar3) ==
                   0);
    uVar4 = uVar8 >> 6;
    if ((uVar8 & 0x3f) != 0) {
      uVar4 = uVar4 + 1;
    }
    uVar6 = 0;
    if (uVar4 != 0) {
      uVar6 = uVar8 / uVar4;
    }
    puVar7 = *(ulong **)(*(long *)PTR_DAT_02710848 + 0x98);
    uVar2 = 0;
    if (uVar4 <= uVar8) {
      uVar2 = 0xffffffffffffffff >> (-uVar6 & 0x3f);
    }
    uVar4 = *puVar7;
    uVar8 = puVar7[1];
    do {
      uVar9 = uVar4 ^ uVar8;
      uVar6 = uVar4 + uVar8;
      uVar8 = uVar9 >> 0x1b | uVar9 << 0x25;
      uVar4 = uVar9 ^ (uVar4 >> 0x28 | uVar4 << 0x18) ^ uVar9 << 0x10;
      uVar6 = uVar6 & uVar2;
    } while (uVar3 <= (uint)uVar6);
    uVar6 = uVar6 & 0xffffffff;
    *puVar7 = uVar4;
    puVar7[1] = uVar8;
  }
  return (ulong)*(uint *)(&DAT_01d4a670 + (long)(int)puVar1[uVar6 + 1] * 4);
}


