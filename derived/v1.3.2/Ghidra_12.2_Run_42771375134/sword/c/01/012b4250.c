/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 012b4250; name: FUN_012b4250
 */


void FUN_012b4250(undefined8 *param_1,undefined8 *param_2,long *param_3)

{
  int *piVar1;
  int *piVar2;
  uint uVar3;
  uint uVar4;
  undefined4 uVar5;
  long lVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  int *piVar11;
  uint *puVar12;
  ushort *puVar13;
  ulong uVar14;
  ushort *puVar15;
  ulong uVar16;
  long lVar17;
  uint uVar18;
  ulong uVar19;
  long lVar20;
  
  piVar11 = (int *)*param_2;
  if (piVar11 != (int *)0x0) {
    uVar3 = *(uint *)(param_2 + 1);
    if (uVar3 == 0xffffffff) {
      *param_1 = 0;
      *(undefined4 *)(param_1 + 1) = 0xffffffff;
      return;
    }
    puVar15 = (ushort *)((long)piVar11 - (long)*piVar11);
    if (4 < *puVar15) {
      uVar14 = (ulong)puVar15[2];
      if (uVar14 == 0) {
        *param_1 = 0;
        *(undefined4 *)(param_1 + 1) = 0xffffffff;
        return;
      }
      uVar16 = (ulong)*(uint *)((long)piVar11 + uVar14);
      lVar17 = (long)((long)piVar11 + uVar14) + uVar16;
      if (lVar17 != 0) {
        puVar12 = (uint *)(lVar17 + (ulong)uVar3 * 4 + 4);
        uVar19 = (ulong)*puVar12;
        piVar1 = (int *)((long)puVar12 + uVar19);
        if (piVar1 != (int *)0x0) {
          puVar13 = (ushort *)((long)piVar1 - (long)*piVar1);
          if ((*puVar13 < 0xb) || ((ulong)puVar13[5] == 0)) {
            uVar18 = 0;
          }
          else {
            uVar18 = *(uint *)((long)piVar1 + (ulong)puVar13[5]);
            if (uVar18 == 0xffffffff) goto LAB_012b4410;
          }
          puVar12 = (uint *)((long)piVar11 + (ulong)puVar15[4]);
          uVar7 = (ulong)*puVar12;
          puVar12 = (uint *)((long)puVar12 + (ulong)uVar18 * 4 + uVar7 + 4);
          uVar8 = (ulong)*puVar12;
          piVar2 = (int *)((long)puVar12 + uVar8);
          uVar9 = (ulong)*(ushort *)((long)piVar2 + (6 - (long)*piVar2));
          puVar12 = (uint *)((long)piVar2 + uVar9);
          uVar10 = (ulong)*puVar12;
          uVar4 = *(uint *)((long)puVar12 + uVar10);
          if (uVar4 != 0) {
            lVar17 = uVar14 + (ulong)uVar3 * 4 + uVar16 + uVar19 + 8;
            uVar14 = 0;
            lVar20 = (ulong)puVar15[4] + (ulong)uVar18 * 4 + uVar7 + uVar8 + uVar9 + uVar10;
            do {
              uVar16 = (ulong)*(uint *)((long)piVar11 + lVar20 + 8);
              lVar6 = lVar20 + (uVar16 - (long)*(int *)((long)piVar11 + lVar20 + uVar16 + 8));
              if ((*(ushort *)((long)piVar11 + lVar6 + 8) < 5) ||
                 (uVar19 = (ulong)*(ushort *)((long)piVar11 + lVar6 + 0xc), uVar19 == 0)) {
                if (*param_3 == 0) goto LAB_012b43d4;
              }
              else if (*(long *)((long)piVar11 + lVar20 + uVar16 + uVar19 + 8) == *param_3) {
LAB_012b43d4:
                puVar12 = (uint *)((long)piVar1 + (ulong)puVar13[3]);
                uVar16 = (ulong)*puVar12;
                if ((uint)uVar14 < *(uint *)((long)puVar12 + uVar16)) {
                  uVar5 = *(undefined4 *)((long)piVar11 + lVar17 + puVar13[3] + uVar16);
                  *param_1 = piVar11;
                  *(undefined4 *)(param_1 + 1) = uVar5;
                  return;
                }
                break;
              }
              uVar14 = uVar14 + 1;
              lVar17 = lVar17 + 4;
              lVar20 = lVar20 + 4;
            } while (uVar14 < uVar4);
          }
        }
      }
    }
  }
LAB_012b4410:
  *param_1 = 0;
  *(undefined4 *)(param_1 + 1) = 0xffffffff;
  return;
}


