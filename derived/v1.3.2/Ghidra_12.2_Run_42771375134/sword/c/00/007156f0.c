/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 007156f0; name: FUN_007156f0
 */


void FUN_007156f0(long param_1,uint *param_2)

{
  uint *puVar1;
  uint uVar2;
  ushort uVar3;
  undefined2 uVar4;
  uint uVar5;
  undefined *puVar6;
  undefined *puVar7;
  long lVar8;
  void *pvVar9;
  long lVar10;
  long lVar11;
  ulong uVar12;
  long lVar13;
  ulong uVar14;
  long lVar15;
  int *piVar16;
  int *piVar17;
  int iVar18;
  long *plVar19;
  int iVar20;
  uint uVar21;
  undefined8 *puVar22;
  uint uVar23;
  ulong uVar24;
  ulong uVar25;
  uint *puVar26;
  undefined8 uVar27;
  ulong uVar28;
  long *plVar29;
  long lVar30;
  long *plVar31;
  undefined4 *puVar32;
  long *local_188;
  ulong local_168;
  ulong local_160;
  ulong local_158;
  ulong local_150;
  undefined8 *local_148;
  undefined4 local_140;
  undefined1 local_13c;
  undefined8 local_138;
  undefined4 local_130;
  undefined1 local_12c;
  undefined8 local_128;
  undefined4 local_120;
  undefined1 local_11c;
  undefined8 local_118;
  undefined4 local_110;
  undefined1 local_10c;
  undefined8 local_108;
  undefined4 local_100;
  undefined1 local_fc;
  undefined8 local_f8;
  undefined4 local_f0;
  undefined1 local_ec;
  undefined8 local_e8;
  undefined4 local_e0;
  undefined1 local_dc;
  undefined8 local_d8;
  undefined4 local_d0;
  undefined1 local_cc;
  undefined8 local_c8;
  undefined4 local_c0;
  undefined1 local_bc;
  undefined8 local_b8;
  undefined4 local_b0;
  undefined1 local_ac;
  undefined8 local_a8;
  undefined4 local_a0;
  undefined1 local_9c;
  undefined8 local_98;
  undefined4 local_90;
  undefined1 local_8c;
  undefined8 local_88;
  undefined4 local_80;
  undefined1 local_7c;
  undefined8 local_78;
  undefined4 local_70;
  undefined1 local_6c;
  
  if (param_2 != (uint *)0x0) {
    uVar23 = *param_2;
    uVar24 = (ulong)uVar23;
    lVar11 = *(long *)(param_1 + 0x230);
    if ((ulong)(*(long *)(param_1 + 0x240) - lVar11 >> 6) < uVar24) {
      puVar22 = (undefined8 *)(param_1 + 0x248);
      lVar13 = *(long *)(param_1 + 0x238);
      local_150 = 0;
      local_148 = puVar22;
      local_168 = (**(code **)(**(long **)(param_1 + 0x248) + 0x10))
                            (*(long **)(param_1 + 0x248),uVar24 << 6,8);
      if (local_168 == 0) {
        (**(code **)(*(long *)*puVar22 + 0xb8))();
      }
      puVar6 = PTR_DAT_02710860;
      local_160 = local_168 + (lVar13 - lVar11 >> 6) * 0x40;
      local_150 = local_168 + uVar24 * 0x40;
      uVar25 = *(ulong *)(param_1 + 0x230);
      uVar24 = *(ulong *)(param_1 + 0x238);
      local_158 = local_160;
      if (uVar24 != uVar25) {
        do {
          uVar14 = local_160;
          uVar27 = *puVar22;
          lVar11 = nn::os::GetTlsValue(*(undefined4 *)puVar6);
          if (0xf < *(ulong *)(lVar11 + 0x80)) goto LAB_007160e4;
          *(undefined8 *)(lVar11 + *(ulong *)(lVar11 + 0x80) * 8) = uVar27;
          *(long *)(lVar11 + 0x80) = *(long *)(lVar11 + 0x80) + 1;
          lVar13 = *(long *)(uVar24 - 0x40);
          uVar28 = uVar24 - 0x40;
          *(long *)(uVar14 - 0x40) = lVar13;
          if (lVar13 != 0) {
            (**(code **)(*(long *)(lVar13 + 0x48) + 0x10))();
          }
          FUN_0071d490(uVar14 - 0x38,uVar24 - 0x38);
          uVar4 = *(undefined2 *)(uVar24 - 8);
          *(undefined1 *)(uVar14 - 6) = *(undefined1 *)(uVar24 - 6);
          *(undefined2 *)(uVar14 - 8) = uVar4;
          *(long *)(lVar11 + 0x80) = *(long *)(lVar11 + 0x80) + -1;
          local_160 = local_160 - 0x40;
          uVar24 = uVar28;
        } while (uVar25 != uVar28);
        uVar25 = *(ulong *)(param_1 + 0x230);
        uVar24 = *(ulong *)(param_1 + 0x238);
      }
      *(ulong *)(param_1 + 0x230) = local_160;
      uVar14 = *(ulong *)(param_1 + 0x240);
      *(ulong *)(param_1 + 0x238) = local_158;
      *(ulong *)(param_1 + 0x240) = local_150;
      local_168 = uVar25;
      local_160 = uVar25;
      local_158 = uVar24;
      local_150 = uVar14;
      FUN_0071d360(&local_168);
      uVar23 = *param_2;
    }
    if (uVar23 != 0) {
      uVar24 = 0;
      puVar32 = (undefined4 *)PTR_DAT_02710860;
      do {
        puVar22 = *(undefined8 **)(param_1 + 0x238);
        if (puVar22 < *(undefined8 **)(param_1 + 0x240)) {
          uVar27 = *(undefined8 *)(param_1 + 0x248);
          lVar11 = nn::os::GetTlsValue(*puVar32);
          if (0xf < *(ulong *)(lVar11 + 0x80)) {
LAB_007160e4:
                    /* WARNING: Subroutine does not return */
            abort();
          }
          *(undefined8 *)(lVar11 + *(ulong *)(lVar11 + 0x80) * 8) = uVar27;
          *(long *)(lVar11 + 0x80) = *(long *)(lVar11 + 0x80) + 1;
          puVar22[6] = 0;
          puVar22[7] = 0;
          puVar22[4] = 0;
          puVar22[5] = 0;
          puVar22[2] = 0;
          puVar22[3] = 0;
          *puVar22 = 0;
          puVar22[1] = 0;
          lVar13 = nn::os::GetTlsValue(*puVar32);
          if (((lVar13 == 0) || (*(long *)(lVar13 + 0x80) == 0)) ||
             (lVar13 = *(long *)(lVar13 + *(long *)(lVar13 + 0x80) * 8 + -8), lVar13 == 0)) {
            lVar13 = FUN_0075ecb0();
          }
          puVar22[4] = lVar13;
          puVar22[5] = 0;
          *(undefined4 *)(puVar22 + 6) = 0;
          *(undefined2 *)((long)puVar22 + 0x39) = 0;
          *(long *)(lVar11 + 0x80) = *(long *)(lVar11 + 0x80) + -1;
          lVar11 = *(long *)(param_1 + 0x238) + 0x40;
          *(long *)(param_1 + 0x238) = lVar11;
        }
        else {
          FUN_0071d5f0(param_1 + 0x230);
          lVar11 = *(long *)(param_1 + 0x238);
        }
        puVar7 = PTR_DAT_02715aa0;
        puVar6 = PTR_DAT_02715a98;
        piVar17 = (int *)((long)(param_2 + uVar24 + 1) + (ulong)param_2[uVar24 + 1]);
        if (*(ushort *)((long)piVar17 - (long)*piVar17) < 7) {
          puVar26 = (uint *)0x0;
        }
        else {
          uVar25 = (ulong)((ushort *)((long)piVar17 - (long)*piVar17))[3];
          puVar26 = (uint *)0x0;
          if (uVar25 != 0) {
            puVar26 = (uint *)((long)piVar17 + uVar25);
            puVar26 = (uint *)((long)puVar26 + (ulong)*puVar26);
          }
        }
        uVar23 = *puVar26;
        local_168 = 0xffffffff00000000;
        local_160 = local_160 & 0xffffff0000000000;
        local_158 = 0xffffffff00000000;
        local_150 = local_150 & 0xffffff0000000000;
        local_148 = (undefined8 *)0xffffffff00000000;
        local_140 = 0;
        local_13c = 0;
        local_138 = 0xffffffff00000000;
        local_130 = 0;
        local_12c = 0;
        local_128 = 0xffffffff00000000;
        local_120 = 0;
        local_11c = 0;
        local_118 = 0xffffffff00000000;
        local_110 = 0;
        local_10c = 0;
        local_108 = 0xffffffff00000000;
        local_100 = 0;
        local_fc = 0;
        local_f8 = 0xffffffff00000000;
        local_f0 = 0;
        local_ec = 0;
        local_e8 = 0xffffffff00000000;
        local_e0 = 0;
        local_dc = 0;
        local_d8 = 0xffffffff00000000;
        local_d0 = 0;
        local_cc = 0;
        local_c8 = 0xffffffff00000000;
        local_c0 = 0;
        local_bc = 0;
        local_b8 = 0xffffffff00000000;
        local_b0 = 0;
        local_ac = 0;
        local_a8 = 0xffffffff00000000;
        local_a0 = 0;
        local_9c = 0;
        local_98 = 0xffffffff00000000;
        local_90 = 0;
        local_8c = 0;
        local_88 = 0xffffffff00000000;
        local_80 = 0;
        local_7c = 0;
        local_78 = 0xffffffff00000000;
        local_70 = 0;
        local_6c = 0;
        *(undefined1 *)(lVar11 + -8) = 0;
        if (uVar23 == 0) {
          uVar21 = 0;
        }
        else {
          lVar13 = 0;
          uVar21 = 0;
          piVar16 = (int *)((ulong)&local_168 | 4);
          do {
            uVar25 = (ulong)*(uint *)((long)puVar26 + lVar13 + 4);
            lVar8 = lVar13 + (uVar25 - (long)*(int *)((long)puVar26 + lVar13 + uVar25 + 4));
            uVar3 = *(ushort *)((long)puVar26 + lVar8 + 4);
            if (uVar3 < 7) {
              uVar14 = 0;
LAB_00715afc:
              iVar20 = 0;
            }
            else {
              uVar28 = (ulong)*(ushort *)((long)puVar26 + lVar8 + 10);
              uVar14 = 0;
              if (uVar28 != 0) {
                uVar14 = (ulong)*(uint *)((long)puVar26 + lVar13 + uVar25 + uVar28 + 4);
              }
              if ((uVar3 < 9) ||
                 (uVar28 = (ulong)*(ushort *)((long)puVar26 + lVar8 + 0xc), uVar28 == 0))
              goto LAB_00715afc;
              iVar20 = *(int *)((long)puVar26 + lVar13 + uVar25 + uVar28 + 4);
            }
            piVar16[-1] = *(int *)(puVar6 + ((long)iVar20 + -1) * 4 + uVar14 * 0x10);
            lVar8 = lVar13 + (uVar25 - (long)*(int *)((long)puVar26 + lVar13 + uVar25 + 4));
            if ((*(ushort *)((long)puVar26 + lVar8 + 4) < 5) ||
               (uVar28 = (ulong)*(ushort *)((long)puVar26 + lVar8 + 8), uVar28 == 0)) {
              iVar18 = 0;
            }
            else {
              iVar18 = *(int *)((long)puVar26 + lVar13 + uVar25 + uVar28 + 4);
            }
            uVar21 = *(int *)(puVar7 + ((long)iVar20 + -1) * 4 + uVar14 * 0x10) + uVar21;
            *piVar16 = iVar18;
            piVar16[1] = 0;
            if (iVar18 == 0xb) {
              *(undefined1 *)(lVar11 + -8) = 1;
            }
            lVar13 = lVar13 + 4;
            piVar16 = piVar16 + 4;
          } while ((ulong)uVar23 * 4 != lVar13);
        }
        puVar26 = (uint *)((long)piVar17 + (ulong)*(ushort *)((long)piVar17 + (8 - (long)*piVar17)))
        ;
        plVar29 = *(long **)(param_1 + 0x178);
        uVar2 = *(uint *)((long)puVar26 + (ulong)*puVar26);
        if (plVar29 == (long *)0x0) {
          plVar29 = *(long **)(param_1 + 8);
        }
        lVar13 = nn::os::GetTlsValue(*puVar32);
        if (0xf < *(ulong *)(lVar13 + 0x80)) goto LAB_007160e4;
        *(long **)(lVar13 + *(ulong *)(lVar13 + 0x80) * 8) = plVar29;
        *(long *)(lVar13 + 0x80) = *(long *)(lVar13 + 0x80) + 1;
        uVar5 = 0;
        if (uVar21 != 0) {
          uVar5 = uVar2 / uVar21;
        }
        lVar8 = (**(code **)(*plVar29 + 0x10))(plVar29,0x1b0,8);
        if (lVar8 == 0) {
          (**(code **)(*plVar29 + 0xb8))(plVar29);
        }
        FUN_00721450(lVar8,&local_168,uVar23,uVar5,1,*(undefined8 *)(param_1 + 0x410));
        *(long **)(lVar8 + 8) = plVar29;
        *(long *)(lVar8 + 0x10) = lVar8;
        *(undefined8 *)(lVar8 + 0x18) = 0x1b0;
        *(undefined8 *)(lVar8 + 0x20) = 8;
        *(long *)(lVar13 + 0x80) = *(long *)(lVar13 + 0x80) + -1;
        if (lVar8 != 0) {
          (**(code **)(*(long *)(lVar8 + 0x48) + 0x10))();
        }
        puVar32 = (undefined4 *)PTR_DAT_02710860;
        if (*(long *)(lVar11 + -0x40) != 0) {
          (**(code **)(*(long *)(*(long *)(lVar11 + -0x40) + 0x48) + 0x18))();
          *(undefined8 *)(lVar11 + -0x40) = 0;
        }
        *(long *)(lVar11 + -0x40) = lVar8;
        lVar13 = *(long *)(*(long *)(lVar8 + 0x98) + 0x58);
        pvVar9 = (void *)thunk_FUN_0199c7e0(lVar13);
        uVar3 = *(ushort *)((long)piVar17 + (8 - (long)*piVar17));
        puVar26 = (uint *)((long)piVar17 + (ulong)uVar3);
        puVar26 = (uint *)((long)puVar26 + (ulong)*puVar26);
        puVar1 = (uint *)0x0;
        if (uVar3 != 0) {
          puVar1 = puVar26;
        }
        memcpy(pvVar9,puVar1 + 1,(ulong)*puVar26);
        if (lVar13 != 0) {
          thunk_FUN_0199c800(lVar13);
        }
        if ((*(ushort *)((long)piVar17 - (long)*piVar17) < 5) ||
           (uVar25 = (ulong)((ushort *)((long)piVar17 - (long)*piVar17))[2], uVar25 == 0)) {
          puVar26 = (uint *)0x0;
        }
        else {
          puVar26 = (uint *)((long)piVar17 + uVar25);
          puVar26 = (uint *)((long)puVar26 + (ulong)*puVar26);
        }
        plVar29 = (long *)(lVar11 + -0x38);
        FUN_00718890(plVar29,*puVar26);
        if (*puVar26 != 0) {
          uVar25 = 0;
          lVar13 = (long)puVar26 + 10;
          do {
            local_188 = (long *)(lVar11 + -0x30);
            puVar22 = *(undefined8 **)(lVar11 + -0x30);
            uVar14 = (ulong)*(uint *)(lVar13 + -6);
            if (puVar22 < *(undefined8 **)(lVar11 + -0x28)) {
              uVar27 = *(undefined8 *)(lVar11 + -0x20);
              lVar8 = nn::os::GetTlsValue(*puVar32);
              if (0xf < *(ulong *)(lVar8 + 0x80)) goto LAB_007160e4;
              *(undefined8 *)(lVar8 + *(ulong *)(lVar8 + 0x80) * 8) = uVar27;
              *(long *)(lVar8 + 0x80) = *(long *)(lVar8 + 0x80) + 1;
              *puVar22 = 0;
              puVar22[1] = 0;
              puVar22[2] = 0;
              *(long *)(lVar8 + 0x80) = *(long *)(lVar8 + 0x80) + -1;
              lVar8 = *local_188 + 0x18;
              *local_188 = lVar8;
            }
            else {
              FUN_0071d840(plVar29);
              lVar8 = *local_188;
            }
            lVar15 = lVar13 + uVar14;
            lVar30 = lVar13 + (uVar14 - (long)*(int *)(lVar15 + -6));
            if (*(ushort *)(lVar30 + -6) < 5) {
              iVar20 = 0;
            }
            else {
              uVar28 = (ulong)*(ushort *)(lVar30 + -2);
              iVar20 = 0;
              if (uVar28 != 0) {
                iVar20 = *(int *)(lVar13 + uVar14 + uVar28 + -6);
              }
            }
            *(long *)(lVar8 + -8) = *(long *)(param_1 + 0x290) + (long)iVar20 * 0x4c0;
            lVar30 = *(long *)(lVar11 + -0x40);
            if (lVar30 != 0) {
              (**(code **)(*(long *)(lVar30 + 0x48) + 0x10))();
            }
            lVar10 = *(long *)(lVar8 + -0x18);
            *(long *)(lVar8 + -0x18) = lVar30;
            if (lVar10 != 0) {
              (**(code **)(*(long *)(lVar10 + 0x48) + 0x18))();
            }
            plVar31 = *(long **)(param_1 + 0x178);
            lVar30 = uVar14 + *(ushort *)(lVar13 + (uVar14 - (long)*(int *)(lVar15 + -6)));
            uVar28 = (ulong)*(uint *)(lVar13 + lVar30 + (ulong)*(uint *)(lVar13 + lVar30 + -6) + -6)
            ;
            if (plVar31 == (long *)0x0) {
              plVar31 = *(long **)(param_1 + 8);
            }
            lVar30 = nn::os::GetTlsValue(*puVar32);
            if (0xf < *(ulong *)(lVar30 + 0x80)) goto LAB_007160e4;
            *(long **)(lVar30 + *(ulong *)(lVar30 + 0x80) * 8) = plVar31;
            *(long *)(lVar30 + 0x80) = *(long *)(lVar30 + 0x80) + 1;
            lVar10 = (**(code **)(*plVar31 + 0x10))(plVar31,0x140,8);
            if (lVar10 == 0) {
              (**(code **)(*plVar31 + 0xb8))(plVar31);
            }
            FUN_0071dad0(lVar10,uVar28,*(undefined8 *)(param_1 + 0x410));
            *(long **)(lVar10 + 8) = plVar31;
            *(long *)(lVar10 + 0x10) = lVar10;
            *(undefined8 *)(lVar10 + 0x18) = 0x140;
            *(undefined8 *)(lVar10 + 0x20) = 8;
            *(long *)(lVar30 + 0x80) = *(long *)(lVar30 + 0x80) + -1;
            if (lVar10 != 0) {
              (**(code **)(*(long *)(lVar10 + 0x48) + 0x10))();
            }
            puVar32 = (undefined4 *)PTR_DAT_02710860;
            if (*(long *)(lVar8 + -0x10) != 0) {
              (**(code **)(*(long *)(*(long *)(lVar8 + -0x10) + 0x48) + 0x18))();
              *(undefined8 *)(lVar8 + -0x10) = 0;
            }
            *(long *)(lVar8 + -0x10) = lVar10;
            pvVar9 = (void *)thunk_FUN_0199c7e0(lVar10 + 0x58);
            lVar8 = uVar14 - (long)*(int *)(lVar15 + -6);
            if (*(ushort *)(lVar13 + lVar8 + -6) < 7) {
              lVar8 = 0;
            }
            else {
              uVar12 = (ulong)*(ushort *)(lVar13 + lVar8);
              lVar8 = 0;
              if (uVar12 != 0) {
                lVar8 = uVar14 + uVar12;
                lVar8 = lVar13 + lVar8 + (ulong)*(uint *)(lVar13 + lVar8 + -6) + -6;
              }
            }
            memcpy(pvVar9,(void *)(lVar8 + 4),uVar28 << 1);
            thunk_FUN_0199c800(lVar10 + 0x58);
            uVar25 = uVar25 + 1;
            lVar13 = lVar13 + 4;
          } while (uVar25 < *puVar26);
        }
        FUN_0071de10(*plVar29,*(long *)(lVar11 + -0x30));
        lVar8 = *plVar29;
        lVar15 = *(long *)(lVar11 + -0x30);
        lVar13 = lVar8;
        if (lVar8 != lVar15) {
          do {
            piVar17 = *(int **)(*(long *)(lVar13 + 0x10) + 0x40);
            if (((0x28 < *(ushort *)((long)piVar17 - (long)*piVar17)) &&
                (uVar25 = (ulong)((ushort *)((long)piVar17 - (long)*piVar17))[0x14], uVar25 != 0))
               && (*(char *)((long)piVar17 + uVar25) != '\0')) {
              *(undefined1 *)(lVar11 + -7) = 1;
              break;
            }
            lVar13 = lVar13 + 0x18;
          } while (lVar15 != lVar13);
          do {
            if (lVar8 == lVar15) break;
            lVar13 = *(long *)(lVar8 + 0x10);
            uVar23 = *(uint *)(lVar13 + 0x4b4);
            if (uVar23 == 0xffffffff) {
              plVar29 = *(long **)(lVar13 + 0x108);
              plVar31 = *(long **)(lVar13 + 0x110);
              if (plVar31 != plVar29) {
                plVar19 = plVar29;
                if (*plVar29 != -0x38a585955a2df21b) {
                  do {
                    plVar19 = plVar19 + 4;
                    if (plVar31 == plVar19) goto LAB_0071609c;
                  } while (*plVar19 != -0x38a585955a2df21b);
                }
                uVar23 = (uint)(plVar19 != plVar31 &&
                               -1 < (int)((ulong)((long)plVar19 - (long)plVar29) >> 5));
                *(uint *)(lVar13 + 0x4b4) = uVar23;
                goto joined_r0x00716030;
              }
LAB_0071609c:
              *(undefined4 *)(lVar13 + 0x4b4) = 0;
            }
            else {
joined_r0x00716030:
              if (uVar23 == 1) {
                *(undefined1 *)(lVar11 + -6) = 1;
                break;
              }
            }
            lVar8 = lVar8 + 0x18;
          } while( true );
        }
        uVar24 = uVar24 + 1;
      } while (uVar24 < *param_2);
    }
  }
  return;
}


