/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0040ecf0; name: FUN_0040ecf0
 */


int FUN_0040ecf0(long param_1,int param_2)

{
  int *piVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  bool bVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  ulong uVar9;
  int iVar10;
  int in_w15;
  
  lVar7 = *(long *)(param_1 + 0xe8);
  uVar3 = *(int *)(param_1 + 0xf0) - 1;
  piVar1 = (int *)(lVar7 + 4);
  if (1 < uVar3) {
    uVar9 = 1;
    bVar5 = true;
    iVar10 = -param_2;
    if (-param_2 < 0) {
      iVar10 = param_2;
    }
    lVar8 = lVar7;
    lVar6 = lVar7;
    do {
      iVar2 = iVar10;
      if (!bVar5) {
        iVar2 = in_w15;
      }
      iVar4 = *(int *)(lVar6 + 0x14) - (*piVar1 + param_2);
      iVar10 = -iVar4;
      if (-1 < iVar4) {
        iVar10 = iVar4;
      }
      bVar5 = lVar8 == 0 || iVar10 < iVar2;
      uVar9 = uVar9 + 1;
      lVar7 = lVar6 + 0x10;
      if (lVar8 != 0 && iVar10 >= iVar2) {
        lVar7 = lVar8;
      }
      lVar8 = lVar7;
      in_w15 = iVar2;
      lVar6 = lVar6 + 0x10;
    } while (uVar9 < uVar3);
  }
  return *(int *)(lVar7 + 4) - *piVar1;
}


