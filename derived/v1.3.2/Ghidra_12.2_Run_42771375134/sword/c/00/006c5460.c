/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 006c5460; name: FUN_006c5460
 */


void FUN_006c5460(long param_1)

{
  int *piVar1;
  uint *puVar2;
  ulong uVar3;
  
  if (*(long *)(param_1 + 0x18) == 0) {
    return;
  }
  FUN_0069a8a0(param_1 + 0x120);
  puVar2 = *(uint **)(*(long *)(param_1 + 0x18) + 400);
  piVar1 = (int *)((long)puVar2 + (ulong)*puVar2);
  if (*(ushort *)((long)piVar1 - (long)*piVar1) < 7) {
    FUN_006c55a0(param_1 + 0x140,0);
    return;
  }
  uVar3 = (ulong)((ushort *)((long)piVar1 - (long)*piVar1))[3];
  if (uVar3 == 0) {
    FUN_006c55a0(param_1 + 0x140,0);
    return;
  }
  puVar2 = (uint *)((long)piVar1 + uVar3);
  FUN_006c55a0(param_1 + 0x140,(long)puVar2 + (ulong)*puVar2);
  return;
}


