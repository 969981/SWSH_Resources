/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0051b020; name: FUN_0051b020
 */


undefined8 FUN_0051b020(long param_1)

{
  long lVar1;
  int iVar2;
  
  iVar2 = *(int *)(param_1 + 0x5d8);
  lVar1 = *(long *)(param_1 + 400);
  if (iVar2 == -1) {
    iVar2 = *(int *)(lVar1 + 0x90);
    if (*(int *)(lVar1 + 0x30) <= iVar2) {
      return 0;
    }
  }
  else if (*(int *)(lVar1 + 0x30) <= iVar2) {
    return 0;
  }
  return *(undefined8 *)(*(long *)(lVar1 + 0x38) + (long)iVar2 * 8);
}


