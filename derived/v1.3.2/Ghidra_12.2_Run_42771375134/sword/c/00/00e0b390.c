/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00e0b390; name: FUN_00e0b390
 */


/* WARNING (jumptable): Heritage AFTER dead removal. Revisit: 0xfffffffffffffe38 */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_00e0b390(long param_1,int *param_2)

{
  long lVar1;
  uint *puVar2;
  int *piVar3;
  uint *puVar4;
  uint *puVar5;
  long lVar6;
  long lVar7;
  byte bVar8;
  bool bVar9;
  int iVar10;
  undefined4 uVar11;
  long lVar12;
  char *pcVar13;
  long lVar14;
  ushort uVar15;
  ushort uVar16;
  ulong uVar17;
  byte *pbVar18;
  ulong *puVar19;
  code *pcVar20;
  int *piVar21;
  undefined4 uVar22;
  ulong uVar23;
  long lVar24;
  int *piVar25;
  byte *pbVar26;
  ulong uVar27;
  ulong uVar28;
  ushort *puVar29;
  ulong uVar30;
  undefined4 uVar31;
  long *plVar32;
  long *plVar33;
  ulong uVar34;
  long lVar35;
  uint *puVar36;
  ulong *puVar37;
  ulong *puVar38;
  uint *puVar39;
  int *piVar40;
  undefined8 *puVar41;
  undefined8 *puVar42;
  undefined8 uVar43;
  long *plVar44;
  long *plVar45;
  long *plVar46;
  long lVar47;
  long lVar48;
  long local_258;
  long local_250;
  long *local_1f0;
  long *local_1e8;
  long *local_1e0;
  long *local_1d8;
  undefined8 local_1d0;
  undefined8 local_1c8;
  undefined8 local_1c0;
  long *local_1b8;
  long *local_1b0;
  long *local_1a8;
  long *local_1a0;
  long *local_198;
  long *local_190;
  long *plStack_188;
  undefined8 uStack_180;
  undefined8 local_178;
  undefined8 local_170;
  long *local_168;
  long *local_160;
  long *local_158;
  long *local_150;
  long *local_148;
  long *local_140;
  long *local_138;
  long *local_130;
  long *local_128;
  long *local_120;
  long *local_118;
  long *local_110;
  long *local_108;
  long *local_100;
  long *local_f8;
  long *local_f0;
  long *local_e8;
  long *local_e0;
  long *local_d8;
  long *local_d0;
  long *local_c8;
  long *local_c0;
  long *local_b8;
  long *local_b0;
  long *local_a8;
  long *local_a0;
  long *local_98;
  undefined1 auStack_90 [8];
  char *local_88;
  long local_78;
  long local_70 [2];
  
  plVar33 = (long *)(param_1 + 0x80);
  plVar45 = (long *)(param_1 + 0x88);
  if (*plVar33 == *plVar45) {
    lVar1 = param_1 + 0x368;
    *(undefined8 *)(param_1 + 0x370) = *(undefined8 *)(param_1 + 0x368);
    *(undefined8 *)(param_1 + 0x3a0) = *(undefined8 *)(param_1 + 0x398);
    *(undefined8 *)(param_1 + 0x3d0) = *(undefined8 *)(param_1 + 0x3c8);
    uVar17 = (ulong)*(ushort *)((long)param_2 + (4 - (long)*param_2));
    puVar2 = (uint *)((long)param_2 + uVar17);
    uVar23 = (ulong)*puVar2;
    puVar2 = (uint *)((long)puVar2 + uVar23);
    plVar46 = *(long **)(param_1 + 8);
    puVar36 = puVar2 + 1;
    uVar28 = (ulong)*puVar2;
    if (uVar28 != 0) {
      puVar2 = puVar36 + uVar28;
      puVar41 = (undefined8 *)(param_1 + 0x98);
      local_250 = (long)param_2 + uVar17 + uVar23;
      local_258 = local_250 + 8;
      puVar42 = (undefined8 *)(param_1 + 0x90);
      pbVar18 = (byte *)((ulong)&local_1b0 | 1);
      do {
        uVar17 = (ulong)*puVar36;
        piVar3 = (int *)((long)puVar36 + uVar17);
        if (*(ushort *)((long)piVar3 - (long)*piVar3) < 5) {
          piVar21 = (int *)0x0;
        }
        else {
          uVar23 = (ulong)((ushort *)((long)piVar3 - (long)*piVar3))[2];
          piVar21 = (int *)0x0;
          if (uVar23 != 0) {
            puVar39 = (uint *)((long)piVar3 + uVar23);
            piVar21 = (int *)((long)puVar39 + (ulong)*puVar39);
          }
        }
        if ((*(ushort *)((long)piVar21 - (long)*piVar21) < 7) ||
           (uVar23 = (ulong)((ushort *)((long)piVar21 - (long)*piVar21))[3], uVar23 == 0)) {
          local_70[0] = 0;
        }
        else {
          local_70[0] = *(long *)((long)piVar21 + uVar23);
        }
        lVar48 = *(long *)(*(long *)PTR_DAT_02710848 + 0x90);
        if (lVar48 != 0) {
          (**(code **)(*(long *)(lVar48 + 0x48) + 0x10))();
        }
        if (*(long *)(lVar48 + 0x688) == 0) {
          if (((*PTR_DAT_02715558 & 1) == 0) &&
             (iVar10 = __cxa_guard_acquire(PTR_DAT_02715558), iVar10 != 0)) {
            lVar24 = FUN_006e5e60();
            *(long *)PTR_DAT_02715560 = lVar24;
            if (lVar24 != 0) {
              (**(code **)(*(long *)(lVar24 + 0x48) + 0x10))();
            }
            FUN_001001c0(PTR_LAB_02715568,PTR_DAT_02715560,&PTR_LOOP_025db000);
            __cxa_guard_release(PTR_DAT_02715558);
          }
          local_1b0 = *(long **)PTR_DAT_02715560;
          if (local_1b0 != (long *)0x0) {
            (**(code **)(local_1b0[9] + 0x10))();
          }
        }
        else {
          FUN_006e7120(&local_1b0,*(long *)(lVar48 + 0x688),local_70);
        }
        FUN_006cf0c0(auStack_90,&local_1b0);
        if (local_1b0 != (long *)0x0) {
          (**(code **)(local_1b0[9] + 0x18))();
          local_1b0 = (long *)0x0;
        }
        (**(code **)(*(long *)(lVar48 + 0x48) + 0x18))((long *)(lVar48 + 0x48));
        lVar48 = (long)piVar3 - (long)*piVar3;
        puVar4 = (uint *)((long)piVar3 + (ulong)*(ushort *)(lVar48 + 0x14));
        puVar4 = (uint *)((long)puVar4 + (ulong)*puVar4);
        puVar39 = puVar4 + 1;
        uVar23 = (ulong)*puVar4;
        if (uVar23 != 0) {
          puVar4 = puVar39 + uVar23;
          do {
            piVar21 = (int *)((long)puVar39 + (ulong)*puVar39);
            if (*(ushort *)((long)piVar21 - (long)*piVar21) < 5) {
              piVar40 = (int *)0x0;
            }
            else {
              uVar23 = (ulong)((ushort *)((long)piVar21 - (long)*piVar21))[2];
              piVar40 = (int *)0x0;
              if (uVar23 != 0) {
                puVar5 = (uint *)((long)piVar21 + uVar23);
                piVar40 = (int *)((long)puVar5 + (ulong)*puVar5);
              }
            }
            if ((*(ushort *)((long)piVar40 - (long)*piVar40) < 5) ||
               (uVar23 = (ulong)((ushort *)((long)piVar40 - (long)*piVar40))[2], uVar23 == 0)) {
              piVar40 = (int *)0x0;
            }
            else {
              puVar5 = (uint *)((long)piVar40 + uVar23);
              piVar40 = (int *)((long)puVar5 + (ulong)*puVar5);
            }
            if ((*(ushort *)((long)piVar40 - (long)*piVar40) < 5) ||
               (uVar23 = (ulong)((ushort *)((long)piVar40 - (long)*piVar40))[2], uVar23 == 0)) {
              lVar48 = 0;
            }
            else {
              puVar5 = (uint *)((long)piVar40 + uVar23);
              lVar48 = (long)puVar5 + (ulong)*puVar5;
            }
            FUN_00e15210(&local_b0,plVar46,piVar21,lVar48,local_70);
            (**(code **)(*local_b0 + 0x90))(local_b0,1);
            uVar28 = (ulong)*(ushort *)((long)piVar3 + (0x22 - (long)*piVar3));
            uVar34 = (ulong)*(uint *)((long)piVar3 + uVar28);
            uVar23 = (ulong)*(uint *)((long)((long)piVar3 + uVar28) + uVar34);
            lVar48 = uVar23 * 4;
            if (uVar23 != 0) {
              if (*(ushort *)((long)piVar21 - (long)*piVar21) < 0xd) {
                lVar24 = 0;
                lVar12 = local_258 + uVar17 + uVar28 + uVar34;
                do {
                  uVar23 = (ulong)*(uint *)(lVar12 + lVar24);
                  lVar35 = lVar24 + (uVar23 - (long)*(int *)(lVar12 + uVar23 + lVar24));
                  if ((*(ushort *)(lVar12 + lVar35) < 5) ||
                     (uVar28 = (ulong)*(ushort *)(lVar12 + lVar35 + 4), uVar28 == 0)) {
                    piVar40 = (int *)0x0;
                  }
                  else {
                    lVar35 = uVar23 + uVar28;
                    piVar40 = (int *)(lVar12 + lVar24 + lVar35 + (ulong)*(uint *)(lVar12 + lVar35 +
                                                                                 lVar24));
                  }
                  if (((*(ushort *)((long)piVar40 - (long)*piVar40) < 0x17) ||
                      (uVar28 = (ulong)((ushort *)((long)piVar40 - (long)*piVar40))[0xb],
                      uVar28 == 0)) || (*(long *)((long)piVar40 + uVar28) == 0)) {
                    lVar24 = lVar12 + uVar23 + lVar24;
                    goto LAB_00e0b89c;
                  }
                  lVar24 = lVar24 + 4;
                } while (lVar48 != lVar24);
              }
              else {
                uVar15 = ((ushort *)((long)piVar21 - (long)*piVar21))[6];
                lVar24 = 0;
                lVar12 = local_258 + uVar17 + uVar28 + uVar34;
                do {
                  uVar23 = (ulong)*(uint *)(lVar12 + lVar24);
                  if (uVar15 == 0) {
                    lVar35 = 0;
                  }
                  else {
                    lVar35 = *(long *)((long)piVar21 + (ulong)uVar15);
                  }
                  lVar6 = lVar24 + (uVar23 - (long)*(int *)(lVar12 + uVar23 + lVar24));
                  if ((*(ushort *)(lVar12 + lVar6) < 5) ||
                     (uVar28 = (ulong)*(ushort *)(lVar12 + lVar6 + 4), uVar28 == 0)) {
                    piVar40 = (int *)0x0;
                  }
                  else {
                    lVar6 = uVar23 + uVar28;
                    piVar40 = (int *)(lVar12 + lVar24 + lVar6 + (ulong)*(uint *)(lVar12 + lVar6 +
                                                                                lVar24));
                  }
                  if ((0x16 < *(ushort *)((long)piVar40 - (long)*piVar40)) &&
                     (uVar28 = (ulong)((ushort *)((long)piVar40 - (long)*piVar40))[0xb], uVar28 != 0
                     )) {
                    if (lVar35 != *(long *)((long)piVar40 + uVar28)) goto LAB_00e0b7e4;
LAB_00e0b800:
                    lVar24 = lVar12 + uVar23 + lVar24;
LAB_00e0b89c:
                    (**(code **)(*local_b0 + 0x98))(local_b0,lVar24);
                    break;
                  }
                  if (lVar35 == 0) goto LAB_00e0b800;
LAB_00e0b7e4:
                  lVar24 = lVar24 + 4;
                } while (lVar48 != lVar24);
              }
            }
            lVar48 = (**(code **)(*local_b0 + 0x40))();
            if (lVar48 == -0x340d631b7bddd9bb) {
              (**(code **)(*local_b0 + 0x80))(local_b0,1);
            }
            if (*(ushort *)((long)piVar21 - (long)*piVar21) < 5) {
              piVar40 = (int *)0x0;
            }
            else {
              uVar23 = (ulong)((ushort *)((long)piVar21 - (long)*piVar21))[2];
              piVar40 = (int *)0x0;
              if (uVar23 != 0) {
                puVar5 = (uint *)((long)piVar21 + uVar23);
                piVar40 = (int *)((long)puVar5 + (ulong)*puVar5);
              }
            }
            if (*(ushort *)((long)piVar40 - (long)*piVar40) < 5) {
              piVar25 = (int *)0x0;
            }
            else {
              uVar23 = (ulong)((ushort *)((long)piVar40 - (long)*piVar40))[2];
              piVar25 = (int *)0x0;
              if (uVar23 != 0) {
                puVar5 = (uint *)((long)piVar40 + uVar23);
                piVar25 = (int *)((long)puVar5 + (ulong)*puVar5);
              }
            }
            puVar29 = (ushort *)((long)piVar25 - (long)*piVar25);
            if (*puVar29 < 7) {
              local_1a0 = (long *)0x0;
LAB_00e0b98c:
              local_198 = (long *)0x0;
            }
            else {
              local_1a0 = (long *)0x0;
              if ((ulong)puVar29[3] != 0) {
                local_1a0 = *(long **)((long)piVar25 + (ulong)puVar29[3]);
              }
              if ((*puVar29 < 9) || ((ulong)puVar29[4] == 0)) goto LAB_00e0b98c;
              local_198 = *(long **)((long)piVar25 + (ulong)puVar29[4]);
            }
            local_1a8 = (long *)CONCAT44(local_1a8._4_4_,4);
            local_178 = (long *)((ulong)local_178 & 0xffff000000000000);
            local_170 = (long *)0x0;
            local_190 = (long *)0x0;
            plStack_188 = (long *)0x0;
            uStack_180 = (long *)((ulong)uStack_180 & 0xffff000000000000);
            local_168 = (long *)CONCAT44(local_168._4_4_,0xffffffff);
            local_160 = (long *)0x0;
            local_150 = local_b0;
            local_158 = (long *)CONCAT71(local_158._1_7_,1);
            puVar37 = *(ulong **)(param_1 + 0x370);
            if (puVar37 < *(ulong **)(param_1 + 0x378)) {
              uVar43 = *(undefined8 *)(param_1 + 0x380);
              local_1b0 = plVar46;
              lVar48 = nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_02710860);
              if (0xf < *(ulong *)(lVar48 + 0x80)) goto LAB_00e10df8;
              *(undefined8 *)(lVar48 + *(ulong *)(lVar48 + 0x80) * 8) = uVar43;
              *(long *)(lVar48 + 0x80) = *(long *)(lVar48 + 0x80) + 1;
              *puVar37 = (ulong)local_1b0;
              puVar37[1] = (ulong)local_1a8;
              puVar37[4] = (ulong)local_190;
              puVar37[5] = (ulong)plStack_188;
              puVar37[2] = (ulong)local_1a0;
              puVar37[3] = (ulong)local_198;
              *(undefined4 *)(puVar37 + 6) = (undefined4)uStack_180;
              *(undefined2 *)((long)puVar37 + 0x34) = uStack_180._4_2_;
              *(undefined4 *)(puVar37 + 7) = (undefined4)local_178;
              *(undefined1 *)((long)puVar37 + 0x3c) = local_178._4_1_;
              *(undefined1 *)((long)puVar37 + 0x3d) = local_178._5_1_;
              *(undefined4 *)(puVar37 + 8) = (undefined4)local_170;
              *(undefined4 *)((long)puVar37 + 0x44) = local_170._4_4_;
              *(undefined4 *)(puVar37 + 9) = local_168._0_4_;
              *(undefined1 *)(puVar37 + 0xb) = local_158._0_1_;
              puVar37[10] = (ulong)local_160;
              puVar37[0xc] = (ulong)local_150;
              *(long *)(lVar48 + 0x80) = *(long *)(lVar48 + 0x80) + -1;
              *(long *)(param_1 + 0x370) = *(long *)(param_1 + 0x370) + 0x68;
              puVar37 = *(ulong **)(param_1 + 0x398);
              puVar38 = *(ulong **)(param_1 + 0x3a0);
              if (puVar37 != puVar38) goto LAB_00e0badc;
            }
            else {
              local_1b0 = plVar46;
              FUN_00e1ec20(lVar1,&local_1b0);
              puVar37 = *(ulong **)(param_1 + 0x398);
              puVar38 = *(ulong **)(param_1 + 0x3a0);
              if (puVar37 != puVar38) {
LAB_00e0badc:
                if (*(ushort *)((long)piVar21 - (long)*piVar21) < 9) {
                  if (*puVar37 != 0) {
                    puVar19 = puVar37 + 1;
                    do {
                      if (puVar38 == puVar19) goto LAB_00e0bb6c;
                      puVar37 = puVar19 + 1;
                      uVar23 = *puVar19;
                      puVar19 = puVar37;
                    } while (uVar23 != 0);
                    goto LAB_00e0bb60;
                  }
                }
                else {
                  uVar23 = (ulong)((ushort *)((long)piVar21 - (long)*piVar21))[4];
                  if (uVar23 == 0) {
                    if (*puVar37 != 0) {
                      puVar19 = puVar37 + 1;
                      do {
                        if (puVar38 == puVar19) goto LAB_00e0bb6c;
                        puVar37 = puVar19 + 1;
                        uVar23 = *puVar19;
                        puVar19 = puVar37;
                      } while (uVar23 != 0);
                      goto LAB_00e0bb60;
                    }
                  }
                  else {
                    uVar23 = *(ulong *)((long)piVar21 + uVar23);
                    if (uVar23 != *puVar37) {
                      puVar19 = puVar37 + 1;
                      do {
                        if (puVar38 == puVar19) goto LAB_00e0bb6c;
                        puVar37 = puVar19 + 1;
                        uVar28 = *puVar19;
                        puVar19 = puVar37;
                      } while (uVar23 != uVar28);
LAB_00e0bb60:
                      puVar37 = puVar37 + -1;
                    }
                  }
                }
              }
            }
            if (puVar37 == puVar38) {
LAB_00e0bb6c:
              if (*(ushort *)((long)piVar21 - (long)*piVar21) < 9) {
                local_1b0 = (long *)0x0;
                puVar37 = *(ulong **)(param_1 + 0x3a8);
              }
              else {
                uVar23 = (ulong)((ushort *)((long)piVar21 - (long)*piVar21))[4];
                local_1b0 = (long *)0x0;
                if (uVar23 != 0) {
                  local_1b0 = *(long **)((long)piVar21 + uVar23);
                }
                puVar37 = *(ulong **)(param_1 + 0x3a8);
              }
              if (puVar38 < puVar37) {
                uVar43 = *(undefined8 *)(param_1 + 0x3b0);
                lVar48 = nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_02710860);
                if (0xf < *(ulong *)(lVar48 + 0x80)) goto LAB_00e10df8;
                *(undefined8 *)(lVar48 + *(ulong *)(lVar48 + 0x80) * 8) = uVar43;
                *(long *)(lVar48 + 0x80) = *(long *)(lVar48 + 0x80) + 1;
                *puVar38 = (ulong)local_1b0;
                *(long *)(lVar48 + 0x80) = *(long *)(lVar48 + 0x80) + -1;
                *(long *)(param_1 + 0x3a0) = *(long *)(param_1 + 0x3a0) + 8;
              }
              else {
                FUN_00e1ee80(param_1 + 0x398,&local_1b0);
              }
            }
            local_1b0 = local_b0;
            local_b0 = (long *)0x0;
            local_1a8 = local_a8;
            local_1a0 = local_a0;
            local_198 = local_98;
            puVar37 = (ulong *)*plVar45;
            if (puVar37 < (ulong *)*puVar42) {
              uVar43 = *puVar41;
              lVar48 = nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_02710860);
              if (0xf < *(ulong *)(lVar48 + 0x80)) goto LAB_00e10df8;
              *(undefined8 *)(lVar48 + *(ulong *)(lVar48 + 0x80) * 8) = uVar43;
              *(long *)(lVar48 + 0x80) = *(long *)(lVar48 + 0x80) + 1;
              *puVar37 = (ulong)local_1b0;
              puVar37[2] = (ulong)local_1a0;
              puVar37[3] = (ulong)local_198;
              puVar37[1] = (ulong)local_1a8;
              *(long *)(lVar48 + 0x80) = *(long *)(lVar48 + 0x80) + -1;
              *plVar45 = *plVar45 + 0x20;
              local_1b0 = (long *)0x0;
            }
            else {
              FUN_00e1f040(plVar33,&local_1b0);
              plVar32 = local_1b0;
              local_1b0 = (long *)0x0;
              if (plVar32 != (long *)0x0) {
                local_1b0 = (long *)0x0;
                (**(code **)*plVar32)(plVar32);
                (**(code **)(*local_1a8 + 0x18))(local_1a8,plVar32,local_1a0,local_198);
              }
            }
            plVar32 = local_b0;
            local_b0 = (long *)0x0;
            if (plVar32 != (long *)0x0) {
              (**(code **)*plVar32)(plVar32);
              (**(code **)(*local_a8 + 0x18))(local_a8,plVar32,local_a0,local_98);
            }
            puVar39 = puVar39 + 1;
          } while (puVar39 != puVar4);
          lVar48 = (long)piVar3 - (long)*piVar3;
        }
        puVar4 = (uint *)((long)piVar3 + (ulong)*(ushort *)(lVar48 + 0x24));
        puVar4 = (uint *)((long)puVar4 + (ulong)*puVar4);
        puVar39 = puVar4 + 1;
        uVar23 = (ulong)*puVar4;
        if (uVar23 != 0) {
          puVar4 = puVar39 + uVar23;
          do {
            piVar21 = (int *)((long)puVar39 + (ulong)*puVar39);
            if (*(ushort *)((long)piVar21 - (long)*piVar21) < 5) {
              piVar40 = (int *)0x0;
            }
            else {
              uVar23 = (ulong)((ushort *)((long)piVar21 - (long)*piVar21))[2];
              piVar40 = (int *)0x0;
              if (uVar23 != 0) {
                puVar5 = (uint *)((long)piVar21 + uVar23);
                piVar40 = (int *)((long)puVar5 + (ulong)*puVar5);
              }
            }
            if ((*(ushort *)((long)piVar40 - (long)*piVar40) < 5) ||
               (uVar23 = (ulong)((ushort *)((long)piVar40 - (long)*piVar40))[2], uVar23 == 0)) {
              piVar40 = (int *)0x0;
            }
            else {
              puVar5 = (uint *)((long)piVar40 + uVar23);
              piVar40 = (int *)((long)puVar5 + (ulong)*puVar5);
            }
            if ((*(ushort *)((long)piVar40 - (long)*piVar40) < 5) ||
               (uVar23 = (ulong)((ushort *)((long)piVar40 - (long)*piVar40))[2], uVar23 == 0)) {
              lVar48 = 0;
            }
            else {
              puVar5 = (uint *)((long)piVar40 + uVar23);
              lVar48 = (long)puVar5 + (ulong)*puVar5;
            }
            FUN_00e153a0(&local_b0,plVar46,piVar21,lVar48,local_70);
            (**(code **)(*local_b0 + 0x90))(local_b0,1);
            uVar28 = (ulong)*(ushort *)((long)piVar3 + (0x22 - (long)*piVar3));
            uVar34 = (ulong)*(uint *)((long)piVar3 + uVar28);
            uVar23 = (ulong)*(uint *)((long)((long)piVar3 + uVar28) + uVar34);
            lVar48 = uVar23 * 4;
            if (uVar23 != 0) {
              if (*(ushort *)((long)piVar21 - (long)*piVar21) < 0xb) {
                lVar24 = 0;
                lVar12 = local_258 + uVar17 + uVar28 + uVar34;
                do {
                  uVar23 = (ulong)*(uint *)(lVar12 + lVar24);
                  lVar35 = lVar24 + (uVar23 - (long)*(int *)(lVar12 + uVar23 + lVar24));
                  if ((*(ushort *)(lVar12 + lVar35) < 5) ||
                     (uVar28 = (ulong)*(ushort *)(lVar12 + lVar35 + 4), uVar28 == 0)) {
                    piVar40 = (int *)0x0;
                  }
                  else {
                    lVar35 = uVar23 + uVar28;
                    piVar40 = (int *)(lVar12 + lVar24 + lVar35 + (ulong)*(uint *)(lVar12 + lVar35 +
                                                                                 lVar24));
                  }
                  if (((*(ushort *)((long)piVar40 - (long)*piVar40) < 0x17) ||
                      (uVar28 = (ulong)((ushort *)((long)piVar40 - (long)*piVar40))[0xb],
                      uVar28 == 0)) || (*(long *)((long)piVar40 + uVar28) == 0)) {
                    lVar24 = lVar12 + uVar23 + lVar24;
                    goto LAB_00e0bfe8;
                  }
                  lVar24 = lVar24 + 4;
                } while (lVar48 != lVar24);
              }
              else {
                uVar15 = ((ushort *)((long)piVar21 - (long)*piVar21))[5];
                lVar24 = 0;
                lVar12 = local_258 + uVar17 + uVar28 + uVar34;
                do {
                  uVar23 = (ulong)*(uint *)(lVar12 + lVar24);
                  if (uVar15 == 0) {
                    lVar35 = 0;
                  }
                  else {
                    lVar35 = *(long *)((long)piVar21 + (ulong)uVar15);
                  }
                  lVar6 = lVar24 + (uVar23 - (long)*(int *)(lVar12 + uVar23 + lVar24));
                  if ((*(ushort *)(lVar12 + lVar6) < 5) ||
                     (uVar28 = (ulong)*(ushort *)(lVar12 + lVar6 + 4), uVar28 == 0)) {
                    piVar40 = (int *)0x0;
                  }
                  else {
                    lVar6 = uVar23 + uVar28;
                    piVar40 = (int *)(lVar12 + lVar24 + lVar6 + (ulong)*(uint *)(lVar12 + lVar6 +
                                                                                lVar24));
                  }
                  if ((0x16 < *(ushort *)((long)piVar40 - (long)*piVar40)) &&
                     (uVar28 = (ulong)((ushort *)((long)piVar40 - (long)*piVar40))[0xb], uVar28 != 0
                     )) {
                    if (lVar35 != *(long *)((long)piVar40 + uVar28)) goto LAB_00e0bf30;
LAB_00e0bf4c:
                    lVar24 = lVar12 + uVar23 + lVar24;
LAB_00e0bfe8:
                    (**(code **)(*local_b0 + 0x98))(local_b0,lVar24);
                    (**(code **)(*local_b0 + 0xc0))(local_b0,1);
                    break;
                  }
                  if (lVar35 == 0) goto LAB_00e0bf4c;
LAB_00e0bf30:
                  lVar24 = lVar24 + 4;
                } while (lVar48 != lVar24);
              }
            }
            lVar48 = (**(code **)(*local_b0 + 0x40))();
            if (lVar48 == -0x340d631b7bddd9bb) {
              (**(code **)(*local_b0 + 0x80))(local_b0,1);
            }
            if (*(ushort *)((long)piVar21 - (long)*piVar21) < 5) {
              piVar40 = (int *)0x0;
            }
            else {
              uVar23 = (ulong)((ushort *)((long)piVar21 - (long)*piVar21))[2];
              piVar40 = (int *)0x0;
              if (uVar23 != 0) {
                puVar5 = (uint *)((long)piVar21 + uVar23);
                piVar40 = (int *)((long)puVar5 + (ulong)*puVar5);
              }
            }
            if (*(ushort *)((long)piVar40 - (long)*piVar40) < 5) {
              piVar21 = (int *)0x0;
            }
            else {
              uVar23 = (ulong)((ushort *)((long)piVar40 - (long)*piVar40))[2];
              piVar21 = (int *)0x0;
              if (uVar23 != 0) {
                puVar5 = (uint *)((long)piVar40 + uVar23);
                piVar21 = (int *)((long)puVar5 + (ulong)*puVar5);
              }
            }
            puVar29 = (ushort *)((long)piVar21 - (long)*piVar21);
            if (*puVar29 < 7) {
              local_1a0 = (long *)0x0;
LAB_00e0c0f0:
              local_198 = (long *)0x0;
            }
            else {
              local_1a0 = (long *)0x0;
              if ((ulong)puVar29[3] != 0) {
                local_1a0 = *(long **)((long)piVar21 + (ulong)puVar29[3]);
              }
              if ((*puVar29 < 9) || ((ulong)puVar29[4] == 0)) goto LAB_00e0c0f0;
              local_198 = *(long **)((long)piVar21 + (ulong)puVar29[4]);
            }
            local_1a8 = (long *)CONCAT44(local_1a8._4_4_,4);
            local_178 = (long *)((ulong)local_178 & 0xffff000000000000);
            local_170 = (long *)0x0;
            local_190 = (long *)0x0;
            plStack_188 = (long *)0x0;
            uStack_180 = (long *)((ulong)uStack_180 & 0xffff000000000000);
            local_168 = (long *)CONCAT44(local_168._4_4_,0xffffffff);
            local_160 = (long *)0x0;
            local_150 = local_b0;
            local_158 = (long *)CONCAT71(local_158._1_7_,1);
            puVar37 = *(ulong **)(param_1 + 0x370);
            if (puVar37 < *(ulong **)(param_1 + 0x378)) {
              uVar43 = *(undefined8 *)(param_1 + 0x380);
              local_1b0 = plVar46;
              lVar48 = nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_02710860);
              if (0xf < *(ulong *)(lVar48 + 0x80)) goto LAB_00e10df8;
              *(undefined8 *)(lVar48 + *(ulong *)(lVar48 + 0x80) * 8) = uVar43;
              *(long *)(lVar48 + 0x80) = *(long *)(lVar48 + 0x80) + 1;
              *puVar37 = (ulong)local_1b0;
              puVar37[1] = (ulong)local_1a8;
              puVar37[4] = (ulong)local_190;
              puVar37[5] = (ulong)plStack_188;
              puVar37[2] = (ulong)local_1a0;
              puVar37[3] = (ulong)local_198;
              *(undefined4 *)(puVar37 + 6) = (undefined4)uStack_180;
              *(undefined2 *)((long)puVar37 + 0x34) = uStack_180._4_2_;
              *(undefined4 *)(puVar37 + 7) = (undefined4)local_178;
              *(undefined1 *)((long)puVar37 + 0x3c) = local_178._4_1_;
              *(undefined1 *)((long)puVar37 + 0x3d) = local_178._5_1_;
              *(undefined4 *)(puVar37 + 8) = (undefined4)local_170;
              *(undefined4 *)((long)puVar37 + 0x44) = local_170._4_4_;
              *(undefined4 *)(puVar37 + 9) = local_168._0_4_;
              *(undefined1 *)(puVar37 + 0xb) = local_158._0_1_;
              puVar37[10] = (ulong)local_160;
              puVar37[0xc] = (ulong)local_150;
              *(long *)(lVar48 + 0x80) = *(long *)(lVar48 + 0x80) + -1;
              *(long *)(param_1 + 0x370) = *(long *)(param_1 + 0x370) + 0x68;
            }
            else {
              local_1b0 = plVar46;
              FUN_00e1ec20(lVar1,&local_1b0);
            }
            local_1b0 = local_b0;
            local_b0 = (long *)0x0;
            local_1a8 = local_a8;
            local_1a0 = local_a0;
            local_198 = local_98;
            puVar37 = (ulong *)*plVar45;
            if (puVar37 < (ulong *)*puVar42) {
              uVar43 = *puVar41;
              lVar48 = nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_02710860);
              if (0xf < *(ulong *)(lVar48 + 0x80)) goto LAB_00e10df8;
              *(undefined8 *)(lVar48 + *(ulong *)(lVar48 + 0x80) * 8) = uVar43;
              *(long *)(lVar48 + 0x80) = *(long *)(lVar48 + 0x80) + 1;
              *puVar37 = (ulong)local_1b0;
              puVar37[2] = (ulong)local_1a0;
              puVar37[3] = (ulong)local_198;
              puVar37[1] = (ulong)local_1a8;
              *(long *)(lVar48 + 0x80) = *(long *)(lVar48 + 0x80) + -1;
              *plVar45 = *plVar45 + 0x20;
              local_1b0 = (long *)0x0;
            }
            else {
              FUN_00e1f040(plVar33,&local_1b0);
              plVar32 = local_1b0;
              local_1b0 = (long *)0x0;
              if (plVar32 != (long *)0x0) {
                local_1b0 = (long *)0x0;
                (**(code **)*plVar32)(plVar32);
                (**(code **)(*local_1a8 + 0x18))(local_1a8,plVar32,local_1a0,local_198);
              }
            }
            plVar32 = local_b0;
            local_b0 = (long *)0x0;
            if (plVar32 != (long *)0x0) {
              (**(code **)*plVar32)(plVar32);
              (**(code **)(*local_a8 + 0x18))(local_a8,plVar32,local_a0,local_98);
            }
            puVar39 = puVar39 + 1;
          } while (puVar39 != puVar4);
          lVar48 = (long)piVar3 - (long)*piVar3;
        }
        puVar4 = (uint *)((long)piVar3 + (ulong)*(ushort *)(lVar48 + 8));
        uVar23 = (ulong)*puVar4;
        puVar4 = (uint *)((long)puVar4 + uVar23);
        puVar39 = puVar4 + 1;
        uVar28 = (ulong)*puVar4;
        puVar4 = puVar39 + uVar28;
        if (local_70[0] == 0x49529972e22fc3bb) {
          if (puVar39 != puVar4) {
            lVar24 = 0;
            lVar48 = local_258 + uVar17 + uVar23 + (ulong)*(ushort *)(lVar48 + 8);
            do {
              uVar23 = (ulong)*(uint *)(lVar48 + lVar24);
              local_1a0 = (long *)0x0;
              local_198 = (long *)0x0;
              local_1b0 = (long *)0x0;
              local_1a8 = (long *)0x0;
              lVar12 = lVar48 + lVar24 + uVar23;
              lVar35 = lVar24 + (uVar23 - (long)*(int *)(lVar48 + uVar23 + lVar24));
              if (*(ushort *)(lVar48 + lVar35) < 9) {
                if (6 < *(ushort *)(lVar48 + lVar35)) goto LAB_00e0c4a4;
LAB_00e0c4cc:
                piVar21 = (int *)0x0;
LAB_00e0c4d0:
                if ((*(ushort *)((long)piVar21 - (long)*piVar21) < 5) ||
                   (uVar23 = (ulong)((ushort *)((long)piVar21 - (long)*piVar21))[2], uVar23 == 0)) {
                  piVar21 = (int *)0x0;
                }
                else {
                  puVar39 = (uint *)((long)piVar21 + uVar23);
                  piVar21 = (int *)((long)puVar39 + (ulong)*puVar39);
                }
                if ((*(ushort *)((long)piVar21 - (long)*piVar21) < 5) ||
                   (uVar23 = (ulong)((ushort *)((long)piVar21 - (long)*piVar21))[2], uVar23 == 0)) {
                  lVar35 = 0;
                }
                else {
                  puVar39 = (uint *)((long)piVar21 + uVar23);
                  lVar35 = (long)puVar39 + (ulong)*puVar39;
                }
                FUN_00e156c0(&local_b0,plVar46,lVar12,lVar35,local_70);
              }
              else {
                uVar34 = (ulong)*(ushort *)(lVar48 + lVar35 + 8);
                if ((uVar34 == 0) || (*(int *)(lVar48 + uVar23 + uVar34 + lVar24) != 0x33f)) {
LAB_00e0c4a4:
                  uVar34 = (ulong)*(ushort *)(lVar48 + lVar35 + 6);
                  if (uVar34 == 0) goto LAB_00e0c4cc;
                  lVar35 = uVar23 + uVar34;
                  piVar21 = (int *)(lVar48 + lVar24 + lVar35 + (ulong)*(uint *)(lVar48 + lVar35 +
                                                                               lVar24));
                  goto LAB_00e0c4d0;
                }
                uVar34 = (ulong)*(ushort *)(lVar48 + lVar35 + 6);
                if (uVar34 == 0) {
                  piVar21 = (int *)0x0;
                }
                else {
                  lVar35 = uVar23 + uVar34;
                  piVar21 = (int *)(lVar48 + lVar24 + lVar35 + (ulong)*(uint *)(lVar48 + lVar35 +
                                                                               lVar24));
                }
                if ((*(ushort *)((long)piVar21 - (long)*piVar21) < 5) ||
                   (uVar23 = (ulong)((ushort *)((long)piVar21 - (long)*piVar21))[2], uVar23 == 0)) {
                  piVar21 = (int *)0x0;
                }
                else {
                  puVar39 = (uint *)((long)piVar21 + uVar23);
                  piVar21 = (int *)((long)puVar39 + (ulong)*puVar39);
                }
                if ((*(ushort *)((long)piVar21 - (long)*piVar21) < 5) ||
                   (uVar23 = (ulong)((ushort *)((long)piVar21 - (long)*piVar21))[2], uVar23 == 0)) {
                  lVar35 = 0;
                }
                else {
                  puVar39 = (uint *)((long)piVar21 + uVar23);
                  lVar35 = (long)puVar39 + (ulong)*puVar39;
                }
                FUN_00e15530(&local_b0,plVar46,lVar12,lVar35,local_70);
              }
              plVar44 = local_b0;
              plVar32 = local_1b0;
              local_b0 = (long *)0x0;
              local_1b0 = plVar44;
              plVar44 = (long *)0x0;
              if (plVar32 != (long *)0x0) {
                (**(code **)*plVar32)(plVar32);
                (**(code **)(*local_1a8 + 0x18))(local_1a8,plVar32,local_1a0,local_198);
                plVar44 = local_b0;
              }
              local_b0 = (long *)0x0;
              local_1a8 = local_a8;
              local_1a0 = local_a0;
              local_198 = local_98;
              if (plVar44 != (long *)0x0) {
                (**(code **)*plVar44)(plVar44);
                (**(code **)(*local_a8 + 0x18))(local_a8,plVar44,local_a0,local_98);
              }
              lVar12 = (**(code **)(*local_1b0 + 0x40))();
              if (lVar12 == -0x340d631b7bddd9bb) {
                (**(code **)(*local_1b0 + 0x80))(local_1b0,1);
              }
              puVar37 = (ulong *)*plVar45;
              if (puVar37 < (ulong *)*puVar42) {
                uVar43 = *puVar41;
                lVar12 = nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_02710860);
                if (0xf < *(ulong *)(lVar12 + 0x80)) goto LAB_00e10df8;
                *(undefined8 *)(lVar12 + *(ulong *)(lVar12 + 0x80) * 8) = uVar43;
                *(long *)(lVar12 + 0x80) = *(long *)(lVar12 + 0x80) + 1;
                *puVar37 = (ulong)local_1b0;
                puVar37[2] = (ulong)local_1a0;
                puVar37[3] = (ulong)local_198;
                puVar37[1] = (ulong)local_1a8;
                *(long *)(lVar12 + 0x80) = *(long *)(lVar12 + 0x80) + -1;
                *plVar45 = *plVar45 + 0x20;
                local_1b0 = (long *)0x0;
              }
              else {
                FUN_00e1f040(plVar33,&local_1b0);
                plVar32 = local_1b0;
                local_1b0 = (long *)0x0;
                if (plVar32 != (long *)0x0) {
                  local_1b0 = (long *)0x0;
                  (**(code **)*plVar32)(plVar32);
                  (**(code **)(*local_1a8 + 0x18))(local_1a8,plVar32,local_1a0,local_198);
                }
              }
              lVar24 = lVar24 + 4;
            } while (uVar28 * 4 != lVar24);
          }
        }
        else if (puVar39 != puVar4) {
          do {
            piVar21 = (int *)((long)puVar39 + (ulong)*puVar39);
            if (*(ushort *)((long)piVar21 - (long)*piVar21) < 7) {
              piVar40 = (int *)0x0;
            }
            else {
              uVar23 = (ulong)((ushort *)((long)piVar21 - (long)*piVar21))[3];
              piVar40 = (int *)0x0;
              if (uVar23 != 0) {
                puVar5 = (uint *)((long)piVar21 + uVar23);
                piVar40 = (int *)((long)puVar5 + (ulong)*puVar5);
              }
            }
            if ((*(ushort *)((long)piVar40 - (long)*piVar40) < 5) ||
               (uVar23 = (ulong)((ushort *)((long)piVar40 - (long)*piVar40))[2], uVar23 == 0)) {
              piVar40 = (int *)0x0;
            }
            else {
              puVar5 = (uint *)((long)piVar40 + uVar23);
              piVar40 = (int *)((long)puVar5 + (ulong)*puVar5);
            }
            if ((*(ushort *)((long)piVar40 - (long)*piVar40) < 5) ||
               (uVar23 = (ulong)((ushort *)((long)piVar40 - (long)*piVar40))[2], uVar23 == 0)) {
              lVar48 = 0;
            }
            else {
              puVar5 = (uint *)((long)piVar40 + uVar23);
              lVar48 = (long)puVar5 + (ulong)*puVar5;
            }
            FUN_00e156c0(&local_b0,plVar46,piVar21,lVar48,local_70);
            (**(code **)(*local_b0 + 0x90))(local_b0,1);
            uVar28 = (ulong)*(ushort *)((long)piVar3 + (0x22 - (long)*piVar3));
            uVar34 = (ulong)*(uint *)((long)piVar3 + uVar28);
            uVar23 = (ulong)*(uint *)((long)((long)piVar3 + uVar28) + uVar34);
            lVar48 = uVar23 * 4;
            if (uVar23 != 0) {
              if (*(ushort *)((long)piVar21 - (long)*piVar21) < 0x17) {
                lVar24 = 0;
                lVar12 = local_258 + uVar17 + uVar28 + uVar34;
                do {
                  uVar23 = (ulong)*(uint *)(lVar12 + lVar24);
                  lVar35 = lVar24 + (uVar23 - (long)*(int *)(lVar12 + uVar23 + lVar24));
                  if ((*(ushort *)(lVar12 + lVar35) < 5) ||
                     (uVar28 = (ulong)*(ushort *)(lVar12 + lVar35 + 4), uVar28 == 0)) {
                    piVar40 = (int *)0x0;
                  }
                  else {
                    lVar35 = uVar23 + uVar28;
                    piVar40 = (int *)(lVar12 + lVar24 + lVar35 + (ulong)*(uint *)(lVar12 + lVar35 +
                                                                                 lVar24));
                  }
                  if (((*(ushort *)((long)piVar40 - (long)*piVar40) < 0x17) ||
                      (uVar28 = (ulong)((ushort *)((long)piVar40 - (long)*piVar40))[0xb],
                      uVar28 == 0)) || (*(long *)((long)piVar40 + uVar28) == 0)) {
                    lVar24 = lVar12 + uVar23 + lVar24;
                    goto LAB_00e0c938;
                  }
                  lVar24 = lVar24 + 4;
                } while (lVar48 != lVar24);
              }
              else {
                uVar15 = ((ushort *)((long)piVar21 - (long)*piVar21))[0xb];
                lVar24 = 0;
                lVar12 = local_258 + uVar17 + uVar28 + uVar34;
                do {
                  uVar23 = (ulong)*(uint *)(lVar12 + lVar24);
                  if (uVar15 == 0) {
                    lVar35 = 0;
                  }
                  else {
                    lVar35 = *(long *)((long)piVar21 + (ulong)uVar15);
                  }
                  lVar6 = lVar24 + (uVar23 - (long)*(int *)(lVar12 + uVar23 + lVar24));
                  if ((*(ushort *)(lVar12 + lVar6) < 5) ||
                     (uVar28 = (ulong)*(ushort *)(lVar12 + lVar6 + 4), uVar28 == 0)) {
                    piVar40 = (int *)0x0;
                  }
                  else {
                    lVar6 = uVar23 + uVar28;
                    piVar40 = (int *)(lVar12 + lVar24 + lVar6 + (ulong)*(uint *)(lVar12 + lVar6 +
                                                                                lVar24));
                  }
                  if ((0x16 < *(ushort *)((long)piVar40 - (long)*piVar40)) &&
                     (uVar28 = (ulong)((ushort *)((long)piVar40 - (long)*piVar40))[0xb], uVar28 != 0
                     )) {
                    if (lVar35 != *(long *)((long)piVar40 + uVar28)) goto LAB_00e0c880;
LAB_00e0c89c:
                    lVar24 = lVar12 + uVar23 + lVar24;
LAB_00e0c938:
                    (**(code **)(*local_b0 + 0x98))(local_b0,lVar24);
                    (**(code **)(*local_b0 + 0xc0))(local_b0,1);
                    break;
                  }
                  if (lVar35 == 0) goto LAB_00e0c89c;
LAB_00e0c880:
                  lVar24 = lVar24 + 4;
                } while (lVar48 != lVar24);
              }
            }
            lVar48 = (**(code **)(*local_b0 + 0x40))();
            if (lVar48 == -0x340d631b7bddd9bb) {
              (**(code **)(*local_b0 + 0x80))(local_b0,1);
            }
            local_1d0 = (long *)((ulong)local_1d0 & 0xffff000000000000);
            uVar11 = 0;
            local_1c8 = (long *)((ulong)local_1c8 & 0xffff000000000000);
            local_1c0 = (long *)0x0;
            local_1b8 = (long *)CONCAT44(local_1b8._4_4_,0xffffffff);
            if (8 < *(ushort *)((long)piVar21 - (long)*piVar21)) {
              uVar23 = (ulong)((ushort *)((long)piVar21 - (long)*piVar21))[4];
              if (uVar23 == 0) {
                uVar11 = 0;
              }
              else {
                uVar11 = *(undefined4 *)((long)piVar21 + uVar23);
              }
            }
            local_1b0 = (long *)(**(code **)(*local_b0 + 0x40))();
            uVar11 = FUN_00e83970(uVar11,&local_1b0);
            plVar32 = local_178;
            uVar23 = (ulong)local_1c8;
            if (*(ushort *)((long)piVar21 - (long)*piVar21) < 0xb) {
              uVar15 = 0;
            }
            else {
              uVar15 = ((ushort *)((long)piVar21 - (long)*piVar21))[5];
              if ((ulong)uVar15 != 0) {
                uVar15 = (ushort)*(undefined4 *)((long)piVar21 + (ulong)uVar15);
              }
            }
            local_1d0._0_6_ = CONCAT24(uVar15,uVar11);
            if (*(ushort *)((long)piVar21 - (long)*piVar21) < 0xd) {
              uVar22 = 0;
            }
            else {
              uVar28 = (ulong)((ushort *)((long)piVar21 - (long)*piVar21))[6];
              uVar22 = 0;
              if (uVar28 != 0) {
                uVar22 = *(undefined4 *)((long)piVar21 + uVar28);
              }
            }
            if (*(ushort *)((long)piVar21 - (long)*piVar21) < 0xf) {
              bVar9 = false;
            }
            else {
              uVar28 = (ulong)((ushort *)((long)piVar21 - (long)*piVar21))[7];
              bVar9 = false;
              if (uVar28 != 0) {
                bVar9 = *(char *)((long)piVar21 + uVar28) != '\0';
              }
            }
            local_1c8._0_5_ = CONCAT14(bVar9,uVar22);
            plVar44 = local_1c8;
            if (*(ushort *)((long)piVar21 - (long)*piVar21) < 0x11) {
              uVar31 = 0;
            }
            else {
              uVar28 = (ulong)((ushort *)((long)piVar21 - (long)*piVar21))[8];
              uVar31 = 0;
              if (uVar28 != 0) {
                uVar31 = *(undefined4 *)((long)piVar21 + uVar28);
              }
            }
            local_1c0 = (long *)CONCAT44(local_1c0._4_4_,uVar31);
            local_1a8 = (long *)CONCAT44(local_1a8._4_4_,3);
            local_1a0 = *(long **)PTR_DAT_02719748;
            local_1c8._5_1_ = SUB81(uVar23,5);
            uStack_180 = (long *)CONCAT44(CONCAT22(uStack_180._6_2_,uVar15),uVar11);
            local_178._6_2_ = SUB82(plVar32,6);
            local_178._0_6_ = CONCAT15(local_1c8._5_1_,CONCAT14(bVar9,uVar22));
            local_170 = (long *)CONCAT44(local_1c0._4_4_,uVar31);
            local_168 = (long *)CONCAT44(local_168._4_4_,(int)local_1b8);
            local_160 = (long *)0x0;
            local_158 = (long *)CONCAT71(local_158._1_7_,1);
            local_150 = local_b0;
            puVar37 = *(ulong **)(param_1 + 0x370);
            local_1c8 = plVar44;
            local_198 = local_1a0;
            local_190 = local_1a0;
            plStack_188 = local_1a0;
            if (puVar37 < *(ulong **)(param_1 + 0x378)) {
              uVar43 = *(undefined8 *)(param_1 + 0x380);
              local_1b0 = plVar46;
              lVar48 = nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_02710860);
              if (0xf < *(ulong *)(lVar48 + 0x80)) goto LAB_00e10df8;
              *(undefined8 *)(lVar48 + *(ulong *)(lVar48 + 0x80) * 8) = uVar43;
              *(long *)(lVar48 + 0x80) = *(long *)(lVar48 + 0x80) + 1;
              *puVar37 = (ulong)local_1b0;
              puVar37[1] = (ulong)local_1a8;
              puVar37[4] = (ulong)local_190;
              puVar37[5] = (ulong)plStack_188;
              puVar37[2] = (ulong)local_1a0;
              puVar37[3] = (ulong)local_198;
              *(undefined4 *)(puVar37 + 6) = (undefined4)uStack_180;
              *(undefined2 *)((long)puVar37 + 0x34) = uStack_180._4_2_;
              *(undefined4 *)(puVar37 + 7) = (undefined4)local_178;
              *(undefined1 *)((long)puVar37 + 0x3c) = local_178._4_1_;
              *(undefined1 *)((long)puVar37 + 0x3d) = local_178._5_1_;
              *(undefined4 *)(puVar37 + 8) = (undefined4)local_170;
              *(undefined4 *)((long)puVar37 + 0x44) = local_170._4_4_;
              *(undefined4 *)(puVar37 + 9) = local_168._0_4_;
              *(undefined1 *)(puVar37 + 0xb) = local_158._0_1_;
              puVar37[10] = (ulong)local_160;
              puVar37[0xc] = (ulong)local_150;
              *(long *)(lVar48 + 0x80) = *(long *)(lVar48 + 0x80) + -1;
              *(long *)(param_1 + 0x370) = *(long *)(param_1 + 0x370) + 0x68;
              piVar21 = *(int **)(param_1 + 0x3c8);
              piVar40 = *(int **)(param_1 + 0x3d0);
              if (piVar40 != piVar21) goto LAB_00e0cc2c;
LAB_00e0cc6c:
              if (piVar21 == piVar40) goto LAB_00e0cc74;
            }
            else {
              local_1b0 = plVar46;
              FUN_00e1ec20(lVar1,&local_1b0);
              piVar21 = *(int **)(param_1 + 0x3c8);
              piVar40 = *(int **)(param_1 + 0x3d0);
              if (piVar40 == piVar21) goto LAB_00e0cc6c;
LAB_00e0cc2c:
              do {
                if ((((int)local_1d0 == *piVar21) && (local_1d0._4_2_ == (short)piVar21[1])) &&
                   ((int)local_1c8 == piVar21[2])) goto LAB_00e0cc6c;
                piVar21 = piVar21 + 7;
              } while (piVar40 != piVar21);
LAB_00e0cc74:
              if (piVar40 == *(int **)(param_1 + 0x3d8)) {
                FUN_00e20650(param_1 + 0x3c8,&local_1d0);
              }
              else {
                uVar43 = *(undefined8 *)(param_1 + 0x3e0);
                lVar48 = nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_02710860);
                if (0xf < *(ulong *)(lVar48 + 0x80)) goto LAB_00e10df8;
                *(undefined8 *)(lVar48 + *(ulong *)(lVar48 + 0x80) * 8) = uVar43;
                *(long *)(lVar48 + 0x80) = *(long *)(lVar48 + 0x80) + 1;
                *piVar40 = (int)local_1d0;
                *(short *)(piVar40 + 1) = local_1d0._4_2_;
                piVar40[2] = (int)local_1c8;
                *(undefined1 *)(piVar40 + 3) = local_1c8._4_1_;
                *(undefined1 *)((long)piVar40 + 0xd) = local_1c8._5_1_;
                piVar40[4] = (int)local_1c0;
                piVar40[5] = local_1c0._4_4_;
                piVar40[6] = (int)local_1b8;
                *(long *)(lVar48 + 0x80) = *(long *)(lVar48 + 0x80) + -1;
                *(long *)(param_1 + 0x3d0) = *(long *)(param_1 + 0x3d0) + 0x1c;
              }
            }
            local_1b0 = local_b0;
            local_b0 = (long *)0x0;
            local_1a8 = local_a8;
            local_1a0 = local_a0;
            local_198 = local_98;
            puVar37 = (ulong *)*plVar45;
            if (puVar37 < (ulong *)*puVar42) {
              uVar43 = *puVar41;
              lVar48 = nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_02710860);
              if (0xf < *(ulong *)(lVar48 + 0x80)) goto LAB_00e10df8;
              *(undefined8 *)(lVar48 + *(ulong *)(lVar48 + 0x80) * 8) = uVar43;
              *(long *)(lVar48 + 0x80) = *(long *)(lVar48 + 0x80) + 1;
              *puVar37 = (ulong)local_1b0;
              puVar37[2] = (ulong)local_1a0;
              puVar37[3] = (ulong)local_198;
              puVar37[1] = (ulong)local_1a8;
              *(long *)(lVar48 + 0x80) = *(long *)(lVar48 + 0x80) + -1;
              *plVar45 = *plVar45 + 0x20;
              local_1b0 = (long *)0x0;
            }
            else {
              FUN_00e1f040(plVar33,&local_1b0);
              plVar32 = local_1b0;
              local_1b0 = (long *)0x0;
              if (plVar32 != (long *)0x0) {
                local_1b0 = (long *)0x0;
                (**(code **)*plVar32)(plVar32);
                (**(code **)(*local_1a8 + 0x18))(local_1a8,plVar32,local_1a0,local_198);
              }
            }
            plVar32 = local_b0;
            local_b0 = (long *)0x0;
            if (plVar32 != (long *)0x0) {
              (**(code **)*plVar32)(plVar32);
              (**(code **)(*local_a8 + 0x18))(local_a8,plVar32,local_a0,local_98);
            }
            puVar39 = puVar39 + 1;
          } while (puVar39 != puVar4);
        }
        lVar48 = (long)piVar3 - (long)*piVar3;
        puVar39 = (uint *)((long)piVar3 + (ulong)*(ushort *)(lVar48 + 10));
        uVar23 = (ulong)*puVar39;
        uVar28 = (ulong)*(uint *)((long)puVar39 + uVar23);
        if (uVar28 != 0) {
          lVar24 = 0;
          lVar48 = local_258 + uVar17 + uVar23 + (ulong)*(ushort *)(lVar48 + 10);
          do {
            uVar23 = (ulong)*(uint *)(lVar48 + lVar24);
            lVar12 = lVar24 + (uVar23 - (long)*(int *)(lVar48 + uVar23 + lVar24));
            if ((*(ushort *)(lVar48 + lVar12) < 5) ||
               (uVar34 = (ulong)*(ushort *)(lVar48 + lVar12 + 4), uVar34 == 0)) {
              piVar21 = (int *)0x0;
            }
            else {
              lVar12 = uVar23 + uVar34;
              piVar21 = (int *)(lVar48 + lVar24 + lVar12 + (ulong)*(uint *)(lVar48 + lVar12 + lVar24
                                                                           ));
            }
            if ((*(ushort *)((long)piVar21 - (long)*piVar21) < 5) ||
               (uVar34 = (ulong)((ushort *)((long)piVar21 - (long)*piVar21))[2], uVar34 == 0)) {
              lVar12 = 0;
            }
            else {
              puVar39 = (uint *)((long)piVar21 + uVar34);
              lVar12 = (long)puVar39 + (ulong)*puVar39;
            }
            FUN_00e15850(&local_1b0,plVar46,lVar48 + lVar24 + uVar23,lVar12,local_70);
            lVar12 = (**(code **)(*local_1b0 + 0x40))();
            if (lVar12 == -0x340d631b7bddd9bb) {
              (**(code **)(*local_1b0 + 0x80))(local_1b0,1);
            }
            local_b0 = local_1b0;
            local_1b0 = (long *)0x0;
            local_a8 = local_1a8;
            local_a0 = local_1a0;
            local_98 = local_198;
            puVar37 = (ulong *)*plVar45;
            if (puVar37 < (ulong *)*puVar42) {
              uVar43 = *puVar41;
              lVar12 = nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_02710860);
              if (0xf < *(ulong *)(lVar12 + 0x80)) goto LAB_00e10df8;
              *(undefined8 *)(lVar12 + *(ulong *)(lVar12 + 0x80) * 8) = uVar43;
              *(long *)(lVar12 + 0x80) = *(long *)(lVar12 + 0x80) + 1;
              *puVar37 = (ulong)local_b0;
              puVar37[1] = (ulong)local_a8;
              puVar37[2] = (ulong)local_a0;
              puVar37[3] = (ulong)local_98;
              *(long *)(lVar12 + 0x80) = *(long *)(lVar12 + 0x80) + -1;
              *plVar45 = *plVar45 + 0x20;
              local_b0 = (long *)0x0;
            }
            else {
              FUN_00e1f040(plVar33,&local_b0);
              plVar32 = local_b0;
              local_b0 = (long *)0x0;
              if (plVar32 != (long *)0x0) {
                local_b0 = (long *)0x0;
                (**(code **)*plVar32)(plVar32);
                (**(code **)(*local_a8 + 0x18))(local_a8,plVar32,local_a0,local_98);
              }
            }
            plVar32 = local_1b0;
            local_1b0 = (long *)0x0;
            if (plVar32 != (long *)0x0) {
              (**(code **)*plVar32)(plVar32);
              (**(code **)(*local_1a8 + 0x18))(local_1a8,plVar32,local_1a0,local_198);
            }
            lVar24 = lVar24 + 4;
          } while (uVar28 * 4 != lVar24);
          lVar48 = (long)piVar3 - (long)*piVar3;
        }
        puVar39 = (uint *)((long)piVar3 + (ulong)*(ushort *)(lVar48 + 0xc));
        uVar23 = (ulong)*puVar39;
        uVar28 = (ulong)*(uint *)((long)puVar39 + uVar23);
        if (uVar28 != 0) {
          lVar24 = 0;
          lVar48 = local_258 + uVar17 + uVar23 + (ulong)*(ushort *)(lVar48 + 0xc);
          do {
            uVar23 = (ulong)*(uint *)(lVar48 + lVar24);
            lVar12 = lVar24 + (uVar23 - (long)*(int *)(lVar48 + uVar23 + lVar24));
            if ((*(ushort *)(lVar48 + lVar12) < 5) ||
               (uVar34 = (ulong)*(ushort *)(lVar48 + lVar12 + 4), uVar34 == 0)) {
              piVar21 = (int *)0x0;
            }
            else {
              lVar12 = uVar23 + uVar34;
              piVar21 = (int *)(lVar48 + lVar24 + lVar12 + (ulong)*(uint *)(lVar48 + lVar12 + lVar24
                                                                           ));
            }
            if ((*(ushort *)((long)piVar21 - (long)*piVar21) < 5) ||
               (uVar34 = (ulong)((ushort *)((long)piVar21 - (long)*piVar21))[2], uVar34 == 0)) {
              lVar12 = 0;
            }
            else {
              puVar39 = (uint *)((long)piVar21 + uVar34);
              lVar12 = (long)puVar39 + (ulong)*puVar39;
            }
            FUN_00e159e0(&local_1b0,plVar46,lVar48 + lVar24 + uVar23,lVar12,local_70);
            local_b0 = local_1b0;
            local_1b0 = (long *)0x0;
            local_a8 = local_1a8;
            local_a0 = local_1a0;
            local_98 = local_198;
            puVar37 = (ulong *)*plVar45;
            if (puVar37 < (ulong *)*puVar42) {
              uVar43 = *puVar41;
              lVar12 = nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_02710860);
              if (0xf < *(ulong *)(lVar12 + 0x80)) goto LAB_00e10df8;
              *(undefined8 *)(lVar12 + *(ulong *)(lVar12 + 0x80) * 8) = uVar43;
              *(long *)(lVar12 + 0x80) = *(long *)(lVar12 + 0x80) + 1;
              *puVar37 = (ulong)local_b0;
              puVar37[1] = (ulong)local_a8;
              puVar37[2] = (ulong)local_a0;
              puVar37[3] = (ulong)local_98;
              *(long *)(lVar12 + 0x80) = *(long *)(lVar12 + 0x80) + -1;
              *plVar45 = *plVar45 + 0x20;
              local_b0 = (long *)0x0;
            }
            else {
              FUN_00e1f040(plVar33,&local_b0);
              plVar32 = local_b0;
              local_b0 = (long *)0x0;
              if (plVar32 != (long *)0x0) {
                local_b0 = (long *)0x0;
                (**(code **)*plVar32)(plVar32);
                (**(code **)(*local_a8 + 0x18))(local_a8,plVar32,local_a0,local_98);
              }
            }
            plVar32 = local_1b0;
            local_1b0 = (long *)0x0;
            if (plVar32 != (long *)0x0) {
              (**(code **)*plVar32)(plVar32);
              (**(code **)(*local_1a8 + 0x18))(local_1a8,plVar32,local_1a0,local_198);
            }
            lVar24 = lVar24 + 4;
          } while (uVar28 * 4 != lVar24);
          lVar48 = (long)piVar3 - (long)*piVar3;
        }
        puVar39 = (uint *)((long)piVar3 + (ulong)*(ushort *)(lVar48 + 0x10));
        uVar23 = (ulong)*puVar39;
        uVar28 = (ulong)*(uint *)((long)puVar39 + uVar23);
        if (uVar28 != 0) {
          lVar24 = 0;
          lVar48 = local_258 + uVar17 + uVar23 + (ulong)*(ushort *)(lVar48 + 0x10);
          do {
            uVar23 = (ulong)*(uint *)(lVar48 + lVar24);
            lVar12 = lVar24 + (uVar23 - (long)*(int *)(lVar48 + uVar23 + lVar24));
            if ((*(ushort *)(lVar48 + lVar12) < 5) ||
               (uVar34 = (ulong)*(ushort *)(lVar48 + lVar12 + 4), uVar34 == 0)) {
              piVar21 = (int *)0x0;
            }
            else {
              lVar12 = uVar23 + uVar34;
              piVar21 = (int *)(lVar48 + lVar24 + lVar12 + (ulong)*(uint *)(lVar48 + lVar12 + lVar24
                                                                           ));
            }
            if ((*(ushort *)((long)piVar21 - (long)*piVar21) < 5) ||
               (uVar34 = (ulong)((ushort *)((long)piVar21 - (long)*piVar21))[2], uVar34 == 0)) {
              lVar12 = 0;
            }
            else {
              puVar39 = (uint *)((long)piVar21 + uVar34);
              lVar12 = (long)puVar39 + (ulong)*puVar39;
            }
            FUN_00e15b70(&local_1b0,plVar46,lVar48 + lVar24 + uVar23,lVar12,local_70);
            lVar12 = (**(code **)(*local_1b0 + 0x40))();
            plVar32 = local_1b0;
            if (lVar12 == -0x340d631b7bddd9bb) {
              local_b0 = (long *)(**(code **)(*local_1b0 + 0x38))(local_1b0);
              (**(code **)(*plVar32 + 0x60))(plVar32,&local_b0);
            }
            local_b0 = local_1b0;
            local_1b0 = (long *)0x0;
            local_a8 = local_1a8;
            local_a0 = local_1a0;
            local_98 = local_198;
            puVar37 = (ulong *)*plVar45;
            if (puVar37 < (ulong *)*puVar42) {
              uVar43 = *puVar41;
              lVar12 = nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_02710860);
              if (0xf < *(ulong *)(lVar12 + 0x80)) goto LAB_00e10df8;
              *(undefined8 *)(lVar12 + *(ulong *)(lVar12 + 0x80) * 8) = uVar43;
              *(long *)(lVar12 + 0x80) = *(long *)(lVar12 + 0x80) + 1;
              *puVar37 = (ulong)local_b0;
              puVar37[1] = (ulong)local_a8;
              puVar37[2] = (ulong)local_a0;
              puVar37[3] = (ulong)local_98;
              *(long *)(lVar12 + 0x80) = *(long *)(lVar12 + 0x80) + -1;
              *plVar45 = *plVar45 + 0x20;
              local_b0 = (long *)0x0;
            }
            else {
              FUN_00e1f040(plVar33,&local_b0);
              plVar32 = local_b0;
              local_b0 = (long *)0x0;
              if (plVar32 != (long *)0x0) {
                local_b0 = (long *)0x0;
                (**(code **)*plVar32)(plVar32);
                (**(code **)(*local_a8 + 0x18))(local_a8,plVar32,local_a0,local_98);
              }
            }
            plVar32 = local_1b0;
            local_1b0 = (long *)0x0;
            if (plVar32 != (long *)0x0) {
              (**(code **)*plVar32)(plVar32);
              (**(code **)(*local_1a8 + 0x18))(local_1a8,plVar32,local_1a0,local_198);
            }
            lVar24 = lVar24 + 4;
          } while (uVar28 * 4 != lVar24);
          lVar48 = (long)piVar3 - (long)*piVar3;
        }
        puVar39 = (uint *)((long)piVar3 + (ulong)*(ushort *)(lVar48 + 0x2a));
        uVar23 = (ulong)*puVar39;
        uVar28 = (ulong)*(uint *)((long)puVar39 + uVar23);
        if (uVar28 != 0) {
          lVar24 = 0;
          lVar48 = local_258 + uVar17 + uVar23 + (ulong)*(ushort *)(lVar48 + 0x2a);
          do {
            uVar23 = (ulong)*(uint *)(lVar48 + lVar24);
            lVar12 = lVar24 + (uVar23 - (long)*(int *)(lVar48 + uVar23 + lVar24));
            if ((*(ushort *)(lVar48 + lVar12) < 5) ||
               (uVar34 = (ulong)*(ushort *)(lVar48 + lVar12 + 4), uVar34 == 0)) {
              piVar21 = (int *)0x0;
            }
            else {
              lVar12 = uVar23 + uVar34;
              piVar21 = (int *)(lVar48 + lVar24 + lVar12 + (ulong)*(uint *)(lVar48 + lVar12 + lVar24
                                                                           ));
            }
            if ((*(ushort *)((long)piVar21 - (long)*piVar21) < 5) ||
               (uVar34 = (ulong)((ushort *)((long)piVar21 - (long)*piVar21))[2], uVar34 == 0)) {
              lVar12 = 0;
            }
            else {
              puVar39 = (uint *)((long)piVar21 + uVar34);
              lVar12 = (long)puVar39 + (ulong)*puVar39;
            }
            FUN_00e15d00(&local_1b0,plVar46,lVar48 + lVar24 + uVar23,lVar12,local_70);
            plVar32 = local_1b0;
            pcVar20 = (code *)local_1b0[0x13];
            if (pcVar20 != (code *)0x0) {
              local_1b0[0x14] = 0;
              local_1b0[0x15] = 0;
              local_1b0[0x12] = 0;
              local_1b0[0x13] = 0;
              (*pcVar20)(local_1b0 + 0x16);
            }
            local_b0 = local_1b0;
            plVar32[0x16] = (long)plVar32;
            plVar32[0x12] = (long)&LAB_00e22310;
            plVar32[0x13] = (long)&LAB_00e224b0;
            plVar32[0x14] = (long)&LAB_00e224c0;
            plVar32[0x15] = (long)&LAB_00e224d0;
            local_a8 = local_1a8;
            local_a0 = local_1a0;
            local_1b0 = (long *)0x0;
            local_98 = local_198;
            puVar37 = (ulong *)*plVar45;
            if (puVar37 < (ulong *)*puVar42) {
              uVar43 = *puVar41;
              lVar12 = nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_02710860);
              if (0xf < *(ulong *)(lVar12 + 0x80)) goto LAB_00e10df8;
              *(undefined8 *)(lVar12 + *(ulong *)(lVar12 + 0x80) * 8) = uVar43;
              *(long *)(lVar12 + 0x80) = *(long *)(lVar12 + 0x80) + 1;
              *puVar37 = (ulong)local_b0;
              puVar37[1] = (ulong)local_a8;
              puVar37[2] = (ulong)local_a0;
              puVar37[3] = (ulong)local_98;
              *(long *)(lVar12 + 0x80) = *(long *)(lVar12 + 0x80) + -1;
              *plVar45 = *plVar45 + 0x20;
              local_b0 = (long *)0x0;
            }
            else {
              FUN_00e1f040(plVar33,&local_b0);
              plVar32 = local_b0;
              local_b0 = (long *)0x0;
              if (plVar32 != (long *)0x0) {
                local_b0 = (long *)0x0;
                (**(code **)*plVar32)(plVar32);
                (**(code **)(*local_a8 + 0x18))(local_a8,plVar32,local_a0,local_98);
              }
            }
            plVar32 = local_1b0;
            local_1b0 = (long *)0x0;
            if (plVar32 != (long *)0x0) {
              (**(code **)*plVar32)(plVar32);
              (**(code **)(*local_1a8 + 0x18))(local_1a8,plVar32,local_1a0,local_198);
            }
            lVar24 = lVar24 + 4;
          } while (uVar28 * 4 != lVar24);
          lVar48 = (long)piVar3 - (long)*piVar3;
        }
        puVar39 = (uint *)((long)piVar3 + (ulong)*(ushort *)(lVar48 + 0x12));
        uVar23 = (ulong)*puVar39;
        uVar28 = (ulong)*(uint *)((long)puVar39 + uVar23);
        if (uVar28 != 0) {
          lVar24 = 0;
          lVar48 = local_258 + uVar17 + uVar23 + (ulong)*(ushort *)(lVar48 + 0x12);
          do {
            uVar23 = (ulong)*(uint *)(lVar48 + lVar24);
            lVar12 = lVar48 + lVar24 + uVar23;
            lVar35 = lVar24 + (uVar23 - (long)*(int *)(lVar48 + uVar23 + lVar24));
            uVar15 = *(ushort *)(lVar48 + lVar35);
            if (uVar15 < 5) {
              piVar21 = (int *)0x0;
            }
            else {
              uVar34 = (ulong)*(ushort *)(lVar48 + lVar35 + 4);
              piVar21 = (int *)0x0;
              if (uVar34 != 0) {
                lVar6 = uVar23 + uVar34;
                piVar21 = (int *)(lVar48 + lVar24 + lVar6 + (ulong)*(uint *)(lVar48 + lVar6 + lVar24
                                                                            ));
              }
            }
            if ((*(ushort *)((long)piVar21 - (long)*piVar21) < 0xd) ||
               (uVar34 = (ulong)((ushort *)((long)piVar21 - (long)*piVar21))[6], uVar34 == 0)) {
switchD_00e0d964_caseD_0:
              if ((uVar15 < 5) || (uVar34 = (ulong)*(ushort *)(lVar48 + lVar35 + 4), uVar34 == 0)) {
                piVar21 = (int *)0x0;
              }
              else {
                lVar35 = uVar23 + uVar34;
                piVar21 = (int *)(lVar48 + lVar24 + lVar35 + (ulong)*(uint *)(lVar48 + lVar35 +
                                                                             lVar24));
              }
              if ((*(ushort *)((long)piVar21 - (long)*piVar21) < 5) ||
                 (uVar23 = (ulong)((ushort *)((long)piVar21 - (long)*piVar21))[2], uVar23 == 0)) {
                lVar35 = 0;
              }
              else {
                puVar39 = (uint *)((long)piVar21 + uVar23);
                lVar35 = (long)puVar39 + (ulong)*puVar39;
              }
              FUN_00e15e90(&local_1b0,plVar46,lVar12,lVar35,local_70);
              goto LAB_00e0d9dc;
            }
            switch(*(undefined4 *)((long)piVar21 + uVar34)) {
            case 0:
              goto switchD_00e0d964_caseD_0;
            case 1:
              if ((uVar15 < 5) || (uVar34 = (ulong)*(ushort *)(lVar48 + lVar35 + 4), uVar34 == 0)) {
                piVar21 = (int *)0x0;
              }
              else {
                lVar35 = uVar23 + uVar34;
                piVar21 = (int *)(lVar48 + lVar24 + lVar35 + (ulong)*(uint *)(lVar48 + lVar35 +
                                                                             lVar24));
              }
              if ((*(ushort *)((long)piVar21 - (long)*piVar21) < 5) ||
                 (uVar23 = (ulong)((ushort *)((long)piVar21 - (long)*piVar21))[2], uVar23 == 0)) {
                lVar35 = 0;
              }
              else {
                puVar39 = (uint *)((long)piVar21 + uVar23);
                lVar35 = (long)puVar39 + (ulong)*puVar39;
              }
              FUN_00e16020(&local_1b0,plVar46,lVar12,lVar35,local_70);
              break;
            case 2:
              if ((uVar15 < 5) || (uVar34 = (ulong)*(ushort *)(lVar48 + lVar35 + 4), uVar34 == 0)) {
                piVar21 = (int *)0x0;
              }
              else {
                lVar35 = uVar23 + uVar34;
                piVar21 = (int *)(lVar48 + lVar24 + lVar35 + (ulong)*(uint *)(lVar48 + lVar35 +
                                                                             lVar24));
              }
              if ((*(ushort *)((long)piVar21 - (long)*piVar21) < 5) ||
                 (uVar23 = (ulong)((ushort *)((long)piVar21 - (long)*piVar21))[2], uVar23 == 0)) {
                lVar35 = 0;
              }
              else {
                puVar39 = (uint *)((long)piVar21 + uVar23);
                lVar35 = (long)puVar39 + (ulong)*puVar39;
              }
              FUN_00e161b0(&local_1b0,plVar46,lVar12,lVar35,local_70);
              break;
            case 3:
              if ((uVar15 < 5) || (uVar34 = (ulong)*(ushort *)(lVar48 + lVar35 + 4), uVar34 == 0)) {
                piVar21 = (int *)0x0;
              }
              else {
                lVar35 = uVar23 + uVar34;
                piVar21 = (int *)(lVar48 + lVar24 + lVar35 + (ulong)*(uint *)(lVar48 + lVar35 +
                                                                             lVar24));
              }
              if ((*(ushort *)((long)piVar21 - (long)*piVar21) < 5) ||
                 (uVar23 = (ulong)((ushort *)((long)piVar21 - (long)*piVar21))[2], uVar23 == 0)) {
                lVar35 = 0;
              }
              else {
                puVar39 = (uint *)((long)piVar21 + uVar23);
                lVar35 = (long)puVar39 + (ulong)*puVar39;
              }
              FUN_00e16340(&local_1b0,plVar46,lVar12,lVar35,local_70);
              break;
            default:
              goto switchD_00e0d964_default;
            }
LAB_00e0d9dc:
            local_b0 = local_1b0;
            local_1b0 = (long *)0x0;
            local_a8 = local_1a8;
            local_a0 = local_1a0;
            local_98 = local_198;
            puVar37 = (ulong *)*plVar45;
            if (puVar37 < (ulong *)*puVar42) {
              uVar43 = *puVar41;
              lVar12 = nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_02710860);
              if (0xf < *(ulong *)(lVar12 + 0x80)) goto LAB_00e10df8;
              *(undefined8 *)(lVar12 + *(ulong *)(lVar12 + 0x80) * 8) = uVar43;
              *(long *)(lVar12 + 0x80) = *(long *)(lVar12 + 0x80) + 1;
              *puVar37 = (ulong)local_b0;
              puVar37[1] = (ulong)local_a8;
              puVar37[2] = (ulong)local_a0;
              puVar37[3] = (ulong)local_98;
              *(long *)(lVar12 + 0x80) = *(long *)(lVar12 + 0x80) + -1;
              *plVar45 = *plVar45 + 0x20;
              local_b0 = (long *)0x0;
            }
            else {
              FUN_00e1f040(plVar33,&local_b0);
              plVar32 = local_b0;
              local_b0 = (long *)0x0;
              if (plVar32 != (long *)0x0) {
                local_b0 = (long *)0x0;
                (**(code **)*plVar32)(plVar32);
                (**(code **)(*local_a8 + 0x18))(local_a8,plVar32,local_a0,local_98);
              }
            }
            plVar32 = local_1b0;
            local_1b0 = (long *)0x0;
            if (plVar32 != (long *)0x0) {
              (**(code **)*plVar32)(plVar32);
              (**(code **)(*local_1a8 + 0x18))(local_1a8,plVar32,local_1a0,local_198);
            }
switchD_00e0d964_default:
            lVar24 = lVar24 + 4;
          } while (uVar28 * 4 != lVar24);
          lVar48 = (long)piVar3 - (long)*piVar3;
        }
        puVar39 = (uint *)((long)piVar3 + (ulong)*(ushort *)(lVar48 + 0x16));
        uVar23 = (ulong)*puVar39;
        uVar28 = (ulong)*(uint *)((long)puVar39 + uVar23);
        if (uVar28 != 0) {
          lVar24 = 0;
          lVar48 = local_258 + uVar17 + uVar23 + (ulong)*(ushort *)(lVar48 + 0x16);
          do {
            uVar23 = (ulong)*(uint *)(lVar48 + lVar24);
            lVar12 = lVar24 + (uVar23 - (long)*(int *)(lVar48 + uVar23 + lVar24));
            if ((*(ushort *)(lVar48 + lVar12) < 5) ||
               (uVar34 = (ulong)*(ushort *)(lVar48 + lVar12 + 4), uVar34 == 0)) {
              piVar21 = (int *)0x0;
            }
            else {
              lVar12 = uVar23 + uVar34;
              piVar21 = (int *)(lVar48 + lVar24 + lVar12 + (ulong)*(uint *)(lVar48 + lVar12 + lVar24
                                                                           ));
            }
            if ((*(ushort *)((long)piVar21 - (long)*piVar21) < 5) ||
               (uVar34 = (ulong)((ushort *)((long)piVar21 - (long)*piVar21))[2], uVar34 == 0)) {
              lVar12 = 0;
            }
            else {
              puVar39 = (uint *)((long)piVar21 + uVar34);
              lVar12 = (long)puVar39 + (ulong)*puVar39;
            }
            FUN_00e164d0(&local_1b0,plVar46,lVar48 + lVar24 + uVar23,lVar12,local_70);
            local_b0 = local_1b0;
            local_1b0 = (long *)0x0;
            local_a8 = local_1a8;
            local_a0 = local_1a0;
            local_98 = local_198;
            puVar37 = (ulong *)*plVar45;
            if (puVar37 < (ulong *)*puVar42) {
              uVar43 = *puVar41;
              lVar12 = nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_02710860);
              if (0xf < *(ulong *)(lVar12 + 0x80)) goto LAB_00e10df8;
              *(undefined8 *)(lVar12 + *(ulong *)(lVar12 + 0x80) * 8) = uVar43;
              *(long *)(lVar12 + 0x80) = *(long *)(lVar12 + 0x80) + 1;
              *puVar37 = (ulong)local_b0;
              puVar37[1] = (ulong)local_a8;
              puVar37[2] = (ulong)local_a0;
              puVar37[3] = (ulong)local_98;
              *(long *)(lVar12 + 0x80) = *(long *)(lVar12 + 0x80) + -1;
              *plVar45 = *plVar45 + 0x20;
              local_b0 = (long *)0x0;
            }
            else {
              FUN_00e1f040(plVar33,&local_b0);
              plVar32 = local_b0;
              local_b0 = (long *)0x0;
              if (plVar32 != (long *)0x0) {
                local_b0 = (long *)0x0;
                (**(code **)*plVar32)(plVar32);
                (**(code **)(*local_a8 + 0x18))(local_a8,plVar32,local_a0,local_98);
              }
            }
            plVar32 = local_1b0;
            local_1b0 = (long *)0x0;
            if (plVar32 != (long *)0x0) {
              (**(code **)*plVar32)(plVar32);
              (**(code **)(*local_1a8 + 0x18))(local_1a8,plVar32,local_1a0,local_198);
            }
            lVar24 = lVar24 + 4;
          } while (uVar28 * 4 != lVar24);
          lVar48 = (long)piVar3 - (long)*piVar3;
        }
        puVar39 = (uint *)((long)piVar3 + (ulong)*(ushort *)(lVar48 + 0x18));
        uVar23 = (ulong)*puVar39;
        uVar28 = (ulong)*(uint *)((long)puVar39 + uVar23);
        if (uVar28 != 0) {
          lVar24 = 0;
          lVar48 = local_258 + uVar17 + uVar23 + (ulong)*(ushort *)(lVar48 + 0x18);
          do {
            uVar23 = (ulong)*(uint *)(lVar48 + lVar24);
            lVar12 = lVar24 + (uVar23 - (long)*(int *)(lVar48 + uVar23 + lVar24));
            if ((*(ushort *)(lVar48 + lVar12) < 5) ||
               (uVar34 = (ulong)*(ushort *)(lVar48 + lVar12 + 4), uVar34 == 0)) {
              piVar21 = (int *)0x0;
            }
            else {
              lVar12 = uVar23 + uVar34;
              piVar21 = (int *)(lVar48 + lVar24 + lVar12 + (ulong)*(uint *)(lVar48 + lVar12 + lVar24
                                                                           ));
            }
            if ((*(ushort *)((long)piVar21 - (long)*piVar21) < 5) ||
               (uVar34 = (ulong)((ushort *)((long)piVar21 - (long)*piVar21))[2], uVar34 == 0)) {
              lVar12 = 0;
            }
            else {
              puVar39 = (uint *)((long)piVar21 + uVar34);
              lVar12 = (long)puVar39 + (ulong)*puVar39;
            }
            FUN_00e16660(&local_1b0,plVar46,lVar48 + lVar24 + uVar23,lVar12,local_70);
            local_b0 = local_1b0;
            local_1b0 = (long *)0x0;
            local_a8 = local_1a8;
            local_a0 = local_1a0;
            local_98 = local_198;
            puVar37 = (ulong *)*plVar45;
            if (puVar37 < (ulong *)*puVar42) {
              uVar43 = *puVar41;
              lVar12 = nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_02710860);
              if (0xf < *(ulong *)(lVar12 + 0x80)) goto LAB_00e10df8;
              *(undefined8 *)(lVar12 + *(ulong *)(lVar12 + 0x80) * 8) = uVar43;
              *(long *)(lVar12 + 0x80) = *(long *)(lVar12 + 0x80) + 1;
              *puVar37 = (ulong)local_b0;
              puVar37[1] = (ulong)local_a8;
              puVar37[2] = (ulong)local_a0;
              puVar37[3] = (ulong)local_98;
              *(long *)(lVar12 + 0x80) = *(long *)(lVar12 + 0x80) + -1;
              *plVar45 = *plVar45 + 0x20;
              local_b0 = (long *)0x0;
            }
            else {
              FUN_00e1f040(plVar33,&local_b0);
              plVar32 = local_b0;
              local_b0 = (long *)0x0;
              if (plVar32 != (long *)0x0) {
                local_b0 = (long *)0x0;
                (**(code **)*plVar32)(plVar32);
                (**(code **)(*local_a8 + 0x18))(local_a8,plVar32,local_a0,local_98);
              }
            }
            plVar32 = local_1b0;
            local_1b0 = (long *)0x0;
            if (plVar32 != (long *)0x0) {
              (**(code **)*plVar32)(plVar32);
              (**(code **)(*local_1a8 + 0x18))(local_1a8,plVar32,local_1a0,local_198);
            }
            lVar24 = lVar24 + 4;
          } while (uVar28 * 4 != lVar24);
          lVar48 = (long)piVar3 - (long)*piVar3;
        }
        puVar39 = (uint *)((long)piVar3 + (ulong)*(ushort *)(lVar48 + 0x1a));
        uVar23 = (ulong)*puVar39;
        uVar28 = (ulong)*(uint *)((long)puVar39 + uVar23);
        if (uVar28 != 0) {
          lVar24 = 0;
          lVar48 = local_258 + uVar17 + uVar23 + (ulong)*(ushort *)(lVar48 + 0x1a);
          do {
            uVar23 = (ulong)*(uint *)(lVar48 + lVar24);
            lVar12 = lVar24 + (uVar23 - (long)*(int *)(lVar48 + uVar23 + lVar24));
            if ((*(ushort *)(lVar48 + lVar12) < 5) ||
               (uVar34 = (ulong)*(ushort *)(lVar48 + lVar12 + 4), uVar34 == 0)) {
              piVar21 = (int *)0x0;
            }
            else {
              lVar12 = uVar23 + uVar34;
              piVar21 = (int *)(lVar48 + lVar24 + lVar12 + (ulong)*(uint *)(lVar48 + lVar12 + lVar24
                                                                           ));
            }
            if ((*(ushort *)((long)piVar21 - (long)*piVar21) < 5) ||
               (uVar34 = (ulong)((ushort *)((long)piVar21 - (long)*piVar21))[2], uVar34 == 0)) {
              lVar12 = 0;
            }
            else {
              puVar39 = (uint *)((long)piVar21 + uVar34);
              lVar12 = (long)puVar39 + (ulong)*puVar39;
            }
            FUN_00e167f0(&local_1b0,plVar46,lVar48 + lVar24 + uVar23,lVar12,local_70);
            local_b0 = local_1b0;
            local_1b0 = (long *)0x0;
            local_a8 = local_1a8;
            local_a0 = local_1a0;
            local_98 = local_198;
            puVar37 = (ulong *)*plVar45;
            if (puVar37 < (ulong *)*puVar42) {
              uVar43 = *puVar41;
              lVar12 = nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_02710860);
              if (0xf < *(ulong *)(lVar12 + 0x80)) goto LAB_00e10df8;
              *(undefined8 *)(lVar12 + *(ulong *)(lVar12 + 0x80) * 8) = uVar43;
              *(long *)(lVar12 + 0x80) = *(long *)(lVar12 + 0x80) + 1;
              *puVar37 = (ulong)local_b0;
              puVar37[1] = (ulong)local_a8;
              puVar37[2] = (ulong)local_a0;
              puVar37[3] = (ulong)local_98;
              *(long *)(lVar12 + 0x80) = *(long *)(lVar12 + 0x80) + -1;
              *plVar45 = *plVar45 + 0x20;
              local_b0 = (long *)0x0;
            }
            else {
              FUN_00e1f040(plVar33,&local_b0);
              plVar32 = local_b0;
              local_b0 = (long *)0x0;
              if (plVar32 != (long *)0x0) {
                local_b0 = (long *)0x0;
                (**(code **)*plVar32)(plVar32);
                (**(code **)(*local_a8 + 0x18))(local_a8,plVar32,local_a0,local_98);
              }
            }
            plVar32 = local_1b0;
            local_1b0 = (long *)0x0;
            if (plVar32 != (long *)0x0) {
              (**(code **)*plVar32)(plVar32);
              (**(code **)(*local_1a8 + 0x18))(local_1a8,plVar32,local_1a0,local_198);
            }
            lVar24 = lVar24 + 4;
          } while (uVar28 * 4 != lVar24);
          lVar48 = (long)piVar3 - (long)*piVar3;
        }
        puVar39 = (uint *)((long)piVar3 + (ulong)*(ushort *)(lVar48 + 0x1c));
        uVar23 = (ulong)*puVar39;
        uVar28 = (ulong)*(uint *)((long)puVar39 + uVar23);
        if (uVar28 != 0) {
          lVar24 = 0;
          lVar48 = local_258 + uVar17 + uVar23 + (ulong)*(ushort *)(lVar48 + 0x1c);
          do {
            uVar23 = (ulong)*(uint *)(lVar48 + lVar24);
            lVar12 = lVar24 + (uVar23 - (long)*(int *)(lVar48 + uVar23 + lVar24));
            if ((*(ushort *)(lVar48 + lVar12) < 5) ||
               (uVar34 = (ulong)*(ushort *)(lVar48 + lVar12 + 4), uVar34 == 0)) {
              piVar21 = (int *)0x0;
            }
            else {
              lVar12 = uVar23 + uVar34;
              piVar21 = (int *)(lVar48 + lVar24 + lVar12 + (ulong)*(uint *)(lVar48 + lVar12 + lVar24
                                                                           ));
            }
            if ((*(ushort *)((long)piVar21 - (long)*piVar21) < 5) ||
               (uVar34 = (ulong)((ushort *)((long)piVar21 - (long)*piVar21))[2], uVar34 == 0)) {
              lVar12 = 0;
            }
            else {
              puVar39 = (uint *)((long)piVar21 + uVar34);
              lVar12 = (long)puVar39 + (ulong)*puVar39;
            }
            FUN_00e16980(&local_1b0,plVar46,lVar48 + lVar24 + uVar23,lVar12,local_70);
            local_b0 = local_1b0;
            local_1b0 = (long *)0x0;
            local_a8 = local_1a8;
            local_a0 = local_1a0;
            local_98 = local_198;
            puVar37 = (ulong *)*plVar45;
            if (puVar37 < (ulong *)*puVar42) {
              uVar43 = *puVar41;
              lVar12 = nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_02710860);
              if (0xf < *(ulong *)(lVar12 + 0x80)) goto LAB_00e10df8;
              *(undefined8 *)(lVar12 + *(ulong *)(lVar12 + 0x80) * 8) = uVar43;
              *(long *)(lVar12 + 0x80) = *(long *)(lVar12 + 0x80) + 1;
              *puVar37 = (ulong)local_b0;
              puVar37[1] = (ulong)local_a8;
              puVar37[2] = (ulong)local_a0;
              puVar37[3] = (ulong)local_98;
              *(long *)(lVar12 + 0x80) = *(long *)(lVar12 + 0x80) + -1;
              *plVar45 = *plVar45 + 0x20;
              local_b0 = (long *)0x0;
            }
            else {
              FUN_00e1f040(plVar33,&local_b0);
              plVar32 = local_b0;
              local_b0 = (long *)0x0;
              if (plVar32 != (long *)0x0) {
                local_b0 = (long *)0x0;
                (**(code **)*plVar32)(plVar32);
                (**(code **)(*local_a8 + 0x18))(local_a8,plVar32,local_a0,local_98);
              }
            }
            plVar32 = local_1b0;
            local_1b0 = (long *)0x0;
            if (plVar32 != (long *)0x0) {
              (**(code **)*plVar32)(plVar32);
              (**(code **)(*local_1a8 + 0x18))(local_1a8,plVar32,local_1a0,local_198);
            }
            lVar24 = lVar24 + 4;
          } while (uVar28 * 4 != lVar24);
          lVar48 = (long)piVar3 - (long)*piVar3;
        }
        puVar39 = (uint *)((long)piVar3 + (ulong)*(ushort *)(lVar48 + 0x20));
        uVar23 = (ulong)*puVar39;
        uVar28 = (ulong)*(uint *)((long)puVar39 + uVar23);
        if (uVar28 != 0) {
          lVar24 = 0;
          lVar48 = local_250 + uVar23 + *(ushort *)(lVar48 + 0x20) + uVar17;
          do {
            uVar23 = (ulong)*(uint *)(lVar48 + lVar24 + 8);
            lVar35 = uVar23 + *(ushort *)
                               (lVar48 + (uVar23 - (long)*(int *)(lVar48 + uVar23 + lVar24 + 8)) +
                                lVar24 + 0xc);
            lVar35 = lVar35 + (ulong)*(uint *)(lVar48 + lVar35 + lVar24 + 8);
            lVar35 = lVar35 + (ulong)*(ushort *)
                                      (lVar48 + (lVar35 - *(int *)(lVar48 + lVar35 + lVar24 + 8)) +
                                       lVar24 + 0xc);
            lVar35 = lVar35 + (ulong)*(uint *)(lVar48 + lVar35 + lVar24 + 8);
            lVar12 = lVar48 + lVar24 + (lVar35 - *(int *)(lVar48 + lVar35 + lVar24 + 8));
            if ((*(ushort *)(lVar12 + 8) < 5) ||
               (uVar34 = (ulong)*(ushort *)(lVar12 + 0xc), uVar34 == 0)) {
              lVar12 = 0;
            }
            else {
              lVar35 = lVar35 + uVar34;
              lVar12 = lVar48 + lVar24 + lVar35 + (ulong)*(uint *)(lVar48 + lVar35 + lVar24 + 8) + 8
              ;
            }
            FUN_00e16b10(&local_1b0,plVar46,lVar48 + lVar24 + uVar23 + 8,lVar12,local_70);
            local_b0 = local_1b0;
            local_1b0 = (long *)0x0;
            local_a8 = local_1a8;
            local_a0 = local_1a0;
            local_98 = local_198;
            puVar37 = (ulong *)*plVar45;
            if (puVar37 < (ulong *)*puVar42) {
              uVar43 = *puVar41;
              lVar12 = nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_02710860);
              if (0xf < *(ulong *)(lVar12 + 0x80)) goto LAB_00e10df8;
              *(undefined8 *)(lVar12 + *(ulong *)(lVar12 + 0x80) * 8) = uVar43;
              *(long *)(lVar12 + 0x80) = *(long *)(lVar12 + 0x80) + 1;
              *puVar37 = (ulong)local_b0;
              puVar37[1] = (ulong)local_a8;
              puVar37[2] = (ulong)local_a0;
              puVar37[3] = (ulong)local_98;
              *(long *)(lVar12 + 0x80) = *(long *)(lVar12 + 0x80) + -1;
              *plVar45 = *plVar45 + 0x20;
              local_b0 = (long *)0x0;
            }
            else {
              FUN_00e1f040(plVar33,&local_b0);
              plVar32 = local_b0;
              local_b0 = (long *)0x0;
              if (plVar32 != (long *)0x0) {
                local_b0 = (long *)0x0;
                (**(code **)*plVar32)(plVar32);
                (**(code **)(*local_a8 + 0x18))(local_a8,plVar32,local_a0,local_98);
              }
            }
            plVar32 = local_1b0;
            local_1b0 = (long *)0x0;
            if (plVar32 != (long *)0x0) {
              (**(code **)*plVar32)(plVar32);
              (**(code **)(*local_1a8 + 0x18))(local_1a8,plVar32,local_1a0,local_198);
            }
            lVar24 = lVar24 + 4;
          } while (uVar28 * 4 != lVar24);
          lVar48 = (long)piVar3 - (long)*piVar3;
        }
        puVar39 = (uint *)((long)piVar3 + (ulong)*(ushort *)(lVar48 + 0x1e));
        uVar23 = (ulong)*puVar39;
        uVar28 = (ulong)*(uint *)((long)puVar39 + uVar23);
        if (uVar28 != 0) {
          lVar24 = 0;
          lVar48 = local_250 + uVar23 + *(ushort *)(lVar48 + 0x1e) + uVar17;
          do {
            uVar23 = (ulong)*(uint *)(lVar48 + lVar24 + 8);
            lVar35 = uVar23 + *(ushort *)
                               (lVar48 + (uVar23 - (long)*(int *)(lVar48 + uVar23 + lVar24 + 8)) +
                                lVar24 + 0xc);
            lVar35 = lVar35 + (ulong)*(uint *)(lVar48 + lVar35 + lVar24 + 8);
            lVar12 = lVar48 + lVar24 + (lVar35 - *(int *)(lVar48 + lVar35 + lVar24 + 8));
            if ((*(ushort *)(lVar12 + 8) < 5) ||
               (uVar34 = (ulong)*(ushort *)(lVar12 + 0xc), uVar34 == 0)) {
              lVar12 = 0;
            }
            else {
              lVar35 = lVar35 + uVar34;
              lVar12 = lVar48 + lVar24 + lVar35 + (ulong)*(uint *)(lVar48 + lVar35 + lVar24 + 8) + 8
              ;
            }
            FUN_00e16ca0(&local_1b0,plVar46,lVar48 + lVar24 + uVar23 + 8,lVar12,local_70);
            local_b0 = local_1b0;
            local_1b0 = (long *)0x0;
            local_a8 = local_1a8;
            local_a0 = local_1a0;
            local_98 = local_198;
            puVar37 = (ulong *)*plVar45;
            if (puVar37 < (ulong *)*puVar42) {
              uVar43 = *puVar41;
              lVar12 = nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_02710860);
              if (0xf < *(ulong *)(lVar12 + 0x80)) goto LAB_00e10df8;
              *(undefined8 *)(lVar12 + *(ulong *)(lVar12 + 0x80) * 8) = uVar43;
              *(long *)(lVar12 + 0x80) = *(long *)(lVar12 + 0x80) + 1;
              *puVar37 = (ulong)local_b0;
              puVar37[1] = (ulong)local_a8;
              puVar37[2] = (ulong)local_a0;
              puVar37[3] = (ulong)local_98;
              *(long *)(lVar12 + 0x80) = *(long *)(lVar12 + 0x80) + -1;
              *plVar45 = *plVar45 + 0x20;
              local_b0 = (long *)0x0;
            }
            else {
              FUN_00e1f040(plVar33,&local_b0);
              plVar32 = local_b0;
              local_b0 = (long *)0x0;
              if (plVar32 != (long *)0x0) {
                local_b0 = (long *)0x0;
                (**(code **)*plVar32)(plVar32);
                (**(code **)(*local_a8 + 0x18))(local_a8,plVar32,local_a0,local_98);
              }
            }
            plVar32 = local_1b0;
            local_1b0 = (long *)0x0;
            if (plVar32 != (long *)0x0) {
              (**(code **)*plVar32)(plVar32);
              (**(code **)(*local_1a8 + 0x18))(local_1a8,plVar32,local_1a0,local_198);
            }
            lVar24 = lVar24 + 4;
          } while (uVar28 * 4 != lVar24);
          lVar48 = (long)piVar3 - (long)*piVar3;
        }
        puVar39 = (uint *)((long)piVar3 + (ulong)*(ushort *)(lVar48 + 0x22));
        uVar23 = (ulong)*puVar39;
        uVar28 = (ulong)*(uint *)((long)puVar39 + uVar23);
        if (uVar28 != 0) {
          lVar24 = 0;
          lVar48 = local_258 + uVar17 + uVar23 + (ulong)*(ushort *)(lVar48 + 0x22);
          do {
            uVar23 = (ulong)*(uint *)(lVar48 + lVar24);
            lVar12 = lVar24 + (uVar23 - (long)*(int *)(lVar48 + uVar23 + lVar24));
            if ((*(ushort *)(lVar48 + lVar12) < 5) ||
               (uVar34 = (ulong)*(ushort *)(lVar48 + lVar12 + 4), uVar34 == 0)) {
              lVar12 = 0;
            }
            else {
              lVar12 = uVar23 + uVar34;
              lVar12 = lVar48 + lVar24 + lVar12 + (ulong)*(uint *)(lVar48 + lVar12 + lVar24);
            }
            FUN_00e16e30(&local_1b0,plVar46,lVar48 + lVar24 + uVar23,lVar12,local_70);
            local_b0 = local_1b0;
            local_1b0 = (long *)0x0;
            local_a8 = local_1a8;
            local_a0 = local_1a0;
            local_98 = local_198;
            puVar37 = (ulong *)*plVar45;
            if (puVar37 < (ulong *)*puVar42) {
              uVar43 = *puVar41;
              lVar12 = nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_02710860);
              if (0xf < *(ulong *)(lVar12 + 0x80)) goto LAB_00e10df8;
              *(undefined8 *)(lVar12 + *(ulong *)(lVar12 + 0x80) * 8) = uVar43;
              *(long *)(lVar12 + 0x80) = *(long *)(lVar12 + 0x80) + 1;
              *puVar37 = (ulong)local_b0;
              puVar37[1] = (ulong)local_a8;
              puVar37[2] = (ulong)local_a0;
              puVar37[3] = (ulong)local_98;
              *(long *)(lVar12 + 0x80) = *(long *)(lVar12 + 0x80) + -1;
              *plVar45 = *plVar45 + 0x20;
              local_b0 = (long *)0x0;
            }
            else {
              FUN_00e1f040(plVar33,&local_b0);
              plVar32 = local_b0;
              local_b0 = (long *)0x0;
              if (plVar32 != (long *)0x0) {
                local_b0 = (long *)0x0;
                (**(code **)*plVar32)(plVar32);
                (**(code **)(*local_a8 + 0x18))(local_a8,plVar32,local_a0,local_98);
              }
            }
            plVar32 = local_1b0;
            local_1b0 = (long *)0x0;
            if (plVar32 != (long *)0x0) {
              (**(code **)*plVar32)(plVar32);
              (**(code **)(*local_1a8 + 0x18))(local_1a8,plVar32,local_1a0,local_198);
            }
            lVar24 = lVar24 + 4;
          } while (uVar28 * 4 != lVar24);
          lVar48 = (long)piVar3 - (long)*piVar3;
        }
        puVar39 = (uint *)((long)piVar3 + (ulong)*(ushort *)(lVar48 + 0x26));
        uVar23 = (ulong)*puVar39;
        uVar28 = (ulong)*(uint *)((long)puVar39 + uVar23);
        if (uVar28 != 0) {
          lVar24 = 0;
          lVar48 = local_250 + uVar23 + *(ushort *)(lVar48 + 0x26) + uVar17;
          do {
            uVar23 = (ulong)*(uint *)(lVar48 + lVar24 + 8);
            lVar35 = uVar23 + *(ushort *)
                               (lVar48 + (uVar23 - (long)*(int *)(lVar48 + uVar23 + lVar24 + 8)) +
                                lVar24 + 0xc);
            lVar35 = lVar35 + (ulong)*(uint *)(lVar48 + lVar35 + lVar24 + 8);
            lVar12 = lVar48 + lVar24 + (lVar35 - *(int *)(lVar48 + lVar35 + lVar24 + 8));
            if ((*(ushort *)(lVar12 + 8) < 5) ||
               (uVar34 = (ulong)*(ushort *)(lVar12 + 0xc), uVar34 == 0)) {
              lVar12 = 0;
            }
            else {
              lVar35 = lVar35 + uVar34;
              lVar12 = lVar48 + lVar24 + lVar35 + (ulong)*(uint *)(lVar48 + lVar35 + lVar24 + 8) + 8
              ;
            }
            FUN_00e16fc0(&local_1b0,plVar46,lVar48 + lVar24 + uVar23 + 8,lVar12,local_70);
            local_b0 = local_1b0;
            local_1b0 = (long *)0x0;
            local_a8 = local_1a8;
            local_a0 = local_1a0;
            local_98 = local_198;
            puVar37 = (ulong *)*plVar45;
            if (puVar37 < (ulong *)*puVar42) {
              uVar43 = *puVar41;
              lVar12 = nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_02710860);
              if (0xf < *(ulong *)(lVar12 + 0x80)) goto LAB_00e10df8;
              *(undefined8 *)(lVar12 + *(ulong *)(lVar12 + 0x80) * 8) = uVar43;
              *(long *)(lVar12 + 0x80) = *(long *)(lVar12 + 0x80) + 1;
              *puVar37 = (ulong)local_b0;
              puVar37[1] = (ulong)local_a8;
              puVar37[2] = (ulong)local_a0;
              puVar37[3] = (ulong)local_98;
              *(long *)(lVar12 + 0x80) = *(long *)(lVar12 + 0x80) + -1;
              *plVar45 = *plVar45 + 0x20;
              local_b0 = (long *)0x0;
            }
            else {
              FUN_00e1f040(plVar33,&local_b0);
              plVar32 = local_b0;
              local_b0 = (long *)0x0;
              if (plVar32 != (long *)0x0) {
                local_b0 = (long *)0x0;
                (**(code **)*plVar32)(plVar32);
                (**(code **)(*local_a8 + 0x18))(local_a8,plVar32,local_a0,local_98);
              }
            }
            plVar32 = local_1b0;
            local_1b0 = (long *)0x0;
            if (plVar32 != (long *)0x0) {
              (**(code **)*plVar32)(plVar32);
              (**(code **)(*local_1a8 + 0x18))(local_1a8,plVar32,local_1a0,local_198);
            }
            lVar24 = lVar24 + 4;
          } while (uVar28 * 4 != lVar24);
          lVar48 = (long)piVar3 - (long)*piVar3;
        }
        puVar39 = (uint *)((long)piVar3 + (ulong)*(ushort *)(lVar48 + 0x28));
        uVar23 = (ulong)*puVar39;
        uVar28 = (ulong)*(uint *)((long)puVar39 + uVar23);
        if (uVar28 != 0) {
          lVar24 = 0;
          lVar48 = local_250 + uVar23 + *(ushort *)(lVar48 + 0x28) + uVar17;
          do {
            uVar23 = (ulong)*(uint *)(lVar48 + lVar24 + 8);
            lVar35 = uVar23 + *(ushort *)
                               (lVar48 + (uVar23 - (long)*(int *)(lVar48 + uVar23 + lVar24 + 8)) +
                                lVar24 + 0xc);
            lVar35 = lVar35 + (ulong)*(uint *)(lVar48 + lVar35 + lVar24 + 8);
            lVar12 = lVar48 + lVar24 + (lVar35 - *(int *)(lVar48 + lVar35 + lVar24 + 8));
            if ((*(ushort *)(lVar12 + 8) < 5) ||
               (uVar34 = (ulong)*(ushort *)(lVar12 + 0xc), uVar34 == 0)) {
              lVar12 = 0;
            }
            else {
              lVar35 = lVar35 + uVar34;
              lVar12 = lVar48 + lVar24 + lVar35 + (ulong)*(uint *)(lVar48 + lVar35 + lVar24 + 8) + 8
              ;
            }
            FUN_00e17150(&local_1b0,plVar46,lVar48 + lVar24 + uVar23 + 8,lVar12,local_70);
            local_b0 = local_1b0;
            local_1b0 = (long *)0x0;
            local_a8 = local_1a8;
            local_a0 = local_1a0;
            local_98 = local_198;
            puVar37 = (ulong *)*plVar45;
            if (puVar37 < (ulong *)*puVar42) {
              uVar43 = *puVar41;
              lVar12 = nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_02710860);
              if (0xf < *(ulong *)(lVar12 + 0x80)) goto LAB_00e10df8;
              *(undefined8 *)(lVar12 + *(ulong *)(lVar12 + 0x80) * 8) = uVar43;
              *(long *)(lVar12 + 0x80) = *(long *)(lVar12 + 0x80) + 1;
              *puVar37 = (ulong)local_b0;
              puVar37[1] = (ulong)local_a8;
              puVar37[2] = (ulong)local_a0;
              puVar37[3] = (ulong)local_98;
              *(long *)(lVar12 + 0x80) = *(long *)(lVar12 + 0x80) + -1;
              *plVar45 = *plVar45 + 0x20;
              local_b0 = (long *)0x0;
            }
            else {
              FUN_00e1f040(plVar33,&local_b0);
              plVar32 = local_b0;
              local_b0 = (long *)0x0;
              if (plVar32 != (long *)0x0) {
                local_b0 = (long *)0x0;
                (**(code **)*plVar32)(plVar32);
                (**(code **)(*local_a8 + 0x18))(local_a8,plVar32,local_a0,local_98);
              }
            }
            plVar32 = local_1b0;
            local_1b0 = (long *)0x0;
            if (plVar32 != (long *)0x0) {
              (**(code **)*plVar32)(plVar32);
              (**(code **)(*local_1a8 + 0x18))(local_1a8,plVar32,local_1a0,local_198);
            }
            lVar24 = lVar24 + 4;
          } while (uVar28 * 4 != lVar24);
          lVar48 = (long)piVar3 - (long)*piVar3;
        }
        puVar39 = (uint *)((long)piVar3 + (ulong)*(ushort *)(lVar48 + 0x2c));
        uVar23 = (ulong)*puVar39;
        uVar28 = (ulong)*(uint *)((long)puVar39 + uVar23);
        if (uVar28 != 0) {
          lVar24 = 0;
          lVar48 = local_250 + uVar23 + *(ushort *)(lVar48 + 0x2c) + uVar17;
          do {
            uVar23 = (ulong)*(uint *)(lVar48 + lVar24 + 8);
            lVar35 = uVar23 + *(ushort *)
                               (lVar48 + (uVar23 - (long)*(int *)(lVar48 + uVar23 + lVar24 + 8)) +
                                lVar24 + 0xc);
            lVar35 = lVar35 + (ulong)*(uint *)(lVar48 + lVar35 + lVar24 + 8);
            lVar12 = lVar48 + lVar24 + (lVar35 - *(int *)(lVar48 + lVar35 + lVar24 + 8));
            if ((*(ushort *)(lVar12 + 8) < 5) ||
               (uVar34 = (ulong)*(ushort *)(lVar12 + 0xc), uVar34 == 0)) {
              lVar12 = 0;
            }
            else {
              lVar35 = lVar35 + uVar34;
              lVar12 = lVar48 + lVar24 + lVar35 + (ulong)*(uint *)(lVar48 + lVar35 + lVar24 + 8) + 8
              ;
            }
            FUN_00e172e0(&local_1b0,plVar46,lVar48 + lVar24 + uVar23 + 8,lVar12,local_70);
            local_b0 = local_1b0;
            local_1b0 = (long *)0x0;
            local_a8 = local_1a8;
            local_a0 = local_1a0;
            local_98 = local_198;
            puVar37 = (ulong *)*plVar45;
            if (puVar37 < (ulong *)*puVar42) {
              uVar43 = *puVar41;
              lVar12 = nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_02710860);
              if (0xf < *(ulong *)(lVar12 + 0x80)) goto LAB_00e10df8;
              *(undefined8 *)(lVar12 + *(ulong *)(lVar12 + 0x80) * 8) = uVar43;
              *(long *)(lVar12 + 0x80) = *(long *)(lVar12 + 0x80) + 1;
              *puVar37 = (ulong)local_b0;
              puVar37[1] = (ulong)local_a8;
              puVar37[2] = (ulong)local_a0;
              puVar37[3] = (ulong)local_98;
              *(long *)(lVar12 + 0x80) = *(long *)(lVar12 + 0x80) + -1;
              *plVar45 = *plVar45 + 0x20;
              local_b0 = (long *)0x0;
            }
            else {
              FUN_00e1f040(plVar33,&local_b0);
              plVar32 = local_b0;
              local_b0 = (long *)0x0;
              if (plVar32 != (long *)0x0) {
                local_b0 = (long *)0x0;
                (**(code **)*plVar32)(plVar32);
                (**(code **)(*local_a8 + 0x18))(local_a8,plVar32,local_a0,local_98);
              }
            }
            plVar32 = local_1b0;
            local_1b0 = (long *)0x0;
            if (plVar32 != (long *)0x0) {
              (**(code **)*plVar32)(plVar32);
              (**(code **)(*local_1a8 + 0x18))(local_1a8,plVar32,local_1a0,local_198);
            }
            lVar24 = lVar24 + 4;
          } while (uVar28 * 4 != lVar24);
          lVar48 = (long)piVar3 - (long)*piVar3;
        }
        puVar39 = (uint *)((long)piVar3 + (ulong)*(ushort *)(lVar48 + 0x2e));
        uVar23 = (ulong)*puVar39;
        uVar28 = (ulong)*(uint *)((long)puVar39 + uVar23);
        if (uVar28 != 0) {
          lVar24 = 0;
          lVar48 = local_250 + uVar23 + *(ushort *)(lVar48 + 0x2e) + uVar17;
          do {
            uVar23 = (ulong)*(uint *)(lVar48 + lVar24 + 8);
            lVar35 = uVar23 + *(ushort *)
                               (lVar48 + (uVar23 - (long)*(int *)(lVar48 + uVar23 + lVar24 + 8)) +
                                lVar24 + 0xc);
            lVar35 = lVar35 + (ulong)*(uint *)(lVar48 + lVar35 + lVar24 + 8);
            lVar35 = lVar35 + (ulong)*(ushort *)
                                      (lVar48 + (lVar35 - *(int *)(lVar48 + lVar35 + lVar24 + 8)) +
                                       lVar24 + 0xc);
            lVar35 = lVar35 + (ulong)*(uint *)(lVar48 + lVar35 + lVar24 + 8);
            lVar12 = lVar48 + lVar24 + (lVar35 - *(int *)(lVar48 + lVar35 + lVar24 + 8));
            if ((*(ushort *)(lVar12 + 8) < 5) ||
               (uVar34 = (ulong)*(ushort *)(lVar12 + 0xc), uVar34 == 0)) {
              lVar12 = 0;
            }
            else {
              lVar35 = lVar35 + uVar34;
              lVar12 = lVar48 + lVar24 + lVar35 + (ulong)*(uint *)(lVar48 + lVar35 + lVar24 + 8) + 8
              ;
            }
            FUN_00e17470(&local_1b0,plVar46,lVar48 + lVar24 + uVar23 + 8,lVar12,local_70);
            local_b0 = local_1b0;
            local_1b0 = (long *)0x0;
            local_a8 = local_1a8;
            local_a0 = local_1a0;
            local_98 = local_198;
            puVar37 = (ulong *)*plVar45;
            if (puVar37 < (ulong *)*puVar42) {
              uVar43 = *puVar41;
              lVar12 = nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_02710860);
              if (0xf < *(ulong *)(lVar12 + 0x80)) goto LAB_00e10df8;
              *(undefined8 *)(lVar12 + *(ulong *)(lVar12 + 0x80) * 8) = uVar43;
              *(long *)(lVar12 + 0x80) = *(long *)(lVar12 + 0x80) + 1;
              *puVar37 = (ulong)local_b0;
              puVar37[1] = (ulong)local_a8;
              puVar37[2] = (ulong)local_a0;
              puVar37[3] = (ulong)local_98;
              *(long *)(lVar12 + 0x80) = *(long *)(lVar12 + 0x80) + -1;
              *plVar45 = *plVar45 + 0x20;
              local_b0 = (long *)0x0;
            }
            else {
              FUN_00e1f040(plVar33,&local_b0);
              plVar32 = local_b0;
              local_b0 = (long *)0x0;
              if (plVar32 != (long *)0x0) {
                local_b0 = (long *)0x0;
                (**(code **)*plVar32)(plVar32);
                (**(code **)(*local_a8 + 0x18))(local_a8,plVar32,local_a0,local_98);
              }
            }
            plVar32 = local_1b0;
            local_1b0 = (long *)0x0;
            if (plVar32 != (long *)0x0) {
              (**(code **)*plVar32)(plVar32);
              (**(code **)(*local_1a8 + 0x18))(local_1a8,plVar32,local_1a0,local_198);
            }
            lVar24 = lVar24 + 4;
          } while (uVar28 * 4 != lVar24);
          lVar48 = (long)piVar3 - (long)*piVar3;
        }
        puVar39 = (uint *)((long)piVar3 + (ulong)*(ushort *)(lVar48 + 0x30));
        uVar23 = (ulong)*puVar39;
        uVar28 = (ulong)*(uint *)((long)puVar39 + uVar23);
        if (uVar28 != 0) {
          lVar24 = 0;
          lVar48 = local_250 + uVar23 + *(ushort *)(lVar48 + 0x30) + uVar17;
          do {
            uVar23 = (ulong)*(uint *)(lVar48 + lVar24 + 8);
            lVar35 = uVar23 + *(ushort *)
                               (lVar48 + (uVar23 - (long)*(int *)(lVar48 + uVar23 + lVar24 + 8)) +
                                lVar24 + 0xc);
            lVar35 = lVar35 + (ulong)*(uint *)(lVar48 + lVar35 + lVar24 + 8);
            lVar35 = lVar35 + (ulong)*(ushort *)
                                      (lVar48 + (lVar35 - *(int *)(lVar48 + lVar35 + lVar24 + 8)) +
                                       lVar24 + 0xc);
            lVar35 = lVar35 + (ulong)*(uint *)(lVar48 + lVar35 + lVar24 + 8);
            lVar12 = lVar48 + lVar24 + (lVar35 - *(int *)(lVar48 + lVar35 + lVar24 + 8));
            if ((*(ushort *)(lVar12 + 8) < 5) ||
               (uVar34 = (ulong)*(ushort *)(lVar12 + 0xc), uVar34 == 0)) {
              lVar12 = 0;
            }
            else {
              lVar35 = lVar35 + uVar34;
              lVar12 = lVar48 + lVar24 + lVar35 + (ulong)*(uint *)(lVar48 + lVar35 + lVar24 + 8) + 8
              ;
            }
            FUN_00e17600(&local_1b0,plVar46,lVar48 + lVar24 + uVar23 + 8,lVar12,local_70);
            local_b0 = local_1b0;
            local_1b0 = (long *)0x0;
            local_a8 = local_1a8;
            local_a0 = local_1a0;
            local_98 = local_198;
            puVar37 = (ulong *)*plVar45;
            if (puVar37 < (ulong *)*puVar42) {
              uVar43 = *puVar41;
              lVar12 = nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_02710860);
              if (0xf < *(ulong *)(lVar12 + 0x80)) goto LAB_00e10df8;
              *(undefined8 *)(lVar12 + *(ulong *)(lVar12 + 0x80) * 8) = uVar43;
              *(long *)(lVar12 + 0x80) = *(long *)(lVar12 + 0x80) + 1;
              *puVar37 = (ulong)local_b0;
              puVar37[1] = (ulong)local_a8;
              puVar37[2] = (ulong)local_a0;
              puVar37[3] = (ulong)local_98;
              *(long *)(lVar12 + 0x80) = *(long *)(lVar12 + 0x80) + -1;
              *plVar45 = *plVar45 + 0x20;
              local_b0 = (long *)0x0;
            }
            else {
              FUN_00e1f040(plVar33,&local_b0);
              plVar32 = local_b0;
              local_b0 = (long *)0x0;
              if (plVar32 != (long *)0x0) {
                local_b0 = (long *)0x0;
                (**(code **)*plVar32)(plVar32);
                (**(code **)(*local_a8 + 0x18))(local_a8,plVar32,local_a0,local_98);
              }
            }
            plVar32 = local_1b0;
            local_1b0 = (long *)0x0;
            if (plVar32 != (long *)0x0) {
              (**(code **)*plVar32)(plVar32);
              (**(code **)(*local_1a8 + 0x18))(local_1a8,plVar32,local_1a0,local_198);
            }
            lVar24 = lVar24 + 4;
          } while (uVar28 * 4 != lVar24);
          lVar48 = (long)piVar3 - (long)*piVar3;
        }
        puVar39 = (uint *)((long)piVar3 + (ulong)*(ushort *)(lVar48 + 0x32));
        uVar23 = (ulong)*puVar39;
        uVar28 = (ulong)*(uint *)((long)puVar39 + uVar23);
        if (uVar28 != 0) {
          lVar24 = 0;
          lVar48 = local_250 + uVar23 + *(ushort *)(lVar48 + 0x32) + uVar17;
          do {
            uVar23 = (ulong)*(uint *)(lVar48 + lVar24 + 8);
            lVar35 = uVar23 + *(ushort *)
                               (lVar48 + (uVar23 - (long)*(int *)(lVar48 + uVar23 + lVar24 + 8)) +
                                lVar24 + 0xc);
            lVar35 = lVar35 + (ulong)*(uint *)(lVar48 + lVar35 + lVar24 + 8);
            lVar12 = lVar48 + lVar24 + (lVar35 - *(int *)(lVar48 + lVar35 + lVar24 + 8));
            if ((*(ushort *)(lVar12 + 8) < 5) ||
               (uVar34 = (ulong)*(ushort *)(lVar12 + 0xc), uVar34 == 0)) {
              lVar12 = 0;
            }
            else {
              lVar35 = lVar35 + uVar34;
              lVar12 = lVar48 + lVar24 + lVar35 + (ulong)*(uint *)(lVar48 + lVar35 + lVar24 + 8) + 8
              ;
            }
            FUN_00e17790(&local_1b0,plVar46,lVar48 + lVar24 + uVar23 + 8,lVar12,local_70);
            local_b0 = local_1b0;
            local_1b0 = (long *)0x0;
            local_a8 = local_1a8;
            local_a0 = local_1a0;
            local_98 = local_198;
            puVar37 = (ulong *)*plVar45;
            if (puVar37 < (ulong *)*puVar42) {
              uVar43 = *puVar41;
              lVar12 = nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_02710860);
              if (0xf < *(ulong *)(lVar12 + 0x80)) goto LAB_00e10df8;
              *(undefined8 *)(lVar12 + *(ulong *)(lVar12 + 0x80) * 8) = uVar43;
              *(long *)(lVar12 + 0x80) = *(long *)(lVar12 + 0x80) + 1;
              *puVar37 = (ulong)local_b0;
              puVar37[1] = (ulong)local_a8;
              puVar37[2] = (ulong)local_a0;
              puVar37[3] = (ulong)local_98;
              *(long *)(lVar12 + 0x80) = *(long *)(lVar12 + 0x80) + -1;
              *plVar45 = *plVar45 + 0x20;
              local_b0 = (long *)0x0;
            }
            else {
              FUN_00e1f040(plVar33,&local_b0);
              plVar32 = local_b0;
              local_b0 = (long *)0x0;
              if (plVar32 != (long *)0x0) {
                local_b0 = (long *)0x0;
                (**(code **)*plVar32)(plVar32);
                (**(code **)(*local_a8 + 0x18))(local_a8,plVar32,local_a0,local_98);
              }
            }
            plVar32 = local_1b0;
            local_1b0 = (long *)0x0;
            if (plVar32 != (long *)0x0) {
              (**(code **)*plVar32)(plVar32);
              (**(code **)(*local_1a8 + 0x18))(local_1a8,plVar32,local_1a0,local_198);
            }
            lVar24 = lVar24 + 4;
          } while (uVar28 * 4 != lVar24);
          lVar48 = (long)piVar3 - (long)*piVar3;
        }
        puVar39 = (uint *)((long)piVar3 + (ulong)*(ushort *)(lVar48 + 0x34));
        uVar23 = (ulong)*puVar39;
        uVar28 = (ulong)*(uint *)((long)puVar39 + uVar23);
        if (uVar28 != 0) {
          lVar24 = 0;
          lVar48 = local_250 + uVar23 + *(ushort *)(lVar48 + 0x34) + uVar17;
          do {
            uVar23 = (ulong)*(uint *)(lVar48 + lVar24 + 8);
            lVar35 = uVar23 + *(ushort *)
                               (lVar48 + (uVar23 - (long)*(int *)(lVar48 + uVar23 + lVar24 + 8)) +
                                lVar24 + 0xc);
            lVar35 = lVar35 + (ulong)*(uint *)(lVar48 + lVar35 + lVar24 + 8);
            lVar12 = lVar48 + lVar24 + (lVar35 - *(int *)(lVar48 + lVar35 + lVar24 + 8));
            if ((*(ushort *)(lVar12 + 8) < 5) ||
               (uVar34 = (ulong)*(ushort *)(lVar12 + 0xc), uVar34 == 0)) {
              lVar12 = 0;
            }
            else {
              lVar35 = lVar35 + uVar34;
              lVar12 = lVar48 + lVar24 + lVar35 + (ulong)*(uint *)(lVar48 + lVar35 + lVar24 + 8) + 8
              ;
            }
            FUN_00e17920(&local_1b0,plVar46,lVar48 + lVar24 + uVar23 + 8,lVar12,local_70);
            local_b0 = local_1b0;
            local_1b0 = (long *)0x0;
            local_a8 = local_1a8;
            local_a0 = local_1a0;
            local_98 = local_198;
            puVar37 = (ulong *)*plVar45;
            if (puVar37 < (ulong *)*puVar42) {
              uVar43 = *puVar41;
              lVar12 = nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_02710860);
              if (0xf < *(ulong *)(lVar12 + 0x80)) goto LAB_00e10df8;
              *(undefined8 *)(lVar12 + *(ulong *)(lVar12 + 0x80) * 8) = uVar43;
              *(long *)(lVar12 + 0x80) = *(long *)(lVar12 + 0x80) + 1;
              *puVar37 = (ulong)local_b0;
              puVar37[1] = (ulong)local_a8;
              puVar37[2] = (ulong)local_a0;
              puVar37[3] = (ulong)local_98;
              *(long *)(lVar12 + 0x80) = *(long *)(lVar12 + 0x80) + -1;
              *plVar45 = *plVar45 + 0x20;
              local_b0 = (long *)0x0;
            }
            else {
              FUN_00e1f040(plVar33,&local_b0);
              plVar32 = local_b0;
              local_b0 = (long *)0x0;
              if (plVar32 != (long *)0x0) {
                local_b0 = (long *)0x0;
                (**(code **)*plVar32)(plVar32);
                (**(code **)(*local_a8 + 0x18))(local_a8,plVar32,local_a0,local_98);
              }
            }
            plVar32 = local_1b0;
            local_1b0 = (long *)0x0;
            if (plVar32 != (long *)0x0) {
              (**(code **)*plVar32)(plVar32);
              (**(code **)(*local_1a8 + 0x18))(local_1a8,plVar32,local_1a0,local_198);
            }
            lVar24 = lVar24 + 4;
          } while (uVar28 * 4 != lVar24);
          lVar48 = (long)piVar3 - (long)*piVar3;
        }
        puVar39 = (uint *)((long)piVar3 + (ulong)*(ushort *)(lVar48 + 0x36));
        uVar23 = (ulong)*puVar39;
        uVar28 = (ulong)*(uint *)((long)puVar39 + uVar23);
        if (uVar28 != 0) {
          lVar24 = 0;
          lVar48 = local_250 + uVar23 + *(ushort *)(lVar48 + 0x36) + uVar17;
          do {
            uVar23 = (ulong)*(uint *)(lVar48 + lVar24 + 8);
            lVar35 = uVar23 + *(ushort *)
                               (lVar48 + (uVar23 - (long)*(int *)(lVar48 + uVar23 + lVar24 + 8)) +
                                lVar24 + 0xc);
            lVar35 = lVar35 + (ulong)*(uint *)(lVar48 + lVar35 + lVar24 + 8);
            lVar12 = lVar48 + lVar24 + (lVar35 - *(int *)(lVar48 + lVar35 + lVar24 + 8));
            if ((*(ushort *)(lVar12 + 8) < 5) ||
               (uVar34 = (ulong)*(ushort *)(lVar12 + 0xc), uVar34 == 0)) {
              lVar12 = 0;
            }
            else {
              lVar35 = lVar35 + uVar34;
              lVar12 = lVar48 + lVar24 + lVar35 + (ulong)*(uint *)(lVar48 + lVar35 + lVar24 + 8) + 8
              ;
            }
            FUN_00e17ab0(&local_1b0,plVar46,lVar48 + lVar24 + uVar23 + 8,lVar12,local_70);
            local_b0 = local_1b0;
            local_1b0 = (long *)0x0;
            local_a8 = local_1a8;
            local_a0 = local_1a0;
            local_98 = local_198;
            puVar37 = (ulong *)*plVar45;
            if (puVar37 < (ulong *)*puVar42) {
              uVar43 = *puVar41;
              lVar12 = nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_02710860);
              if (0xf < *(ulong *)(lVar12 + 0x80)) goto LAB_00e10df8;
              *(undefined8 *)(lVar12 + *(ulong *)(lVar12 + 0x80) * 8) = uVar43;
              *(long *)(lVar12 + 0x80) = *(long *)(lVar12 + 0x80) + 1;
              *puVar37 = (ulong)local_b0;
              puVar37[1] = (ulong)local_a8;
              puVar37[2] = (ulong)local_a0;
              puVar37[3] = (ulong)local_98;
              *(long *)(lVar12 + 0x80) = *(long *)(lVar12 + 0x80) + -1;
              *plVar45 = *plVar45 + 0x20;
              local_b0 = (long *)0x0;
            }
            else {
              FUN_00e1f040(plVar33,&local_b0);
              plVar32 = local_b0;
              local_b0 = (long *)0x0;
              if (plVar32 != (long *)0x0) {
                local_b0 = (long *)0x0;
                (**(code **)*plVar32)(plVar32);
                (**(code **)(*local_a8 + 0x18))(local_a8,plVar32,local_a0,local_98);
              }
            }
            plVar32 = local_1b0;
            local_1b0 = (long *)0x0;
            if (plVar32 != (long *)0x0) {
              (**(code **)*plVar32)(plVar32);
              (**(code **)(*local_1a8 + 0x18))(local_1a8,plVar32,local_1a0,local_198);
            }
            lVar24 = lVar24 + 4;
          } while (uVar28 * 4 != lVar24);
          lVar48 = (long)piVar3 - (long)*piVar3;
        }
        puVar39 = (uint *)((long)piVar3 + (ulong)*(ushort *)(lVar48 + 0x38));
        uVar23 = (ulong)*puVar39;
        uVar28 = (ulong)*(uint *)((long)puVar39 + uVar23);
        if (uVar28 != 0) {
          lVar24 = 0;
          lVar48 = local_250 + uVar23 + *(ushort *)(lVar48 + 0x38) + uVar17;
          do {
            uVar23 = (ulong)*(uint *)(lVar48 + lVar24 + 8);
            lVar35 = uVar23 + *(ushort *)
                               (lVar48 + (uVar23 - (long)*(int *)(lVar48 + uVar23 + lVar24 + 8)) +
                                lVar24 + 0xc);
            lVar35 = lVar35 + (ulong)*(uint *)(lVar48 + lVar35 + lVar24 + 8);
            lVar12 = lVar48 + lVar24 + (lVar35 - *(int *)(lVar48 + lVar35 + lVar24 + 8));
            if ((*(ushort *)(lVar12 + 8) < 5) ||
               (uVar34 = (ulong)*(ushort *)(lVar12 + 0xc), uVar34 == 0)) {
              lVar12 = 0;
            }
            else {
              lVar35 = lVar35 + uVar34;
              lVar12 = lVar48 + lVar24 + lVar35 + (ulong)*(uint *)(lVar48 + lVar35 + lVar24 + 8) + 8
              ;
            }
            FUN_00e17c40(&local_1b0,plVar46,lVar48 + lVar24 + uVar23 + 8,lVar12,local_70);
            local_b0 = local_1b0;
            local_1b0 = (long *)0x0;
            local_a8 = local_1a8;
            local_a0 = local_1a0;
            local_98 = local_198;
            puVar37 = (ulong *)*plVar45;
            if (puVar37 < (ulong *)*puVar42) {
              uVar43 = *puVar41;
              lVar12 = nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_02710860);
              if (0xf < *(ulong *)(lVar12 + 0x80)) goto LAB_00e10df8;
              *(undefined8 *)(lVar12 + *(ulong *)(lVar12 + 0x80) * 8) = uVar43;
              *(long *)(lVar12 + 0x80) = *(long *)(lVar12 + 0x80) + 1;
              *puVar37 = (ulong)local_b0;
              puVar37[1] = (ulong)local_a8;
              puVar37[2] = (ulong)local_a0;
              puVar37[3] = (ulong)local_98;
              *(long *)(lVar12 + 0x80) = *(long *)(lVar12 + 0x80) + -1;
              *plVar45 = *plVar45 + 0x20;
              local_b0 = (long *)0x0;
            }
            else {
              FUN_00e1f040(plVar33,&local_b0);
              plVar32 = local_b0;
              local_b0 = (long *)0x0;
              if (plVar32 != (long *)0x0) {
                local_b0 = (long *)0x0;
                (**(code **)*plVar32)(plVar32);
                (**(code **)(*local_a8 + 0x18))(local_a8,plVar32,local_a0,local_98);
              }
            }
            plVar32 = local_1b0;
            local_1b0 = (long *)0x0;
            if (plVar32 != (long *)0x0) {
              (**(code **)*plVar32)(plVar32);
              (**(code **)(*local_1a8 + 0x18))(local_1a8,plVar32,local_1a0,local_198);
            }
            lVar24 = lVar24 + 4;
          } while (uVar28 * 4 != lVar24);
        }
        if (local_70[0] == -0x57753fb9fdfaf46b) {
          lVar48 = 0;
          local_c0 = (long *)0x0;
          local_b8 = (long *)0x0;
          local_d0 = (long *)0x0;
          local_c8 = (long *)0x0;
          local_e0 = (long *)0x0;
          local_d8 = (long *)0x0;
          local_f0 = (long *)0x0;
          local_e8 = (long *)0x0;
          local_100 = (long *)0x0;
          local_f8 = (long *)0x0;
          local_110 = (long *)0x0;
          local_108 = (long *)0x0;
          local_120 = (long *)0x0;
          local_118 = (long *)0x0;
          local_130 = (long *)0x0;
          local_128 = (long *)0x0;
          local_140 = (long *)0x0;
          local_138 = (long *)0x0;
          local_150 = (long *)0x0;
          local_148 = (long *)0x0;
          local_160 = (long *)0x0;
          local_158 = (long *)0x0;
          local_170 = (long *)0x0;
          local_168 = (long *)0x0;
          uStack_180 = (long *)0x0;
          local_178 = (long *)0x0;
          local_190 = (long *)0x0;
          plStack_188 = (long *)0x0;
          local_1a0 = (long *)0x0;
          local_198 = (long *)0x0;
          local_1b0 = (long *)0x0;
          local_1a8 = (long *)0x0;
          do {
            snprintf((char *)&local_b0,0x20,"%s%s%02d",local_88,"_kinoko_",(int)lVar48);
            plVar32 = (long *)0xcbf29ce484222645;
            if ((byte)local_b0 != 0) {
              plVar32 = (long *)0xcbf29ce484222645;
              pbVar26 = (byte *)((ulong)&local_b0 | 1);
              bVar8 = (byte)local_b0;
              do {
                plVar32 = (long *)(((ulong)plVar32 ^ (ulong)bVar8) * 0x100000001b3);
                bVar8 = *pbVar26;
                pbVar26 = pbVar26 + 1;
              } while (bVar8 != 0);
            }
            (&local_1b0)[lVar48] = plVar32;
            lVar48 = lVar48 + 1;
          } while (lVar48 != 0x20);
          uVar23 = (ulong)*(ushort *)((long)piVar3 + (6 - (long)*piVar3));
          puVar39 = (uint *)((long)piVar3 + uVar23);
          uVar28 = (ulong)*puVar39;
          uVar34 = (ulong)*(uint *)((long)puVar39 + uVar28);
          if (uVar34 != 0) {
            lVar48 = 0;
            lVar24 = local_250 + uVar28 + uVar23 + uVar17;
            do {
              uVar23 = (ulong)*(uint *)(lVar24 + lVar48 + 8);
              lVar12 = lVar24 + lVar48 + uVar23 + 8;
              lVar35 = uVar23 + *(ushort *)
                                 (lVar24 + (uVar23 - (long)*(int *)(lVar24 + uVar23 + lVar48 + 8)) +
                                  lVar48 + 0xc);
              lVar35 = lVar35 + (ulong)*(uint *)(lVar24 + lVar35 + lVar48 + 8);
              lVar6 = lVar24 + (lVar35 - *(int *)(lVar24 + lVar35 + lVar48 + 8)) + lVar48;
              uVar15 = *(ushort *)(lVar6 + 0xc);
              lVar35 = lVar35 + (ulong)uVar15 +
                       (ulong)*(uint *)(lVar24 + lVar35 + (ulong)uVar15 + lVar48 + 8);
              lVar14 = lVar24 + lVar48 + (lVar35 - *(int *)(lVar24 + lVar35 + lVar48 + 8));
              lVar47 = lVar24 + lVar48 + lVar35;
              if ((*(ushort *)(lVar14 + 8) < 0x17) ||
                 (uVar23 = (ulong)*(ushort *)(lVar14 + 0x1e), uVar23 == 0)) {
                plVar32 = (long *)0x0;
                if (local_1b0 != (long *)0x0) goto LAB_00e1021c;
LAB_00e103b4:
                lVar35 = 0;
                if (uVar15 != 0 && 4 < *(ushort *)(lVar6 + 8)) {
                  lVar35 = lVar47 + 8;
                }
                FUN_00e180f0(&local_b0,plVar46,lVar12,lVar35,local_70);
              }
              else {
                plVar32 = *(long **)(lVar24 + lVar35 + uVar23 + lVar48 + 8);
                if (local_1b0 == plVar32) goto LAB_00e103b4;
LAB_00e1021c:
                if (((((((local_1a8 == plVar32) || (local_1a0 == plVar32)) || (local_198 == plVar32)
                       ) || ((local_190 == plVar32 || (plStack_188 == plVar32)))) ||
                     ((uStack_180 == plVar32 || ((local_178 == plVar32 || (local_170 == plVar32)))))
                     ) || (((local_168 == plVar32 ||
                            ((((local_160 == plVar32 || (local_158 == plVar32)) ||
                              (local_150 == plVar32)) ||
                             (((local_148 == plVar32 || (local_140 == plVar32)) ||
                              ((local_138 == plVar32 ||
                               ((local_130 == plVar32 || (local_128 == plVar32)))))))))) ||
                           (local_120 == plVar32)))) ||
                   ((((local_118 == plVar32 || (local_110 == plVar32)) || (local_108 == plVar32)) ||
                    (((local_100 == plVar32 || (local_f8 == plVar32)) ||
                     ((((local_f0 == plVar32 || ((local_e8 == plVar32 || (local_e0 == plVar32)))) ||
                       (local_d8 == plVar32)) ||
                      ((((local_d0 == plVar32 || (local_c8 == plVar32)) || (local_c0 == plVar32)) ||
                       (local_b8 == plVar32)))))))))) goto LAB_00e103b4;
                lVar35 = 0;
                if (uVar15 != 0 && 4 < *(ushort *)(lVar6 + 8)) {
                  lVar35 = lVar47 + 8;
                }
                FUN_00e17f60(&local_b0,plVar46,lVar12,lVar35,local_70);
              }
              local_1d0 = local_b0;
              local_b0 = (long *)0x0;
              local_1c8 = local_a8;
              local_1c0 = local_a0;
              local_1b8 = local_98;
              puVar37 = (ulong *)*plVar45;
              if (puVar37 < (ulong *)*puVar42) {
                uVar43 = *puVar41;
                lVar12 = nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_02710860);
                if (0xf < *(ulong *)(lVar12 + 0x80)) goto LAB_00e10df8;
                *(undefined8 *)(lVar12 + *(ulong *)(lVar12 + 0x80) * 8) = uVar43;
                *(long *)(lVar12 + 0x80) = *(long *)(lVar12 + 0x80) + 1;
                *puVar37 = (ulong)local_1d0;
                puVar37[2] = (ulong)local_1c0;
                puVar37[3] = (ulong)local_1b8;
                puVar37[1] = (ulong)local_1c8;
                *(long *)(lVar12 + 0x80) = *(long *)(lVar12 + 0x80) + -1;
                *plVar45 = *plVar45 + 0x20;
                local_1d0 = (long *)0x0;
              }
              else {
                FUN_00e1f040(plVar33,&local_1d0);
                plVar32 = local_1d0;
                local_1d0 = (long *)0x0;
                if (plVar32 != (long *)0x0) {
                  local_1d0 = (long *)0x0;
                  (**(code **)*plVar32)(plVar32);
                  (**(code **)(*local_1c8 + 0x18))(local_1c8,plVar32,local_1c0,local_1b8);
                }
              }
              plVar32 = local_b0;
              local_b0 = (long *)0x0;
              if (plVar32 != (long *)0x0) {
                (**(code **)*plVar32)(plVar32);
                (**(code **)(*local_a8 + 0x18))(local_a8,plVar32,local_a0,local_98);
              }
              lVar48 = lVar48 + 4;
            } while (uVar34 * 4 != lVar48);
          }
        }
        else if ((local_70[0] == -0x4fffe141baa5e8d7) || (local_70[0] == -0x489caa41b6d32058)) {
          local_1d0 = (long *)0x0;
          local_1c8 = (long *)0x0;
          local_1c0 = (long *)0x0;
          snprintf((char *)&local_1b0,0x20,"%s%s%02d",local_88,"_Cup_",0);
          local_1d0 = (long *)0xcbf29ce484222645;
          if ((byte)local_1b0 != 0) {
            local_1d0 = (long *)0xcbf29ce484222645;
            pbVar26 = pbVar18;
            bVar8 = (byte)local_1b0;
            do {
              local_1d0 = (long *)(((ulong)local_1d0 ^ (ulong)bVar8) * 0x100000001b3);
              bVar8 = *pbVar26;
              pbVar26 = pbVar26 + 1;
            } while (bVar8 != 0);
          }
          snprintf((char *)&local_1b0,0x20,"%s%s%02d",local_88,"_Cup_",1);
          local_1c8 = (long *)0xcbf29ce484222645;
          if ((byte)local_1b0 != 0) {
            local_1c8 = (long *)0xcbf29ce484222645;
            pbVar26 = pbVar18;
            bVar8 = (byte)local_1b0;
            do {
              local_1c8 = (long *)(((ulong)local_1c8 ^ (ulong)bVar8) * 0x100000001b3);
              bVar8 = *pbVar26;
              pbVar26 = pbVar26 + 1;
            } while (bVar8 != 0);
          }
          snprintf((char *)&local_1b0,0x20,"%s%s%02d",local_88,"_Cup_",2);
          local_1c0 = (long *)0xcbf29ce484222645;
          if ((byte)local_1b0 != 0) {
            local_1c0 = (long *)0xcbf29ce484222645;
            pbVar26 = pbVar18;
            bVar8 = (byte)local_1b0;
            do {
              local_1c0 = (long *)(((ulong)local_1c0 ^ (ulong)bVar8) * 0x100000001b3);
              bVar8 = *pbVar26;
              pbVar26 = pbVar26 + 1;
            } while (bVar8 != 0);
          }
          uVar23 = (ulong)*(ushort *)((long)piVar3 + (6 - (long)*piVar3));
          puVar39 = (uint *)((long)piVar3 + uVar23);
          uVar28 = (ulong)*puVar39;
          uVar34 = (ulong)*(uint *)((long)puVar39 + uVar28);
          if (uVar34 != 0) {
            lVar48 = 0;
            lVar24 = local_250 + uVar28 + uVar23 + uVar17;
            do {
              uVar23 = (ulong)*(uint *)(lVar24 + lVar48 + 8);
              lVar12 = lVar24 + lVar48 + uVar23 + 8;
              lVar35 = uVar23 + *(ushort *)
                                 (lVar24 + (uVar23 - (long)*(int *)(lVar24 + uVar23 + lVar48 + 8)) +
                                  lVar48 + 0xc);
              lVar35 = lVar35 + (ulong)*(uint *)(lVar24 + lVar35 + lVar48 + 8);
              lVar6 = lVar24 + (lVar35 - *(int *)(lVar24 + lVar35 + lVar48 + 8)) + lVar48;
              uVar15 = *(ushort *)(lVar6 + 0xc);
              lVar35 = lVar35 + (ulong)uVar15 +
                       (ulong)*(uint *)(lVar24 + lVar35 + (ulong)uVar15 + lVar48 + 8);
              lVar14 = lVar24 + lVar48 + (lVar35 - *(int *)(lVar24 + lVar35 + lVar48 + 8));
              lVar47 = lVar24 + lVar48 + lVar35;
              if ((*(ushort *)(lVar14 + 8) < 0x17) ||
                 (uVar23 = (ulong)*(ushort *)(lVar14 + 0x1e), uVar23 == 0)) {
                plVar32 = (long *)0x0;
                if (local_1d0 != (long *)0x0) goto LAB_00e0fe94;
LAB_00e0fee4:
                lVar35 = 0;
                if (uVar15 != 0 && 4 < *(ushort *)(lVar6 + 8)) {
                  lVar35 = lVar47 + 8;
                }
                FUN_00e17dd0(&local_1b0,plVar46,lVar12,lVar35,local_70);
              }
              else {
                plVar32 = *(long **)(lVar24 + lVar35 + uVar23 + lVar48 + 8);
                if (local_1d0 == plVar32) goto LAB_00e0fee4;
LAB_00e0fe94:
                if ((local_1c8 == plVar32) || (local_1c0 == plVar32)) goto LAB_00e0fee4;
                lVar35 = 0;
                if (uVar15 != 0 && 4 < *(ushort *)(lVar6 + 8)) {
                  lVar35 = lVar47 + 8;
                }
                FUN_00e17f60(&local_1b0,plVar46,lVar12,lVar35,local_70);
              }
              local_b0 = local_1b0;
              local_1b0 = (long *)0x0;
              local_a8 = local_1a8;
              local_a0 = local_1a0;
              local_98 = local_198;
              puVar37 = (ulong *)*plVar45;
              if (puVar37 < (ulong *)*puVar42) {
                uVar43 = *puVar41;
                lVar12 = nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_02710860);
                if (0xf < *(ulong *)(lVar12 + 0x80)) goto LAB_00e10df8;
                *(undefined8 *)(lVar12 + *(ulong *)(lVar12 + 0x80) * 8) = uVar43;
                *(long *)(lVar12 + 0x80) = *(long *)(lVar12 + 0x80) + 1;
                *puVar37 = (ulong)local_b0;
                puVar37[1] = (ulong)local_a8;
                puVar37[2] = (ulong)local_a0;
                puVar37[3] = (ulong)local_98;
                *(long *)(lVar12 + 0x80) = *(long *)(lVar12 + 0x80) + -1;
                *plVar45 = *plVar45 + 0x20;
                local_b0 = (long *)0x0;
              }
              else {
                FUN_00e1f040(plVar33,&local_b0);
                plVar32 = local_b0;
                local_b0 = (long *)0x0;
                if (plVar32 != (long *)0x0) {
                  local_b0 = (long *)0x0;
                  (**(code **)*plVar32)(plVar32);
                  (**(code **)(*local_a8 + 0x18))(local_a8,plVar32,local_a0,local_98);
                }
              }
              plVar32 = local_1b0;
              local_1b0 = (long *)0x0;
              if (plVar32 != (long *)0x0) {
                (**(code **)*plVar32)(plVar32);
                (**(code **)(*local_1a8 + 0x18))(local_1a8,plVar32,local_1a0,local_198);
              }
              lVar48 = lVar48 + 4;
            } while (uVar34 * 4 != lVar48);
          }
        }
        else {
          snprintf((char *)&local_1b0,0x20,"%s%s",local_88,"_BirthDay");
          uVar23 = (ulong)local_1b0 & 0xff;
          uVar28 = 0xcbf29ce484222645;
          if ((byte)local_1b0 != '\0') {
            uVar28 = 0xcbf29ce484222645;
            pbVar26 = pbVar18;
            do {
              uVar28 = (uVar28 ^ uVar23) * 0x100000001b3;
              bVar8 = *pbVar26;
              uVar23 = (ulong)bVar8;
              pbVar26 = pbVar26 + 1;
            } while (bVar8 != 0);
          }
          snprintf((char *)&local_b0,0x20,"%s%s",local_88,"_PcRecovery");
          uVar23 = 0xcbf29ce484222645;
          if ((byte)local_b0 != 0) {
            uVar23 = 0xcbf29ce484222645;
            pbVar26 = (byte *)((ulong)&local_b0 | 1);
            bVar8 = (byte)local_b0;
            do {
              uVar23 = (uVar23 ^ bVar8) * 0x100000001b3;
              bVar8 = *pbVar26;
              pbVar26 = pbVar26 + 1;
            } while (bVar8 != 0);
          }
          uVar34 = (ulong)*(ushort *)((long)piVar3 + (6 - (long)*piVar3));
          puVar39 = (uint *)((long)piVar3 + uVar34);
          uVar27 = (ulong)*puVar39;
          uVar30 = (ulong)*(uint *)((long)puVar39 + uVar27);
          if (uVar30 != 0) {
            lVar48 = 0;
            lVar24 = local_250 + uVar27 + uVar34 + uVar17;
            do {
              uVar34 = (ulong)*(uint *)(lVar24 + lVar48 + 8);
              lVar12 = lVar24 + lVar48 + uVar34 + 8;
              lVar7 = uVar34 + *(ushort *)
                                (lVar24 + (uVar34 - (long)*(int *)(lVar24 + uVar34 + lVar48 + 8)) +
                                 lVar48 + 0xc);
              lVar7 = lVar7 + (ulong)*(uint *)(lVar24 + lVar7 + lVar48 + 8);
              lVar35 = lVar24 + (lVar7 - *(int *)(lVar24 + lVar7 + lVar48 + 8)) + lVar48;
              uVar15 = *(ushort *)(lVar35 + 0xc);
              lVar6 = lVar7 + (ulong)uVar15 +
                      (ulong)*(uint *)(lVar24 + lVar7 + (ulong)uVar15 + lVar48 + 8);
              lVar14 = lVar24 + lVar48 + (lVar6 - *(int *)(lVar24 + lVar6 + lVar48 + 8));
              lVar47 = lVar24 + lVar48 + lVar6;
              if ((*(ushort *)(lVar14 + 8) < 0x17) ||
                 (uVar34 = (ulong)*(ushort *)(lVar14 + 0x1e), uVar34 == 0)) {
                uVar34 = 0;
                if (uVar28 == 0) goto LAB_00e1073c;
LAB_00e106f8:
                lVar47 = lVar47 + 8;
                if (uVar34 == uVar23) {
                  lVar6 = 0;
                  if (uVar15 != 0 && 4 < *(ushort *)(lVar35 + 8)) {
                    lVar6 = lVar47;
                  }
                  FUN_00e18410(&local_1d0,plVar46,lVar12,lVar6,local_70);
                  goto LAB_00e108b8;
                }
                if (*(long *)(param_1 + 0xf0) != 0x674edc539f9f74a6) {
                  uVar16 = *(ushort *)(lVar35 + 8);
LAB_00e1089c:
                  lVar35 = 0;
                  if (uVar15 != 0 && 4 < uVar16) {
                    lVar35 = lVar47;
                  }
                  FUN_00e17f60(&local_1d0,plVar46,lVar12,lVar35,local_70);
                  goto LAB_00e108b8;
                }
                uVar16 = *(ushort *)(lVar35 + 8);
                if ((uVar16 < 7) || ((ulong)*(ushort *)(lVar35 + 0xe) == 0)) {
                  lVar35 = 0;
                }
                else {
                  lVar7 = lVar7 + (ulong)*(ushort *)(lVar35 + 0xe);
                  lVar35 = lVar24 + lVar48 + lVar7 + (ulong)*(uint *)(lVar24 + lVar7 + lVar48 + 8) +
                           8;
                }
                pcVar13 = strstr((char *)(lVar35 + 4),"unit_obj_key_");
                if (pcVar13 == (char *)0x0) goto LAB_00e1089c;
                lVar35 = 0;
                if (uVar15 != 0 && 4 < uVar16) {
                  lVar35 = lVar47;
                }
                FUN_00e185a0(&local_1d0,plVar46,lVar12,lVar35,local_70);
                if (*(char *)(param_1 + 0x5d) != '\0') {
                  (**(code **)(*local_1d0 + 0x90))(local_1d0,1);
                  (**(code **)(*local_1d0 + 0xd0))(local_1d0,1);
                }
                local_1f0 = local_1d0;
                local_1e8 = local_1c8;
                local_1e0 = local_1c0;
                local_1d8 = local_1b8;
                local_1d0 = (long *)0x0;
                puVar37 = (ulong *)*plVar45;
                if (puVar37 < (ulong *)*puVar42) {
                  uVar43 = *puVar41;
                  lVar12 = nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_02710860);
                  uVar34 = *(ulong *)(lVar12 + 0x80);
                  if (uVar34 < 0x10) goto LAB_00e10910;
                  goto LAB_00e10df8;
                }
LAB_00e10618:
                local_1d0 = (long *)0x0;
                local_1e8 = local_1c8;
                local_1e0 = local_1c0;
                local_1d8 = local_1b8;
                FUN_00e1f040(plVar33,&local_1f0);
                plVar32 = local_1f0;
                local_1f0 = (long *)0x0;
                if (plVar32 != (long *)0x0) {
                  local_1f0 = (long *)0x0;
                  (**(code **)*plVar32)(plVar32);
                  (**(code **)(*local_1e8 + 0x18))(local_1e8,plVar32,local_1e0,local_1d8);
                }
              }
              else {
                uVar34 = *(ulong *)(lVar24 + lVar6 + uVar34 + lVar48 + 8);
                if (uVar34 != uVar28) goto LAB_00e106f8;
LAB_00e1073c:
                lVar6 = 0;
                if (uVar15 != 0 && 4 < *(ushort *)(lVar35 + 8)) {
                  lVar6 = lVar47 + 8;
                }
                FUN_00e18280(&local_1d0,plVar46,lVar12,lVar6,local_70);
LAB_00e108b8:
                local_1f0 = local_1d0;
                local_1e8 = local_1c8;
                local_1e0 = local_1c0;
                local_1d8 = local_1b8;
                local_1d0 = (long *)0x0;
                puVar37 = (ulong *)*plVar45;
                if ((ulong *)*puVar42 <= puVar37) goto LAB_00e10618;
                uVar43 = *puVar41;
                lVar12 = nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_02710860);
                uVar34 = *(ulong *)(lVar12 + 0x80);
                if (0xf < uVar34) goto LAB_00e10df8;
LAB_00e10910:
                *(undefined8 *)(lVar12 + uVar34 * 8) = uVar43;
                *(long *)(lVar12 + 0x80) = *(long *)(lVar12 + 0x80) + 1;
                *puVar37 = (ulong)local_1f0;
                puVar37[2] = (ulong)local_1e0;
                puVar37[3] = (ulong)local_1d8;
                puVar37[1] = (ulong)local_1e8;
                *(long *)(lVar12 + 0x80) = *(long *)(lVar12 + 0x80) + -1;
                *plVar45 = *plVar45 + 0x20;
                local_1f0 = (long *)0x0;
              }
              plVar32 = local_1d0;
              local_1d0 = (long *)0x0;
              if (plVar32 != (long *)0x0) {
                (**(code **)*plVar32)(plVar32);
                (**(code **)(*local_1c8 + 0x18))(local_1c8,plVar32,local_1c0,local_1b8);
              }
              lVar48 = lVar48 + 4;
            } while (uVar30 << 2 != lVar48);
          }
        }
        uVar23 = (ulong)*(ushort *)((long)piVar3 + (0xe - (long)*piVar3));
        puVar39 = (uint *)((long)piVar3 + uVar23);
        uVar28 = (ulong)*puVar39;
        uVar34 = (ulong)*(uint *)((long)puVar39 + uVar28);
        if (uVar34 != 0) {
          lVar48 = 0;
          lVar24 = local_250 + uVar28 + uVar23 + uVar17;
          do {
            uVar17 = (ulong)*(uint *)(lVar24 + lVar48 + 8);
            lVar35 = uVar17 + *(ushort *)
                               (lVar24 + (uVar17 - (long)*(int *)(lVar24 + uVar17 + lVar48 + 8)) +
                                lVar48 + 0xc);
            lVar35 = lVar35 + (ulong)*(uint *)(lVar24 + lVar35 + lVar48 + 8);
            lVar12 = lVar24 + lVar48 + (lVar35 - *(int *)(lVar24 + lVar35 + lVar48 + 8));
            if ((*(ushort *)(lVar12 + 8) < 5) ||
               (uVar23 = (ulong)*(ushort *)(lVar12 + 0xc), uVar23 == 0)) {
              lVar12 = 0;
            }
            else {
              lVar35 = lVar35 + uVar23;
              lVar12 = lVar24 + lVar48 + lVar35 + (ulong)*(uint *)(lVar24 + lVar35 + lVar48 + 8) + 8
              ;
            }
            FUN_00e18730(&local_1b0,plVar46,lVar24 + lVar48 + uVar17 + 8,lVar12,local_70);
            local_b0 = local_1b0;
            local_1b0 = (long *)0x0;
            local_a8 = local_1a8;
            local_a0 = local_1a0;
            local_98 = local_198;
            puVar37 = (ulong *)*plVar45;
            if (puVar37 < (ulong *)*puVar42) {
              uVar43 = *puVar41;
              lVar12 = nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_02710860);
              if (0xf < *(ulong *)(lVar12 + 0x80)) {
LAB_00e10df8:
                    /* WARNING: Subroutine does not return */
                abort();
              }
              *(undefined8 *)(lVar12 + *(ulong *)(lVar12 + 0x80) * 8) = uVar43;
              *(long *)(lVar12 + 0x80) = *(long *)(lVar12 + 0x80) + 1;
              *puVar37 = (ulong)local_b0;
              puVar37[1] = (ulong)local_a8;
              puVar37[2] = (ulong)local_a0;
              puVar37[3] = (ulong)local_98;
              *(long *)(lVar12 + 0x80) = *(long *)(lVar12 + 0x80) + -1;
              *plVar45 = *plVar45 + 0x20;
              local_b0 = (long *)0x0;
            }
            else {
              FUN_00e1f040(plVar33,&local_b0);
              plVar32 = local_b0;
              local_b0 = (long *)0x0;
              if (plVar32 != (long *)0x0) {
                local_b0 = (long *)0x0;
                (**(code **)*plVar32)(plVar32);
                (**(code **)(*local_a8 + 0x18))(local_a8,plVar32,local_a0,local_98);
              }
            }
            plVar32 = local_1b0;
            local_1b0 = (long *)0x0;
            if (plVar32 != (long *)0x0) {
              (**(code **)*plVar32)(plVar32);
              (**(code **)(*local_1a8 + 0x18))(local_1a8,plVar32,local_1a0,local_198);
            }
            lVar48 = lVar48 + 4;
          } while (uVar34 * 4 != lVar48);
        }
        if (local_78 != 0) {
          (**(code **)(*(long *)(local_78 + 0x48) + 0x18))();
          local_78 = 0;
        }
        local_258 = local_258 + 4;
        puVar36 = puVar36 + 1;
        local_250 = local_250 + 4;
      } while (puVar36 != puVar2);
      puVar42 = (undefined8 *)*plVar45;
      for (puVar41 = (undefined8 *)*plVar33; puVar41 != puVar42; puVar41 = puVar41 + 4) {
        puVar29 = (ushort *)((long)param_2 - (long)*param_2);
        puVar2 = (uint *)((long)param_2 + (ulong)puVar29[2]);
        uVar17 = (ulong)*puVar2;
        puVar2 = (uint *)((long)puVar2 + uVar17);
        puVar36 = puVar2 + 1;
        uVar23 = (ulong)*puVar2;
        if (uVar23 != 0) {
          puVar2 = puVar36 + uVar23;
          lVar48 = (long)param_2 + puVar29[2] + uVar17;
          do {
            piVar3 = (int *)((long)puVar36 + (ulong)*puVar36);
            uVar17 = (ulong)*(ushort *)((long)piVar3 + (0x1e - (long)*piVar3));
            puVar39 = (uint *)((long)piVar3 + uVar17);
            uVar23 = (ulong)*puVar39;
            uVar28 = (ulong)*(uint *)((long)puVar39 + uVar23);
            if (uVar28 != 0) {
              lVar24 = 0;
              lVar12 = lVar48 + uVar23 + uVar17 + (ulong)*puVar36;
              do {
                uVar17 = (ulong)*(uint *)(lVar12 + lVar24 + 8);
                lVar14 = (**(code **)(*(long *)*puVar41 + 0x38))();
                lVar35 = uVar17 + *(ushort *)
                                   (lVar12 + (uVar17 - (long)*(int *)(lVar12 + uVar17 + lVar24 + 8))
                                    + lVar24 + 0xc);
                lVar35 = lVar35 + (ulong)*(uint *)(lVar12 + lVar35 + lVar24 + 8);
                lVar6 = lVar12 + lVar24 + (lVar35 - *(int *)(lVar12 + lVar35 + lVar24 + 8));
                if ((*(ushort *)(lVar6 + 8) < 7) ||
                   (uVar23 = (ulong)*(ushort *)(lVar6 + 0xe), uVar23 == 0)) {
                  if (lVar14 == 0) goto LAB_00e10d3c;
                }
                else if (lVar14 == *(long *)(lVar12 + lVar35 + uVar23 + lVar24 + 8)) {
LAB_00e10d3c:
                  (**(code **)(*(long *)*puVar41 + 0xa0))
                            ((long *)*puVar41,lVar12 + lVar24 + uVar17 + 8);
                }
                lVar24 = lVar24 + 4;
              } while (uVar28 * 4 != lVar24);
            }
            puVar36 = puVar36 + 1;
            lVar48 = lVar48 + 4;
          } while (puVar36 != puVar2);
          puVar29 = (ushort *)((long)param_2 - (long)*param_2);
        }
        if (*puVar29 < 0x37) {
          iVar10 = 0;
        }
        else {
          iVar10 = 0;
          if ((ulong)puVar29[0x1b] != 0) {
            iVar10 = *(int *)((long)param_2 + (ulong)puVar29[0x1b]);
          }
        }
        (**(code **)(*(long *)*puVar41 + 0xa8))((float)iVar10);
      }
    }
    FUN_00e188c0(lVar1);
    FUN_00e189e0(param_1 + 0x398);
    FUN_00e18b40(param_1 + 0x3c8);
  }
  return;
}


