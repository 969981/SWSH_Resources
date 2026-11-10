/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 005c9580; name: FUN_005c9580
 */


void FUN_005c9580(long param_1)

{
  undefined *puVar1;
  long *plVar2;
  long lVar3;
  long lVar4;
  undefined1 *puVar5;
  ulong uVar6;
  ulong uVar7;
  long lVar8;
  ulong uVar9;
  long lVar10;
  undefined1 *puVar11;
  ulong uVar12;
  long lVar13;
  ulong uVar14;
  ulong uVar15;
  long *local_c0;
  long local_b8;
  long local_b0;
  undefined8 uStack_a8;
  undefined8 local_a0;
  ulong local_98;
  long *local_90;
  undefined1 *local_88;
  ulong local_80;
  long local_78;
  ulong local_70;
  ulong local_68;
  
  plVar2 = (long *)FUN_005bf860();
  local_90 = (long *)(**(code **)(*plVar2 + 0x60))();
  local_88 = (undefined1 *)0x0;
  local_70 = 0;
  local_68 = 0;
  local_80 = 0;
  local_78 = 0;
  if (local_90 == (long *)0x0) {
    lVar3 = FUN_005bc740();
    if (lVar3 == 0) {
      local_90 = (long *)FUN_005bc6f0();
    }
    else {
      local_90 = (long *)FUN_005bc740();
    }
  }
  plVar2 = (long *)FUN_005bf860();
  local_c0 = (long *)(**(code **)(*plVar2 + 0x60))();
  local_b8 = 0;
  local_a0 = 0;
  local_98 = 0;
  local_b0 = 0;
  uStack_a8 = 0;
  if (local_c0 == (long *)0x0) {
    lVar3 = FUN_005bc740();
    if (lVar3 == 0) {
      local_c0 = (long *)FUN_005bc6f0();
    }
    else {
      local_c0 = (long *)FUN_005bc740();
    }
  }
  puVar1 = PTR_DAT_02713e78;
  uVar6 = *(ulong *)(param_1 + 0x10);
  if (uVar6 != 0) {
    uVar12 = 0;
    while (uVar12 < uVar6) {
      lVar4 = *(long *)(param_1 + 8);
      lVar3 = uVar12 + 8;
      uVar15 = uVar12;
      while (uVar15 = uVar15 + 1, *(char *)(lVar4 + uVar12) != '%') {
        uVar12 = uVar12 + 1;
        lVar3 = lVar3 + 1;
        if (uVar6 <= uVar12) goto LAB_005c99b8;
      }
      if (((long)uVar12 < 0) || (uVar6 <= uVar12 + 1)) break;
      uVar14 = 0;
      while (*(char *)(lVar4 + uVar12 + uVar14 + 1) != '%') {
        uVar14 = uVar14 + 1;
        if (uVar6 <= uVar12 + uVar14 + 1) goto LAB_005c99b8;
      }
      lVar13 = uVar12 + uVar14 + 1;
      if (lVar13 < 0) break;
      if ((long)(uVar12 + 1) < lVar13) {
        uVar6 = (uVar6 - uVar12) - 1;
        if (uVar14 != 0) {
          uVar6 = uVar14;
        }
        if (local_70 <= uVar6) {
          uVar7 = uVar6 + 1;
          if (local_78 == 0) {
            if (uVar7 <= local_70 * 2) {
              uVar7 = local_70 * 2;
            }
          }
          else {
            uVar7 = local_78 + uVar7;
          }
          FUN_005c5e00(&local_90,uVar7,0);
          lVar4 = *(long *)(param_1 + 8);
        }
        uVar7 = uVar6;
        if ((long)uVar6 < 0) {
          if (lVar4 + uVar12 != -1) {
            lVar10 = 1;
            do {
              lVar8 = lVar10;
              lVar10 = lVar8 + 1;
            } while (*(char *)(lVar4 + uVar12 + lVar8) != '\0');
            uVar7 = lVar8 - 1;
            goto LAB_005c9730;
          }
        }
        else {
LAB_005c9730:
          if ((local_88 != (undefined1 *)0x0) && (0 < (long)uVar7)) {
            uVar9 = uVar7 & 7;
            if (uVar7 - 1 < 7) {
              lVar10 = 0;
            }
            else {
              lVar10 = 0;
              do {
                puVar5 = (undefined1 *)(lVar4 + lVar3 + lVar10);
                puVar11 = local_88 + lVar10 + 7;
                lVar10 = lVar10 + 8;
                puVar11[-7] = puVar5[-7];
                puVar11[-6] = puVar5[-6];
                puVar11[-5] = puVar5[-5];
                puVar11[-4] = puVar5[-4];
                puVar11[-3] = puVar5[-3];
                puVar11[-2] = puVar5[-2];
                puVar11[-1] = puVar5[-1];
                *puVar11 = *puVar5;
              } while (uVar7 - uVar9 != lVar10);
            }
            if (uVar9 != 0) {
              lVar3 = -uVar9;
              puVar5 = (undefined1 *)(lVar4 + lVar10 + uVar15);
              puVar11 = local_88 + lVar10;
              do {
                lVar3 = lVar3 + 1;
                *puVar11 = *puVar5;
                puVar5 = puVar5 + 1;
                puVar11 = puVar11 + 1;
              } while (lVar3 != 0);
            }
            local_88[uVar7] = 0;
          }
        }
        local_80 = uVar6;
        plVar2 = (long *)FUN_005bf860();
        puVar5 = puVar1;
        if (local_88 != (undefined1 *)0x0) {
          puVar5 = local_88;
        }
        (**(code **)(*plVar2 + 0x80))(plVar2,puVar5,&local_c0);
        if (local_b0 != 0) {
          uVar6 = local_80 + 2;
          if (local_70 < uVar6) {
            if (local_78 == 0) {
              if (uVar6 <= local_70 * 2) {
                uVar6 = local_70 * 2;
              }
            }
            else {
              uVar6 = local_78 + uVar6;
            }
            FUN_005c5e00(&local_90,uVar6,1);
          }
          if (local_80 != 0) {
            uVar6 = local_80 & 3;
            if (local_80 - 1 < 3) {
              lVar3 = 0;
            }
            else {
              lVar3 = 0;
              do {
                local_88[lVar3 + local_80] = (local_88 + lVar3 + local_80)[-1];
                local_88[lVar3 + local_80 + -1] = local_88[lVar3 + local_80 + -2];
                local_88[lVar3 + local_80 + -2] = local_88[lVar3 + local_80 + -3];
                lVar4 = lVar3 + local_80;
                lVar3 = lVar3 + -4;
                local_88[lVar4 + -3] = local_88[lVar4 + -4];
              } while (uVar6 - local_80 != lVar3);
              lVar3 = -lVar3;
            }
            if (uVar6 != 0) {
              lVar3 = local_80 - lVar3;
              lVar4 = -uVar6;
              do {
                puVar5 = local_88 + lVar3;
                lVar3 = lVar3 + -1;
                *puVar5 = puVar5[-1];
                lVar4 = lVar4 + 1;
              } while (lVar4 != 0);
            }
          }
          *local_88 = 0x25;
          uVar6 = local_80 + 1;
          local_88[uVar6] = 0;
          uVar15 = local_80 + 2;
          if (local_70 <= uVar15) {
            uVar15 = local_80 + 3;
            if (local_78 == 0) {
              if (uVar15 <= local_70 * 2) {
                uVar15 = local_70 * 2;
              }
            }
            else {
              uVar15 = local_78 + uVar15;
            }
            local_80 = uVar6;
            FUN_005c5e00(&local_90,uVar15,1);
            uVar15 = local_80 + 1;
            uVar6 = local_80;
          }
          local_80 = uVar6;
          local_88[local_80] = 0x25;
          local_80 = local_80 + 1;
          local_88[uVar15] = 0;
          FUN_005ca160(param_1,local_88,local_b8,uVar12,lVar13,1);
          lVar13 = (local_b0 - local_80) + uVar12 + uVar14 + 1;
        }
      }
      uVar6 = *(ulong *)(param_1 + 0x10);
      uVar12 = lVar13 + 1;
      if (uVar6 == 0) break;
    }
  }
LAB_005c99b8:
  if ((local_98 & 1) == 0) {
    if ((local_b8 != 0) && (local_c0 != (long *)0x0)) {
      (**(code **)(*local_c0 + 0x48))
                (local_c0,local_b8,"../../../../Include\\SiCore/SiCore_String.inl",0xe1);
    }
    local_b8 = 0;
  }
  if ((((local_68 & 1) == 0) && (local_88 != (undefined1 *)0x0)) && (local_90 != (long *)0x0)) {
    (**(code **)(*local_90 + 0x48))
              (local_90,local_88,"../../../../Include\\SiCore/SiCore_String.inl",0xe1);
  }
  return;
}


