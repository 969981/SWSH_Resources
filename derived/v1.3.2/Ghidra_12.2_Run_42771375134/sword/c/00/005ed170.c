/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 005ed170; name: FUN_005ed170
 */


int FUN_005ed170(void)

{
  int iVar1;
  int iVar2;
  
  iVar2 = FUN_005ed140();
  iVar1 = iVar2 + 0xe;
  if (-1 < iVar2 + 7) {
    iVar1 = iVar2 + 7;
  }
  return iVar1 >> 3;
}


