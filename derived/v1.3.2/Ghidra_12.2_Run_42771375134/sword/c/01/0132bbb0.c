/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0132bbb0; name: FUN_0132bbb0
 */


int FUN_0132bbb0(long param_1,ulong param_2)

{
  int iVar1;
  long lVar2;
  
  iVar1 = 7;
  if (param_2 < *(ulong *)(param_1 + 0xa0)) {
    lVar2 = *(long *)(param_1 + param_2 * 8 + 0x60);
    iVar1 = 7;
    if (lVar2 - 1U < 7) {
      iVar1 = (int)lVar2 + -1;
    }
  }
  return iVar1;
}


