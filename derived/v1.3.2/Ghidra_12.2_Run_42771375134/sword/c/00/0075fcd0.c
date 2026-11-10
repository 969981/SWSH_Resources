/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0075fcd0; name: FUN_0075fcd0
 */


undefined8 FUN_0075fcd0(long *param_1,ulong param_2)

{
  long lVar1;
  uint uVar2;
  int iVar3;
  char cVar4;
  char cVar5;
  byte bVar6;
  undefined8 uVar7;
  ulong uVar8;
  long lVar9;
  
  cVar4 = FUN_00761750(param_2);
  uVar2 = (uint)cVar4;
  param_2 = (uint)~(-1 << (ulong)(uVar2 & 0x1f)) & param_2;
  cVar5 = (char)(param_2 << ((ulong)(5 - uVar2) & 0x3f));
  if (4 < (int)uVar2) {
    cVar5 = (char)(param_2 >> ((ulong)(uVar2 - 5) & 0x3f));
  }
  if ((int)cVar5 + 1U < 0x20 &&
      (-1 << (ulong)((int)cVar5 + 1U & 0x1f) & *(uint *)(param_1[2] + (long)cVar4 * 4)) != 0) {
    bVar6 = FUN_007617e0();
    if (0x1f < bVar6) {
      cVar4 = cVar4 + ((char)bVar6 >> 5);
    }
    iVar3 = (int)cVar4;
    if (0x1f < bVar6) {
      bVar6 = bVar6 & 0x1f;
    }
    if ((uint)((long)cVar4 + -3) < 5) {
      lVar9 = *(long *)(&DAT_0213f520 + ((long)cVar4 + -3) * 8);
    }
    else {
      lVar9 = -0x81;
    }
    lVar1 = (long)(char)bVar6;
    if (iVar3 < 8) {
      lVar1 = (long)((int)(char)bVar6 >> (8U - iVar3 & 0x1f));
    }
    uVar8 = lVar9 + (-(ulong)(iVar3 - 3U >> 0x1f) & 0xffffffe000000000 | (ulong)(iVar3 - 3U) << 5) +
            lVar1;
    if ((ulong)param_1[4] <= uVar8) {
      return 0;
    }
  }
  else {
    uVar8 = param_1[3] & -1L << ((ulong)((int)cVar4 + 1) & 0x3f);
    if (uVar8 == 0) {
      return 0;
    }
    cVar5 = FUN_007617e0(uVar8);
    bVar6 = FUN_007617e0(*(undefined4 *)(param_1[2] + (long)cVar5 * 4));
    if (0x1f < bVar6) {
      cVar5 = cVar5 + ((char)bVar6 >> 5);
      bVar6 = bVar6 & 0x1f;
    }
    iVar3 = (int)cVar5;
    uVar8 = -(ulong)(iVar3 - 3U >> 0x1f) & 0xffffffe000000000 | (ulong)(iVar3 - 3U) << 5;
    if ((uint)((long)cVar5 + -3) < 5) {
      lVar9 = *(long *)(&DAT_0213f520 + ((long)cVar5 + -3) * 8) + uVar8;
    }
    else {
      lVar9 = uVar8 - 0x81;
    }
    if (iVar3 < 8) {
      uVar8 = lVar9 + ((int)(char)bVar6 >> (8U - iVar3 & 0x1f));
      if ((ulong)param_1[4] <= uVar8) {
        return 0;
      }
    }
    else {
      uVar8 = lVar9 + (char)bVar6;
      if ((ulong)param_1[4] <= uVar8) {
        return 0;
      }
    }
  }
  lVar9 = *param_1 + uVar8 * 0x20;
  if (lVar9 == 0) {
    return 0;
  }
  uVar7 = FUN_0075f660(lVar9);
  return uVar7;
}


