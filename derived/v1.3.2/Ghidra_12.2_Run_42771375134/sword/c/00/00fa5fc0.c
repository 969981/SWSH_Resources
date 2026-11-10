/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00fa5fc0; name: FUN_00fa5fc0
 */


long FUN_00fa5fc0(undefined8 param_1,int param_2,int param_3)

{
  int *piVar1;
  uint *puVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  uint *puVar6;
  ulong uVar7;
  long lVar8;
  int iVar9;
  ulong uVar10;
  ulong uVar11;
  
  puVar6 = (uint *)FUN_010295e0();
  piVar1 = (int *)((long)puVar6 + (ulong)*puVar6);
  uVar10 = (ulong)*(ushort *)((long)piVar1 + (4 - (long)*piVar1));
  puVar2 = (uint *)((long)piVar1 + uVar10);
  uVar11 = (ulong)*puVar2;
  uVar7 = (ulong)*(uint *)((long)puVar2 + uVar11);
  if (uVar7 == 0) {
    return 0;
  }
  lVar3 = *puVar6 + uVar11 + uVar10;
  lVar8 = 0;
  iVar9 = 0;
  do {
    uVar10 = (ulong)*(uint *)((long)puVar6 + lVar8 + lVar3 + 4);
    lVar4 = lVar8 + uVar10 + lVar3;
    lVar5 = lVar8 + (uVar10 - (long)*(int *)((long)puVar6 + lVar4 + 4)) + lVar3;
    if ((*(ushort *)((long)puVar6 + lVar5 + 4) < 7) ||
       (uVar11 = (ulong)*(ushort *)((long)puVar6 + lVar5 + 10), uVar11 == 0)) {
      if (param_2 == 0) goto LAB_00fa6060;
    }
    else if (*(int *)((long)puVar6 + lVar8 + uVar10 + uVar11 + lVar3 + 4) == param_2) {
LAB_00fa6060:
      if (iVar9 == param_3) {
        return (long)puVar6 + lVar4 + 4;
      }
      iVar9 = iVar9 + 1;
    }
    lVar8 = lVar8 + 4;
    if (uVar7 * 4 == lVar8) {
      return 0;
    }
  } while( true );
}


