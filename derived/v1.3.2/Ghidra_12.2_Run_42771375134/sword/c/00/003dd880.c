/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 003dd880; name: FUN_003dd880
 */


void FUN_003dd880(long param_1,long param_2)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  long lVar5;
  undefined8 uVar6;
  
  uVar2 = *(uint *)(param_2 + 0xb8);
  uVar3 = *(uint *)(param_1 + 0x30);
  uVar4 = uVar3 - 1;
  uVar1 = uVar4;
  if (uVar3 <= uVar2) {
    uVar4 = uVar3 + 1;
    uVar1 = uVar3;
  }
  lVar5 = *(long *)(param_1 + 0x20);
  *(uint *)(param_2 + 0xb8) = uVar1;
  uVar6 = *(undefined8 *)(lVar5 + (ulong)uVar1 * 8);
  *(undefined8 *)(lVar5 + (ulong)uVar1 * 8) = *(undefined8 *)(param_2 + 0x50);
  lVar5 = FUN_003bd8a0(uVar6);
  *(uint *)(lVar5 + 0xb8) = uVar2;
  *(undefined8 *)(*(long *)(param_1 + 0x20) + (ulong)uVar2 * 8) = uVar6;
  *(uint *)(param_1 + 0x30) = uVar4;
  return;
}


