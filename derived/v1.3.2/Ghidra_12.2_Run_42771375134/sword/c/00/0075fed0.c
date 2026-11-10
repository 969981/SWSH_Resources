/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0075fed0; name: FUN_0075fed0
 */


undefined8 FUN_0075fed0(long *param_1)

{
  ulong uVar1;
  long lVar2;
  int iVar3;
  char cVar4;
  byte bVar5;
  undefined8 uVar6;
  long lVar7;
  
  cVar4 = FUN_00761750(param_1[3]);
  if (cVar4 != -1) {
    bVar5 = FUN_00761750(*(undefined4 *)(param_1[2] + (long)cVar4 * 4));
    if (0x1f < bVar5) {
      cVar4 = cVar4 + ((char)bVar5 >> 5);
    }
    iVar3 = (int)cVar4;
    if (0x1f < bVar5) {
      bVar5 = bVar5 & 0x1f;
    }
    if ((uint)((long)cVar4 + -3) < 5) {
      lVar7 = *(long *)(&DAT_0213f520 + ((long)cVar4 + -3) * 8);
    }
    else {
      lVar7 = -0x81;
    }
    lVar2 = (long)(char)bVar5;
    if (iVar3 < 8) {
      lVar2 = (long)((int)(char)bVar5 >> (8U - iVar3 & 0x1f));
    }
    uVar1 = lVar7 + (-(ulong)(iVar3 - 3U >> 0x1f) & 0xffffffe000000000 | (ulong)(iVar3 - 3U) << 5) +
            lVar2;
    if ((uVar1 < (ulong)param_1[4]) && (lVar7 = *param_1 + uVar1 * 0x20, lVar7 != 0)) {
      uVar6 = FUN_0075f660(lVar7);
      return uVar6;
    }
  }
  return 0;
}


