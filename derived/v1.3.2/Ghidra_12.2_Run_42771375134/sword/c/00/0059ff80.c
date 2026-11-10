/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0059ff80; name: FUN_0059ff80
 */


int FUN_0059ff80(long param_1,undefined8 param_2)

{
  int iVar1;
  int iVar2;
  long lVar3;
  
  lVar3 = *(long *)(param_1 + 0x38);
  if (param_1 + 0x30 == lVar3) {
    iVar1 = 0;
  }
  else {
    iVar2 = 0;
    do {
      iVar1 = FUN_0059c980(*(undefined8 *)(*(long *)(lVar3 + 0x10) + 8),param_2);
      lVar3 = *(long *)(lVar3 + 8);
      if (-1 < iVar1) {
        iVar1 = iVar2;
      }
      iVar2 = iVar1;
    } while (param_1 + 0x30 != lVar3);
  }
  return iVar1;
}


