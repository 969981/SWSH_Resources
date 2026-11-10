/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 013d0f00; name: FUN_013d0f00
 */


void FUN_013d0f00(long *param_1,ulong param_2)

{
  long *plVar1;
  size_t sVar2;
  undefined *puVar3;
  bool bVar4;
  undefined8 *puVar5;
  long lVar6;
  ulong uVar7;
  undefined8 *puVar8;
  long lVar9;
  ulong uVar10;
  undefined8 *puVar11;
  undefined8 *puVar12;
  undefined8 *puVar13;
  ulong uVar14;
  ulong uVar15;
  ulong uVar16;
  undefined8 *puVar17;
  ulong uVar18;
  undefined8 uVar19;
  long lVar20;
  ulong uVar21;
  undefined8 *puVar22;
  undefined8 *puVar23;
  long local_90;
  undefined8 *local_88;
  undefined8 *local_80;
  undefined8 *local_78;
  undefined8 *local_70;
  long *local_68;
  
  puVar13 = (undefined8 *)param_1[1];
  puVar17 = (undefined8 *)param_1[2];
  if ((long)puVar17 - (long)puVar13 == 0) {
    param_2 = param_2 + 1;
  }
  uVar18 = param_2 / 0x2a;
  bVar4 = param_2 % 0x2a != 0;
  uVar10 = uVar18;
  if (bVar4) {
    uVar10 = uVar18 + 1;
  }
  uVar21 = (ulong)bVar4;
  uVar14 = (ulong)param_1[7] / 0x2a;
  uVar15 = uVar10;
  if (uVar14 <= uVar10) {
    uVar15 = uVar14;
  }
  uVar16 = uVar10 - uVar15;
  if (uVar16 == 0) {
    param_1[7] = param_1[7] + uVar15 * -0x2a;
    puVar3 = PTR_DAT_02710860;
    if (uVar15 == 0) {
      return;
    }
    do {
      puVar5 = puVar13 + 1;
      uVar19 = *puVar13;
      puVar13 = (undefined8 *)param_1[3];
      param_1[1] = (long)puVar5;
      if (puVar17 == puVar13) {
        puVar8 = (undefined8 *)*param_1;
        if (puVar5 < puVar8 || (long)puVar5 - (long)puVar8 == 0) {
          uVar10 = (long)puVar13 - (long)puVar8 >> 2;
          if ((long)puVar13 - (long)puVar8 == 0) {
            uVar10 = 1;
          }
          if (uVar10 == 0) {
            lVar6 = 0;
            puVar13 = (undefined8 *)0x0;
            if (puVar5 != puVar17) goto LAB_013d10cc;
LAB_013d1140:
            puVar17 = puVar13;
          }
          else {
            lVar6 = (**(code **)(*(long *)param_1[4] + 0x10))((long *)param_1[4],uVar10 << 3,8);
            if (lVar6 == 0) {
              (**(code **)(*(long *)param_1[4] + 0xb8))();
            }
            puVar5 = (undefined8 *)param_1[1];
            puVar17 = (undefined8 *)param_1[2];
            puVar13 = (undefined8 *)(lVar6 + (uVar10 >> 2) * 8);
            if (puVar5 == puVar17) goto LAB_013d1140;
LAB_013d10cc:
            puVar8 = puVar13;
            do {
              lVar20 = param_1[4];
              lVar9 = nn::os::GetTlsValue(*(undefined4 *)puVar3);
              if (0xf < *(ulong *)(lVar9 + 0x80)) goto LAB_013d17e4;
              *(long *)(lVar9 + *(ulong *)(lVar9 + 0x80) * 8) = lVar20;
              *(long *)(lVar9 + 0x80) = *(long *)(lVar9 + 0x80) + 1;
              puVar11 = puVar5 + 1;
              puVar22 = puVar8 + 1;
              *puVar8 = *puVar5;
              *(long *)(lVar9 + 0x80) = *(long *)(lVar9 + 0x80) + -1;
              puVar5 = puVar11;
              puVar8 = puVar22;
            } while (puVar17 != puVar11);
            puVar17 = puVar22;
          }
          lVar9 = *param_1;
          lVar20 = param_1[3];
          *param_1 = lVar6;
          param_1[1] = (long)puVar13;
          param_1[2] = (long)puVar17;
          param_1[3] = lVar6 + uVar10 * 8;
          if (lVar9 != 0) {
            (**(code **)(*(long *)param_1[4] + 0x18))((long *)param_1[4],lVar9,lVar20 - lVar9,8);
            puVar17 = (undefined8 *)param_1[2];
          }
        }
        else {
          lVar9 = (long)puVar5 - (long)puVar8 >> 3;
          lVar6 = lVar9 + 2;
          if (-1 < lVar9 + 1) {
            lVar6 = lVar9 + 1;
          }
          sVar2 = (long)puVar13 - (long)puVar5;
          puVar17 = puVar5 + -(lVar6 >> 1);
          if (sVar2 == 0) {
            puVar13 = puVar17;
          }
          else {
            memmove(puVar17,puVar5,sVar2);
            puVar13 = (undefined8 *)(param_1[1] + (lVar6 >> 1) * -8);
          }
          puVar17 = puVar17 + ((long)sVar2 >> 3);
          param_1[1] = (long)puVar13;
          param_1[2] = (long)puVar17;
        }
      }
      lVar9 = param_1[4];
      lVar6 = nn::os::GetTlsValue(*(undefined4 *)puVar3);
      if (0xf < *(ulong *)(lVar6 + 0x80)) goto LAB_013d17e4;
      *(long *)(lVar6 + *(ulong *)(lVar6 + 0x80) * 8) = lVar9;
      *(long *)(lVar6 + 0x80) = *(long *)(lVar6 + 0x80) + 1;
      *puVar17 = uVar19;
      *(long *)(lVar6 + 0x80) = *(long *)(lVar6 + 0x80) + -1;
      puVar17 = (undefined8 *)(param_1[2] + 8);
      uVar15 = uVar15 - 1;
      param_1[2] = (long)puVar17;
      if (uVar15 == 0) {
        return;
      }
      puVar13 = (undefined8 *)param_1[1];
    } while( true );
  }
  lVar9 = param_1[3] - *param_1;
  lVar6 = (long)puVar17 - (long)puVar13 >> 3;
  if (uVar16 <= (ulong)((lVar9 >> 3) - lVar6)) {
    if ((undefined8 *)param_1[3] != puVar17) {
      do {
        puVar17 = (undefined8 *)
                  (**(code **)(*(long *)param_1[9] + 0x10))((long *)param_1[9],0xfc0,8);
        if (puVar17 == (undefined8 *)0x0) {
          (**(code **)(*(long *)param_1[9] + 0xb8))();
        }
        local_88 = puVar17;
        FUN_013d17f0(param_1,&local_88);
        uVar16 = uVar16 - 1;
        if (uVar16 == 0) {
          param_1[7] = param_1[7] + uVar15 * -0x2a;
          if (uVar15 == 0) {
            return;
          }
          goto LAB_013d15fc;
        }
      } while (param_1[3] != param_1[2]);
    }
    if (uVar10 <= uVar14) {
      uVar14 = uVar10;
    }
    uVar10 = uVar16;
    do {
      puVar17 = (undefined8 *)(**(code **)(*(long *)param_1[9] + 0x10))((long *)param_1[9],0xfc0,8);
      if (puVar17 == (undefined8 *)0x0) {
        (**(code **)(*(long *)param_1[9] + 0xb8))();
      }
      local_88 = puVar17;
      FUN_013d19f0(param_1,&local_88);
      lVar9 = param_1[7];
      lVar6 = 0x29;
      if (param_1[2] - param_1[1] != 8) {
        lVar6 = 0x2a;
      }
      uVar10 = uVar10 - 1;
      param_1[7] = lVar6 + lVar9;
    } while (uVar10 != 0);
    uVar15 = uVar16 + uVar14;
    param_1[7] = lVar6 + lVar9 + uVar15 * -0x2a;
    if (uVar15 == 0) {
      return;
    }
LAB_013d15fc:
    puVar3 = PTR_DAT_02710860;
    puVar17 = (undefined8 *)param_1[2];
    do {
      puVar13 = (undefined8 *)param_1[1] + 1;
      uVar19 = *(undefined8 *)param_1[1];
      puVar5 = (undefined8 *)param_1[3];
      param_1[1] = (long)puVar13;
      if (puVar17 == puVar5) {
        puVar8 = (undefined8 *)*param_1;
        if (puVar13 < puVar8 || (long)puVar13 - (long)puVar8 == 0) {
          uVar10 = (long)puVar5 - (long)puVar8 >> 2;
          if ((long)puVar5 - (long)puVar8 == 0) {
            uVar10 = 1;
          }
          if (uVar10 == 0) {
            lVar6 = 0;
            puVar5 = (undefined8 *)0x0;
            if (puVar13 != puVar17) goto LAB_013d16c4;
LAB_013d1738:
            puVar17 = puVar5;
          }
          else {
            lVar6 = (**(code **)(*(long *)param_1[4] + 0x10))((long *)param_1[4],uVar10 << 3,8);
            if (lVar6 == 0) {
              (**(code **)(*(long *)param_1[4] + 0xb8))();
            }
            puVar13 = (undefined8 *)param_1[1];
            puVar17 = (undefined8 *)param_1[2];
            puVar5 = (undefined8 *)(lVar6 + (uVar10 >> 2) * 8);
            if (puVar13 == puVar17) goto LAB_013d1738;
LAB_013d16c4:
            puVar8 = puVar5;
            do {
              lVar20 = param_1[4];
              lVar9 = nn::os::GetTlsValue(*(undefined4 *)puVar3);
              if (0xf < *(ulong *)(lVar9 + 0x80)) goto LAB_013d17e4;
              *(long *)(lVar9 + *(ulong *)(lVar9 + 0x80) * 8) = lVar20;
              *(long *)(lVar9 + 0x80) = *(long *)(lVar9 + 0x80) + 1;
              puVar11 = puVar13 + 1;
              puVar22 = puVar8 + 1;
              *puVar8 = *puVar13;
              *(long *)(lVar9 + 0x80) = *(long *)(lVar9 + 0x80) + -1;
              puVar13 = puVar11;
              puVar8 = puVar22;
            } while (puVar17 != puVar11);
            puVar17 = puVar22;
          }
          lVar9 = *param_1;
          lVar20 = param_1[3];
          *param_1 = lVar6;
          param_1[1] = (long)puVar5;
          param_1[2] = (long)puVar17;
          param_1[3] = lVar6 + uVar10 * 8;
          if (lVar9 != 0) {
            (**(code **)(*(long *)param_1[4] + 0x18))((long *)param_1[4],lVar9,lVar20 - lVar9,8);
            puVar17 = (undefined8 *)param_1[2];
          }
        }
        else {
          lVar9 = (long)puVar13 - (long)puVar8 >> 3;
          lVar6 = lVar9 + 2;
          if (-1 < lVar9 + 1) {
            lVar6 = lVar9 + 1;
          }
          sVar2 = (long)puVar5 - (long)puVar13;
          puVar17 = puVar13 + -(lVar6 >> 1);
          if (sVar2 == 0) {
            puVar13 = puVar17;
          }
          else {
            memmove(puVar17,puVar13,sVar2);
            puVar13 = (undefined8 *)(param_1[1] + (lVar6 >> 1) * -8);
          }
          puVar17 = puVar17 + ((long)sVar2 >> 3);
          param_1[1] = (long)puVar13;
          param_1[2] = (long)puVar17;
        }
      }
      lVar9 = param_1[4];
      lVar6 = nn::os::GetTlsValue(*(undefined4 *)puVar3);
      if (0xf < *(ulong *)(lVar6 + 0x80)) goto LAB_013d17e4;
      *(long *)(lVar6 + *(ulong *)(lVar6 + 0x80) * 8) = lVar9;
      *(long *)(lVar6 + 0x80) = *(long *)(lVar6 + 0x80) + 1;
      *puVar17 = uVar19;
      *(long *)(lVar6 + 0x80) = *(long *)(lVar6 + 0x80) + -1;
      puVar17 = (undefined8 *)(param_1[2] + 8);
      uVar15 = uVar15 - 1;
      param_1[2] = (long)puVar17;
      if (uVar15 == 0) {
        return;
      }
    } while( true );
  }
  uVar7 = lVar9 >> 2;
  uVar10 = lVar6 + uVar16;
  if (lVar6 + uVar16 <= uVar7) {
    uVar10 = uVar7;
  }
  plVar1 = param_1 + 4;
  local_70 = (undefined8 *)0x0;
  local_68 = plVar1;
  if (uVar10 == 0) {
    local_88 = (undefined8 *)0x0;
  }
  else {
    local_88 = (undefined8 *)(**(code **)(*(long *)*plVar1 + 0x10))((long *)*plVar1,uVar10 << 3,8);
    if (local_88 == (undefined8 *)0x0) {
      (**(code **)(*(long *)*plVar1 + 0xb8))();
    }
  }
  local_80 = local_88 + (lVar6 - uVar15);
  local_70 = local_88 + uVar10;
  uVar10 = ~(uVar18 + uVar21);
  if (uVar10 < ~uVar14) {
    uVar10 = ~uVar14;
  }
  lVar6 = (~uVar21 - uVar10) - uVar18;
  local_78 = local_80;
  do {
    lVar9 = (**(code **)(*(long *)param_1[9] + 0x10))((long *)param_1[9],0xfc0,8);
    if (lVar9 == 0) {
      (**(code **)(*(long *)param_1[9] + 0xb8))();
    }
    local_90 = lVar9;
    FUN_013d1bf0(&local_88,&local_90);
    puVar3 = PTR_DAT_02710860;
    lVar6 = lVar6 + 1;
  } while (lVar6 != 0);
  if (uVar15 == 0) {
    puVar17 = (undefined8 *)param_1[1];
    puVar13 = (undefined8 *)param_1[2];
    if (puVar13 == puVar17) goto LAB_013d1564;
  }
  else {
    puVar17 = (undefined8 *)param_1[1];
    uVar10 = uVar15;
    do {
      plVar1 = local_68;
      if (local_78 == local_70) {
        if (local_80 < local_88 || (long)local_80 - (long)local_88 == 0) {
          uVar18 = (long)local_70 - (long)local_88 >> 2;
          if ((long)local_70 - (long)local_88 == 0) {
            uVar18 = 1;
          }
          if (uVar18 == 0) {
            puVar5 = (undefined8 *)0x0;
            puVar13 = (undefined8 *)0x0;
            if (local_80 != local_78) goto LAB_013d1408;
LAB_013d1484:
            local_78 = puVar13;
          }
          else {
            puVar5 = (undefined8 *)
                     (**(code **)(*(long *)*local_68 + 0x10))((long *)*local_68,uVar18 << 3,8);
            if (puVar5 == (undefined8 *)0x0) {
              (**(code **)(*(long *)*plVar1 + 0xb8))();
            }
            puVar13 = puVar5 + (uVar18 >> 2);
            if (local_80 == local_78) goto LAB_013d1484;
LAB_013d1408:
            puVar8 = local_78;
            puVar11 = local_80;
            puVar22 = puVar13;
            do {
              lVar9 = *plVar1;
              lVar6 = nn::os::GetTlsValue(*(undefined4 *)puVar3);
              if (0xf < *(ulong *)(lVar6 + 0x80)) goto LAB_013d17e4;
              *(long *)(lVar6 + *(ulong *)(lVar6 + 0x80) * 8) = lVar9;
              *(long *)(lVar6 + 0x80) = *(long *)(lVar6 + 0x80) + 1;
              puVar12 = puVar11 + 1;
              puVar23 = puVar22 + 1;
              *puVar22 = *puVar11;
              *(long *)(lVar6 + 0x80) = *(long *)(lVar6 + 0x80) + -1;
              puVar11 = puVar12;
              puVar22 = puVar23;
            } while (puVar8 != puVar12);
            local_78 = puVar23;
          }
          puVar8 = local_88;
          local_80 = puVar13;
          if (local_88 == (undefined8 *)0x0) {
            local_88 = puVar5;
            local_70 = puVar5 + uVar18;
          }
          else {
            lVar6 = (long)local_70 - (long)local_88;
            local_88 = puVar5;
            local_70 = puVar5 + uVar18;
            (**(code **)(*(long *)*plVar1 + 0x18))((long *)*plVar1,puVar8,lVar6,8);
          }
        }
        else {
          lVar9 = (long)local_80 - (long)local_88 >> 3;
          lVar6 = lVar9 + 2;
          if (-1 < lVar9 + 1) {
            lVar6 = lVar9 + 1;
          }
          sVar2 = (long)local_70 - (long)local_80;
          puVar13 = local_80 + -(lVar6 >> 1);
          if (sVar2 == 0) {
            local_80 = puVar13;
          }
          else {
            memmove(puVar13,local_80,sVar2);
            local_80 = local_80 + -(lVar6 >> 1);
          }
          local_78 = puVar13 + ((long)sVar2 >> 3);
        }
      }
      puVar13 = local_78;
      lVar9 = *local_68;
      lVar6 = nn::os::GetTlsValue(*(undefined4 *)puVar3);
      if (0xf < *(ulong *)(lVar6 + 0x80)) {
LAB_013d17e4:
                    /* WARNING: Subroutine does not return */
        abort();
      }
      *(long *)(lVar6 + *(ulong *)(lVar6 + 0x80) * 8) = lVar9;
      *(long *)(lVar6 + 0x80) = *(long *)(lVar6 + 0x80) + 1;
      *puVar13 = *puVar17;
      *(long *)(lVar6 + 0x80) = *(long *)(lVar6 + 0x80) + -1;
      local_78 = local_78 + 1;
      puVar17 = (undefined8 *)(param_1[1] + 8);
      uVar10 = uVar10 - 1;
      param_1[1] = (long)puVar17;
    } while (uVar10 != 0);
    puVar13 = (undefined8 *)param_1[2];
    if (puVar13 == puVar17) goto LAB_013d1564;
  }
  do {
    puVar13 = puVar13 + -1;
    FUN_013d1e00(&local_88,puVar13);
    puVar17 = (undefined8 *)param_1[1];
  } while (puVar13 != puVar17);
  puVar13 = (undefined8 *)param_1[2];
LAB_013d1564:
  puVar5 = (undefined8 *)*param_1;
  *param_1 = (long)local_88;
  param_1[1] = (long)local_80;
  param_1[2] = (long)local_78;
  lVar6 = param_1[3];
  param_1[3] = (long)local_70;
  param_1[7] = param_1[7] + uVar15 * -0x2a;
  local_78 = puVar13;
  if (puVar17 != puVar13) {
    local_78 = (undefined8 *)
               ((long)puVar13 + (~((long)puVar13 + (-8 - (long)puVar17)) & 0xfffffffffffffff8U));
  }
  if (puVar5 != (undefined8 *)0x0) {
    local_88 = puVar5;
    local_80 = puVar17;
    local_70 = (undefined8 *)lVar6;
    (**(code **)(*(long *)*local_68 + 0x18))((long *)*local_68,puVar5,lVar6 - (long)puVar5,8);
  }
  return;
}


