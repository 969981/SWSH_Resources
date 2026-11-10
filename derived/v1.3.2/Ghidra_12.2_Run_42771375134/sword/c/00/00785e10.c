/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00785e10; name: FUN_00785e10
 */


int FUN_00785e10(long param_1)

{
  int iVar1;
  int iVar2;
  long lVar3;
  
  if (*(int **)(param_1 + 0x58) == (int *)0x0) {
    iVar2 = 0;
    lVar3 = *(long *)(param_1 + 0x50);
    if (lVar3 == param_1 + 0x48) {
      return 0;
    }
  }
  else {
    iVar2 = **(int **)(param_1 + 0x58);
    lVar3 = *(long *)(param_1 + 0x50);
    if (lVar3 == param_1 + 0x48) {
      return iVar2;
    }
  }
  do {
    iVar1 = FUN_00785e10(*(undefined8 *)(lVar3 + 0x10));
    lVar3 = *(long *)(lVar3 + 8);
    iVar2 = iVar1 + iVar2;
  } while (lVar3 != param_1 + 0x48);
  return iVar2;
}


