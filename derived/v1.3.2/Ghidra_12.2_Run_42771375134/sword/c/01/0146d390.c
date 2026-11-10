/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0146d390; name: FUN_0146d390
 */


undefined8 FUN_0146d390(long param_1)

{
  ulong uVar1;
  undefined8 uVar2;
  long lVar3;
  
  lVar3 = *(long *)(param_1 + 0x6f8);
  uVar1 = FUN_014bc9b0(*(undefined8 *)(lVar3 + 0x148));
  if (((uVar1 & 1) != 0) && (uVar1 = FUN_016a7810(*(undefined8 *)(lVar3 + 0x140)), (uVar1 & 1) != 0)
     ) {
    lVar3 = *(long *)(param_1 + 0x700);
    uVar1 = FUN_014bc9b0(*(undefined8 *)(lVar3 + 0x148));
    if (((uVar1 & 1) != 0) &&
       (uVar1 = FUN_016a7810(*(undefined8 *)(lVar3 + 0x140)), (uVar1 & 1) != 0)) {
      lVar3 = *(long *)(param_1 + 0x708);
      uVar1 = FUN_014bc9b0(*(undefined8 *)(lVar3 + 0x148));
      if (((uVar1 & 1) != 0) &&
         (uVar1 = FUN_016a7810(*(undefined8 *)(lVar3 + 0x140)), (uVar1 & 1) != 0)) {
        lVar3 = *(long *)(param_1 + 0x710);
        uVar1 = FUN_014bc9b0(*(undefined8 *)(lVar3 + 0x148));
        if ((uVar1 & 1) != 0) {
          uVar2 = FUN_016a7810(*(undefined8 *)(lVar3 + 0x140));
          return uVar2;
        }
      }
    }
  }
  return 0;
}


