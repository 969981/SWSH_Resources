/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 004a7b10; name: FUN_004a7b10
 */


int FUN_004a7b10(long param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  byte *pbVar4;
  byte *pbVar5;
  int iVar6;
  ulong uVar7;
  long lVar8;
  byte local_4 [4];
  
  local_4[0] = 1;
  local_4[1] = 0;
  local_4[2] = 0;
  local_4[3] = 0;
  pbVar4 = *(byte **)(param_1 + 0x90);
  pbVar5 = pbVar4;
  if (pbVar4 != (byte *)0x0) {
    uVar7 = 0;
    pbVar5 = pbVar4 + ((ulong)(*pbVar4 + 4) & 0x1fc);
    do {
      if (pbVar4[uVar7 + 1] == 0x3a) goto LAB_004a7b60;
      uVar7 = uVar7 + 1;
      pbVar5 = pbVar5 + 4;
    } while (uVar7 < *pbVar4);
    pbVar5 = (byte *)0x0;
  }
LAB_004a7b60:
  pbVar4 = local_4;
  if (pbVar5 != (byte *)0x0) {
    pbVar4 = pbVar5;
  }
  iVar1 = *(int *)pbVar4;
  pbVar5 = *(byte **)(param_1 + 0xa0);
  if (pbVar5 != (byte *)0x0) {
    uVar7 = 0;
    pbVar4 = pbVar5 + ((ulong)(*pbVar5 + 4) & 0x1fc);
    do {
      if (pbVar5[uVar7 + 1] == 0x3a) {
        if (pbVar4 == (byte *)0x0) {
          return iVar1;
        }
        iVar3 = *(int *)pbVar4;
        iVar2 = *(int *)(pbVar4 + 4) - iVar3;
        iVar6 = 0;
        if (iVar2 != 0) {
          lVar8 = *(long *)PTR_DAT_02712b80 * 0x5851f42d4c957f2d + 1;
          *(long *)PTR_DAT_02712b80 = lVar8;
          iVar3 = *(int *)pbVar4;
          iVar6 = (int)((double)(uint)((ulong)lVar8 >> 0x21) * (double)iVar2 * DAT_01cd53a0 + 0.5);
        }
        return iVar3 + iVar1 + iVar6;
      }
      uVar7 = uVar7 + 1;
      pbVar4 = pbVar4 + 8;
    } while (uVar7 < *pbVar5);
  }
  return iVar1;
}


