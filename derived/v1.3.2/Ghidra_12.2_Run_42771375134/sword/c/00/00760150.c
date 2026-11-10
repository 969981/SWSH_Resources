/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00760150; name: FUN_00760150
 */


void FUN_00760150(long *param_1,undefined8 param_2)

{
  uint uVar1;
  long lVar2;
  byte bVar3;
  uint uVar4;
  int iVar5;
  byte bVar6;
  char cVar7;
  ulong uVar8;
  long lVar9;
  
  uVar8 = FUN_0075f230(param_2);
  if (uVar8 != 0) {
    FUN_0075f5f0(param_2);
    cVar7 = FUN_00761750(uVar8);
    uVar4 = (uint)cVar7;
    uVar8 = uVar8 & (uint)~(-1 << (ulong)(uVar4 & 0x1f));
    uVar1 = (uint)(uVar8 << ((ulong)(5 - uVar4) & 0x3f));
    if (4 < (int)uVar4) {
      uVar1 = (uint)(uVar8 >> ((ulong)(uVar4 - 5) & 0x3f));
    }
    bVar3 = (byte)uVar1;
    bVar6 = bVar3;
    if (0x1f < (uVar1 & 0xff)) {
      cVar7 = cVar7 + (char)((int)(char)bVar3 >> 5);
      bVar6 = bVar3 & 0x1f;
    }
    iVar5 = (int)cVar7;
    if ((uint)((long)cVar7 + -3) < 5) {
      lVar9 = *(long *)(&DAT_0213f520 + ((long)cVar7 + -3) * 8);
    }
    else {
      lVar9 = -0x81;
    }
    lVar2 = (long)(char)bVar6;
    if (iVar5 < 8) {
      lVar2 = (long)((int)(char)bVar6 >> (8U - iVar5 & 0x1f));
    }
    uVar8 = lVar9 + (-(ulong)(iVar5 - 3U >> 0x1f) & 0xffffffe000000000 | (ulong)(iVar5 - 3U) << 5) +
            lVar2;
    if ((((ulong)param_1[4] <= uVar8) || (lVar9 = *param_1 + uVar8 * 0x20, lVar9 == 0)) ||
       (lVar9 = FUN_0075f660(lVar9), lVar9 == 0)) {
      uVar8 = -(ulong)(uVar4 >> 0x1f) & 0xfffffffc00000000 | (ulong)uVar4 << 2;
      *(uint *)(param_1[2] + uVar8) =
           *(uint *)(param_1[2] + uVar8) & (1 << (ulong)((int)(char)bVar3 & 0x1f) ^ 0xffffffffU);
      if (*(int *)(param_1[2] + uVar8) == 0) {
        param_1[3] = param_1[3] & (1L << ((long)(int)uVar4 & 0x3fU) ^ 0xffffffffffffffffU);
        return;
      }
    }
  }
  return;
}


