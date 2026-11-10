/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 007738b0; name: FUN_007738b0
 */


undefined1 FUN_007738b0(long param_1)

{
  uint *puVar1;
  int *piVar2;
  ulong uVar3;
  
  piVar2 = (int *)0x0;
  if (*(long *)(param_1 + 0x88) != 0) {
    puVar1 = *(uint **)(*(long *)(param_1 + 0x88) + 400);
    piVar2 = (int *)((long)puVar1 + (ulong)*puVar1);
  }
  if (*(ushort *)((long)piVar2 - (long)*piVar2) < 0x13) {
    return 0;
  }
  uVar3 = (ulong)((ushort *)((long)piVar2 - (long)*piVar2))[9];
  if (uVar3 == 0) {
    return 0;
  }
  return *(undefined1 *)((long)piVar2 + uVar3);
}


