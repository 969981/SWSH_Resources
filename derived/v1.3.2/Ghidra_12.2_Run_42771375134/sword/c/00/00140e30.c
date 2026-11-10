/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00140e30; name: FUN_00140e30
 */


void FUN_00140e30(long *param_1,undefined8 param_2,long param_3,undefined8 param_4,
                 undefined8 *param_5,undefined4 *param_6,undefined4 *param_7)

{
  uint uVar1;
  uint *puVar2;
  uint *puVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  long lVar11;
  ulong uVar12;
  ulong uVar13;
  ulong uVar14;
  long local_98;
  long lStack_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 *local_78;
  undefined8 local_70;
  undefined4 local_68;
  undefined4 uStack_64;
  
  uVar7 = *(uint *)(param_1 + 4);
  if (uVar7 != 0) {
    local_70 = *param_5;
    local_68 = *param_6;
    uStack_64 = *param_7;
    lVar4 = *param_1;
    lVar6 = param_1[1];
    uVar13 = 0;
    lVar5 = param_1[2];
    local_98 = param_1[3];
    uVar14 = 0;
    local_78 = &local_70;
    lStack_90 = local_98;
    local_88 = param_2;
    uStack_80 = param_4;
    do {
      uVar9 = *(uint *)(lVar5 + uVar13 * 4);
      uVar12 = uVar14;
      do {
        uVar1 = (int)uVar12 + 1;
        uVar14 = (ulong)uVar1;
        lVar11 = uVar12 * 8;
        uVar12 = uVar14;
      } while (*(uint *)(lVar4 + lVar11) < *(uint *)(lVar4 + uVar13 * 8));
      uVar8 = *(uint *)(lVar4 + uVar13 * 8 + 4);
      if (*(uint *)(lVar4 + uVar14 * 8) <= uVar8) {
        puVar2 = (uint *)(lVar6 + uVar13 * 0x10);
        do {
          uVar10 = *(uint *)(lVar5 + uVar12 * 4);
          if (((((uVar9 != uVar10) &&
                (*(char *)(param_3 + (ulong)(uVar10 & 3 | (uVar9 & 3) << 2)) != '\0')) &&
               (puVar3 = (uint *)(lVar6 + uVar12 * 0x10), *puVar2 <= puVar3[2])) &&
              ((*puVar3 <= puVar2[2] && (puVar2[1] <= puVar3[3])))) && (puVar3[1] <= puVar2[3])) {
            FUN_00140fe0(&local_98,uVar13 & 0xffffffff,uVar12);
          }
          uVar12 = (ulong)((int)uVar12 + 1);
        } while (*(uint *)(lVar4 + uVar12 * 8) <= uVar8);
      }
      uVar13 = uVar13 + 1;
    } while ((uVar13 < uVar7) && (uVar1 < uVar7));
    *param_5 = local_70;
    *param_6 = local_68;
    *param_7 = uStack_64;
  }
  return;
}


