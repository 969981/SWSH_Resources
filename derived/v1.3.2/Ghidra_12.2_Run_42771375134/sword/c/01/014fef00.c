/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 014fef00; name: FUN_014fef00
 */


bool FUN_014fef00(uint *param_1,uint *param_2,undefined8 param_3)

{
  uint *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  uint uVar6;
  uint uVar7;
  long lVar8;
  uint *puVar9;
  long lVar10;
  int iVar11;
  uint *puVar12;
  undefined8 uVar13;
  long lVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  uint *puVar17;
  undefined8 local_60;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 local_48;
  
  switch((long)param_2 - (long)param_1 >> 5) {
  case 0:
  case 1:
    break;
  case 2:
    if (*param_1 <= param_2[-8]) {
      return true;
    }
    goto LAB_014fef80;
  case 3:
    puVar9 = param_1 + 8;
    uVar6 = *puVar9;
    puVar12 = param_2 + -8;
    if (*param_1 <= uVar6) {
      if (uVar6 <= *puVar12) {
        return true;
      }
      uVar13 = *(undefined8 *)puVar9;
      uVar5 = *(undefined8 *)(param_1 + 10);
      uVar15 = *(undefined8 *)(param_1 + 0xc);
      uVar2 = *(undefined8 *)(param_1 + 0xe);
      uVar16 = *(undefined8 *)puVar12;
      uVar3 = *(undefined8 *)(param_2 + -6);
      uVar4 = *(undefined8 *)(param_2 + -2);
      *(undefined8 *)(param_1 + 0xc) = *(undefined8 *)(param_2 + -4);
      *(undefined8 *)(param_1 + 0xe) = uVar4;
      *(undefined8 *)puVar9 = uVar16;
      *(undefined8 *)(param_1 + 10) = uVar3;
      *(undefined8 *)(param_2 + -4) = uVar15;
      *(undefined8 *)(param_2 + -2) = uVar2;
      *(undefined8 *)puVar12 = uVar13;
      *(undefined8 *)(param_2 + -6) = uVar5;
      if (param_1[8] < *param_1) {
        uVar13 = *(undefined8 *)param_1;
        uVar16 = *(undefined8 *)(param_1 + 2);
        uVar15 = *(undefined8 *)(param_1 + 4);
        uVar5 = *(undefined8 *)(param_1 + 6);
        *(undefined8 *)(param_1 + 4) = *(undefined8 *)(param_1 + 0xc);
        *(undefined8 *)(param_1 + 6) = *(undefined8 *)(param_1 + 0xe);
        *(undefined8 *)param_1 = *(undefined8 *)puVar9;
        *(undefined8 *)(param_1 + 2) = *(undefined8 *)(param_1 + 10);
        *(undefined8 *)(param_1 + 0xc) = uVar15;
        *(undefined8 *)(param_1 + 0xe) = uVar5;
        *(undefined8 *)puVar9 = uVar13;
        *(undefined8 *)(param_1 + 10) = uVar16;
        return true;
      }
      return true;
    }
    if (uVar6 <= *puVar12) {
      uVar13 = *(undefined8 *)param_1;
      uVar16 = *(undefined8 *)(param_1 + 2);
      uVar15 = *(undefined8 *)(param_1 + 4);
      uVar5 = *(undefined8 *)(param_1 + 6);
      *(undefined8 *)(param_1 + 4) = *(undefined8 *)(param_1 + 0xc);
      *(undefined8 *)(param_1 + 6) = *(undefined8 *)(param_1 + 0xe);
      *(undefined8 *)param_1 = *(undefined8 *)puVar9;
      *(undefined8 *)(param_1 + 2) = *(undefined8 *)(param_1 + 10);
      *(undefined8 *)(param_1 + 0xc) = uVar15;
      *(undefined8 *)(param_1 + 0xe) = uVar5;
      *(undefined8 *)puVar9 = uVar13;
      *(undefined8 *)(param_1 + 10) = uVar16;
      if (param_1[8] <= *puVar12) {
        return true;
      }
      local_60 = *(undefined8 *)puVar9;
      local_58 = *(undefined8 *)(param_1 + 10);
      local_50 = *(undefined8 *)(param_1 + 0xc);
      local_48 = *(undefined8 *)(param_1 + 0xe);
      uVar13 = *(undefined8 *)puVar12;
      uVar15 = *(undefined8 *)(param_2 + -6);
      uVar16 = *(undefined8 *)(param_2 + -2);
      *(undefined8 *)(param_1 + 0xc) = *(undefined8 *)(param_2 + -4);
      *(undefined8 *)(param_1 + 0xe) = uVar16;
      *(undefined8 *)puVar9 = uVar13;
      *(undefined8 *)(param_1 + 10) = uVar15;
      goto LAB_014fefa0;
    }
LAB_014fef80:
    local_60 = *(undefined8 *)param_1;
    local_58 = *(undefined8 *)(param_1 + 2);
    local_50 = *(undefined8 *)(param_1 + 4);
    local_48 = *(undefined8 *)(param_1 + 6);
    uVar13 = *(undefined8 *)(param_2 + -8);
    uVar15 = *(undefined8 *)(param_2 + -6);
    uVar16 = *(undefined8 *)(param_2 + -2);
    *(undefined8 *)(param_1 + 4) = *(undefined8 *)(param_2 + -4);
    *(undefined8 *)(param_1 + 6) = uVar16;
    *(undefined8 *)param_1 = uVar13;
    *(undefined8 *)(param_1 + 2) = uVar15;
LAB_014fefa0:
    *(undefined8 *)(param_2 + -4) = local_50;
    *(undefined8 *)(param_2 + -2) = local_48;
    *(undefined8 *)(param_2 + -8) = local_60;
    *(undefined8 *)(param_2 + -6) = local_58;
    return true;
  case 4:
    FUN_014fec90(param_1,param_1 + 8,param_1 + 0x10,param_2 + -8,param_3);
    break;
  case 5:
    puVar9 = param_1 + 8;
    puVar12 = param_1 + 0x10;
    puVar1 = param_1 + 0x18;
    FUN_014fec90(param_1,puVar9,puVar12,puVar1,param_3);
    puVar17 = param_2 + -8;
    if (*puVar17 < param_1[0x18]) {
      uVar13 = *(undefined8 *)puVar1;
      uVar5 = *(undefined8 *)(param_1 + 0x1a);
      uVar15 = *(undefined8 *)(param_1 + 0x1c);
      uVar2 = *(undefined8 *)(param_1 + 0x1e);
      uVar16 = *(undefined8 *)puVar17;
      uVar3 = *(undefined8 *)(param_2 + -6);
      uVar4 = *(undefined8 *)(param_2 + -2);
      *(undefined8 *)(param_1 + 0x1c) = *(undefined8 *)(param_2 + -4);
      *(undefined8 *)(param_1 + 0x1e) = uVar4;
      *(undefined8 *)puVar1 = uVar16;
      *(undefined8 *)(param_1 + 0x1a) = uVar3;
      *(undefined8 *)(param_2 + -4) = uVar15;
      *(undefined8 *)(param_2 + -2) = uVar2;
      *(undefined8 *)puVar17 = uVar13;
      *(undefined8 *)(param_2 + -6) = uVar5;
      if (*puVar1 < *puVar12) {
        uVar13 = *(undefined8 *)puVar12;
        uVar16 = *(undefined8 *)(param_1 + 0x12);
        uVar15 = *(undefined8 *)(param_1 + 0x14);
        uVar5 = *(undefined8 *)(param_1 + 0x16);
        *(undefined8 *)(param_1 + 0x14) = *(undefined8 *)(param_1 + 0x1c);
        *(undefined8 *)(param_1 + 0x16) = *(undefined8 *)(param_1 + 0x1e);
        *(undefined8 *)puVar12 = *(undefined8 *)puVar1;
        *(undefined8 *)(param_1 + 0x12) = *(undefined8 *)(param_1 + 0x1a);
        *(undefined8 *)(param_1 + 0x1c) = uVar15;
        *(undefined8 *)(param_1 + 0x1e) = uVar5;
        *(undefined8 *)puVar1 = uVar13;
        *(undefined8 *)(param_1 + 0x1a) = uVar16;
        if (*puVar12 < *puVar9) {
          uVar13 = *(undefined8 *)puVar9;
          uVar16 = *(undefined8 *)(param_1 + 10);
          uVar15 = *(undefined8 *)(param_1 + 0xc);
          uVar5 = *(undefined8 *)(param_1 + 0xe);
          *(undefined8 *)(param_1 + 0xc) = *(undefined8 *)(param_1 + 0x14);
          *(undefined8 *)(param_1 + 0xe) = *(undefined8 *)(param_1 + 0x16);
          *(undefined8 *)puVar9 = *(undefined8 *)puVar12;
          *(undefined8 *)(param_1 + 10) = *(undefined8 *)(param_1 + 0x12);
          *(undefined8 *)(param_1 + 0x14) = uVar15;
          *(undefined8 *)(param_1 + 0x16) = uVar5;
          *(undefined8 *)puVar12 = uVar13;
          *(undefined8 *)(param_1 + 0x12) = uVar16;
          if (param_1[8] < *param_1) {
            uVar13 = *(undefined8 *)param_1;
            uVar16 = *(undefined8 *)(param_1 + 2);
            uVar15 = *(undefined8 *)(param_1 + 4);
            uVar5 = *(undefined8 *)(param_1 + 6);
            *(undefined8 *)(param_1 + 4) = *(undefined8 *)(param_1 + 0xc);
            *(undefined8 *)(param_1 + 6) = *(undefined8 *)(param_1 + 0xe);
            *(undefined8 *)param_1 = *(undefined8 *)puVar9;
            *(undefined8 *)(param_1 + 2) = *(undefined8 *)(param_1 + 10);
            *(undefined8 *)(param_1 + 0xc) = uVar15;
            *(undefined8 *)(param_1 + 0xe) = uVar5;
            *(undefined8 *)puVar9 = uVar13;
            *(undefined8 *)(param_1 + 10) = uVar16;
            return true;
          }
        }
      }
    }
    break;
  default:
    puVar9 = param_1 + 0x10;
    uVar6 = *puVar9;
    puVar12 = param_1 + 8;
    uVar7 = *puVar12;
    if (uVar7 < *param_1) {
      if (uVar6 < uVar7) {
        local_60 = *(undefined8 *)param_1;
        local_58 = *(undefined8 *)(param_1 + 2);
        local_50 = *(undefined8 *)(param_1 + 4);
        local_48 = *(undefined8 *)(param_1 + 6);
        *(undefined8 *)(param_1 + 4) = *(undefined8 *)(param_1 + 0x14);
        *(undefined8 *)(param_1 + 6) = *(undefined8 *)(param_1 + 0x16);
        *(undefined8 *)param_1 = *(undefined8 *)puVar9;
        *(undefined8 *)(param_1 + 2) = *(undefined8 *)(param_1 + 0x12);
      }
      else {
        uVar13 = *(undefined8 *)param_1;
        uVar16 = *(undefined8 *)(param_1 + 2);
        uVar15 = *(undefined8 *)(param_1 + 4);
        uVar5 = *(undefined8 *)(param_1 + 6);
        *(undefined8 *)(param_1 + 4) = *(undefined8 *)(param_1 + 0xc);
        *(undefined8 *)(param_1 + 6) = *(undefined8 *)(param_1 + 0xe);
        *(undefined8 *)param_1 = *(undefined8 *)puVar12;
        *(undefined8 *)(param_1 + 2) = *(undefined8 *)(param_1 + 10);
        *(undefined8 *)(param_1 + 0xc) = uVar15;
        *(undefined8 *)(param_1 + 0xe) = uVar5;
        *(undefined8 *)puVar12 = uVar13;
        *(undefined8 *)(param_1 + 10) = uVar16;
        if (param_1[8] <= uVar6) goto joined_r0x014ff23c;
        local_60 = *(undefined8 *)puVar12;
        local_58 = *(undefined8 *)(param_1 + 10);
        local_50 = *(undefined8 *)(param_1 + 0xc);
        local_48 = *(undefined8 *)(param_1 + 0xe);
        *(undefined8 *)(param_1 + 0xc) = *(undefined8 *)(param_1 + 0x14);
        *(undefined8 *)(param_1 + 0xe) = *(undefined8 *)(param_1 + 0x16);
        *(undefined8 *)puVar12 = *(undefined8 *)puVar9;
        *(undefined8 *)(param_1 + 10) = *(undefined8 *)(param_1 + 0x12);
      }
      *(undefined8 *)(param_1 + 0x14) = local_50;
      *(undefined8 *)(param_1 + 0x16) = local_48;
      *(undefined8 *)puVar9 = local_60;
      *(undefined8 *)(param_1 + 0x12) = local_58;
    }
    else if (uVar6 < uVar7) {
      uVar13 = *(undefined8 *)puVar12;
      uVar16 = *(undefined8 *)(param_1 + 10);
      uVar15 = *(undefined8 *)(param_1 + 0xc);
      uVar5 = *(undefined8 *)(param_1 + 0xe);
      *(undefined8 *)(param_1 + 0xc) = *(undefined8 *)(param_1 + 0x14);
      *(undefined8 *)(param_1 + 0xe) = *(undefined8 *)(param_1 + 0x16);
      *(undefined8 *)puVar12 = *(undefined8 *)puVar9;
      *(undefined8 *)(param_1 + 10) = *(undefined8 *)(param_1 + 0x12);
      *(undefined8 *)(param_1 + 0x14) = uVar15;
      *(undefined8 *)(param_1 + 0x16) = uVar5;
      *(undefined8 *)puVar9 = uVar13;
      *(undefined8 *)(param_1 + 0x12) = uVar16;
      if (*puVar12 < *param_1) {
        uVar13 = *(undefined8 *)param_1;
        uVar16 = *(undefined8 *)(param_1 + 2);
        uVar15 = *(undefined8 *)(param_1 + 4);
        uVar5 = *(undefined8 *)(param_1 + 6);
        *(undefined8 *)(param_1 + 4) = *(undefined8 *)(param_1 + 0xc);
        *(undefined8 *)(param_1 + 6) = *(undefined8 *)(param_1 + 0xe);
        *(undefined8 *)param_1 = *(undefined8 *)puVar12;
        *(undefined8 *)(param_1 + 2) = *(undefined8 *)(param_1 + 10);
        *(undefined8 *)(param_1 + 0xc) = uVar15;
        *(undefined8 *)(param_1 + 0xe) = uVar5;
        *(undefined8 *)puVar12 = uVar13;
        *(undefined8 *)(param_1 + 10) = uVar16;
      }
    }
joined_r0x014ff23c:
    if (param_1 + 0x18 != param_2) {
      lVar10 = 0;
      iVar11 = 0;
      puVar12 = param_1 + 0x18;
      do {
        uVar6 = *puVar12;
        if (uVar6 < *puVar9) {
          uVar13 = *(undefined8 *)(puVar12 + 1);
          uVar15 = *(undefined8 *)(puVar12 + 3);
          uVar16 = *(undefined8 *)(puVar12 + 5);
          uVar7 = puVar12[7];
          lVar8 = lVar10;
          do {
            lVar14 = lVar8;
            *(undefined8 *)((long)param_1 + lVar14 + 0x70) =
                 *(undefined8 *)((long)param_1 + lVar14 + 0x50);
            *(undefined8 *)((long)param_1 + lVar14 + 0x78) =
                 *(undefined8 *)((long)param_1 + lVar14 + 0x58);
            *(undefined8 *)((long)param_1 + lVar14 + 0x60) =
                 *(undefined8 *)((long)param_1 + lVar14 + 0x40);
            *(undefined8 *)((long)param_1 + lVar14 + 0x68) =
                 *(undefined8 *)((long)param_1 + lVar14 + 0x48);
            if (lVar14 == -0x40) {
              puVar9 = param_1;
              goto LAB_014ff398;
            }
            lVar8 = lVar14 + -0x20;
          } while (uVar6 < *(uint *)((long)param_1 + lVar14 + 0x20));
          puVar9 = (uint *)((long)param_1 + lVar14 + 0x40);
LAB_014ff398:
          *puVar9 = uVar6;
          iVar11 = iVar11 + 1;
          puVar9[7] = uVar7;
          *(undefined8 *)(puVar9 + 5) = uVar16;
          *(undefined8 *)(puVar9 + 3) = uVar15;
          *(undefined8 *)(puVar9 + 1) = uVar13;
          if (iVar11 == 8) {
            return puVar12 + 8 == param_2;
          }
        }
        puVar1 = puVar12 + 8;
        lVar10 = lVar10 + 0x20;
        puVar9 = puVar12;
        puVar12 = puVar1;
      } while (puVar1 != param_2);
    }
  }
  return true;
}


