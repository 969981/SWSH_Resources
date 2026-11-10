/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 003dda00; name: FUN_003dda00
 */


void FUN_003dda00(long param_1,long param_2)

{
  uint uVar1;
  byte bVar2;
  uint uVar3;
  long *plVar4;
  uint *puVar5;
  long lVar6;
  uint *puVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  
  bVar2 = *(byte *)(param_2 + 0x24);
  lVar6 = param_1 + (ulong)bVar2 * 0x10;
  uVar1 = *(uint *)(param_2 + 0x18);
  plVar4 = (long *)(lVar6 + 0x38);
  puVar5 = (uint *)(lVar6 + 0x40);
  uVar3 = *puVar5 - 1;
  *puVar5 = uVar3;
  *(undefined8 *)(*plVar4 + (ulong)uVar1 * 8) = *(undefined8 *)(*plVar4 + (ulong)uVar3 * 8);
  *(undefined4 *)(param_2 + 0x18) = 0xffffffff;
  if (uVar1 < uVar3) {
    *(uint *)(*(long *)(*plVar4 + (ulong)uVar1 * 8) + 0x18) = uVar1;
  }
  puVar7 = (uint *)(param_1 + (ulong)bVar2 * 4 + 0x68);
  uVar3 = *puVar7;
  if (uVar1 < uVar3) {
    uVar3 = uVar3 - 1;
    *puVar7 = uVar3;
    if (uVar3 < *puVar5) {
      lVar6 = *plVar4;
      lVar8 = *(long *)(lVar6 + (ulong)uVar3 * 8);
      lVar9 = (ulong)uVar1 * 8;
      lVar10 = *(long *)(lVar6 + lVar9);
      *(long *)(lVar6 + lVar9) = lVar8;
      *(long *)(*plVar4 + (ulong)uVar3 * 8) = lVar10;
      *(uint *)(lVar10 + 0x18) = uVar3;
      *(uint *)(lVar8 + 0x18) = uVar1;
    }
  }
  return;
}


