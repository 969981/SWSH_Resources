/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0050b620; name: FUN_0050b620
 */


uint FUN_0050b620(long *param_1,long *param_2)

{
  int iVar1;
  int iVar2;
  byte bVar3;
  char cVar4;
  ushort uVar5;
  uint uVar6;
  ulong uVar7;
  ulong uVar8;
  long lVar9;
  uint uVar10;
  ulong uVar11;
  
  uVar8 = (ulong)(int)(*(uint *)(PTR_DAT_02713940 + 0x60) &
                      (uint)(*(ulong *)*param_2 >> ((ulong)*(byte *)(param_2 + 1) & 0x3f)));
  if (*(char *)((long)param_1 + 0x1b) == '\x02') {
    uVar5 = *(ushort *)(*param_1 + (*(ushort *)(param_1 + 3) & uVar8) * 2);
    bVar3 = *(byte *)(param_1[1] + (*(ushort *)(param_1 + 3) & uVar8));
    uVar7 = (ulong)bVar3;
    uVar6 = (uint)bVar3;
    if ((short)uVar5 < 0) {
      uVar10 = uVar5 & 0x7fff;
    }
    else {
      uVar8 = uVar8 >> (uVar7 & 0x3f);
      lVar9 = *param_1 + (ulong)uVar5 * 2;
      uVar11 = 0;
      do {
        lVar9 = lVar9 + (ulong)((uint)uVar11 & 0xff) * 2;
        uVar11 = uVar8 & 1;
        uVar8 = uVar8 >> 1;
        cVar4 = *(char *)(lVar9 + uVar11);
        uVar11 = (ulong)cVar4;
        uVar6 = (int)uVar7 + 1;
        uVar7 = (ulong)uVar6;
      } while (-1 < cVar4);
      uVar10 = (uint)*(ushort *)(lVar9 + (uVar11 & 0x7f) * 2);
    }
  }
  else if (*(char *)((long)param_1 + 0x1b) == '\x01') {
    uVar5 = *(ushort *)(*param_1 + (*(ushort *)(param_1 + 3) & uVar8) * 2);
    bVar3 = *(byte *)(param_1[1] + (*(ushort *)(param_1 + 3) & uVar8));
    uVar7 = (ulong)bVar3;
    uVar6 = (uint)bVar3;
    if ((short)uVar5 < 0) {
      uVar10 = uVar5 & 0x7fff;
    }
    else {
      lVar9 = *param_1 + (ulong)uVar5 * 2;
      uVar10 = 0;
      uVar8 = uVar8 >> (uVar7 & 0x3f);
      do {
        lVar9 = lVar9 + (ulong)(uVar10 & 0xff) * 2;
        uVar11 = uVar8 & 1;
        uVar8 = uVar8 >> 1;
        uVar10 = (uint)*(char *)(lVar9 + uVar11);
        uVar6 = (int)uVar7 + 1;
        uVar7 = (ulong)uVar6;
      } while (-1 < (int)uVar10);
      uVar10 = uVar10 & 0x7f;
    }
  }
  else {
    uVar6 = 0;
    uVar10 = 0;
  }
  iVar1 = uVar6 + *(byte *)(param_2 + 1);
  iVar2 = iVar1 >> 5;
  *(byte *)(param_2 + 1) = (byte)iVar1 & 0x1f;
  *(int *)((long)param_2 + 0xc) = *(int *)((long)param_2 + 0xc) - iVar2;
  *param_2 = *param_2 + (long)iVar2 * 4;
  return uVar10;
}


