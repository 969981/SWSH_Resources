/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0100d2b0; name: FUN_0100d2b0
 */


undefined8 FUN_0100d2b0(long param_1,undefined4 param_2)

{
  int *piVar1;
  uint *puVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  undefined8 uVar7;
  ulong uVar8;
  ulong uVar9;
  long *plVar10;
  long lVar11;
  ulong uVar12;
  uint *puVar13;
  long *plVar14;
  
  lVar6 = FUN_01028080(param_2);
  plVar14 = *(long **)(param_1 + 0x3d8);
  do {
    if (plVar14 == (long *)0x0) {
      return 0;
    }
    uVar7 = FUN_00fc6b70(plVar14 + 4);
    if (-1 < (int)uVar7) {
      uVar9 = *(ulong *)(param_1 + 0x3b8);
      uVar8 = plVar14[4];
      if ((uVar9 - 1 & uVar9) == 0) {
        plVar10 = *(long **)(*(long *)(param_1 + 0x3b0) + (uVar9 - 1 & uVar8) * 8);
        do {
          do {
            plVar10 = (long *)*plVar10;
          } while (uVar8 != plVar10[1]);
        } while (plVar10[2] != uVar8);
      }
      else {
        uVar12 = uVar8;
        if (uVar9 <= uVar8) {
          uVar12 = 0;
          if (uVar9 != 0) {
            uVar12 = uVar8 / uVar9;
          }
          uVar12 = uVar8 - uVar12 * uVar9;
        }
        plVar10 = *(long **)(*(long *)(param_1 + 0x3b0) + uVar12 * 8);
        do {
          do {
            plVar10 = (long *)*plVar10;
          } while (uVar8 != plVar10[1]);
        } while (plVar10[2] != uVar8);
      }
      puVar13 = *(uint **)(*(long *)((long)plVar10 + 0x38) + 400);
      piVar1 = (int *)((long)puVar13 + (ulong)*puVar13);
      uVar9 = (ulong)*(ushort *)((long)piVar1 + (4 - (long)*piVar1));
      puVar2 = (uint *)((long)piVar1 + uVar9);
      uVar12 = (ulong)*puVar2;
      uVar8 = (ulong)*(uint *)((long)puVar2 + uVar12);
      if (uVar8 != 0) {
        lVar3 = *puVar13 + uVar12 + uVar9;
        lVar11 = 0;
        do {
          uVar9 = (ulong)*(uint *)((long)puVar13 + lVar11 + lVar3 + 4);
          lVar4 = uVar9 + *(ushort *)
                           ((long)puVar13 +
                           lVar11 + (uVar9 - (long)*(int *)((long)puVar13 +
                                                           lVar11 + uVar9 + lVar3 + 4)) + lVar3 + 8)
          ;
          lVar4 = lVar4 + (ulong)*(uint *)((long)puVar13 + lVar11 + lVar4 + lVar3 + 4);
          lVar5 = lVar11 + (lVar4 - *(int *)((long)puVar13 + lVar11 + lVar4 + lVar3 + 4)) + lVar3;
          if ((*(ushort *)((long)puVar13 + lVar5 + 4) < 0x13) ||
             (uVar9 = (ulong)*(ushort *)((long)puVar13 + lVar5 + 0x16), uVar9 == 0)) {
            if (lVar6 == 0) {
              return uVar7;
            }
          }
          else if (*(long *)((long)puVar13 + lVar11 + lVar4 + uVar9 + lVar3 + 4) == lVar6) {
            return uVar7;
          }
          lVar11 = lVar11 + 4;
        } while (uVar8 * 4 != lVar11);
      }
    }
    plVar14 = (long *)*plVar14;
  } while( true );
}


