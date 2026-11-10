/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0100be30; name: FUN_0100be30
 */


undefined8 FUN_0100be30(long param_1)

{
  int *piVar1;
  uint *puVar2;
  long lVar3;
  long lVar4;
  ulong uVar5;
  long lVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  uint *puVar10;
  ulong uVar11;
  ulong uVar12;
  ulong uVar13;
  ulong uVar14;
  
  puVar10 = *(uint **)(*(long *)(param_1 + 0x88) + 400);
  piVar1 = (int *)((long)puVar10 + (ulong)*puVar10);
  uVar12 = (ulong)*(ushort *)((long)piVar1 + (4 - (long)*piVar1));
  puVar2 = (uint *)((long)piVar1 + uVar12);
  uVar14 = (ulong)*puVar2;
  puVar2 = (uint *)((long)puVar2 + uVar14);
  if ((ulong)*puVar2 != 0) {
    lVar6 = 0;
    do {
      uVar7 = (ulong)*(uint *)((long)puVar2 + lVar6 + 4);
      uVar8 = (ulong)*(ushort *)
                      ((long)puVar2 +
                      lVar6 + (uVar7 - (long)*(int *)((long)puVar2 + lVar6 + uVar7 + 4)) + 8);
      uVar9 = (ulong)*(uint *)((long)puVar2 + lVar6 + uVar7 + uVar8 + 4);
      lVar3 = uVar7 + uVar8 + uVar9;
      uVar11 = (ulong)*(ushort *)
                       ((long)puVar2 +
                       lVar6 + (lVar3 - *(int *)((long)puVar2 + lVar6 + lVar3 + 4)) + 8);
      uVar13 = (ulong)*(uint *)((long)puVar2 + lVar6 + lVar3 + uVar11 + 4);
      lVar3 = lVar3 + uVar11 + uVar13;
      lVar4 = lVar6 + (lVar3 - *(int *)((long)puVar2 + lVar6 + lVar3 + 4));
      if (((8 < *(ushort *)((long)puVar2 + lVar4 + 4)) &&
          (uVar5 = (ulong)*(ushort *)((long)puVar2 + lVar4 + 0xc), uVar5 != 0)) &&
         (*(long *)((long)puVar2 + lVar6 + lVar3 + uVar5 + 4) == -0x3cefc532a2f929f3)) {
        if ((long)puVar10 + lVar6 + uVar7 + uVar12 + *puVar10 + uVar14 == -4) {
          return 0xcbf29ce484222645;
        }
        uVar12 = (ulong)*(ushort *)((long)puVar2 + lVar4 + 8);
        lVar3 = uVar12 + *(uint *)((long)puVar2 +
                                  lVar6 + uVar12 + uVar7 + uVar8 + uVar9 + uVar11 + uVar13 + 4);
        lVar4 = lVar6 + (lVar3 - *(int *)((long)puVar2 +
                                         lVar6 + lVar3 + uVar7 + uVar8 + uVar9 + uVar11 + uVar13 + 4
                                         )) + uVar7 + uVar8 + uVar9 + uVar11 + uVar13;
        if (*(ushort *)((long)puVar2 + lVar4 + 4) < 0x17) {
          return 0;
        }
        uVar12 = (ulong)*(ushort *)((long)puVar2 + lVar4 + 0x1a);
        if (uVar12 == 0) {
          return 0;
        }
        return *(undefined8 *)
                ((long)puVar2 + lVar6 + lVar3 + uVar12 + uVar7 + uVar8 + uVar9 + uVar11 + uVar13 + 4
                );
      }
      lVar6 = lVar6 + 4;
    } while ((ulong)*puVar2 * 4 != lVar6);
  }
  return 0xcbf29ce484222645;
}


