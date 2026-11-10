/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00ec6350; name: FUN_00ec6350
 */


/* WARNING: Type propagation algorithm not settling */

int FUN_00ec6350(long param_1,long *param_2)

{
  uint uVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  uint uVar4;
  bool bVar5;
  long lVar6;
  long lVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined *puVar11;
  undefined2 uVar12;
  int iVar13;
  long lVar14;
  ulong uVar15;
  long *plVar16;
  ulong uVar17;
  undefined8 uVar18;
  undefined1 uVar19;
  byte bVar20;
  uint uVar21;
  long lVar22;
  byte *pbVar23;
  long *plVar24;
  undefined8 uVar25;
  long lVar26;
  long lVar27;
  long *plVar28;
  long *plVar29;
  long lVar30;
  long *plVar31;
  int iVar32;
  long lVar33;
  long local_c0;
  long local_b8;
  long local_b0;
  long local_a8;
  long local_a0;
  long local_98;
  long local_90;
  long local_88;
  long local_80;
  int local_74;
  long local_70;
  undefined8 local_68;
  
  *(undefined4 *)(param_1 + 0x84) = 0;
  if ((*(byte *)(param_2 + 3) & 1) == 0) {
    return 0;
  }
  lVar26 = *(long *)PTR_DAT_027194d8;
  lVar33 = *(long *)(*param_2 + 0x68);
  if (lVar33 != 0) {
    (**(code **)(*(long *)(lVar33 + 0x48) + 0x10))();
  }
  plVar31 = *(long **)(lVar26 + 0xb8);
  for (plVar16 = *(long **)(lVar26 + 0xb0); plVar16 != plVar31; plVar16 = plVar16 + 1) {
    lVar14 = FUN_00e813b0(*plVar16 + 0x50);
    if ((lVar14 != 0) && (uVar15 = (**(code **)(*(long *)*plVar16 + 0x88))(), (uVar15 & 1) == 0)) {
      uVar15 = FUN_00e9f400(lVar14);
      if ((uVar15 & 1) == 0) goto LAB_00ec63f0;
      goto LAB_00ec6734;
    }
  }
  lVar14 = 0;
LAB_00ec63f0:
  puVar8 = PTR_DAT_02710830;
  plVar16 = *(long **)(lVar26 + 0xb0);
  plVar31 = *(long **)(lVar26 + 0xb8);
  if (plVar16 != plVar31) {
    iVar13 = 0;
    do {
      if ((*(char *)(*plVar16 + 0x38c) < '\0') &&
         (uVar15 = (**(code **)(*(long *)*plVar16 + 0x88))(), (uVar15 & 1) == 0)) {
        plVar29 = (long *)*plVar16;
        uVar15 = FUN_00ec9e10(plVar29 + 10);
        if (((uVar15 & 1) != 0) &&
           ((uVar15 = (**(code **)(*plVar29 + 0x228))(plVar29), (uVar15 & 1) != 0 &&
            (uVar15 = FUN_00e9b700(lVar14,plVar29 + 0x16,0), (uVar15 & 1) != 0)))) {
          local_68 = (long *)0x0;
          FUN_00de34e0(plVar29,0,&local_68,&local_74);
          uVar12 = FUN_008d2e70(*(undefined8 *)puVar8,local_68);
          FUN_015c9a70(&local_70,0xe50eab89579be4ca,plVar29[0x34],uVar12,(long)local_74,0,0);
          if (local_70 != 0) {
            (**(code **)(*(long *)(local_70 + 0x48) + 0x18))();
            local_70 = 0;
          }
          iVar13 = 1;
        }
      }
      plVar16 = plVar16 + 1;
    } while (plVar31 != plVar16);
    if (iVar13 != 0) goto joined_r0x00ec6c20;
    plVar16 = *(long **)(lVar26 + 0xb0);
    plVar31 = *(long **)(lVar26 + 0xb8);
    if (plVar16 != plVar31) {
      iVar13 = 0;
      do {
        if (((*(byte *)(*plVar16 + 0x38c) >> 5 & 1) != 0) &&
           (uVar15 = (**(code **)(*(long *)*plVar16 + 0x88))(), (uVar15 & 1) == 0)) {
          lVar30 = *plVar16;
          uVar15 = FUN_00e87e30(lVar30 + 0x50);
          if (((uVar15 & 1) != 0) &&
             (uVar15 = FUN_00e58280(lVar30,lVar14 + 0xb0), (uVar15 & 1) != 0)) {
            uVar4 = *(uint *)(lVar30 + 0x540);
            lVar27 = *(long *)(*(long *)PTR_DAT_02710798 + 0x238);
            if (lVar27 != 0) {
              (**(code **)(*(long *)(lVar27 + 0x48) + 0x10))();
            }
            uVar1 = uVar4 + 0x1ff;
            if (-1 < (int)uVar4) {
              uVar1 = uVar4;
            }
            pbVar23 = (byte *)(lVar27 + (long)((int)uVar1 >> 9) * 0x810 +
                               (long)((int)uVar4 % 0x200) * 4 + 0x62);
            bVar20 = *pbVar23;
            if (*(int *)(lVar30 + 0x500) < (int)(uint)bVar20) {
              iVar13 = *(int *)(lVar30 + 0x504) + *(int *)(lVar30 + 0x500);
              if (iVar13 < (int)(uint)bVar20) {
                iVar13 = *(int *)(lVar30 + 0x508) + iVar13;
                if (iVar13 < (int)(uint)bVar20) {
                  iVar13 = *(int *)(lVar30 + 0x50c) + iVar13;
                  uVar21 = (uint)bVar20;
                  if (iVar13 < (int)uVar21) {
                    iVar13 = *(int *)(lVar30 + 0x510) + iVar13;
                    if (iVar13 < (int)uVar21) {
                      iVar13 = *(int *)(lVar30 + 0x514) + iVar13;
                      if (iVar13 < (int)uVar21) {
                        lVar22 = 6;
                        if (*(int *)(lVar30 + 0x518) + iVar13 < (int)uVar21) {
                          lVar22 = 7;
                        }
                      }
                      else {
                        lVar22 = 5;
                      }
                    }
                    else {
                      lVar22 = 4;
                    }
                  }
                  else {
                    lVar22 = 3;
                  }
                }
                else {
                  lVar22 = 2;
                }
              }
              else {
                lVar22 = 1;
              }
            }
            else {
              lVar22 = 0;
            }
            iVar13 = *(int *)(lVar30 + lVar22 * 4 + 0x520);
            uVar12 = FUN_008d2e70(*(undefined8 *)PTR_DAT_02710830,
                                  *(undefined8 *)(lVar30 + lVar22 * 8 + 0x4c0));
            FUN_015c9a70(&local_68,0xe50eab89579be4ca,*(undefined8 *)(lVar30 + 0x1a0),uVar12,
                         (long)iVar13,1,0);
            if (local_68 != (long *)0x0) {
              (**(code **)(local_68[9] + 0x18))();
              local_68 = (long *)0x0;
            }
            uVar19 = 2;
            if (*(int *)(lVar30 + 0x544) < 0) {
              uVar19 = 3;
            }
            lVar30 = lVar27 + ((long)((ulong)uVar1 << 0x20) >> 0x29) * 0x810 +
                     (long)((int)uVar4 % 0x200) * 4;
            *(undefined1 *)(lVar30 + 0x60) = uVar19;
            *(undefined1 *)(lVar30 + 0x61) = 0;
            *pbVar23 = 0;
            (**(code **)(*(long *)(lVar27 + 0x48) + 0x18))((long *)(lVar27 + 0x48));
            iVar13 = 1;
          }
        }
        puVar11 = PTR_DAT_0271fb40;
        puVar10 = PTR_DAT_0271fb38;
        puVar9 = PTR_DAT_0271f698;
        puVar8 = PTR_DAT_0271f690;
        plVar16 = plVar16 + 1;
      } while (plVar31 != plVar16);
      if (iVar13 != 0) goto joined_r0x00ec6c20;
      puVar3 = *(undefined8 **)(lVar26 + 0xb8);
      for (puVar2 = *(undefined8 **)(lVar26 + 0xb0); puVar2 != puVar3; puVar2 = puVar2 + 1) {
        plVar31 = (long *)*puVar2;
        plVar16 = (long *)(**(code **)plVar31[10])(plVar31 + 10);
        if (((*puVar10 & 1) == 0) && (iVar13 = __cxa_guard_acquire(puVar10), iVar13 != 0)) {
          if (((*puVar8 & 1) == 0) && (iVar13 = __cxa_guard_acquire(puVar8), iVar13 != 0)) {
            if (((*PTR_DAT_027196b0 & 1) == 0) &&
               (iVar13 = __cxa_guard_acquire(PTR_DAT_027196b0), iVar13 != 0)) {
              uVar25 = FUN_0156b190();
              *(undefined8 *)PTR_DAT_027196b8 = uVar25;
              __cxa_guard_release(PTR_DAT_027196b0);
            }
            *(undefined **)puVar9 = PTR_DAT_027196b8;
            __cxa_guard_release(puVar8);
            *(undefined **)puVar11 = puVar9;
            __cxa_guard_release(puVar10);
          }
          else {
            *(undefined **)puVar11 = puVar9;
            __cxa_guard_release(puVar10);
          }
        }
        for (; plVar16 != (long *)0x0; plVar16 = (long *)*plVar16) {
          if (plVar16 == (long *)puVar11) {
            uVar15 = FUN_00e9b700(lVar14,plVar31 + 0x16,0);
            uVar17 = (**(code **)(*plVar31 + 0x228))();
            if ((((uVar15 & 1) != 0) && ((uVar17 & 1) != 0)) &&
               (uVar15 = (**(code **)(*(long *)*puVar2 + 0x88))(), (uVar15 & 1) == 0)) {
              FUN_015c9a70(&local_80,0xad973146eddd72ea,plVar31[0x34],0,0,0,0);
              lVar26 = local_b0;
              lVar14 = local_c0;
              lVar30 = local_a8;
              lVar27 = local_a0;
              lVar22 = local_98;
              lVar6 = local_90;
              lVar7 = 0;
              if (local_80 == 0) goto joined_r0x00ec7084;
              (**(code **)(*(long *)(local_80 + 0x48) + 0x18))();
              local_80 = 0;
              iVar13 = 1;
              goto joined_r0x00ec6c20;
            }
            break;
          }
        }
      }
    }
  }
  lVar30 = *(long *)(*(long *)PTR_DAT_02710798 + 0x1d8);
  if (lVar30 != 0) {
    (**(code **)(*(long *)(lVar30 + 0x48) + 0x10))();
  }
  iVar13 = FUN_01521090(lVar30,0x438);
  if (iVar13 == 0) {
LAB_00ec695c:
    bVar5 = true;
    iVar13 = 1;
    iVar32 = 0;
  }
  else {
    plVar16 = *(long **)(lVar26 + 0xb0);
    plVar31 = *(long **)(lVar26 + 0xb8);
    if (plVar16 == plVar31) goto LAB_00ec695c;
    iVar13 = 0;
    do {
      if (((*(byte *)(*plVar16 + 0x38c) >> 4 & 1) != 0) &&
         (uVar15 = (**(code **)(*(long *)*plVar16 + 0x88))(), (uVar15 & 1) == 0)) {
        plVar29 = (long *)*plVar16;
        uVar15 = FUN_00e87d40(plVar29 + 10);
        if ((uVar15 & 1) != 0) {
          local_68 = plVar29;
          uVar15 = (**(code **)(*plVar29 + 0x228))(plVar29);
          if ((((uVar15 & 1) != 0) && (uVar15 = thunk_FUN_00e46320(lVar14), (uVar15 & 1) == 0)) &&
             (uVar15 = FUN_00e9b700(lVar14,plVar29 + 0x16,0), (uVar15 & 1) != 0)) {
            FUN_00ec9f00(&local_70,lVar33,&local_68);
            if (local_70 != 0) {
              (**(code **)(*(long *)(local_70 + 0x48) + 0x18))();
              local_70 = 0;
            }
            iVar13 = 1;
          }
        }
      }
      plVar16 = plVar16 + 1;
    } while (plVar31 != plVar16);
    if (iVar13 == 0) goto LAB_00ec695c;
    bVar5 = false;
    iVar32 = iVar13;
  }
  if (lVar30 != 0) {
    (**(code **)(*(long *)(lVar30 + 0x48) + 0x18))((long *)(lVar30 + 0x48));
  }
  if (!bVar5) goto joined_r0x00ec6c20;
  local_68 = (long *)CONCAT44(local_68._4_4_,0x43b40000);
  plVar16 = *(long **)(lVar26 + 0xb0);
  plVar31 = *(long **)(lVar26 + 0xb8);
  if (plVar16 != plVar31) {
    plVar29 = (long *)0x0;
    do {
      if (((*(byte *)(*plVar16 + 0x38c) >> 1 & 1) != 0) &&
         (uVar15 = (**(code **)(*(long *)*plVar16 + 0x88))(), (uVar15 & 1) == 0)) {
        plVar24 = (long *)*plVar16;
        uVar15 = FUN_015bec30(plVar24 + 10);
        if ((((uVar15 & 1) != 0) &&
            (((uVar15 = (**(code **)(*plVar24 + 0x228))(plVar24), (uVar15 & 1) != 0 &&
              ((*(uint *)((long)plVar24 + 0x38c) & 0x440100) == 0)) &&
             (uVar15 = FUN_00e9b700(lVar14,plVar24 + 0x16,&local_68), (uVar15 & 1) != 0)))) &&
           (plVar24[0x31] != -0x340d631b7bddd9bb)) {
          plVar29 = plVar24;
        }
      }
      puVar10 = PTR_DAT_027201a0;
      puVar9 = PTR_DAT_02720198;
      puVar8 = PTR_DAT_0271f690;
      plVar16 = plVar16 + 1;
    } while (plVar31 != plVar16);
    if (plVar29 != (long *)0x0) {
      FUN_015c9a70(&local_88,plVar29[0x31],plVar29[0x34],0,0,0,0);
      if (local_88 != 0) {
        (**(code **)(*(long *)(local_88 + 0x48) + 0x18))();
        local_88 = 0;
      }
      lVar26 = plVar29[0x31];
      bVar20 = 1;
      if (lVar26 < -0x500b2eb86e0114ac) {
        if (lVar26 < -0x500b30b86e011812) {
          if ((lVar26 != -0x500b32b86e011b78) && (lVar26 != -0x500b31b86e0119c5)) goto LAB_00ec6bb8;
        }
        else if ((lVar26 != -0x500b30b86e011812) && (lVar26 != -0x500b2fb86e01165f))
        goto LAB_00ec6bb8;
      }
      else if (lVar26 < -0x500b2bb86e010f93) {
        if ((lVar26 != -0x500b2eb86e0114ac) && (lVar26 != -0x500b2cb86e011146)) goto LAB_00ec6bb8;
      }
      else if ((lVar26 != -0x500b2bb86e010f93) && (lVar26 != 0x11fc1eff5a1ef436)) {
LAB_00ec6bb8:
        bVar20 = 0;
      }
      *(byte *)(param_1 + 0x80) = *(byte *)(param_1 + 0x80) & 0xfe | bVar20;
      iVar13 = 1;
      goto joined_r0x00ec6c20;
    }
    plVar31 = *(long **)(lVar26 + 0xb8);
    for (plVar16 = *(long **)(lVar26 + 0xb0); plVar16 != plVar31; plVar16 = plVar16 + 1) {
      if (((*(byte *)(*plVar16 + 0x38e) >> 2 & 1) != 0) &&
         (uVar15 = (**(code **)(*(long *)*plVar16 + 0x88))(), (uVar15 & 1) == 0)) {
        plVar24 = (long *)*plVar16;
        plVar29 = (long *)(**(code **)plVar24[10])(plVar24 + 10);
        if (((*puVar9 & 1) == 0) && (iVar13 = __cxa_guard_acquire(puVar9), iVar13 != 0)) {
          if (((*puVar8 & 1) == 0) && (iVar13 = __cxa_guard_acquire(puVar8), iVar13 != 0)) {
            if (((*PTR_DAT_027196b0 & 1) == 0) &&
               (iVar13 = __cxa_guard_acquire(PTR_DAT_027196b0), iVar13 != 0)) {
              uVar25 = FUN_0156b190();
              *(undefined8 *)PTR_DAT_027196b8 = uVar25;
              __cxa_guard_release(PTR_DAT_027196b0);
            }
            *(undefined **)PTR_DAT_0271f698 = PTR_DAT_027196b8;
            __cxa_guard_release(puVar8);
          }
          *(undefined **)puVar10 = PTR_DAT_0271f698;
          __cxa_guard_release(puVar9);
        }
        for (; plVar29 != (long *)0x0; plVar29 = (long *)*plVar29) {
          if (plVar29 == (long *)puVar10) {
            uVar15 = (**(code **)(*plVar24 + 0x228))();
            if ((((uVar15 & 1) != 0) && (plVar24[0x31] != -0x340d631b7bddd9bb)) &&
               (uVar15 = FUN_00e9b700(lVar14,plVar24 + 0x16,0), (uVar15 & 1) != 0)) {
              iVar32 = 1;
              *(undefined1 *)(lVar14 + 0x7e0) = 1;
              FUN_015c9a70(&local_68,plVar24[0x31],plVar24[0x34],plVar24[0xac],0,0,0);
              if (local_68 != (long *)0x0) {
                (**(code **)(local_68[9] + 0x18))();
                iVar32 = 1;
                local_68 = (long *)0x0;
              }
            }
            break;
          }
        }
      }
    }
  }
  iVar13 = iVar32;
  if (iVar32 != 0) goto joined_r0x00ec6c20;
  local_68 = (long *)CONCAT44(local_68._4_4_,0x43b40000);
  plVar16 = *(long **)(lVar26 + 0xb0);
  plVar31 = *(long **)(lVar26 + 0xb8);
  uVar25 = 0xcbf29ce484222645;
  if (plVar16 == plVar31) {
    local_68 = (long *)((ulong)local_68._4_4_ << 0x20);
LAB_00ec6ee0:
    local_68 = (long *)CONCAT44(local_68._4_4_,0x43b40000);
    plVar16 = *(long **)(lVar26 + 0xb0);
    plVar31 = *(long **)(lVar26 + 0xb8);
    if (plVar16 != plVar31) {
      plVar29 = (long *)0x0;
      do {
        plVar24 = plVar29;
        if (((*(char *)(*plVar16 + 0x38e) < '\0') &&
            (uVar15 = (**(code **)(*(long *)*plVar16 + 0x88))(), (uVar15 & 1) == 0)) &&
           ((plVar28 = (long *)FUN_00eca190(*plVar16 + 0x50), plVar28 != (long *)0x0 &&
            (uVar15 = (**(code **)(*plVar28 + 0x248))(), (uVar15 & 1) != 0)))) {
          uVar15 = FUN_00e9b700(lVar14,plVar28 + 0x16,&local_68);
          plVar24 = plVar28;
          if ((uVar15 & 1) == 0) {
            plVar24 = plVar29;
          }
        }
        plVar16 = plVar16 + 1;
        plVar29 = plVar24;
      } while (plVar31 != plVar16);
      if (plVar24 != (long *)0x0) {
        *(undefined1 *)(lVar14 + 0x7e0) = 1;
        *(undefined1 *)(plVar24 + 0x169) = 1;
        lVar26 = FUN_00eb65b0(plVar24);
        if (lVar26 == 0) {
          uVar18 = 0;
        }
        else {
          uVar25 = *(undefined8 *)(lVar26 + 0x5d0);
          uVar18 = *(undefined8 *)(lVar26 + 0x1a0);
          *(undefined1 *)(lVar26 + 0xb48) = 1;
        }
        FUN_015c9a70(&local_a0,0x91a1499231e51107,plVar24[0x34],plVar24[0xba],uVar18,uVar25,0);
        lVar26 = local_b0;
        lVar14 = local_c0;
        lVar30 = local_a8;
        lVar27 = 0;
        lVar22 = local_98;
        lVar6 = local_90;
        lVar7 = local_80;
        if (local_a0 != 0) {
          (**(code **)(*(long *)(local_a0 + 0x48) + 0x18))();
          local_a0 = 0;
          lVar26 = local_b0;
          lVar14 = local_c0;
          lVar30 = local_a8;
          lVar27 = local_a0;
          lVar22 = local_98;
          lVar6 = local_90;
          lVar7 = local_80;
        }
        goto joined_r0x00ec7084;
      }
    }
    local_68 = (long *)CONCAT44(local_68._4_4_,0x43b40000);
    plVar16 = *(long **)(lVar26 + 0xb0);
    plVar31 = *(long **)(lVar26 + 0xb8);
    if (plVar16 == plVar31) {
LAB_00ec7200:
      local_68 = (long *)((ulong)local_68 & 0xffffffff00000000);
    }
    else {
      plVar29 = (long *)0x0;
      do {
        if ((*(byte *)(*plVar16 + 0x38c) >> 3 & 1) != 0) {
          uVar15 = (**(code **)(*(long *)*plVar16 + 0x88))();
          if ((uVar15 & 1) == 0) {
            plVar24 = (long *)*plVar16;
            uVar15 = FUN_01593610(plVar24 + 10);
            if (((uVar15 & 1) != 0) && ((*(byte *)((long)plVar24 + 0x38d) >> 2 & 1) == 0)) {
              uVar15 = (**(code **)(*plVar24 + 0x248))(plVar24);
              if ((uVar15 & 1) != 0) {
                uVar15 = FUN_00e9b700(lVar14,plVar24 + 0x16,&local_68);
                if (((uVar15 & 1) != 0) &&
                   ((plVar24[0x31] != -0x340d631b7bddd9bb || (plVar24[0xac] != -0x340d631b7bddd9bb))
                   )) {
                  plVar29 = plVar24;
                }
              }
            }
          }
        }
        puVar9 = PTR_DAT_0271f820;
        puVar8 = PTR_DAT_0271f818;
        plVar16 = plVar16 + 1;
      } while (plVar31 != plVar16);
      if (plVar29 != (long *)0x0) {
        *(undefined1 *)(lVar14 + 0x7e0) = 1;
        if (plVar29[0x31] == -0x340d631b7bddd9bb) {
          FUN_015c9a70(&local_b0,0x62d47b0f95f930d6,plVar29[0x34],plVar29[0xac],0,0,0);
          lVar26 = 0;
          lVar14 = local_c0;
          lVar30 = local_a8;
          lVar27 = local_a0;
          lVar22 = local_98;
          lVar6 = local_90;
          lVar7 = local_80;
          if (local_b0 != 0) {
            (**(code **)(*(long *)(local_b0 + 0x48) + 0x18))();
            local_b0 = 0;
            lVar26 = local_b0;
            lVar14 = local_c0;
            lVar30 = local_a8;
            lVar27 = local_a0;
            lVar22 = local_98;
            lVar6 = local_90;
            lVar7 = local_80;
          }
        }
        else {
          FUN_015c9a70(&local_a8,plVar29[0x31],plVar29[0x34],0,0,0,0);
          lVar26 = local_b0;
          lVar14 = local_c0;
          lVar30 = 0;
          lVar27 = local_a0;
          lVar22 = local_98;
          lVar6 = local_90;
          lVar7 = local_80;
          if (local_a8 != 0) {
            (**(code **)(*(long *)(local_a8 + 0x48) + 0x18))();
            local_a8 = 0;
            lVar26 = local_b0;
            lVar14 = local_c0;
            lVar30 = local_a8;
            lVar27 = local_a0;
            lVar22 = local_98;
            lVar6 = local_90;
            lVar7 = local_80;
          }
        }
        goto joined_r0x00ec7084;
      }
      plVar16 = *(long **)(lVar26 + 0xb0);
      plVar31 = *(long **)(lVar26 + 0xb8);
      if (plVar16 == plVar31) goto LAB_00ec7200;
      plVar29 = (long *)0x0;
      do {
        if ((*(byte *)(*plVar16 + 0x38e) >> 6 & 1) != 0) {
          uVar15 = (**(code **)(*(long *)*plVar16 + 0x88))();
          if ((uVar15 & 1) == 0) {
            plVar28 = (long *)*plVar16;
            plVar24 = (long *)(**(code **)plVar28[10])(plVar28 + 10);
            if (((*puVar8 & 1) == 0) && (iVar13 = __cxa_guard_acquire(puVar8), iVar13 != 0)) {
              if (((*PTR_DAT_0271f690 & 1) == 0) &&
                 (iVar13 = __cxa_guard_acquire(PTR_DAT_0271f690), iVar13 != 0)) {
                if (((*PTR_DAT_027196b0 & 1) == 0) &&
                   (iVar13 = __cxa_guard_acquire(PTR_DAT_027196b0), iVar13 != 0)) {
                  uVar25 = FUN_0156b190();
                  *(undefined8 *)PTR_DAT_027196b8 = uVar25;
                  __cxa_guard_release(PTR_DAT_027196b0);
                }
                *(undefined **)PTR_DAT_0271f698 = PTR_DAT_027196b8;
                __cxa_guard_release(PTR_DAT_0271f690);
              }
              *(undefined **)puVar9 = PTR_DAT_0271f698;
              __cxa_guard_release(puVar8);
            }
            for (; plVar24 != (long *)0x0; plVar24 = (long *)*plVar24) {
              if (plVar24 == (long *)puVar9) {
                uVar15 = (**(code **)(*plVar28 + 0x228))(plVar28);
                if (((uVar15 & 1) != 0) && (plVar28[0x31] != -0x340d631b7bddd9bb)) {
                  plVar29 = plVar28;
                }
                break;
              }
            }
          }
        }
        plVar16 = plVar16 + 1;
      } while (plVar16 != plVar31);
      if (plVar29 != (long *)0x0) {
        *(undefined1 *)(lVar14 + 0x7e0) = 1;
        lVar26 = plVar29[0xac];
        if (lVar26 != 0) {
          plVar16 = (long *)(lVar26 + 0x48);
          (**(code **)(*plVar16 + 0x10))(plVar16);
          lVar26 = *(long *)(lVar26 + 0x60);
          if (lVar26 == 0) {
            lVar26 = 0;
          }
          else {
            uVar15 = FUN_0156b540(lVar26);
            lVar26 = lVar26 + -0x50;
            if ((uVar15 & 1) == 0) {
              lVar26 = 0;
            }
          }
          (**(code **)(*plVar16 + 0x18))(plVar16);
          if ((lVar26 != 0) && (lVar26 = FUN_00eb1b80(lVar26 + 0x50), lVar26 != 0)) {
            *(undefined1 *)(lVar26 + 0x735) = 1;
          }
        }
        FUN_015c9a70(&local_b8,plVar29[0x31],plVar29[0x34],0,0,0,0);
        if (local_b8 != 0) {
          (**(code **)(*(long *)(local_b8 + 0x48) + 0x18))();
          local_b8 = 0;
        }
        lVar26 = plVar29[0x31];
        bVar20 = 1;
        if (lVar26 < -0x500b2eb86e0114ac) {
          if (lVar26 < -0x500b30b86e011812) {
            if ((lVar26 != -0x500b32b86e011b78) && (lVar26 != -0x500b31b86e0119c5))
            goto LAB_00ec761c;
          }
          else if ((lVar26 != -0x500b30b86e011812) && (lVar26 != -0x500b2fb86e01165f))
          goto LAB_00ec761c;
        }
        else if (lVar26 < -0x500b2bb86e010f93) {
          if ((lVar26 != -0x500b2eb86e0114ac) && (lVar26 != -0x500b2cb86e011146)) goto LAB_00ec761c;
        }
        else if ((lVar26 != -0x500b2bb86e010f93) && (lVar26 != 0x11fc1eff5a1ef436)) {
LAB_00ec761c:
          bVar20 = 0;
        }
        *(byte *)(param_1 + 0x80) = *(byte *)(param_1 + 0x80) & 0xfe | bVar20;
        lVar26 = local_b0;
        lVar14 = local_c0;
        lVar30 = local_a8;
        lVar27 = local_a0;
        lVar22 = local_98;
        lVar6 = local_90;
        lVar7 = local_80;
        goto joined_r0x00ec7084;
      }
      plVar16 = *(long **)(lVar26 + 0xb0);
      plVar31 = *(long **)(lVar26 + 0xb8);
      local_68 = (long *)CONCAT44(local_68._4_4_,0x43b40000);
      if (plVar16 != plVar31) {
        plVar29 = (long *)0x0;
        do {
          if ((*(byte *)(*plVar16 + 0x38d) >> 2 & 1) != 0) {
            uVar15 = (**(code **)(*(long *)*plVar16 + 0x88))();
            if ((uVar15 & 1) == 0) {
              plVar24 = (long *)FUN_00eb1b80(*plVar16 + 0x50);
              if (plVar24 != (long *)0x0) {
                uVar15 = (**(code **)(*plVar24 + 0x248))();
                if ((uVar15 & 1) != 0) {
                  uVar15 = FUN_00e9b700(lVar14,plVar24 + 0x16,&local_68);
                  if (((uVar15 & 1) != 0) && (plVar24[0x31] != -0x340d631b7bddd9bb)) {
                    plVar29 = plVar24;
                  }
                }
              }
            }
          }
          puVar9 = PTR_DAT_0271fc50;
          puVar8 = PTR_DAT_0271fc48;
          plVar16 = plVar16 + 1;
        } while (plVar31 != plVar16);
        if (plVar29 == (long *)0x0) {
          plVar16 = *(long **)(lVar26 + 0xb0);
          plVar31 = *(long **)(lVar26 + 0xb8);
          local_68 = (long *)CONCAT44(local_68._4_4_,0x43b40000);
          for (; plVar16 != plVar31; plVar16 = plVar16 + 1) {
            if (((*(byte *)(*plVar16 + 0x38e) >> 3 & 1) != 0) &&
               (uVar15 = (**(code **)(*(long *)*plVar16 + 0x88))(), (uVar15 & 1) == 0)) {
              plVar24 = (long *)*plVar16;
              plVar29 = (long *)(**(code **)plVar24[10])(plVar24 + 10);
              if (((*puVar8 & 1) == 0) && (iVar13 = __cxa_guard_acquire(puVar8), iVar13 != 0)) {
                uVar25 = FUN_01590f40();
                *(undefined8 *)puVar9 = uVar25;
                __cxa_guard_release(puVar8);
              }
              for (; plVar29 != (long *)0x0; plVar29 = (long *)*plVar29) {
                if (plVar29 == (long *)puVar9) {
                  if ((((char)plVar24[0x1ab] != '\0') &&
                      (uVar15 = (**(code **)(*plVar24 + 0x248))(plVar24), (uVar15 & 1) != 0)) &&
                     (uVar15 = FUN_00e9b700(lVar14,plVar24 + 0x16,&local_68), (uVar15 & 1) != 0)) {
                    *(undefined1 *)((long)plVar24 + 0xd59) = 1;
                  }
                  break;
                }
              }
            }
          }
LAB_00ec6734:
          iVar13 = 0;
          goto joined_r0x00ec6c20;
        }
        *(undefined1 *)(lVar14 + 0x7e0) = 1;
        if (*(char *)((long)plVar29 + 0x731) == '\x06') {
          lVar26 = 0x6ded3ce924f4b2c1;
        }
        else {
          lVar26 = plVar29[0x31];
        }
        *(undefined1 *)((long)plVar29 + 0x735) = 1;
        FUN_015c9a70(&local_c0,lVar26,plVar29[0x34],0,0,0,0);
        lVar26 = local_b0;
        lVar14 = 0;
        lVar30 = local_a8;
        lVar27 = local_a0;
        lVar22 = local_98;
        lVar6 = local_90;
        lVar7 = local_80;
        if (local_c0 != 0) {
          (**(code **)(*(long *)(local_c0 + 0x48) + 0x18))();
          local_c0 = 0;
          iVar13 = 1;
          goto joined_r0x00ec6c20;
        }
        goto joined_r0x00ec7084;
      }
    }
    local_68 = (long *)CONCAT44(local_68._4_4_,0x43b40000);
    iVar13 = 0;
  }
  else {
    plVar29 = (long *)0x0;
    do {
      plVar24 = plVar29;
      if (((*(byte *)(*plVar16 + 0x38c) >> 2 & 1) != 0) &&
         (uVar15 = (**(code **)(*(long *)*plVar16 + 0x88))(), (uVar15 & 1) == 0)) {
        plVar28 = (long *)*plVar16;
        uVar15 = FUN_00eca0a0(plVar28 + 10);
        if (((uVar15 & 1) != 0) &&
           ((uVar15 = (**(code **)(*plVar28 + 0x228))(plVar28), (uVar15 & 1) != 0 &&
            (plVar28[0x31] != -0x340d631b7bddd9bb)))) {
          uVar15 = FUN_00e9b700(lVar14,plVar28 + 0x16,&local_68);
          plVar24 = plVar28;
          if ((uVar15 & 1) == 0) {
            plVar24 = plVar29;
          }
        }
      }
      plVar16 = plVar16 + 1;
      plVar29 = plVar24;
    } while (plVar31 != plVar16);
    if (plVar24 == (long *)0x0) {
      plVar16 = *(long **)(lVar26 + 0xb0);
      plVar31 = *(long **)(lVar26 + 0xb8);
      local_68 = (long *)CONCAT44(local_68._4_4_,0x43b40000);
      if (plVar16 != plVar31) {
        plVar29 = (long *)0x0;
        do {
          if (((*(byte *)(*plVar16 + 0x38d) >> 4 & 1) != 0) &&
             (uVar15 = (**(code **)(*(long *)*plVar16 + 0x88))(), (uVar15 & 1) == 0)) {
            plVar28 = (long *)*plVar16;
            plVar24 = (long *)(**(code **)plVar28[10])(plVar28 + 10);
            lVar30 = FUN_01590f40();
            for (; plVar24 != (long *)0x0; plVar24 = (long *)*plVar24) {
              if (plVar24 == (long *)lVar30) {
                uVar15 = (**(code **)(*plVar28 + 0x248))(plVar28);
                if ((((uVar15 & 1) != 0) &&
                    (uVar15 = FUN_00e9b700(lVar14,plVar28 + 0x16,&local_68), (uVar15 & 1) != 0)) &&
                   (plVar28[0x31] != -0x340d631b7bddd9bb)) {
                  plVar29 = plVar28;
                }
                break;
              }
            }
          }
          plVar16 = plVar16 + 1;
        } while (plVar16 != plVar31);
        if (plVar29 != (long *)0x0) {
          *(undefined1 *)(lVar14 + 0x7e0) = 1;
          FUN_015c9a70(&local_98,plVar29[0x31],plVar29[0x34],0,0,0,0);
          lVar26 = local_b0;
          lVar14 = local_c0;
          lVar30 = local_a8;
          lVar27 = local_a0;
          lVar22 = 0;
          lVar6 = local_90;
          lVar7 = local_80;
          if (local_98 != 0) {
            (**(code **)(*(long *)(local_98 + 0x48) + 0x18))();
            local_98 = 0;
            goto joined_r0x00ec7184;
          }
          goto joined_r0x00ec7084;
        }
      }
      goto LAB_00ec6ee0;
    }
    *(undefined1 *)(lVar14 + 0x7e0) = 1;
    FUN_015c9a70(&local_90,plVar24[0x31],plVar24[0x34],plVar24[0xa3],0,0,0);
    lVar26 = local_b0;
    lVar14 = local_c0;
    lVar30 = local_a8;
    lVar27 = local_a0;
    lVar22 = local_98;
    lVar6 = 0;
    lVar7 = local_80;
    if (local_90 != 0) {
      (**(code **)(*(long *)(local_90 + 0x48) + 0x18))();
      local_90 = 0;
joined_r0x00ec7184:
      iVar13 = 1;
      goto joined_r0x00ec6c20;
    }
joined_r0x00ec7084:
    iVar13 = 1;
    local_80 = lVar7;
    local_c0 = lVar14;
    local_b0 = lVar26;
    local_a8 = lVar30;
    local_a0 = lVar27;
    local_98 = lVar22;
    local_90 = lVar6;
  }
joined_r0x00ec6c20:
  if (lVar33 != 0) {
    (**(code **)(*(long *)(lVar33 + 0x48) + 0x18))((long *)(lVar33 + 0x48));
  }
  return iVar13;
}


