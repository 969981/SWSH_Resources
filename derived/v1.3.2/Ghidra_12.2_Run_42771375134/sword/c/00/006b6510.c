/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 006b6510; name: FUN_006b6510
 */


bool FUN_006b6510(long param_1)

{
  int *piVar1;
  ulong uVar2;
  
  piVar1 = *(int **)(param_1 + 0x10);
  if (*(ushort *)((long)piVar1 - (long)*piVar1) < 7) {
    return false;
  }
  uVar2 = (ulong)((ushort *)((long)piVar1 - (long)*piVar1))[3];
  if (uVar2 == 0) {
    return false;
  }
  return *(int *)((long)piVar1 + uVar2) == 1;
}


