/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0075f910; name: FUN_0075f910
 */


undefined8 FUN_0075f910(long *param_1,ulong param_2,long param_3,ulong param_4)

{
  char cVar1;
  uint uVar2;
  long lVar3;
  byte bVar4;
  uint uVar5;
  int iVar6;
  bool bVar7;
  char cVar8;
  undefined8 uVar9;
  byte bVar10;
  ulong uVar11;
  long lVar12;
  
  cVar8 = FUN_00761750(param_2);
  uVar5 = (uint)cVar8;
  uVar11 = (uint)~(-1 << (ulong)(uVar5 & 0x1f)) & param_2;
  uVar2 = (uint)(uVar11 << ((ulong)(5 - uVar5) & 0x3f));
  if (4 < (int)uVar5) {
    uVar2 = (uint)(uVar11 >> ((ulong)(uVar5 - 5) & 0x3f));
  }
  bVar7 = 0x1f < (uVar2 & 0xff);
  bVar4 = (byte)uVar2;
  cVar1 = cVar8;
  if (bVar7) {
    cVar1 = cVar8 + ((char)bVar4 >> 5);
  }
  iVar6 = (int)cVar1;
  if (bVar7) {
    bVar4 = bVar4 & 0x1f;
  }
  if ((uint)((long)cVar1 + -3) < 5) {
    lVar12 = *(long *)(&DAT_0213f520 + ((long)cVar1 + -3) * 8);
  }
  else {
    lVar12 = -0x81;
  }
  lVar3 = (long)(char)bVar4;
  if (iVar6 < 8) {
    lVar3 = (long)((int)(char)bVar4 >> (8U - iVar6 & 0x1f));
  }
  uVar11 = lVar12 + (-(ulong)(iVar6 - 3U >> 0x1f) & 0xffffffe000000000 | (ulong)(iVar6 - 3U) << 5) +
           lVar3;
  if ((ulong)param_1[4] <= uVar11) {
    return 0;
  }
  lVar12 = *param_1 + uVar11 * 0x20;
  if (lVar12 == 0) {
    return 0;
  }
  lVar12 = FUN_0075f660(lVar12);
  if (lVar12 == 0) {
    return 0;
  }
  uVar11 = FUN_0075f230();
  if (param_2 <= uVar11) goto LAB_0075fac4;
  bVar4 = (byte)(uVar2 + 1);
  bVar10 = bVar4;
  if (0x1f < (uVar2 + 1 & 0xff)) {
    bVar10 = bVar4 & 0x1f;
    cVar8 = cVar8 + ((char)bVar4 >> 5);
  }
  iVar6 = (int)cVar8;
  uVar11 = -(ulong)(iVar6 - 3U >> 0x1f) & 0xffffffe000000000 | (ulong)(iVar6 - 3U) << 5;
  if ((uint)((long)cVar8 + -3) < 5) {
    lVar12 = *(long *)(&DAT_0213f520 + ((long)cVar8 + -3) * 8) + uVar11;
    if (7 < iVar6) goto LAB_0075fa60;
LAB_0075fa88:
    uVar11 = lVar12 + ((int)(char)bVar10 >> (8U - iVar6 & 0x1f));
    if ((ulong)param_1[4] <= uVar11) {
      return 0;
    }
  }
  else {
    lVar12 = uVar11 - 0x81;
    if (iVar6 < 8) goto LAB_0075fa88;
LAB_0075fa60:
    uVar11 = lVar12 + (char)bVar10;
    if ((ulong)param_1[4] <= uVar11) {
      return 0;
    }
  }
  lVar12 = *param_1 + uVar11 * 0x20;
  if ((lVar12 == 0) || (lVar12 = FUN_0075f660(lVar12), lVar12 == 0)) {
    return 0;
  }
LAB_0075fac4:
  lVar3 = param_3;
  if ((param_4 & 1) == 0) {
    lVar3 = 0;
  }
  uVar9 = FUN_0075fb10(param_1,lVar12,param_2 - lVar3,param_3);
  return uVar9;
}


