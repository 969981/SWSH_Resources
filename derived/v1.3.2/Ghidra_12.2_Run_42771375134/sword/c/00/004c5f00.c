/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 004c5f00; name: FUN_004c5f00
 */


long FUN_004c5f00(long *param_1)

{
  long lVar1;
  long lVar2;
  
  lVar2 = *param_1;
  lVar1 = *(long *)(PTR_DAT_02713500 + 0x10);
  if (lVar1 != 0) {
    if ((*(ushort *)((long)param_1 + 0xc) & 0xff) == 4) {
      do {
        if (((*(long *)(lVar1 + 0x70) != 0) && (*(long *)(*(long *)(lVar1 + 0x70) + 0x18) == lVar2))
           || ((*(long *)(lVar1 + 0x78) != 0 && (*(long *)(*(long *)(lVar1 + 0x78) + 0x18) == lVar2)
               ))) {
LAB_004c5fa8:
          if (*(int *)(lVar1 + 0x80) == 0) {
            return lVar1;
          }
          *(ushort *)((long)param_1 + 0xc) = *(ushort *)((long)param_1 + 0xc) | 0x100;
          return lVar1;
        }
        lVar1 = *(long *)(lVar1 + 0x68);
      } while (lVar1 != 0);
    }
    else {
      do {
        if ((*(long *)(lVar1 + 0x70) != 0) && (*(long *)(*(long *)(lVar1 + 0x70) + 0x18) == lVar2))
        goto LAB_004c5fa8;
        lVar1 = *(long *)(lVar1 + 0x68);
      } while (lVar1 != 0);
    }
  }
  lVar1 = *(long *)(lVar2 + 0x200);
  if ((lVar1 == 0) ||
     (((*(long *)(lVar1 + 0x70) == 0 || (*(long *)(*(long *)(lVar1 + 0x70) + 0x18) != lVar2)) &&
      (*(char *)((long)param_1 + 0xc) != '\x04')))) {
    lVar1 = 0;
  }
  return lVar1;
}


