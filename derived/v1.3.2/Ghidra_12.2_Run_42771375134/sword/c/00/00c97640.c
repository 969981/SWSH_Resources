/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00c97640; name: FUN_00c97640
 */


undefined4 FUN_00c97640(undefined8 param_1)

{
  int *piVar1;
  ulong uVar2;
  uint *puVar3;
  
  uVar2 = FUN_01029540();
  if ((uVar2 & 1) == 0) {
    return 0xffffffff;
  }
  puVar3 = (uint *)FUN_010295e0(param_1);
  piVar1 = (int *)((long)puVar3 + (ulong)*puVar3);
  puVar3 = (uint *)((long)piVar1 + (ulong)*(ushort *)((long)piVar1 + (4 - (long)*piVar1)));
  return *(undefined4 *)((long)puVar3 + (ulong)*puVar3);
}


