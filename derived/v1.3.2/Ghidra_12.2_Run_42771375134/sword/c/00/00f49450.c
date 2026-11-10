/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00f49450; name: FUN_00f49450
 */


long FUN_00f49450(long param_1,long *param_2)

{
  int *piVar1;
  uint *puVar2;
  long lVar3;
  long lVar4;
  ulong uVar5;
  long lVar6;
  uint *puVar7;
  ulong uVar8;
  ulong uVar9;
  
  puVar7 = *(uint **)(*(long *)(param_1 + 0x68) + 400);
  piVar1 = (int *)((long)puVar7 + (ulong)*puVar7);
  uVar8 = (ulong)*(ushort *)((long)piVar1 + (4 - (long)*piVar1));
  puVar2 = (uint *)((long)piVar1 + uVar8);
  uVar9 = (ulong)*puVar2;
  puVar2 = (uint *)((long)puVar2 + uVar9);
  uVar5 = (ulong)*puVar2;
  if (uVar5 == 0) {
    return 0;
  }
  lVar3 = uVar8 + uVar9 + (ulong)*puVar7;
  lVar6 = 0;
  do {
    uVar8 = (ulong)*(uint *)((long)puVar7 + lVar6 + lVar3 + 4);
    lVar4 = lVar6 + (uVar8 - (long)*(int *)((long)puVar7 + lVar6 + uVar8 + lVar3 + 4)) + lVar3;
    if ((*(ushort *)((long)puVar7 + lVar4 + 4) < 5) ||
       (uVar9 = (ulong)*(ushort *)((long)puVar7 + lVar4 + 8), uVar9 == 0)) {
      if (*param_2 == 0) goto LAB_00f49504;
    }
    else if (*(long *)((long)puVar7 + lVar6 + uVar8 + uVar9 + lVar3 + 4) == *param_2) {
LAB_00f49504:
      puVar7 = (uint *)((long)puVar2 + lVar6 + 4);
      if (puVar7 == puVar2 + uVar5 + 1) {
        return 0;
      }
      return (long)puVar7 + (ulong)*puVar7;
    }
    lVar6 = lVar6 + 4;
    if (uVar5 * 4 == lVar6) {
      return 0;
    }
  } while( true );
}


