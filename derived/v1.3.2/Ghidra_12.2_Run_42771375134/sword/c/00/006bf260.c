/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 006bf260; name: FUN_006bf260
 */


int FUN_006bf260(undefined8 param_1,int *param_2)

{
  int *piVar1;
  ushort uVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  long lVar6;
  ulong uVar7;
  uint *puVar8;
  uint *puVar9;
  ushort *puVar10;
  uint uVar11;
  
  lVar6 = (long)*param_2;
  puVar10 = (ushort *)((long)param_2 - lVar6);
  if (*puVar10 < 0xb) {
    iVar4 = 0;
    puVar9 = (uint *)&DAT_00000004;
    uVar11 = uRam0000000000000000;
  }
  else {
    if (((ulong)puVar10[5] == 0) ||
       (puVar9 = (uint *)((long)param_2 + (ulong)puVar10[5]),
       piVar1 = (int *)((long)puVar9 + (ulong)*puVar9), piVar1 == (int *)0x0)) {
      iVar4 = 0;
      uVar2 = *puVar10;
    }
    else {
      if ((*(ushort *)((long)piVar1 - (long)*piVar1) < 7) ||
         (uVar7 = (ulong)((ushort *)((long)piVar1 - (long)*piVar1))[3], uVar7 == 0)) {
        lVar6 = 0;
      }
      else {
        puVar9 = (uint *)((long)piVar1 + uVar7);
        lVar6 = (long)puVar9 + (ulong)*puVar9;
      }
      iVar4 = FUN_006bf3b0(param_1,lVar6);
      lVar6 = (long)*param_2;
      uVar2 = *(ushort *)((long)param_2 - lVar6);
    }
    if (uVar2 < 0xf) {
      puVar9 = (uint *)&DAT_00000004;
      uVar11 = uRam0000000000000000;
    }
    else {
      uVar7 = (ulong)*(ushort *)((long)param_2 + (0xe - lVar6));
      puVar8 = (uint *)0x0;
      if (uVar7 != 0) {
        puVar8 = (uint *)((long)param_2 + uVar7);
        puVar8 = (uint *)((long)puVar8 + (ulong)*puVar8);
      }
      puVar9 = puVar8 + 1;
      uVar11 = *puVar8;
    }
  }
  if (uVar11 == 0) {
    iVar5 = 0;
  }
  else {
    lVar6 = (ulong)uVar11 << 2;
    uVar11 = 0;
    do {
      uVar3 = FUN_006bf260(param_1,(undefined1 *)((long)puVar9 + (ulong)*puVar9));
      if (uVar3 <= uVar11) {
        uVar3 = uVar11;
      }
      lVar6 = lVar6 + -4;
      puVar9 = puVar9 + 1;
      uVar11 = uVar3;
    } while (lVar6 != 0);
    iVar5 = uVar3 << 1;
  }
  return iVar5 + iVar4;
}


