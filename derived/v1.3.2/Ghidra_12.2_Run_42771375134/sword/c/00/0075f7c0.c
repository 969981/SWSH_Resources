/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0075f7c0; name: FUN_0075f7c0
 */


void FUN_0075f7c0(long *param_1,undefined8 param_2)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  char cVar4;
  ulong uVar5;
  long lVar6;
  byte bVar7;
  byte bVar8;
  
  FUN_00760150();
  uVar5 = FUN_0075f230(param_2);
  if (uVar5 == 0) {
    return;
  }
  cVar4 = FUN_00761750();
  uVar2 = (uint)cVar4;
  uVar5 = uVar5 & (uint)~(-1 << (ulong)(uVar2 & 0x1f));
  uVar1 = (uint)(uVar5 << ((ulong)(5 - uVar2) & 0x3f));
  if (4 < (int)uVar2) {
    uVar1 = (uint)(uVar5 >> ((ulong)(uVar2 - 5) & 0x3f));
  }
  bVar8 = (byte)uVar1;
  bVar7 = bVar8;
  if (0x1f < (uVar1 & 0xff)) {
    cVar4 = cVar4 + ((char)bVar8 >> 5);
    bVar7 = bVar8 & 0x1f;
  }
  iVar3 = (int)cVar4;
  uVar5 = -(ulong)(iVar3 - 3U >> 0x1f) & 0xffffffe000000000 | (ulong)(iVar3 - 3U) << 5;
  if ((uint)((long)cVar4 + -3) < 5) {
    lVar6 = *(long *)(&DAT_0213f520 + ((long)cVar4 + -3) * 8) + uVar5;
    if (iVar3 < 8) goto LAB_0075f89c;
LAB_0075f870:
    uVar5 = lVar6 + (char)bVar7;
    if (uVar5 < (ulong)param_1[4]) goto LAB_0075f8c0;
  }
  else {
    lVar6 = uVar5 - 0x81;
    if (7 < iVar3) goto LAB_0075f870;
LAB_0075f89c:
    uVar5 = lVar6 + ((int)(char)bVar7 >> (8U - iVar3 & 0x1f));
    if (uVar5 < (ulong)param_1[4]) {
LAB_0075f8c0:
      lVar6 = *param_1 + uVar5 * 0x20;
      goto LAB_0075f8c8;
    }
  }
  lVar6 = 0;
LAB_0075f8c8:
  FUN_0075f620(lVar6,param_2);
  param_1[3] = param_1[3] | 1L << ((long)(int)uVar2 & 0x3fU);
  uVar5 = -(ulong)(uVar2 >> 0x1f) & 0xfffffffc00000000 | (ulong)uVar2 << 2;
  *(uint *)(param_1[2] + uVar5) =
       *(uint *)(param_1[2] + uVar5) | 1 << (ulong)((int)(char)bVar8 & 0x1f);
  return;
}


