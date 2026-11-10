/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0119dd10; name: FUN_0119dd10
 */


uint FUN_0119dd10(long param_1)

{
  char cVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  long lVar5;
  
  lVar5 = *(long *)PTR_DAT_027185f8;
  if (lVar5 != 0) {
    cVar1 = *(char *)(param_1 + 0x352);
    iVar2 = FUN_0120e820(lVar5);
    if (*(char *)(param_1 + 0x351) == '\0') {
      iVar4 = 2;
      if (cVar1 != '\0') {
        iVar4 = 4;
      }
      if (iVar4 == iVar2) {
        uVar3 = FUN_0120e5d0(lVar5);
        uVar3 = uVar3 ^ 1;
        goto LAB_0119dd74;
      }
    }
  }
  uVar3 = 1;
LAB_0119dd74:
  return uVar3 & 1;
}


