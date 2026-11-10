/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00717310; name: FUN_00717310
 */


void FUN_00717310(long param_1,uint *param_2)

{
  uint *puVar1;
  int *piVar2;
  uint *puVar3;
  long lVar4;
  long lVar5;
  uint uVar6;
  long *plVar7;
  ulong uVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  ulong uVar12;
  ulong uVar13;
  long *plVar14;
  uint *puVar15;
  long *plVar16;
  undefined4 uVar17;
  
  if ((param_2 != (uint *)0x0) && (uVar8 = (ulong)*param_2, *param_2 != 0)) {
    plVar7 = *(long **)(param_1 + 0x2c8);
    lVar11 = (long)plVar7 - *(long *)(param_1 + 0x2c0) >> 3;
    uVar12 = lVar11 * 0x6db6db6db6db6db7;
    if (uVar12 < uVar8) {
      FUN_00720d70((long *)(param_1 + 0x2c0),uVar8 + lVar11 * -0x6db6db6db6db6db7);
      uVar6 = *param_2;
    }
    else {
      if (uVar12 != uVar8) {
        plVar14 = (long *)(*(long *)(param_1 + 0x2c0) + uVar8 * 0x38);
        if (plVar14 != plVar7) {
          do {
            plVar16 = plVar7 + -7;
            lVar11 = *plVar16;
            if (lVar11 != 0) {
              plVar7[-6] = lVar11;
              (**(code **)(*(long *)plVar7[-4] + 0x18))
                        ((long *)plVar7[-4],lVar11,plVar7[-5] - lVar11,4);
            }
            plVar7 = plVar16;
          } while (plVar14 != plVar16);
        }
        *(long **)(param_1 + 0x2c8) = plVar14;
      }
      uVar6 = *param_2;
    }
    if (uVar6 != 0) {
      puVar15 = param_2 + 1;
      puVar1 = puVar15 + uVar6;
      lVar11 = 0;
      param_2 = param_2 + 2;
      do {
        uVar6 = *puVar15;
        piVar2 = (int *)((long)puVar15 + (ulong)uVar6);
        uVar17 = 0;
        if (6 < *(ushort *)((long)piVar2 - (long)*piVar2)) {
          uVar8 = (ulong)((ushort *)((long)piVar2 - (long)*piVar2))[3];
          uVar17 = 0;
          if (uVar8 != 0) {
            uVar17 = *(undefined4 *)((long)piVar2 + uVar8);
          }
        }
        plVar7 = (long *)(*(long *)(param_1 + 0x2c0) + lVar11 * 0x38);
        *(undefined4 *)(plVar7 + 6) = uVar17;
        puVar3 = (uint *)((long)piVar2 + (ulong)*(ushort *)((long)piVar2 + (4 - (long)*piVar2)));
        uVar8 = (ulong)*(uint *)((long)puVar3 + (ulong)*puVar3);
        uVar12 = plVar7[1] - *plVar7 >> 3;
        if (uVar12 < uVar8) {
          FUN_00721230(plVar7,uVar8 - uVar12);
        }
        else if (uVar12 != uVar8) {
          plVar7[1] = *plVar7 + uVar8 * 8;
        }
        uVar12 = (ulong)*(ushort *)((long)piVar2 + (4 - (long)*piVar2));
        puVar3 = (uint *)((long)piVar2 + uVar12);
        uVar13 = (ulong)*puVar3;
        uVar8 = (ulong)*(uint *)((long)puVar3 + uVar13);
        if (uVar8 != 0) {
          lVar4 = uVar6 + uVar13 + uVar12;
          lVar9 = 0;
          lVar10 = 0;
          do {
            uVar12 = (ulong)*(uint *)((long)param_2 + lVar9 + lVar4);
            lVar5 = lVar9 + (uVar12 - (long)*(int *)((long)param_2 + lVar9 + uVar12 + lVar4));
            if (*(ushort *)((long)param_2 + lVar5 + lVar4) < 5) {
              uVar17 = 0;
            }
            else {
              uVar13 = (ulong)*(ushort *)((long)param_2 + lVar5 + lVar4 + 4);
              uVar17 = 0;
              if (uVar13 != 0) {
                uVar17 = *(undefined4 *)((long)param_2 + lVar9 + uVar12 + uVar13 + lVar4);
              }
            }
            *(undefined4 *)(*plVar7 + lVar10) = uVar17;
            lVar5 = lVar9 + (uVar12 - (long)*(int *)((long)param_2 + lVar9 + uVar12 + lVar4));
            uVar17 = 0;
            if (6 < *(ushort *)((long)param_2 + lVar5 + lVar4)) {
              uVar13 = (ulong)*(ushort *)((long)param_2 + lVar5 + lVar4 + 6);
              uVar17 = 0;
              if (uVar13 != 0) {
                uVar17 = *(undefined4 *)((long)param_2 + lVar9 + uVar12 + uVar13 + lVar4);
              }
            }
            *(undefined4 *)(*plVar7 + lVar10 + 4) = uVar17;
            piVar2 = (int *)(*plVar7 + lVar10);
            lVar9 = lVar9 + 4;
            lVar10 = lVar10 + 8;
            *(int *)(*(long *)(param_1 + 0x260) + (long)*piVar2 * 0x60 + 0x58) = (int)lVar11;
          } while (uVar8 * 4 != lVar9);
        }
        puVar15 = puVar15 + 1;
        lVar11 = lVar11 + 1;
        param_2 = param_2 + 1;
      } while (puVar15 != puVar1);
    }
  }
  return;
}


