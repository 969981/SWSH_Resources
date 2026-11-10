/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 003ddaa0; name: FUN_003ddaa0
 */


void FUN_003ddaa0(long param_1,long param_2)

{
  long lVar1;
  uint uVar2;
  uint *puVar3;
  uint uVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  
  lVar1 = param_1 + (ulong)*(byte *)(param_2 + 0x24) * 0x10;
  puVar3 = (uint *)(param_1 + (ulong)*(byte *)(param_2 + 0x24) * 4 + 0x68);
  uVar4 = *puVar3;
  if (uVar4 < *(uint *)(lVar1 + 0x40)) {
    uVar2 = *(uint *)(param_2 + 0x18);
    lVar5 = *(long *)(lVar1 + 0x38);
    lVar7 = (ulong)uVar2 * 8;
    lVar8 = *(long *)(lVar5 + lVar7);
    lVar6 = *(long *)(lVar5 + (ulong)uVar4 * 8);
    *(long *)(lVar5 + (ulong)uVar4 * 8) = lVar8;
    *(long *)(*(long *)(lVar1 + 0x38) + lVar7) = lVar6;
    *(uint *)(lVar6 + 0x18) = uVar2;
    *(uint *)(lVar8 + 0x18) = uVar4;
    uVar4 = *puVar3;
  }
  *puVar3 = uVar4 + 1;
  return;
}


