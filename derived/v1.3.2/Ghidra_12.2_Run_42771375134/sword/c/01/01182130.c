/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 01182130; name: FUN_01182130
 */


undefined4 FUN_01182130(long param_1)

{
  long lVar1;
  long lVar2;
  int iVar3;
  
  lVar1 = **(long **)(param_1 + 0x708);
  lVar2 = (*(long **)(param_1 + 0x708))[1];
  if (lVar1 != lVar2) {
    iVar3 = *(int *)(lVar1 + 8);
    while (iVar3 == 0) {
      if (lVar2 == lVar1 + 0x10) {
        return 0;
      }
      iVar3 = *(int *)(lVar1 + 0x18);
      lVar1 = lVar1 + 0x10;
    }
  }
  if (lVar1 == lVar2) {
    return 0;
  }
  return *(undefined4 *)(lVar1 + 8);
}


