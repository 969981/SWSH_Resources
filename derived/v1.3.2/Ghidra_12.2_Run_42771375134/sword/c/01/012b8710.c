/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 012b8710; name: FUN_012b8710
 */


void FUN_012b8710(undefined1 *param_1,long param_2,long param_3)

{
  ulong uVar1;
  byte bVar2;
  undefined *puVar3;
  undefined8 *puVar4;
  long *plVar5;
  int iVar6;
  uint uVar7;
  int *piVar8;
  long lVar9;
  ulong *puVar10;
  byte *pbVar11;
  ulong uVar12;
  ulong uVar13;
  ulong uVar14;
  ulong uVar15;
  long lVar16;
  ulong uVar17;
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined8 local_a0;
  int *local_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 *local_80;
  undefined8 *local_78;
  undefined8 *local_70;
  long *local_68;
  undefined8 uStack_60;
  undefined4 local_58;
  
  local_68 = *(long **)(param_2 + 8);
  local_78 = (undefined8 *)0x0;
  local_70 = (undefined8 *)0x0;
  local_80 = (undefined8 *)0x0;
  uStack_60 = 0;
  local_58 = 0;
  piVar8 = (int *)FUN_012b8a50();
  puVar3 = PTR_DAT_02710860;
  lVar16 = 5000;
  do {
    iVar6 = FUN_0087d3e0(*(undefined8 *)(param_2 + 0x58));
    if ((((*piVar8 <= iVar6) && (iVar6 <= piVar8[1])) &&
        (iVar6 = FUN_0087d3e0(*(undefined8 *)(param_3 + 0x58)), piVar8[0x11] <= iVar6)) &&
       (iVar6 <= piVar8[0x12])) {
      uVar7 = FUN_0087d530(*(undefined8 *)(param_2 + 0x58));
      if ((piVar8[2] <= (int)(uVar7 & 0xff)) && ((int)(uVar7 & 0xff) <= piVar8[3])) {
        uVar7 = FUN_0087d530(*(undefined8 *)(param_3 + 0x58));
        if ((piVar8[0x13] <= (int)(uVar7 & 0xff)) && ((int)(uVar7 & 0xff) <= piVar8[0x14])) {
          uVar7 = FUN_00878ac0(*(undefined8 *)(param_2 + 0x58));
          if ((piVar8[4] <= (int)(uVar7 & 0xff)) && ((int)(uVar7 & 0xff) <= piVar8[5])) {
            uVar7 = FUN_00878ac0(*(undefined8 *)(param_3 + 0x58));
            plVar5 = local_68;
            puVar4 = local_78;
            if ((piVar8[0x15] <= (int)(uVar7 & 0xff)) && ((int)(uVar7 & 0xff) <= piVar8[0x16])) {
              local_98 = piVar8;
              if (local_78 < local_70) {
                lVar9 = nn::os::GetTlsValue(*(undefined4 *)puVar3);
                if (0xf < *(ulong *)(lVar9 + 0x80)) {
                    /* WARNING: Subroutine does not return */
                  abort();
                }
                *(long **)(lVar9 + *(ulong *)(lVar9 + 0x80) * 8) = plVar5;
                *(long *)(lVar9 + 0x80) = *(long *)(lVar9 + 0x80) + 1;
                *puVar4 = local_98;
                *(long *)(lVar9 + 0x80) = *(long *)(lVar9 + 0x80) + -1;
                local_78 = local_78 + 1;
              }
              else {
                FUN_012c1c30(&local_80,&local_98);
              }
            }
          }
        }
      }
    }
    lVar16 = lVar16 + -200;
    piVar8 = piVar8 + 0x32;
  } while (lVar16 != 0);
  if (local_80 == local_78) {
    *param_1 = 0;
  }
  else {
    lVar16 = (long)local_78 - (long)local_80;
    if (lVar16 == 8) {
      uVar17 = 0;
    }
    else {
      puVar10 = *(ulong **)(*(long *)PTR_DAT_02710848 + 0x98);
      if (lVar16 == 0) {
        uVar12 = *puVar10;
        uVar17 = puVar10[1] + uVar12;
        uVar13 = puVar10[1] ^ uVar12;
        *puVar10 = uVar13 ^ (uVar12 >> 0x28 | uVar12 << 0x18) ^ uVar13 << 0x10;
        puVar10[1] = uVar13 >> 0x1b | uVar13 << 0x25;
      }
      else {
        uVar12 = lVar16 >> 3;
        uVar13 = (0x40 - LZCOUNT(uVar12)) -
                 (ulong)((0xffffffffffffffffU >> (0x41U - (0x40 - LZCOUNT(uVar12)) & 0x3f) & uVar12)
                        == 0);
        uVar17 = uVar13 >> 6;
        if ((uVar13 & 0x3f) != 0) {
          uVar17 = uVar17 + 1;
        }
        uVar14 = 0;
        if (uVar17 != 0) {
          uVar14 = uVar13 / uVar17;
        }
        uVar1 = 0;
        if (uVar17 <= uVar13) {
          uVar1 = 0xffffffffffffffff >> (-uVar14 & 0x3f);
        }
        uVar13 = *puVar10;
        uVar14 = puVar10[1];
        do {
          uVar15 = uVar13 ^ uVar14;
          uVar17 = uVar13 + uVar14;
          uVar14 = uVar15 >> 0x1b | uVar15 << 0x25;
          uVar13 = uVar15 ^ (uVar13 >> 0x28 | uVar13 << 0x18) ^ uVar15 << 0x10;
          uVar17 = uVar17 & uVar1;
        } while (uVar12 <= uVar17);
        *puVar10 = uVar13;
        puVar10[1] = uVar14;
      }
    }
    lVar16 = local_80[uVar17];
    uVar17 = 0xcbf29ce484222645;
    FUN_012b9b90(&local_98,param_2,lVar16);
    FUN_012b9b90(&local_b0,param_3,lVar16 + 0x44);
    bVar2 = *(byte *)(lVar16 + 0x88);
    if (bVar2 != 0) {
      pbVar11 = (byte *)(lVar16 + 0x89);
      do {
        uVar17 = (uVar17 ^ bVar2) * 0x100000001b3;
        bVar2 = *pbVar11;
        pbVar11 = pbVar11 + 1;
      } while (bVar2 != 0);
    }
    *(undefined8 *)(param_1 + 0x18) = local_90;
    *(undefined8 *)(param_1 + 0x20) = uStack_88;
    *(undefined8 *)(param_1 + 0x38) = local_a0;
    *(ulong *)(param_1 + 8) = uVar17;
    *(int **)(param_1 + 0x10) = local_98;
    *(undefined8 *)(param_1 + 0x28) = local_b0;
    *(undefined8 *)(param_1 + 0x30) = uStack_a8;
    *param_1 = 1;
  }
  if (local_80 != (undefined8 *)0x0) {
    local_78 = local_80;
    (**(code **)(*local_68 + 0x18))(local_68,local_80,(long)local_70 - (long)local_80,8);
  }
  return;
}


