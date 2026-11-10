/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00cead20; name: FUN_00cead20
 */


undefined4 FUN_00cead20(long param_1)

{
  uint *puVar1;
  int *piVar2;
  
  piVar2 = *(int **)(param_1 + 0x170);
  puVar1 = (uint *)((long)piVar2 + (ulong)*(ushort *)((long)piVar2 + (4 - (long)*piVar2)));
  return *(undefined4 *)((long)puVar1 + (ulong)*puVar1);
}


