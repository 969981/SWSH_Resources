/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 006a9950; name: FUN_006a9950
 */


undefined4 FUN_006a9950(long param_1)

{
  uint *puVar1;
  int *piVar2;
  long lVar3;
  ulong uVar4;
  
  piVar2 = *(int **)(param_1 + 0x110);
  if (piVar2 == (int *)0x0) {
    lVar3 = *(long *)(param_1 + 8);
    if (lVar3 == 0) {
      return 0;
    }
    if (*(char *)(lVar3 + 0x170) == '\0') {
      return 0;
    }
    piVar2 = (int *)((long)*(uint **)(lVar3 + 400) + (ulong)**(uint **)(lVar3 + 400));
    if (piVar2 == (int *)0x0) {
      return 0;
    }
  }
  puVar1 = (uint *)((long)piVar2 + (ulong)*(ushort *)((long)piVar2 + (4 - (long)*piVar2)));
  piVar2 = (int *)((long)puVar1 + (ulong)*puVar1);
  if (*(ushort *)((long)piVar2 - (long)*piVar2) < 9) {
    return 0;
  }
  uVar4 = (ulong)((ushort *)((long)piVar2 - (long)*piVar2))[4];
  if (uVar4 == 0) {
    return 0;
  }
  return *(undefined4 *)((long)piVar2 + uVar4);
}


