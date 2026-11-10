/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00fa5d40; name: FUN_00fa5d40
 */


int FUN_00fa5d40(undefined8 param_1,long *param_2)

{
  int *piVar1;
  uint *puVar2;
  long lVar3;
  long lVar4;
  uint *puVar5;
  ulong uVar6;
  long lVar7;
  int iVar8;
  ulong uVar9;
  ulong uVar10;
  
  puVar5 = (uint *)FUN_010295e0();
  piVar1 = (int *)((long)puVar5 + (ulong)*puVar5);
  uVar9 = (ulong)*(ushort *)((long)piVar1 + (4 - (long)*piVar1));
  puVar2 = (uint *)((long)piVar1 + uVar9);
  uVar10 = (ulong)*puVar2;
  uVar6 = (ulong)*(uint *)((long)puVar2 + uVar10);
  if (uVar6 == 0) {
    return -1;
  }
  lVar3 = *puVar5 + uVar10 + uVar9;
  lVar7 = 0;
  iVar8 = 0;
  do {
    uVar9 = (ulong)*(uint *)((long)puVar5 + lVar7 + lVar3 + 4);
    lVar4 = lVar7 + (uVar9 - (long)*(int *)((long)puVar5 + lVar7 + uVar9 + lVar3 + 4)) + lVar3;
    if (((6 < *(ushort *)((long)puVar5 + lVar4 + 4)) &&
        (uVar10 = (ulong)*(ushort *)((long)puVar5 + lVar4 + 10), uVar10 != 0)) &&
       (*(int *)((long)puVar5 + lVar7 + uVar9 + uVar10 + lVar3 + 4) == 1)) {
      uVar10 = (ulong)*(ushort *)((long)puVar5 + lVar4 + 8);
      if (uVar10 == 0) {
        if (*param_2 == 0) {
          return iVar8;
        }
      }
      else if (*(long *)((long)puVar5 + lVar7 + uVar9 + uVar10 + lVar3 + 4) == *param_2) {
        return iVar8;
      }
      iVar8 = iVar8 + 1;
    }
    lVar7 = lVar7 + 4;
  } while (uVar6 * 4 != lVar7);
  return -1;
}


