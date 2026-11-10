/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 001410d0; name: FUN_001410d0
 */


void FUN_001410d0(long *param_1,long *param_2,undefined8 param_3,long param_4,undefined8 param_5,
                 undefined8 *param_6,undefined4 *param_7,undefined4 *param_8)

{
  uint *puVar1;
  uint *puVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  uint uVar13;
  ulong uVar14;
  long lVar15;
  long lVar16;
  uint uVar17;
  uint uVar18;
  ulong uVar19;
  undefined8 local_98;
  undefined4 local_90;
  undefined4 local_8c;
  long local_88;
  long local_80;
  undefined8 local_78;
  undefined8 local_70;
  undefined8 *local_68;
  
  uVar9 = *(uint *)(param_1 + 4);
  uVar10 = *(uint *)(param_2 + 4);
  if (uVar9 != 0 && uVar10 != 0) {
    local_90 = *param_7;
    local_8c = *param_8;
    local_98 = *param_6;
    lVar15 = param_2[2];
    lVar3 = param_1[2];
    lVar6 = param_1[3];
    lVar16 = param_2[3];
    uVar19 = 0;
    uVar18 = 0;
    lVar4 = *param_1;
    lVar7 = param_1[1];
    local_68 = &local_98;
    lVar5 = *param_2;
    lVar8 = param_2[1];
    local_88 = lVar6;
    local_80 = lVar16;
    local_78 = param_3;
    local_70 = param_5;
    do {
      uVar12 = *(uint *)(lVar3 + uVar19 * 4);
      uVar11 = uVar18;
      uVar17 = uVar18;
      do {
        uVar18 = uVar11;
        uVar17 = uVar17 + 1;
        uVar13 = *(uint *)(lVar5 + (ulong)uVar18 * 8);
        uVar11 = uVar18 + 1;
      } while (uVar13 < *(uint *)(lVar4 + uVar19 * 8));
      uVar11 = *(uint *)(lVar4 + uVar19 * 8 + 4);
      if (uVar13 <= uVar11) {
        puVar1 = (uint *)(lVar7 + uVar19 * 0x10);
        uVar14 = (ulong)uVar18;
        do {
          uVar13 = *(uint *)(lVar15 + uVar14 * 4);
          if (((((uVar12 != uVar13) &&
                (*(char *)(param_4 + (ulong)(uVar13 & 3 | (uVar12 & 3) << 2)) != '\0')) &&
               (puVar2 = (uint *)(lVar8 + uVar14 * 0x10), *puVar1 <= puVar2[2])) &&
              ((*puVar2 <= puVar1[2] && (puVar1[1] <= puVar2[3])))) && (puVar2[1] <= puVar1[3])) {
            FUN_00140fe0(&local_88,uVar19 & 0xffffffff,uVar17 - 1);
          }
          uVar14 = (ulong)uVar17;
          uVar17 = uVar17 + 1;
        } while (*(uint *)(lVar5 + uVar14 * 8) <= uVar11);
      }
      uVar19 = uVar19 + 1;
    } while ((uVar19 < uVar9) && (uVar18 < uVar10));
    uVar19 = 0;
    uVar18 = 0;
    local_68 = &local_98;
    local_88 = lVar16;
    local_80 = lVar6;
    local_78 = param_3;
    local_70 = param_5;
    do {
      uVar12 = *(uint *)(lVar15 + uVar19 * 4);
      uVar11 = uVar18;
      uVar17 = uVar18;
      do {
        uVar18 = uVar11;
        uVar17 = uVar17 + 1;
        uVar13 = *(uint *)(lVar4 + (ulong)uVar18 * 8);
        uVar11 = uVar18 + 1;
      } while (uVar13 <= *(uint *)(lVar5 + uVar19 * 8));
      uVar11 = *(uint *)(lVar5 + uVar19 * 8 + 4);
      if (uVar13 <= uVar11) {
        puVar1 = (uint *)(lVar8 + uVar19 * 0x10);
        uVar14 = (ulong)uVar18;
        do {
          uVar13 = *(uint *)(lVar3 + uVar14 * 4);
          if ((((uVar12 != uVar13) &&
               (*(char *)(param_4 + (ulong)(uVar13 & 3 | (uVar12 & 3) << 2)) != '\0')) &&
              (puVar2 = (uint *)(lVar7 + uVar14 * 0x10), *puVar1 <= puVar2[2])) &&
             (((*puVar2 <= puVar1[2] && (puVar1[1] <= puVar2[3])) && (puVar2[1] <= puVar1[3])))) {
            FUN_00140fe0(&local_88,uVar19 & 0xffffffff,uVar17 - 1);
          }
          uVar14 = (ulong)uVar17;
          uVar17 = uVar17 + 1;
        } while (*(uint *)(lVar4 + uVar14 * 8) <= uVar11);
      }
      uVar19 = uVar19 + 1;
    } while ((uVar19 < uVar10) && (uVar18 < uVar9));
    *param_6 = local_98;
    *param_7 = local_90;
    *param_8 = local_8c;
  }
  return;
}


