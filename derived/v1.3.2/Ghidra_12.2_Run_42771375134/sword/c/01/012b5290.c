/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 012b5290; name: FUN_012b5290
 */


undefined8 FUN_012b5290(int *param_1,long *param_2)

{
  uint uVar1;
  uint uVar2;
  ulong uVar3;
  uint *puVar4;
  ushort uVar5;
  int iVar6;
  long lVar7;
  undefined8 uVar8;
  ulong uVar9;
  ulong uVar10;
  ulong uVar11;
  long lVar12;
  ulong uVar13;
  ushort *puVar14;
  
  lVar12 = *param_2;
  uVar9 = (long)param_1 - lVar12;
  if ((uVar9 & 3) != 0) {
    return 0;
  }
  uVar11 = param_2[1];
  uVar8 = 0;
  if ((4 < uVar11) && (uVar10 = uVar11 - 4, uVar9 <= uVar10)) {
    lVar7 = param_2[2];
    iVar6 = *param_1;
    uVar1 = (int)lVar7 + 1;
    uVar2 = (int)param_2[3] + 1;
    *(uint *)(param_2 + 2) = uVar1;
    *(uint *)(param_2 + 3) = uVar2;
    if (*(uint *)((long)param_2 + 0x14) < uVar1) {
      return 0;
    }
    uVar13 = uVar9 - (long)iVar6;
    uVar8 = 0;
    if (((uVar13 <= uVar11 - 2) && ((uVar13 & 1) == 0)) &&
       (uVar2 <= *(uint *)((long)param_2 + 0x1c))) {
      uVar5 = *(ushort *)(lVar12 + uVar13);
      if ((uVar5 & 1) != 0) {
        return 0;
      }
      uVar8 = 0;
      if ((uVar5 < uVar11) && (uVar13 <= uVar11 - uVar5)) {
        puVar14 = (ushort *)((long)param_1 - (long)*param_1);
        uVar5 = *puVar14;
        if (4 < uVar5) {
          if (((ulong)puVar14[2] != 0) && (uVar10 < uVar9 + puVar14[2])) {
            return 0;
          }
          if (6 < uVar5) {
            if ((ulong)puVar14[3] != 0) {
              uVar13 = uVar9 + puVar14[3];
              if ((uVar13 & 3) != 0) {
                return 0;
              }
              if (uVar10 < uVar13) {
                return 0;
              }
              uVar1 = *(uint *)(lVar12 + uVar13);
              if ((int)uVar1 < 0) {
                return 0;
              }
              if (uVar1 == 0) {
                return 0;
              }
              if (uVar11 - 1 < uVar13 + uVar1) {
                return 0;
              }
            }
            if (((ulong)puVar14[3] != 0) &&
               (puVar4 = (uint *)((long)param_1 + (ulong)puVar14[3]),
               puVar4 = (uint *)((long)puVar4 + (ulong)*puVar4), puVar4 != (uint *)0x0)) {
              uVar13 = (long)puVar4 - lVar12;
              if ((uVar13 & 3) != 0) {
                return 0;
              }
              if (uVar10 < uVar13) {
                return 0;
              }
              if (0x1ffffffe < *puVar4) {
                return 0;
              }
              uVar3 = (ulong)*puVar4 * 4 + 4;
              if (uVar11 <= uVar3) {
                return 0;
              }
              if (uVar11 - uVar3 < uVar13) {
                return 0;
              }
            }
            if (8 < uVar5) {
              if (((ulong)puVar14[4] != 0) && (uVar10 < uVar9 + puVar14[4])) {
                return 0;
              }
              if (((10 < uVar5) && ((ulong)puVar14[5] != 0)) && (uVar10 < uVar9 + puVar14[5])) {
                return 0;
              }
            }
          }
        }
        uVar8 = 1;
        *(int *)(param_2 + 2) = (int)lVar7;
      }
    }
  }
  return uVar8;
}


