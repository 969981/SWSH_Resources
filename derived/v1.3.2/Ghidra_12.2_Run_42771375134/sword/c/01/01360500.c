/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 01360500; name: FUN_01360500
 */


void FUN_01360500(long *param_1,ulong param_2)

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
  undefined8 *puVar18;
  ulong uVar19;
  undefined8 *puVar20;
  undefined8 uVar21;
  long lVar22;
  ulong uVar23;
  long local_90;
  undefined8 *local_88;
  undefined8 *local_80;
  undefined8 *local_78;
  undefined8 *local_70;
  long *local_68;
  
  puVar13 = (undefined8 *)param_1[1];
  puVar20 = (undefined8 *)param_1[2];
  if ((long)puVar20 - (long)puVar13 == 0) {
    param_2 = param_2 + 1;
  }
  uVar19 = param_2 >> 8;
  bVar4 = (param_2 & 0xff) != 0;
  uVar10 = uVar19;
  if (bVar4) {
    uVar10 = uVar19 + 1;
  }
  uVar23 = (ulong)bVar4;
  uVar14 = (ulong)param_1[7] >> 8;
  uVar15 = uVar10;
  if (uVar14 <= uVar10) {
    uVar15 = uVar14;
  }
  uVar16 = uVar10 - uVar15;
  if (uVar16 == 0) {
    param_1[7] = param_1[7] + uVar15 * -0x100;
    puVar3 = PTR_DAT_02710860;
    if (uVar15 == 0) {
      return;
    }
    do {
      puVar5 = puVar13 + 1;
      uVar21 = *puVar13;
      puVar13 = (undefined8 *)param_1[3];
      param_1[1] = (long)puVar5;
      if (puVar20 == puVar13) {
        puVar8 = (undefined8 *)*param_1;
        if (puVar5 < puVar8 || (long)puVar5 - (long)puVar8 == 0) {
          uVar10 = (long)puVar13 - (long)puVar8 >> 2;
          if ((long)puVar13 - (long)puVar8 == 0) {
            uVar10 = 1;
          }
          if (uVar10 == 0) {
            lVar6 = 0;
            puVar13 = (undefined8 *)0x0;
            if (puVar5 != puVar20) goto LAB_013606a0;
LAB_01360714:
            puVar20 = puVar13;
          }
          else {
            lVar6 = (**(code **)(*(long *)param_1[4] + 0x10))((long *)param_1[4],uVar10 << 3,0x10);
            if (lVar6 == 0) {
              (**(code **)(*(long *)param_1[4] + 0xb8))();
            }
            puVar5 = (undefined8 *)param_1[1];
            puVar20 = (undefined8 *)param_1[2];
            puVar13 = (undefined8 *)(lVar6 + (uVar10 >> 2) * 8);
            if (puVar5 == puVar20) goto LAB_01360714;
LAB_013606a0:
            puVar8 = puVar13;
            do {
              lVar22 = param_1[4];
              lVar9 = nn::os::GetTlsValue(*(undefined4 *)puVar3);
              if (0xf < *(ulong *)(lVar9 + 0x80)) goto LAB_01360da4;
              *(long *)(lVar9 + *(ulong *)(lVar9 + 0x80) * 8) = lVar22;
              *(long *)(lVar9 + 0x80) = *(long *)(lVar9 + 0x80) + 1;
              puVar11 = puVar5 + 1;
              puVar17 = puVar8 + 1;
              *puVar8 = *puVar5;
              *(long *)(lVar9 + 0x80) = *(long *)(lVar9 + 0x80) + -1;
              puVar5 = puVar11;
              puVar8 = puVar17;
            } while (puVar20 != puVar11);
            puVar20 = puVar17;
          }
          lVar9 = *param_1;
          lVar22 = param_1[3];
          *param_1 = lVar6;
          param_1[1] = (long)puVar13;
          param_1[2] = (long)puVar20;
          param_1[3] = lVar6 + uVar10 * 8;
          if (lVar9 != 0) {
            (**(code **)(*(long *)param_1[4] + 0x18))((long *)param_1[4],lVar9,lVar22 - lVar9,0x10);
            puVar20 = (undefined8 *)param_1[2];
          }
        }
        else {
          lVar9 = (long)puVar5 - (long)puVar8 >> 3;
          lVar6 = lVar9 + 2;
          if (-1 < lVar9 + 1) {
            lVar6 = lVar9 + 1;
          }
          sVar2 = (long)puVar13 - (long)puVar5;
          puVar20 = puVar5 + -(lVar6 >> 1);
          if (sVar2 == 0) {
            puVar13 = puVar20;
          }
          else {
            memmove(puVar20,puVar5,sVar2);
            puVar13 = (undefined8 *)(param_1[1] + (lVar6 >> 1) * -8);
          }
          puVar20 = puVar20 + ((long)sVar2 >> 3);
          param_1[1] = (long)puVar13;
          param_1[2] = (long)puVar20;
        }
      }
      lVar9 = param_1[4];
      lVar6 = nn::os::GetTlsValue(*(undefined4 *)puVar3);
      if (0xf < *(ulong *)(lVar6 + 0x80)) goto LAB_01360da4;
      *(long *)(lVar6 + *(ulong *)(lVar6 + 0x80) * 8) = lVar9;
      *(long *)(lVar6 + 0x80) = *(long *)(lVar6 + 0x80) + 1;
      *puVar20 = uVar21;
      *(long *)(lVar6 + 0x80) = *(long *)(lVar6 + 0x80) + -1;
      puVar20 = (undefined8 *)(param_1[2] + 8);
      uVar15 = uVar15 - 1;
      param_1[2] = (long)puVar20;
      if (uVar15 == 0) {
        return;
      }
      puVar13 = (undefined8 *)param_1[1];
    } while( true );
  }
  lVar9 = param_1[3] - *param_1;
  lVar6 = (long)puVar20 - (long)puVar13 >> 3;
  if (uVar16 <= (ulong)((lVar9 >> 3) - lVar6)) {
    if ((undefined8 *)param_1[3] != puVar20) {
      do {
        puVar20 = (undefined8 *)
                  (**(code **)(*(long *)param_1[9] + 0x10))((long *)param_1[9],0x1000,0x10);
        if (puVar20 == (undefined8 *)0x0) {
          (**(code **)(*(long *)param_1[9] + 0xb8))();
        }
        local_88 = puVar20;
        FUN_01360db0(param_1,&local_88);
        uVar16 = uVar16 - 1;
        if (uVar16 == 0) {
          param_1[7] = param_1[7] + uVar15 * -0x100;
          if (uVar15 == 0) {
            return;
          }
          goto LAB_01360bbc;
        }
      } while (param_1[3] != param_1[2]);
    }
    if (uVar10 <= uVar14) {
      uVar14 = uVar10;
    }
    uVar10 = uVar16;
    do {
      puVar20 = (undefined8 *)
                (**(code **)(*(long *)param_1[9] + 0x10))((long *)param_1[9],0x1000,0x10);
      if (puVar20 == (undefined8 *)0x0) {
        (**(code **)(*(long *)param_1[9] + 0xb8))();
      }
      local_88 = puVar20;
      FUN_01360fb0(param_1,&local_88);
      lVar9 = param_1[7];
      lVar6 = 0xff;
      if (param_1[2] - param_1[1] != 8) {
        lVar6 = 0x100;
      }
      uVar10 = uVar10 - 1;
      param_1[7] = lVar6 + lVar9;
    } while (uVar10 != 0);
    uVar15 = uVar16 + uVar14;
    param_1[7] = lVar6 + lVar9 + uVar15 * -0x100;
    if (uVar15 == 0) {
      return;
    }
LAB_01360bbc:
    puVar3 = PTR_DAT_02710860;
    puVar20 = (undefined8 *)param_1[2];
    do {
      puVar13 = (undefined8 *)param_1[1] + 1;
      uVar21 = *(undefined8 *)param_1[1];
      puVar5 = (undefined8 *)param_1[3];
      param_1[1] = (long)puVar13;
      if (puVar20 == puVar5) {
        puVar8 = (undefined8 *)*param_1;
        if (puVar13 < puVar8 || (long)puVar13 - (long)puVar8 == 0) {
          uVar10 = (long)puVar5 - (long)puVar8 >> 2;
          if ((long)puVar5 - (long)puVar8 == 0) {
            uVar10 = 1;
          }
          if (uVar10 == 0) {
            lVar6 = 0;
            puVar5 = (undefined8 *)0x0;
            if (puVar13 != puVar20) goto LAB_01360c84;
LAB_01360cf8:
            puVar20 = puVar5;
          }
          else {
            lVar6 = (**(code **)(*(long *)param_1[4] + 0x10))((long *)param_1[4],uVar10 << 3,0x10);
            if (lVar6 == 0) {
              (**(code **)(*(long *)param_1[4] + 0xb8))();
            }
            puVar13 = (undefined8 *)param_1[1];
            puVar20 = (undefined8 *)param_1[2];
            puVar5 = (undefined8 *)(lVar6 + (uVar10 >> 2) * 8);
            if (puVar13 == puVar20) goto LAB_01360cf8;
LAB_01360c84:
            puVar8 = puVar5;
            do {
              lVar22 = param_1[4];
              lVar9 = nn::os::GetTlsValue(*(undefined4 *)puVar3);
              if (0xf < *(ulong *)(lVar9 + 0x80)) goto LAB_01360da4;
              *(long *)(lVar9 + *(ulong *)(lVar9 + 0x80) * 8) = lVar22;
              *(long *)(lVar9 + 0x80) = *(long *)(lVar9 + 0x80) + 1;
              puVar11 = puVar13 + 1;
              puVar17 = puVar8 + 1;
              *puVar8 = *puVar13;
              *(long *)(lVar9 + 0x80) = *(long *)(lVar9 + 0x80) + -1;
              puVar13 = puVar11;
              puVar8 = puVar17;
            } while (puVar20 != puVar11);
            puVar20 = puVar17;
          }
          lVar9 = *param_1;
          lVar22 = param_1[3];
          *param_1 = lVar6;
          param_1[1] = (long)puVar5;
          param_1[2] = (long)puVar20;
          param_1[3] = lVar6 + uVar10 * 8;
          if (lVar9 != 0) {
            (**(code **)(*(long *)param_1[4] + 0x18))((long *)param_1[4],lVar9,lVar22 - lVar9,0x10);
            puVar20 = (undefined8 *)param_1[2];
          }
        }
        else {
          lVar9 = (long)puVar13 - (long)puVar8 >> 3;
          lVar6 = lVar9 + 2;
          if (-1 < lVar9 + 1) {
            lVar6 = lVar9 + 1;
          }
          sVar2 = (long)puVar5 - (long)puVar13;
          puVar20 = puVar13 + -(lVar6 >> 1);
          if (sVar2 == 0) {
            puVar13 = puVar20;
          }
          else {
            memmove(puVar20,puVar13,sVar2);
            puVar13 = (undefined8 *)(param_1[1] + (lVar6 >> 1) * -8);
          }
          puVar20 = puVar20 + ((long)sVar2 >> 3);
          param_1[1] = (long)puVar13;
          param_1[2] = (long)puVar20;
        }
      }
      lVar9 = param_1[4];
      lVar6 = nn::os::GetTlsValue(*(undefined4 *)puVar3);
      if (0xf < *(ulong *)(lVar6 + 0x80)) goto LAB_01360da4;
      *(long *)(lVar6 + *(ulong *)(lVar6 + 0x80) * 8) = lVar9;
      *(long *)(lVar6 + 0x80) = *(long *)(lVar6 + 0x80) + 1;
      *puVar20 = uVar21;
      *(long *)(lVar6 + 0x80) = *(long *)(lVar6 + 0x80) + -1;
      puVar20 = (undefined8 *)(param_1[2] + 8);
      uVar15 = uVar15 - 1;
      param_1[2] = (long)puVar20;
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
    local_88 = (undefined8 *)
               (**(code **)(*(long *)*plVar1 + 0x10))((long *)*plVar1,uVar10 << 3,0x10);
    if (local_88 == (undefined8 *)0x0) {
      (**(code **)(*(long *)*plVar1 + 0xb8))();
    }
  }
  local_80 = local_88 + (lVar6 - uVar15);
  local_70 = local_88 + uVar10;
  uVar10 = ~(uVar19 + uVar23);
  if (uVar10 < ~uVar14) {
    uVar10 = ~uVar14;
  }
  lVar6 = (~uVar23 - uVar10) - uVar19;
  local_78 = local_80;
  do {
    lVar9 = (**(code **)(*(long *)param_1[9] + 0x10))((long *)param_1[9],0x1000,0x10);
    if (lVar9 == 0) {
      (**(code **)(*(long *)param_1[9] + 0xb8))();
    }
    local_90 = lVar9;
    FUN_013611b0(&local_88,&local_90);
    puVar3 = PTR_DAT_02710860;
    lVar6 = lVar6 + 1;
  } while (lVar6 != 0);
  if (uVar15 == 0) {
    puVar20 = (undefined8 *)param_1[1];
    puVar13 = (undefined8 *)param_1[2];
    if (puVar13 == puVar20) goto LAB_01360b30;
  }
  else {
    puVar20 = (undefined8 *)param_1[1];
    uVar10 = uVar15;
    do {
      plVar1 = local_68;
      if (local_78 == local_70) {
        if (local_80 < local_88 || (long)local_80 - (long)local_88 == 0) {
          uVar19 = (long)local_70 - (long)local_88 >> 2;
          if ((long)local_70 - (long)local_88 == 0) {
            uVar19 = 1;
          }
          if (uVar19 == 0) {
            puVar5 = (undefined8 *)0x0;
            puVar13 = (undefined8 *)0x0;
            if (local_80 != local_78) goto LAB_013609d8;
LAB_01360a4c:
            local_78 = puVar13;
          }
          else {
            puVar5 = (undefined8 *)
                     (**(code **)(*(long *)*local_68 + 0x10))((long *)*local_68,uVar19 << 3,0x10);
            if (puVar5 == (undefined8 *)0x0) {
              (**(code **)(*(long *)*plVar1 + 0xb8))();
            }
            puVar13 = puVar5 + (uVar19 >> 2);
            if (local_80 == local_78) goto LAB_01360a4c;
LAB_013609d8:
            puVar8 = local_78;
            puVar11 = local_80;
            puVar17 = puVar13;
            do {
              lVar9 = *plVar1;
              lVar6 = nn::os::GetTlsValue(*(undefined4 *)puVar3);
              if (0xf < *(ulong *)(lVar6 + 0x80)) goto LAB_01360da4;
              *(long *)(lVar6 + *(ulong *)(lVar6 + 0x80) * 8) = lVar9;
              *(long *)(lVar6 + 0x80) = *(long *)(lVar6 + 0x80) + 1;
              puVar12 = puVar11 + 1;
              puVar18 = puVar17 + 1;
              *puVar17 = *puVar11;
              *(long *)(lVar6 + 0x80) = *(long *)(lVar6 + 0x80) + -1;
              puVar11 = puVar12;
              puVar17 = puVar18;
            } while (puVar8 != puVar12);
            local_78 = puVar18;
          }
          puVar8 = local_88;
          local_80 = puVar13;
          if (local_88 == (undefined8 *)0x0) {
            local_88 = puVar5;
            local_70 = puVar5 + uVar19;
          }
          else {
            lVar6 = (long)local_70 - (long)local_88;
            local_88 = puVar5;
            local_70 = puVar5 + uVar19;
            (**(code **)(*(long *)*plVar1 + 0x18))((long *)*plVar1,puVar8,lVar6,0x10);
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
LAB_01360da4:
                    /* WARNING: Subroutine does not return */
        abort();
      }
      *(long *)(lVar6 + *(ulong *)(lVar6 + 0x80) * 8) = lVar9;
      *(long *)(lVar6 + 0x80) = *(long *)(lVar6 + 0x80) + 1;
      *puVar13 = *puVar20;
      *(long *)(lVar6 + 0x80) = *(long *)(lVar6 + 0x80) + -1;
      local_78 = local_78 + 1;
      puVar20 = (undefined8 *)(param_1[1] + 8);
      uVar10 = uVar10 - 1;
      param_1[1] = (long)puVar20;
    } while (uVar10 != 0);
    puVar13 = (undefined8 *)param_1[2];
    if (puVar13 == puVar20) goto LAB_01360b30;
  }
  do {
    puVar13 = puVar13 + -1;
    FUN_013613c0(&local_88,puVar13);
    puVar20 = (undefined8 *)param_1[1];
  } while (puVar13 != puVar20);
  puVar13 = (undefined8 *)param_1[2];
LAB_01360b30:
  puVar5 = (undefined8 *)*param_1;
  *param_1 = (long)local_88;
  param_1[1] = (long)local_80;
  param_1[2] = (long)local_78;
  lVar6 = param_1[3];
  param_1[3] = (long)local_70;
  param_1[7] = param_1[7] + uVar15 * -0x100;
  local_78 = puVar13;
  if (puVar20 != puVar13) {
    local_78 = (undefined8 *)
               ((long)puVar13 + (~((long)puVar13 + (-8 - (long)puVar20)) & 0xfffffffffffffff8U));
  }
  if (puVar5 != (undefined8 *)0x0) {
    local_88 = puVar5;
    local_80 = puVar20;
    local_70 = (undefined8 *)lVar6;
    (**(code **)(*(long *)*local_68 + 0x18))((long *)*local_68,puVar5,lVar6 - (long)puVar5,0x10);
  }
  return;
}


