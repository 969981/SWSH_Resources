/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00bac8f0; name: FUN_00bac8f0
 */


void FUN_00bac8f0(long param_1,uint param_2)

{
  bool bVar1;
  long *plVar2;
  int iVar3;
  ushort uVar4;
  int iVar5;
  uint uVar6;
  undefined4 uVar7;
  uint uVar8;
  ulong uVar9;
  undefined8 *puVar10;
  long lVar11;
  long lVar12;
  long *plVar13;
  long lVar14;
  int iVar15;
  undefined4 *puVar16;
  undefined8 *local_80;
  undefined8 *local_78;
  undefined8 local_70;
  uint local_68;
  undefined1 local_64;
  
  lVar11 = *(long *)(*(long *)(param_1 + 0x5f8) + 0xe8);
  if (lVar11 != 0) {
    *(long *)(*(long *)(param_1 + 0x5f8) + 0xe8) = lVar11 + (lVar11 * 6 >> 1) * 0x5555555555555555;
  }
  if (0xb < param_2) {
    return;
  }
  plVar2 = (long *)(param_1 + 0x5f8);
  switch(param_2) {
  case 0:
    lVar11 = *(long *)(*(long *)PTR_DAT_02710798 + 0x1f8);
    if (lVar11 != 0) {
      plVar13 = (long *)(lVar11 + 0x48);
      (**(code **)(*plVar13 + 0x10))(plVar13);
      (**(code **)(*plVar13 + 0x18))(plVar13);
    }
    local_70 = 0;
    uVar9 = FUN_00baeb80(param_1,*(undefined2 *)(param_1 + 0x612),(long)&local_70 + 4,&local_70);
    if ((uVar9 & 1) != 0) {
      if ((uint)local_70 < local_70._4_4_) {
        return;
      }
      uVar8 = local_70._4_4_;
      do {
        iVar5 = *(int *)(param_1 + 0x600);
        if (iVar5 == 0) {
          puVar10 = (undefined8 *)(param_1 + 0x5d8);
LAB_00bac9f4:
          uVar6 = FUN_01689f70(*puVar10,uVar8);
        }
        else {
          if (iVar5 == 5) {
            puVar10 = (undefined8 *)(param_1 + 0x5e8);
            goto LAB_00bac9f4;
          }
          if (iVar5 == 3) {
            puVar10 = (undefined8 *)(param_1 + 0x5e0);
            goto LAB_00bac9f4;
          }
          uVar6 = 0;
        }
        uVar9 = FUN_01534f60(lVar11,uVar6 & 0xffff);
        if ((uVar9 & 1) != 0) {
          local_64 = 0;
          local_68 = uVar6 & 0xffff | 0x10000;
          FUN_00bb2540(*plVar2 + 0xa0,&local_68);
        }
        uVar8 = uVar8 + 1;
        if ((uint)local_70 < uVar8) {
          return;
        }
      } while( true );
    }
    break;
  case 1:
    local_64 = 0;
    local_68 = 0x10012;
    FUN_00bb2540(*plVar2 + 0xa0,&local_68);
    local_64 = 0;
    local_68 = 0x10000;
    FUN_00bb2540(*plVar2 + 0xa0,&local_68);
    local_68 = 0x10001;
    local_64 = 0;
    FUN_00bb2540(*plVar2 + 0xa0,&local_68);
    local_64 = 0;
    local_68 = 0x10002;
    FUN_00bb2540(*plVar2 + 0xa0,&local_68);
    local_64 = 0;
    local_68 = 0x10003;
    FUN_00bb2540(*plVar2 + 0xa0,&local_68);
    local_64 = 0;
    local_68 = 0x10004;
    FUN_00bb2540(*plVar2 + 0xa0,&local_68);
    local_64 = 0;
    local_68 = 0x10005;
    FUN_00bb2540(*plVar2 + 0xa0,&local_68);
    local_64 = 0;
    local_68 = 0x10006;
    FUN_00bb2540(*plVar2 + 0xa0,&local_68);
    local_64 = 0;
    local_68 = 0x10007;
    FUN_00bb2540(*plVar2 + 0xa0,&local_68);
    local_64 = 0;
    local_68 = 0x10008;
    FUN_00bb2540(*plVar2 + 0xa0,&local_68);
    local_64 = 0;
    local_68 = 0x10009;
    FUN_00bb2540(*plVar2 + 0xa0,&local_68);
    local_64 = 0;
    local_68 = 0x1000a;
    FUN_00bb2540(*plVar2 + 0xa0,&local_68);
    local_64 = 0;
    local_68 = 0x1000b;
    FUN_00bb2540(*plVar2 + 0xa0,&local_68);
    local_64 = 0;
    local_68 = 0x1000c;
    FUN_00bb2540(*plVar2 + 0xa0,&local_68);
    local_64 = 0;
    local_68 = 0x1000d;
    FUN_00bb2540(*plVar2 + 0xa0,&local_68);
    local_64 = 0;
    local_68 = 0x1000e;
    FUN_00bb2540(*plVar2 + 0xa0,&local_68);
    local_64 = 0;
    local_68 = 0x1000f;
    FUN_00bb2540(*plVar2 + 0xa0,&local_68);
    local_64 = 0;
    local_68 = 0x10010;
    FUN_00bb2540(*plVar2 + 0xa0,&local_68);
    lVar11 = *plVar2 + 0xa0;
    local_68 = 0x10011;
    goto LAB_00bad128;
  case 2:
    local_70 = 0;
    uVar9 = FUN_00baeb80(param_1,*(undefined2 *)(param_1 + 0x612),(long)&local_70 + 4,&local_70);
    if ((uVar9 & 1) != 0) {
      if ((uint)local_70 < local_70._4_4_) {
        return;
      }
      uVar8 = local_70._4_4_;
      do {
        iVar5 = *(int *)(param_1 + 0x600);
        if (iVar5 == 0) {
          puVar10 = (undefined8 *)(param_1 + 0x5d8);
LAB_00baccb4:
          uVar6 = FUN_01689f70(*puVar10,uVar8);
        }
        else {
          if (iVar5 == 5) {
            puVar10 = (undefined8 *)(param_1 + 0x5e8);
            goto LAB_00baccb4;
          }
          if (iVar5 == 3) {
            puVar10 = (undefined8 *)(param_1 + 0x5e0);
            goto LAB_00baccb4;
          }
          uVar6 = 0;
        }
        uVar9 = FUN_0168acc0(*(undefined8 *)(param_1 + 0x5e0),uVar6 & 0xffff);
        if ((uVar9 & 1) == 0) {
          local_64 = 0;
          local_68 = uVar6 & 0xffff | 0x10000;
          FUN_00bb2540(*plVar2 + 0xa0,&local_68);
        }
        uVar8 = uVar8 + 1;
        if ((uint)local_70 < uVar8) {
          return;
        }
      } while( true );
    }
    break;
  case 3:
    iVar5 = FUN_00888ed0();
    if (iVar5 == -1) {
      return;
    }
    uVar8 = 0;
    do {
      local_68 = uVar8 & 0xffff | 0x10000;
      local_64 = 0;
      FUN_00bb2540(*plVar2 + 0xa0,&local_68);
      uVar8 = uVar8 + 1;
      iVar5 = FUN_00888ed0();
    } while (uVar8 < iVar5 + 1U);
    return;
  case 4:
    iVar5 = 0;
    do {
      local_68 = 0x10019;
      if (iVar5 != 0) {
        local_68 = iVar5 - 1U & 0xffff | 0x10000;
      }
      local_64 = 0;
      FUN_00bb2540(*plVar2 + 0xa0,&local_68);
      iVar5 = iVar5 + 1;
    } while (iVar5 != 0x1a);
    return;
  case 5:
    local_70 = 0;
    uVar9 = FUN_00baeb80(param_1,*(undefined2 *)(param_1 + 0x612),(long)&local_70 + 4,&local_70);
    if ((uVar9 & 1) != 0) {
      if ((uint)local_70 < local_70._4_4_) {
        return;
      }
      uVar8 = local_70._4_4_;
      do {
        iVar5 = *(int *)(param_1 + 0x600);
        if (iVar5 == 0) {
          puVar10 = (undefined8 *)(param_1 + 0x5d8);
LAB_00bace00:
          uVar6 = FUN_01689f70(*puVar10,uVar8);
        }
        else {
          if (iVar5 == 5) {
            puVar10 = (undefined8 *)(param_1 + 0x5e8);
            goto LAB_00bace00;
          }
          if (iVar5 == 3) {
            puVar10 = (undefined8 *)(param_1 + 0x5e0);
            goto LAB_00bace00;
          }
          uVar6 = 0;
        }
        uVar9 = FUN_0168a940(*(undefined8 *)(param_1 + 0x5e8),uVar6 & 0xffff);
        if ((uVar9 & 1) == 0) {
          local_64 = 0;
          local_68 = uVar6 & 0xffff | 0x10000;
          FUN_00bb2540(*plVar2 + 0xa0,&local_68);
        }
        uVar8 = uVar8 + 1;
        if ((uint)local_70 < uVar8) {
          return;
        }
      } while( true );
    }
    break;
  case 6:
    local_64 = 0;
    local_68 = 0x10003;
    FUN_00bb2540(*plVar2 + 0xa0,&local_68);
    local_64 = 0;
    local_68 = 0x10000;
    FUN_00bb2540(*plVar2 + 0xa0,&local_68);
    lVar11 = *plVar2;
    goto LAB_00bacedc;
  case 7:
    local_64 = 0;
    local_68 = 0x10000;
    FUN_00bb2540(*plVar2 + 0xa0,&local_68);
    lVar11 = *plVar2;
LAB_00bacedc:
    local_68 = 0x10001;
    local_64 = 0;
    FUN_00bb2540(lVar11 + 0xa0,&local_68);
    lVar11 = *plVar2 + 0xa0;
    local_68 = 0x10002;
    goto LAB_00bad128;
  case 8:
    local_64 = 0;
    local_68 = 0x10000;
    FUN_00bb2540(*plVar2 + 0xa0,&local_68);
    lVar11 = *plVar2;
    goto LAB_00bad0b4;
  case 9:
    local_64 = 0;
    local_68 = 0x10006;
    FUN_00bb2540(*plVar2 + 0xa0,&local_68);
    local_64 = 0;
    local_68 = 0x10000;
    FUN_00bb2540(*plVar2 + 0xa0,&local_68);
    lVar11 = *plVar2;
LAB_00bad0b4:
    local_68 = 0x10001;
    local_64 = 0;
    FUN_00bb2540(lVar11 + 0xa0,&local_68);
    local_64 = 0;
    local_68 = 0x10002;
    FUN_00bb2540(*plVar2 + 0xa0,&local_68);
    local_64 = 0;
    local_68 = 0x10003;
    FUN_00bb2540(*plVar2 + 0xa0,&local_68);
    local_64 = 0;
    local_68 = 0x10004;
    FUN_00bb2540(*plVar2 + 0xa0,&local_68);
    lVar11 = *plVar2 + 0xa0;
    local_68 = 0x10005;
    goto LAB_00bad128;
  case 10:
    uVar8 = FUN_008d4030(*(undefined8 *)PTR_DAT_02710828);
    if (uVar8 < 2) {
      lVar11 = 0xc;
      puVar16 = &DAT_021596d0;
LAB_00bad190:
      local_78 = (undefined8 *)(param_1 + 0x5e0);
      local_80 = (undefined8 *)(param_1 + 0x5e8);
      lVar14 = 0;
      do {
        uVar8 = puVar16[lVar14];
        if (uVar8 == 0) {
          local_70 = local_70 & 0xffffffff;
          local_68 = 0;
          uVar9 = FUN_00baeb80(param_1,0,&local_68,(long)&local_70 + 4);
          uVar6 = 0;
          if ((uVar9 & 1) != 0) {
            if (*(int *)(param_1 + 0x600) != 0) goto LAB_00bad278;
            lVar12 = *(long *)(*(long *)PTR_DAT_02710798 + 0x1f8);
            if (lVar12 != 0) {
              plVar13 = (long *)(lVar12 + 0x48);
              (**(code **)(*plVar13 + 0x10))(plVar13);
              (**(code **)(*plVar13 + 0x18))(plVar13);
            }
            bVar1 = local_68 <= local_70._4_4_;
            uVar6 = local_68;
            if (bVar1) {
              do {
                iVar5 = *(int *)(param_1 + 0x600);
                puVar10 = (undefined8 *)(param_1 + 0x5d8);
                if (iVar5 == 0) {
LAB_00bad23c:
                  uVar7 = FUN_01689f70(*puVar10,uVar6);
                  uVar9 = FUN_01534f60(lVar12,uVar7);
                }
                else {
                  if (iVar5 == 5) {
                    puVar10 = local_80;
                    goto LAB_00bad23c;
                  }
                  puVar10 = local_78;
                  if (iVar5 == 3) goto LAB_00bad23c;
                  uVar9 = FUN_01534f60(lVar12,0);
                }
                if ((uVar9 & 1) != 0) goto LAB_00bad278;
                local_70._4_4_ = (uint)(local_70 >> 0x20);
                uVar6 = uVar6 + 1;
                bVar1 = uVar6 <= local_70._4_4_;
              } while (bVar1);
            }
            uVar6 = 0;
          }
        }
        else {
LAB_00bad278:
          uVar6 = 0x10000;
        }
        local_68 = uVar6 | uVar8 & 0xffff;
        local_64 = 0;
        FUN_00bb2540(*plVar2 + 0xa0,&local_68);
        lVar14 = lVar14 + 1;
        if (lVar14 == lVar11) {
          return;
        }
      } while( true );
    }
    uVar6 = uVar8 - 7;
    if (uVar6 < 3) {
      uVar9 = -(ulong)(uVar6 >> 0x1f) & 0xfffffff800000000 | (ulong)uVar6 << 3;
      puVar16 = *(undefined4 **)((long)&PTR_DAT_02637aa0 + uVar9);
      lVar11 = *(long *)(&DAT_021598b0 + uVar9);
    }
    else {
      lVar11 = 0x1c;
      puVar16 = (undefined4 *)&UNK_02159838;
      if (uVar8 < 2) goto LAB_00bad190;
    }
    local_78 = (undefined8 *)(param_1 + 0x5e0);
    local_80 = (undefined8 *)(param_1 + 0x5e8);
    lVar14 = 0;
    do {
      uVar8 = puVar16[lVar14];
      if (uVar8 < 0x24) {
        local_70 = local_70 & 0xffffffff;
        local_68 = 0;
        uVar9 = FUN_00baeb80(param_1,uVar8,&local_68,(long)&local_70 + 4);
        uVar6 = 0;
        if ((uVar9 & 1) != 0) {
          if (*(int *)(param_1 + 0x600) != 0) goto LAB_00bad408;
          lVar12 = *(long *)(*(long *)PTR_DAT_02710798 + 0x1f8);
          if (lVar12 != 0) {
            plVar13 = (long *)(lVar12 + 0x48);
            (**(code **)(*plVar13 + 0x10))(plVar13);
            (**(code **)(*plVar13 + 0x18))(plVar13);
          }
          bVar1 = local_68 <= local_70._4_4_;
          uVar6 = local_68;
          if (bVar1) {
            do {
              iVar5 = *(int *)(param_1 + 0x600);
              if (iVar5 == 0) {
                puVar10 = (undefined8 *)(param_1 + 0x5d8);
LAB_00bad3a0:
                uVar7 = FUN_01689f70(*puVar10,uVar6);
                uVar9 = FUN_01534f60(lVar12,uVar7);
              }
              else {
                puVar10 = local_80;
                if ((iVar5 == 5) || (puVar10 = local_78, iVar5 == 3)) goto LAB_00bad3a0;
                uVar9 = FUN_01534f60(lVar12,0);
              }
              if ((uVar9 & 1) != 0) goto LAB_00bad408;
              local_70._4_4_ = (uint)(local_70 >> 0x20);
              uVar6 = uVar6 + 1;
              bVar1 = uVar6 <= local_70._4_4_;
            } while (bVar1);
          }
          uVar6 = 0;
        }
      }
      else {
LAB_00bad408:
        uVar6 = 0x10000;
      }
      local_68 = uVar6 | uVar8 & 0xffff;
      local_64 = 0;
      FUN_00bb2540(*plVar2 + 0xa0,&local_68);
      lVar14 = lVar14 + 1;
      if (lVar14 == lVar11) {
        return;
      }
    } while( true );
  case 0xb:
    uVar4 = *(ushort *)(param_1 + 0x610);
    iVar5 = 5;
    if (uVar4 == 0x2c) {
      iVar5 = 1;
    }
    iVar15 = 0;
    local_70 = 0;
    iVar3 = 3;
    if (uVar4 != 0x24) {
      iVar3 = iVar5;
    }
    do {
      uVar8 = (uint)uVar4 + iVar15 & 0xffff;
      uVar9 = FUN_00baeb80(param_1,uVar8,(long)&local_70 + 4,&local_70);
      if ((uVar9 & 1) == 0) {
LAB_00bad05c:
        local_68 = 0;
      }
      else {
        if (*(int *)(param_1 + 0x600) == 0) {
          lVar11 = *(long *)(*(long *)PTR_DAT_02710798 + 0x1f8);
          if (lVar11 != 0) {
            plVar13 = (long *)(lVar11 + 0x48);
            (**(code **)(*plVar13 + 0x10))(plVar13);
            (**(code **)(*plVar13 + 0x18))(plVar13);
          }
          uVar6 = local_70._4_4_;
          if (local_70._4_4_ <= (uint)local_70) {
            do {
              iVar5 = *(int *)(param_1 + 0x600);
              if (iVar5 == 0) {
                puVar10 = (undefined8 *)(param_1 + 0x5d8);
LAB_00bad01c:
                uVar7 = FUN_01689f70(*puVar10,uVar6);
                uVar9 = FUN_01534f60(lVar11,uVar7);
              }
              else {
                if (iVar5 == 5) {
                  puVar10 = (undefined8 *)(param_1 + 0x5e8);
                  goto LAB_00bad01c;
                }
                if (iVar5 == 3) {
                  puVar10 = (undefined8 *)(param_1 + 0x5e0);
                  goto LAB_00bad01c;
                }
                uVar9 = FUN_01534f60(lVar11,0);
              }
              if ((uVar9 & 1) != 0) goto LAB_00bacfa4;
              uVar6 = uVar6 + 1;
            } while (uVar6 <= (uint)local_70);
          }
          goto LAB_00bad05c;
        }
LAB_00bacfa4:
        local_68 = 0x10000;
      }
      local_64 = 0;
      local_68 = local_68 | uVar8;
      FUN_00bb2540(*plVar2 + 0xa0,&local_68);
      iVar15 = iVar15 + 1;
      if (iVar15 == iVar3) {
        return;
      }
      uVar4 = *(ushort *)(param_1 + 0x610);
    } while( true );
  }
  local_68 = 0;
  lVar11 = *plVar2 + 0xa0;
LAB_00bad128:
  local_64 = 0;
  FUN_00bb2540(lVar11,&local_68);
  return;
}


