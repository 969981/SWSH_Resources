/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 011f3dc0; name: FUN_011f3dc0
 */


undefined8 FUN_011f3dc0(void)

{
  long lVar1;
  long lVar2;
  long lVar3;
  
  lVar3 = *(long *)PTR_DAT_027104b0;
  if (lVar3 == 0) {
    return 0;
  }
  FUN_007b5c40(lVar3);
  lVar2 = *(long *)(PTR_DAT_02725ce8 + 0x10);
  for (lVar1 = *(long *)(PTR_DAT_02725ce8 + 8); lVar1 != lVar2; lVar1 = lVar1 + 0x80) {
    FUN_007b5c30(lVar3,lVar1 + 0x20);
  }
  return 1;
}


