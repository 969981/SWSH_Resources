/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 003ba5c0; name: FUN_003ba5c0
 */


void FUN_003ba5c0(long param_1,long param_2)

{
  uint *puVar1;
  uint uVar2;
  uint uVar3;
  long lVar4;
  
  puVar1 = (uint *)(param_2 + 0x1c);
  if (*(long *)(param_2 + 8) != param_1) {
    puVar1 = (uint *)(param_2 + 0x20);
  }
  uVar2 = *puVar1;
  uVar3 = *(int *)(param_1 + 0x34) - 1;
  *(uint *)(param_1 + 0x34) = uVar3;
  *(undefined8 *)(*(long *)(param_1 + 0x28) + (ulong)uVar2 * 8) =
       *(undefined8 *)(*(long *)(param_1 + 0x28) + (ulong)uVar3 * 8);
  if (uVar2 < uVar3) {
    lVar4 = *(long *)(*(long *)(param_1 + 0x28) + (ulong)uVar2 * 8);
    if (*(long *)(lVar4 + 8) == param_1) {
      *(uint *)(lVar4 + 0x1c) = uVar2;
      return;
    }
    *(uint *)(lVar4 + 0x20) = uVar2;
  }
  return;
}


