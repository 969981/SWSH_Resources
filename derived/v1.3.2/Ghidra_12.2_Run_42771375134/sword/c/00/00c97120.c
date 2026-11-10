/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00c97120; name: FUN_00c97120
 */


long FUN_00c97120(void)

{
  int *piVar1;
  uint *puVar2;
  ulong uVar3;
  
  puVar2 = (uint *)FUN_010295e0();
  piVar1 = (int *)((long)puVar2 + (ulong)*puVar2);
  if (*(ushort *)((long)piVar1 - (long)*piVar1) < 0xb) {
    return 4;
  }
  uVar3 = (ulong)((ushort *)((long)piVar1 - (long)*piVar1))[5];
  if (uVar3 == 0) {
    return 4;
  }
  puVar2 = (uint *)((long)piVar1 + uVar3);
  return (long)puVar2 + (ulong)*puVar2 + 4;
}


