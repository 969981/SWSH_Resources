/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00fa5a30; name: FUN_00fa5a30
 */


long FUN_00fa5a30(undefined8 param_1,long *param_2,uint param_3)

{
  int *piVar1;
  long lVar2;
  long lVar3;
  uint *puVar4;
  uint *puVar5;
  ulong uVar6;
  long lVar7;
  ulong uVar8;
  ulong uVar9;
  
  puVar4 = (uint *)FUN_010295e0();
  piVar1 = (int *)((long)puVar4 + (ulong)*puVar4);
  uVar8 = (ulong)*(ushort *)((long)piVar1 + (4 - (long)*piVar1));
  puVar5 = (uint *)((long)piVar1 + uVar8);
  uVar9 = (ulong)*puVar5;
  puVar5 = (uint *)((long)puVar5 + uVar9);
  uVar6 = (ulong)*puVar5;
  if (uVar6 == 0) {
    return 0;
  }
  lVar2 = uVar8 + uVar9 + (ulong)*puVar4;
  lVar7 = 0;
  do {
    uVar8 = (ulong)*(uint *)((long)puVar4 + lVar7 + lVar2 + 4);
    lVar3 = lVar7 + (uVar8 - (long)*(int *)((long)puVar4 + lVar7 + uVar8 + lVar2 + 4)) + lVar2;
    if ((*(ushort *)((long)puVar4 + lVar3 + 4) < 5) ||
       (uVar9 = (ulong)*(ushort *)((long)puVar4 + lVar3 + 8), uVar9 == 0)) {
      if (*param_2 == 0) goto LAB_00fa5af4;
    }
    else if (*(long *)((long)puVar4 + lVar7 + uVar8 + uVar9 + lVar2 + 4) == *param_2) {
LAB_00fa5af4:
      puVar4 = (uint *)((long)puVar5 + lVar7 + 4);
      if (puVar4 == puVar5 + uVar6 + 1) {
        return 0;
      }
      piVar1 = (int *)((long)puVar4 + (ulong)*puVar4);
      puVar5 = (uint *)((long)piVar1 + (ulong)*(ushort *)((long)piVar1 + (6 - (long)*piVar1)));
      puVar5 = (uint *)((long)puVar5 + (ulong)*puVar5);
      if (param_3 < *puVar5) {
        puVar5 = puVar5 + (ulong)param_3 + 1;
        return (long)puVar5 + (ulong)*puVar5;
      }
      return 0;
    }
    lVar7 = lVar7 + 4;
    if (uVar6 * 4 == lVar7) {
      return 0;
    }
  } while( true );
}


