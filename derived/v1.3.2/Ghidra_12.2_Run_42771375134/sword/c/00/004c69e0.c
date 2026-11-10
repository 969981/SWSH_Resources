/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 004c69e0; name: FUN_004c69e0
 */


long FUN_004c69e0(long *param_1)

{
  long lVar1;
  long *plVar2;
  long lVar3;
  
  if (*(uint *)(PTR_DAT_027134f8 + 8) != 0) {
    plVar2 = *(long **)PTR_DAT_027134f8;
    lVar3 = (ulong)*(uint *)(PTR_DAT_027134f8 + 8) << 3;
    do {
      lVar1 = *plVar2;
      if (((*(long *)(lVar1 + 0x70) == *param_1) && (*(long *)(lVar1 + 0x78) == param_1[1])) &&
         (*(int *)(lVar1 + 0x348) != 2)) {
        if (*(long *)(lVar1 + 0x20) == 0) {
          return lVar1;
        }
        if (*(char *)(*(long *)(*(long *)(lVar1 + 0x20) + 0x10) + 0x54) != '\0') {
          return lVar1;
        }
      }
      plVar2 = plVar2 + 1;
      lVar3 = lVar3 + -8;
    } while (lVar3 != 0);
  }
  return 0;
}


