/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00482420; name: FUN_00482420
 */


void FUN_00482420(long param_1)

{
  long lVar1;
  
  if (*(long *)(param_1 + 0x70) != 0) {
    if (((((*(long *)(param_1 + 0x78) != 0) &&
          (lVar1 = *(long *)(*(long *)(param_1 + 0x78) + 0x70), lVar1 != 0)) &&
         (*(short *)(lVar1 + 0x90) < 1)) &&
        ((*(short *)(lVar1 + 0x94) < 1 && (*(short *)(lVar1 + 0x88) == 0)))) &&
       ((*(short *)(lVar1 + 0x8a) == 0 &&
        ((*(long *)(lVar1 + 0x10) == 0 && (*(int *)(lVar1 + 8) == 0)))))) {
      FUN_00481ff0();
    }
    if ((((*(long *)(param_1 + 0x80) != 0) &&
         (lVar1 = *(long *)(*(long *)(param_1 + 0x80) + 0x70), lVar1 != 0)) &&
        (*(short *)(lVar1 + 0x90) < 1)) &&
       (((*(short *)(lVar1 + 0x94) < 1 && (*(short *)(lVar1 + 0x88) == 0)) &&
        ((*(short *)(lVar1 + 0x8a) == 0 &&
         ((*(long *)(lVar1 + 0x10) == 0 && (*(int *)(lVar1 + 8) == 0)))))))) {
      FUN_00481ff0();
      return;
    }
  }
  return;
}


