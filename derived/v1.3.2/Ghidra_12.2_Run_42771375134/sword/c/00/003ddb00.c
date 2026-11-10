/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 003ddb00; name: FUN_003ddb00
 */


void FUN_003ddb00(long param_1,long param_2)

{
  uint uVar1;
  uint *puVar2;
  uint uVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  
  puVar2 = (uint *)(param_1 + (ulong)*(byte *)(param_2 + 0x24) * 4 + 0x68);
  uVar3 = *puVar2;
  if (1 < uVar3) {
    param_1 = param_1 + (ulong)*(byte *)(param_2 + 0x24) * 0x10;
    uVar1 = *(uint *)(param_2 + 0x18);
    lVar4 = *(long *)(param_1 + 0x38);
    lVar7 = (ulong)uVar1 * 8;
    lVar8 = *(long *)(lVar4 + lVar7);
    lVar5 = (ulong)(uVar3 - 1) * 8;
    lVar6 = *(long *)(lVar4 + lVar5);
    *(long *)(lVar4 + lVar5) = lVar8;
    *(long *)(*(long *)(param_1 + 0x38) + lVar7) = lVar6;
    *(uint *)(lVar6 + 0x18) = uVar1;
    *(uint *)(lVar8 + 0x18) = uVar3 - 1;
    uVar3 = *puVar2;
  }
  *puVar2 = uVar3 - 1;
  return;
}


