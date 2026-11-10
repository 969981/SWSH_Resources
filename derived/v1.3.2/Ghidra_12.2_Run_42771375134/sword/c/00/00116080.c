/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00116080; name: FUN_00116080
 */


void FUN_00116080(long param_1,int param_2)

{
  uint *puVar1;
  uint *puVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  long lVar6;
  long lVar7;
  
  lVar6 = **(long **)(param_1 + 0x240);
  uVar4 = param_2 << 1;
  uVar5 = *(uint *)(lVar6 + (ulong)uVar4 * 4) >> 6;
  if (uVar5 != 0x3ffffff) {
    puVar1 = (uint *)(*(long *)(param_1 + 0x18) + (ulong)uVar5 * 0x20);
    lVar7 = *(long *)(param_1 + 0x48);
    puVar2 = (uint *)(lVar7 + (ulong)uVar4 * 8);
    if (*puVar1 == uVar4) {
      uVar3 = *puVar2;
      *puVar1 = uVar3;
    }
    else {
      *(uint *)(lVar7 + (ulong)puVar2[1] * 8) = *puVar2;
      uVar3 = *puVar2;
    }
    if (uVar3 != 0xffffffff) {
      *(uint *)(lVar7 + (ulong)uVar3 * 8 + 4) = puVar2[1];
    }
    *puVar2 = 0xffffffff;
    puVar2[1] = 0xffffffff;
  }
  uVar4 = uVar4 | 1;
  uVar3 = *(uint *)(lVar6 + (ulong)uVar4 * 4) >> 6;
  if (uVar3 != 0x3ffffff && uVar5 != uVar3) {
    puVar1 = (uint *)(*(long *)(param_1 + 0x18) + (ulong)uVar3 * 0x20);
    lVar6 = *(long *)(param_1 + 0x48);
    puVar2 = (uint *)(lVar6 + (ulong)uVar4 * 8);
    if (*puVar1 == uVar4) {
      uVar4 = *puVar2;
      *puVar1 = uVar4;
    }
    else {
      *(uint *)(lVar6 + (ulong)puVar2[1] * 8) = *puVar2;
      uVar4 = *puVar2;
    }
    if (uVar4 != 0xffffffff) {
      *(uint *)(lVar6 + (ulong)uVar4 * 8 + 4) = puVar2[1];
    }
    *puVar2 = 0xffffffff;
    puVar2[1] = 0xffffffff;
  }
  return;
}


