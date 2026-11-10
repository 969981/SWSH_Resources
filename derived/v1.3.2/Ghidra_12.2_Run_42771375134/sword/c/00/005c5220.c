/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 005c5220; name: FUN_005c5220
 */


long FUN_005c5220(byte *param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  byte bVar5;
  
  lVar3 = 0;
  if (param_1 != (byte *)0x0) {
    bVar5 = *param_1;
    if (bVar5 == 0) {
      return 0;
    }
    lVar3 = 0;
    lVar4 = 0;
    do {
      lVar1 = 3;
      if (0xef < bVar5) {
        lVar1 = 4;
      }
      lVar2 = 2;
      if (0xdf < bVar5) {
        lVar2 = lVar1;
      }
      lVar1 = 2;
      if (0xc3 < bVar5) {
        lVar1 = lVar2;
      }
      lVar2 = 1;
      if (((int)(char)bVar5 & 0x80000000U) != 0) {
        lVar2 = lVar1;
      }
      lVar4 = lVar4 + lVar2;
      lVar3 = lVar3 + 1;
      bVar5 = param_1[lVar4];
    } while (bVar5 != 0);
  }
  return lVar3;
}


