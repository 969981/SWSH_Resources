/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0141cba0; name: FUN_0141cba0
 */


bool FUN_0141cba0(void)

{
  uint uVar1;
  ulong uVar2;
  long lVar3;
  
  lVar3 = *(long *)PTR_DAT_027185f8;
  if (lVar3 == 0) {
    return false;
  }
  uVar2 = FUN_0120e5d0(lVar3);
  if ((uVar2 & 1) == 0) {
    return false;
  }
  uVar1 = FUN_0120e820(lVar3);
  return 1 < uVar1;
}


