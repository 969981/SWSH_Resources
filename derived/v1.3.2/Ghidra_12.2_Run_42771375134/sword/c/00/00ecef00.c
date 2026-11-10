/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00ecef00; name: FUN_00ecef00
 */


bool FUN_00ecef00(void)

{
  long *plVar1;
  bool bVar2;
  long lVar3;
  ulong uVar4;
  
  lVar3 = FUN_00e7e260();
  bVar2 = false;
  if (lVar3 != 0) {
    uVar4 = FUN_00ea01e0(lVar3,2);
    if ((uVar4 & 1) != 0) {
      return false;
    }
    plVar1 = *(long **)(*(long *)PTR_DAT_02717c48 + 0x148);
    if (*(long **)(*(long *)PTR_DAT_02717c48 + 0x150) == plVar1) {
      return false;
    }
    lVar3 = *plVar1;
    if (lVar3 == 0) {
      return false;
    }
    bVar2 = *(char *)(lVar3 + 0x660) != '\0';
  }
  return bVar2;
}


