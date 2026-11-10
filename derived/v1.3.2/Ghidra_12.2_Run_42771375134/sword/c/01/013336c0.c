/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 013336c0; name: FUN_013336c0
 */


undefined4 FUN_013336c0(long param_1)

{
  int *piVar1;
  ulong uVar2;
  uint *puVar3;
  
  if (*(long *)(param_1 + 0x68) == 0) {
    return 0;
  }
  if (*(char *)(*(long *)(param_1 + 0x68) + 0x170) == '\0') {
    return 0;
  }
  uVar2 = FUN_014bca10(*(undefined8 *)(param_1 + 0x170));
  if ((uVar2 & 1) == 0) {
    return 0;
  }
  puVar3 = *(uint **)(*(long *)(param_1 + 0x68) + 400);
  piVar1 = (int *)((long)puVar3 + (ulong)*puVar3);
  puVar3 = (uint *)((long)piVar1 + (ulong)*(ushort *)((long)piVar1 + (4 - (long)*piVar1)));
  return *(undefined4 *)((long)puVar3 + (ulong)*puVar3);
}


