/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00c97360; name: FUN_00c97360
 */


long FUN_00c97360(undefined8 param_1,int param_2,int param_3)

{
  int *piVar1;
  uint *puVar2;
  long lVar3;
  uint uVar4;
  ushort uVar5;
  long lVar6;
  uint *puVar7;
  long lVar8;
  ulong uVar9;
  long lVar10;
  ulong uVar11;
  int iVar12;
  
  puVar7 = (uint *)FUN_010295e0();
  piVar1 = (int *)((long)puVar7 + (ulong)*puVar7);
  uVar9 = (ulong)*(ushort *)((long)piVar1 + (4 - (long)*piVar1));
  puVar2 = (uint *)((long)piVar1 + uVar9);
  uVar11 = (ulong)*puVar2;
  puVar2 = (uint *)((long)puVar2 + uVar11);
  uVar4 = *puVar2;
  if (uVar4 == 0) {
    return 0;
  }
  if (param_2 == -1) {
    lVar8 = 0;
    do {
      uVar9 = (ulong)*(uint *)((long)puVar2 + lVar8 + 4);
      lVar10 = (long)puVar2 + lVar8 + uVar9;
      lVar3 = lVar8 + (uVar9 - (long)*(int *)(lVar10 + 4));
      if ((*(ushort *)((long)puVar2 + lVar3 + 4) < 9) ||
         (uVar11 = (ulong)*(ushort *)((long)puVar2 + lVar3 + 0xc), uVar11 == 0)) {
        if (param_3 == 0) goto LAB_00c974ec;
      }
      else if (*(int *)((long)puVar2 + lVar8 + uVar9 + uVar11 + 4) == param_3) goto LAB_00c974ec;
      lVar8 = lVar8 + 4;
      if ((ulong)uVar4 * 4 == lVar8) {
        return 0;
      }
    } while( true );
  }
  lVar3 = *puVar7 + uVar11 + uVar9;
  lVar8 = 0;
  do {
    uVar9 = (ulong)*(uint *)((long)puVar7 + lVar8 + lVar3 + 4);
    lVar10 = (long)puVar7 + lVar8 + uVar9 + lVar3;
    lVar6 = lVar8 + (uVar9 - (long)*(int *)(lVar10 + 4)) + lVar3;
    uVar5 = *(ushort *)((long)puVar7 + lVar6 + 4);
    if (uVar5 < 0x2d) {
      if (param_2 == 0) goto LAB_00c97408;
    }
    else {
      uVar11 = (ulong)*(ushort *)((long)puVar7 + lVar6 + 0x30);
      iVar12 = 0;
      if (uVar11 != 0) {
        iVar12 = *(int *)((long)puVar7 + lVar8 + uVar9 + uVar11 + lVar3 + 4);
      }
      if (iVar12 == param_2) {
LAB_00c97408:
        if ((uVar5 < 9) || (uVar11 = (ulong)*(ushort *)((long)puVar7 + lVar6 + 0xc), uVar11 == 0)) {
          if (param_3 == 0) {
LAB_00c974ec:
            return lVar10 + 4;
          }
        }
        else if (*(int *)((long)puVar7 + lVar8 + uVar9 + uVar11 + lVar3 + 4) == param_3)
        goto LAB_00c974ec;
      }
    }
    lVar8 = lVar8 + 4;
    if ((ulong)uVar4 * 4 == lVar8) {
      return 0;
    }
  } while( true );
}


