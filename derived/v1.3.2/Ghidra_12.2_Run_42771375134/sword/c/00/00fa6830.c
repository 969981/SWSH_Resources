/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00fa6830; name: FUN_00fa6830
 */


long FUN_00fa6830(undefined8 param_1)

{
  int *piVar1;
  uint *puVar2;
  long lVar3;
  long lVar4;
  uint *puVar5;
  long lVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  
  puVar5 = (uint *)FUN_010295e0();
  lVar6 = FUN_010295e0(param_1);
  if (lVar6 != 0) {
    piVar1 = (int *)((long)puVar5 + (ulong)*puVar5);
    uVar8 = (ulong)*(ushort *)((long)piVar1 + (4 - (long)*piVar1));
    puVar2 = (uint *)((long)piVar1 + uVar8);
    uVar9 = (ulong)*puVar2;
    puVar2 = (uint *)((long)puVar2 + uVar9);
    uVar7 = (ulong)*puVar2;
    if (uVar7 == 0) {
      return 0;
    }
    lVar3 = uVar8 + uVar9 + (ulong)*puVar5;
    lVar6 = 0;
    do {
      uVar8 = (ulong)*(uint *)((long)puVar5 + lVar6 + lVar3 + 4);
      lVar4 = lVar6 + (uVar8 - (long)*(int *)((long)puVar5 + lVar6 + uVar8 + lVar3 + 4)) + lVar3;
      if (((6 < *(ushort *)((long)puVar5 + lVar4 + 4)) &&
          (uVar9 = (ulong)*(ushort *)((long)puVar5 + lVar4 + 10), uVar9 != 0)) &&
         (*(int *)((long)puVar5 + lVar6 + uVar8 + uVar9 + lVar3 + 4) == 1)) {
        puVar5 = (uint *)((long)puVar2 + lVar6 + 4);
        if (puVar5 == puVar2 + uVar7 + 1) {
          return 0;
        }
        return (long)puVar5 + (ulong)*puVar5;
      }
      lVar6 = lVar6 + 4;
    } while (uVar7 * 4 != lVar6);
  }
  return 0;
}


