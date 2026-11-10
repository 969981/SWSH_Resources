/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 011f4020; name: FUN_011f4020
 */


bool FUN_011f4020(undefined8 param_1,long *param_2)

{
  long lVar1;
  long lVar2;
  
  lVar2 = *(long *)(PTR_DAT_02725ce8 + 8);
  lVar1 = *(long *)(PTR_DAT_02725ce8 + 0x10);
  if (lVar1 != lVar2) {
    do {
      if ((*(long *)(lVar2 + 0x20) == *param_2) && (*(long *)(lVar2 + 0x28) == param_2[1]))
      goto LAB_011f4060;
      lVar2 = lVar2 + 0x80;
    } while (lVar1 != lVar2);
    lVar2 = lVar1;
  }
LAB_011f4060:
  return lVar2 != lVar1;
}


