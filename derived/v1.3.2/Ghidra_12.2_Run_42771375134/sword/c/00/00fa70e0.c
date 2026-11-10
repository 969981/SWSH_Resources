/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00fa70e0; name: FUN_00fa70e0
 */


undefined1 FUN_00fa70e0(void)

{
  int *piVar1;
  uint *puVar2;
  ulong uVar3;
  
  puVar2 = (uint *)FUN_010295e0();
  piVar1 = (int *)((long)puVar2 + (ulong)*puVar2);
  puVar2 = (uint *)((long)piVar1 + (ulong)*(ushort *)((long)piVar1 + (4 - (long)*piVar1)));
  puVar2 = (uint *)((long)puVar2 + (ulong)*puVar2 + 4);
  piVar1 = (int *)((long)puVar2 + (ulong)*puVar2);
  if (*(ushort *)((long)piVar1 - (long)*piVar1) < 9) {
    return 0;
  }
  uVar3 = (ulong)((ushort *)((long)piVar1 - (long)*piVar1))[4];
  if (uVar3 == 0) {
    return 0;
  }
  return *(undefined1 *)((long)piVar1 + uVar3);
}


