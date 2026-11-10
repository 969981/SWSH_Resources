/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00499660; name: FUN_00499660
 */


void FUN_00499660(void)

{
  long lVar1;
  long lVar2;
  
  for (lVar2 = *(long *)(PTR_DAT_02713320 + 0x10); lVar2 != 0; lVar2 = *(long *)(lVar2 + 0x10)) {
    lVar1 = *(long *)(lVar2 + 8);
    if (((1 < *(uint *)(lVar1 + 0x50)) || (*(char *)(lVar1 + 0x54) == '\0')) ||
       ((2 < *(uint *)(lVar1 + 0x40) && (*(long *)(*(long *)(lVar1 + 0x38) + 0x10) != 0)))) {
      FUN_004963c0(lVar2);
    }
  }
  return;
}


