/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00fa5e50; name: FUN_00fa5e50
 */


long FUN_00fa5e50(undefined8 param_1,long *param_2)

{
  int *piVar1;
  uint *puVar2;
  long lVar3;
  ushort uVar4;
  long lVar5;
  uint *puVar6;
  ulong uVar7;
  long lVar8;
  ulong uVar9;
  ulong uVar10;
  long lVar11;
  
  puVar6 = (uint *)FUN_010295e0();
  piVar1 = (int *)((long)puVar6 + (ulong)*puVar6);
  uVar9 = (ulong)*(ushort *)((long)piVar1 + (4 - (long)*piVar1));
  puVar2 = (uint *)((long)piVar1 + uVar9);
  uVar10 = (ulong)*puVar2;
  puVar2 = (uint *)((long)puVar2 + uVar10);
  uVar7 = (ulong)*puVar2;
  if (uVar7 == 0) {
    return 0;
  }
  lVar3 = *puVar6 + uVar10 + uVar9;
  lVar8 = 0;
  do {
    uVar9 = (ulong)*(uint *)((long)puVar6 + lVar8 + lVar3 + 4);
    lVar5 = lVar8 + (uVar9 - (long)*(int *)((long)puVar6 + lVar8 + uVar9 + lVar3 + 4)) + lVar3;
    uVar4 = *(ushort *)((long)puVar6 + lVar5 + 4);
    if (4 < uVar4) {
      uVar10 = (ulong)*(ushort *)((long)puVar6 + lVar5 + 8);
      lVar11 = 0;
      if (uVar10 != 0) {
        lVar11 = *(long *)((long)puVar6 + lVar8 + uVar9 + uVar10 + lVar3 + 4);
      }
      if (((6 < uVar4 && lVar11 == *param_2) &&
          (uVar10 = (ulong)*(ushort *)((long)puVar6 + lVar5 + 10), uVar10 != 0)) &&
         (*(int *)((long)puVar6 + lVar8 + uVar9 + uVar10 + lVar3 + 4) == 1)) {
        puVar6 = (uint *)((long)puVar2 + lVar8 + 4);
        if (puVar6 == puVar2 + uVar7 + 1) {
          return 0;
        }
        return (long)puVar6 + (ulong)*puVar6;
      }
    }
    lVar8 = lVar8 + 4;
    if (uVar7 * 4 == lVar8) {
      return 0;
    }
  } while( true );
}


