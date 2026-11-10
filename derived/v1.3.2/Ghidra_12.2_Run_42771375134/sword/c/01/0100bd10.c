/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0100bd10; name: FUN_0100bd10
 */


long FUN_0100bd10(long param_1)

{
  int *piVar1;
  uint *puVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  ulong uVar7;
  long lVar8;
  uint *puVar9;
  ulong uVar10;
  ulong uVar11;
  
  puVar9 = *(uint **)(*(long *)(param_1 + 0x88) + 400);
  piVar1 = (int *)((long)puVar9 + (ulong)*puVar9);
  uVar10 = (ulong)*(ushort *)((long)piVar1 + (4 - (long)*piVar1));
  puVar2 = (uint *)((long)piVar1 + uVar10);
  uVar11 = (ulong)*puVar2;
  uVar7 = (ulong)*(uint *)((long)puVar2 + uVar11);
  if (uVar7 == 0) {
    return 0;
  }
  lVar3 = *puVar9 + uVar11 + uVar10;
  lVar8 = 0;
  while( true ) {
    uVar10 = (ulong)*(uint *)((long)puVar9 + lVar8 + lVar3 + 4);
    lVar6 = lVar8 + uVar10 + lVar3;
    lVar4 = uVar10 + *(ushort *)
                      ((long)puVar9 +
                      lVar8 + (uVar10 - (long)*(int *)((long)puVar9 + lVar6 + 4)) + lVar3 + 8);
    lVar4 = lVar4 + (ulong)*(uint *)((long)puVar9 + lVar8 + lVar4 + lVar3 + 4);
    lVar4 = lVar4 + (ulong)*(ushort *)
                            ((long)puVar9 +
                            lVar8 + (lVar4 - *(int *)((long)puVar9 + lVar8 + lVar4 + lVar3 + 4)) +
                                    lVar3 + 8);
    lVar4 = lVar4 + (ulong)*(uint *)((long)puVar9 + lVar8 + lVar4 + lVar3 + 4);
    lVar5 = lVar8 + (lVar4 - *(int *)((long)puVar9 + lVar8 + lVar4 + lVar3 + 4)) + lVar3;
    if (((8 < *(ushort *)((long)puVar9 + lVar5 + 4)) &&
        (uVar10 = (ulong)*(ushort *)((long)puVar9 + lVar5 + 0xc), uVar10 != 0)) &&
       (*(long *)((long)puVar9 + lVar8 + lVar4 + uVar10 + lVar3 + 4) == -0x3cefc532a2f929f3)) break;
    lVar8 = lVar8 + 4;
    if (uVar7 * 4 == lVar8) {
      return 0;
    }
  }
  return (long)puVar9 + lVar6 + 4;
}


