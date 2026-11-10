/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00cc08a0; name: FUN_00cc08a0
 */


undefined4 FUN_00cc08a0(long param_1)

{
  int *piVar1;
  uint *puVar2;
  
  puVar2 = *(uint **)(*(long *)(param_1 + 0x68) + 400);
  piVar1 = (int *)((long)puVar2 + (ulong)*puVar2);
  puVar2 = (uint *)((long)piVar1 + (ulong)*(ushort *)((long)piVar1 + (4 - (long)*piVar1)));
  return *(undefined4 *)((long)puVar2 + (ulong)*puVar2);
}


