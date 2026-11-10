/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 007b8180; name: FUN_007b8180
 */


ulong FUN_007b8180(void)

{
  int iVar1;
  ulong uVar2;
  long lVar3;
  
  lVar3 = *(long *)PTR_DAT_02716a30;
  if (lVar3 == 0) {
    return 0;
  }
  uVar2 = FUN_01940800(lVar3);
  if ((int)uVar2 != 1) {
    iVar1 = FUN_01940800(lVar3);
    if (iVar1 != 2) {
      iVar1 = FUN_01940800(lVar3);
      return (ulong)(iVar1 == 3);
    }
    uVar2 = 1;
  }
  return uVar2;
}


