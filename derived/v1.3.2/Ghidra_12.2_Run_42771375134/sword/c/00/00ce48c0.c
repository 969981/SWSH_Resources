/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00ce48c0; name: FUN_00ce48c0
 */


undefined8 FUN_00ce48c0(long param_1)

{
  ulong uVar1;
  long lVar2;
  
  lVar2 = *(long *)(param_1 + 0x98);
  if (((((*(long *)(lVar2 + 0x178) == 0) && (*(long *)(lVar2 + 0x180) == 0)) ||
       (uVar1 = FUN_011f4020(lVar2 + 0x2d8,lVar2 + 0x178), (uVar1 & 1) != 0)) &&
      (((*(long *)(lVar2 + 0x1f8) == 0 && (*(long *)(lVar2 + 0x200) == 0)) ||
       (uVar1 = FUN_011f4020(*(long *)(param_1 + 0x98) + 0x2d8,lVar2 + 0x1f8), (uVar1 & 1) != 0))))
     && (((*(long *)(lVar2 + 0x278) == 0 && (*(long *)(lVar2 + 0x280) == 0)) ||
         (uVar1 = FUN_011f4020(*(long *)(param_1 + 0x98) + 0x2d8,lVar2 + 0x278), (uVar1 & 1) != 0)))
     ) {
    return 0;
  }
  return 1;
}


