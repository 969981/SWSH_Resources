/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 005cbb90; name: FUN_005cbb90
 */


long FUN_005cbb90(long param_1,undefined1 *param_2,ulong param_3)

{
  ulong uVar1;
  uint uVar2;
  long lVar3;
  long lVar4;
  
  if (param_2 != (undefined1 *)0x0) {
    *param_2 = 0;
    lVar3 = FUN_005c4340();
    if (lVar3 != 0) {
      if (1 < param_3) {
        lVar4 = lVar3;
        while (uVar2 = *(byte *)(param_1 + lVar4) - 0x2e,
              0x2e < uVar2 || (1L << ((ulong)uVar2 & 0x3f) & 0x400000001003U) == 0) {
          if (lVar4 < 0) goto LAB_005cbc3c;
          lVar4 = lVar4 + -1;
        }
        if ((-1 < lVar4) && (*(byte *)(param_1 + lVar4) == 0x2e)) {
          uVar1 = 0x400;
          if (param_3 != 0xffffffffffffffff) {
            uVar1 = param_3;
          }
          lVar3 = param_1 + lVar4 + 1;
          FUN_005c5800(param_2,uVar1,lVar3,uVar1 - 1);
          return lVar3;
        }
      }
LAB_005cbc3c:
      return param_1 + lVar3;
    }
  }
  return 0;
}


