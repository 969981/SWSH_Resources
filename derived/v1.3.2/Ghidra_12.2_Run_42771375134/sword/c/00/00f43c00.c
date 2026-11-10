/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00f43c00; name: FUN_00f43c00
 */


void FUN_00f43c00(long param_1,uint param_2)

{
  uint uVar1;
  bool bVar2;
  undefined *puVar3;
  int iVar4;
  int iVar5;
  long *plVar6;
  long *plVar7;
  long *plVar8;
  ulong uVar9;
  long *plVar10;
  undefined8 uVar11;
  long lVar12;
  uint uVar13;
  long lVar14;
  undefined8 *puVar15;
  long lVar16;
  undefined8 *puVar17;
  undefined8 *puVar18;
  long local_b0;
  long local_a8;
  long local_a0;
  long local_98;
  long local_90;
  long local_88;
  long local_80;
  long local_78;
  long local_70;
  long local_68;
  
  lVar14 = *(long *)(*(long *)(param_1 + 0xf0) + (ulong)param_2 * 8);
  puVar15 = (undefined8 *)(lVar14 + 0x50);
  plVar6 = (long *)(**(code **)*puVar15)(puVar15);
  if (((*PTR_DAT_02720a88 & 1) == 0) && (iVar5 = __cxa_guard_acquire(PTR_DAT_02720a88), iVar5 != 0))
  {
    uVar11 = FUN_00f41f30();
    *(undefined8 *)PTR_DAT_02720a90 = uVar11;
    __cxa_guard_release(PTR_DAT_02720a88);
  }
  while( true ) {
    if (plVar6 == (long *)0x0) {
      return;
    }
    if (plVar6 == (long *)PTR_DAT_02720a90) break;
    plVar6 = (long *)*plVar6;
  }
  lVar14 = *(long *)(lVar14 + 0x60);
  if (lVar14 != 0) {
    plVar6 = (long *)(lVar14 + 0x48);
    (**(code **)(*plVar6 + 0x10))(plVar6);
    puVar15 = *(undefined8 **)(lVar14 + 0x60);
    if (puVar15 == (undefined8 *)0x0) {
      plVar10 = (long *)0x0;
    }
    else {
      plVar7 = (long *)(**(code **)*puVar15)(puVar15);
      plVar8 = (long *)FUN_00f41e40();
      plVar10 = (long *)0x0;
      if (plVar7 != (long *)0x0) {
        do {
          if (plVar7 == plVar8) {
            plVar10 = puVar15 + -10;
            goto LAB_00f43cd0;
          }
          plVar7 = (long *)*plVar7;
        } while (plVar7 != (long *)0x0);
        plVar10 = (long *)0x0;
      }
    }
LAB_00f43cd0:
    (**(code **)(*plVar6 + 0x18))(plVar6);
    if (plVar10 != (long *)0x0) {
      if (*(long *)(param_1 + 600) != 0) {
        plVar6 = *(long **)(param_1 + 0x250);
        do {
          puVar15 = *(undefined8 **)(*plVar6 + 0x60);
          plVar7 = (long *)(**(code **)*puVar15)(puVar15);
          lVar14 = FUN_00f41e40();
          for (; plVar7 != (long *)lVar14; plVar7 = (long *)*plVar7) {
          }
          lVar14 = puVar15[3];
          local_68 = lVar14;
          if (lVar14 != 0) {
            (**(code **)(*(long *)(lVar14 + 0x48) + 0x10))();
          }
          local_70 = plVar10[0xd];
          if (local_70 == 0) {
            uVar9 = FUN_00f443b0(&local_68,&local_70);
          }
          else {
            plVar7 = (long *)(local_70 + 0x48);
            (**(code **)(*plVar7 + 0x10))(plVar7);
            uVar9 = FUN_00f443b0(&local_68,&local_70);
            (**(code **)(*plVar7 + 0x18))(plVar7);
            local_70 = 0;
          }
          if (lVar14 != 0) {
            (**(code **)(*(long *)(lVar14 + 0x48) + 0x18))((long *)(lVar14 + 0x48));
            local_68 = 0;
          }
          if ((uVar9 & 1) != 0) {
            local_78 = plVar10[0xd];
            if (local_78 != 0) {
              (**(code **)(*(long *)(local_78 + 0x48) + 0x10))();
            }
            FUN_00f44800(puVar15 + 0xc,&local_78);
            if (local_78 != 0) {
              (**(code **)(*(long *)(local_78 + 0x48) + 0x18))();
              local_78 = 0;
            }
            local_80 = puVar15[3];
            if (local_80 != 0) {
              (**(code **)(*(long *)(local_80 + 0x48) + 0x10))();
            }
            FUN_00f44800(plVar10 + 0x16,&local_80);
            if (local_80 != 0) {
              (**(code **)(*(long *)(local_80 + 0x48) + 0x18))();
              local_80 = 0;
            }
          }
          plVar6 = plVar6 + 1;
        } while (plVar6 != (long *)(*(long *)(param_1 + 0x250) + *(long *)(param_1 + 600) * 8));
      }
      (**(code **)(*plVar10 + 0x10))(&local_90,plVar10);
      local_88 = local_90;
      local_90 = 0;
      FUN_00f455a0(param_1 + 0x210,&local_88);
      if (local_88 != 0) {
        (**(code **)(*(long *)(local_88 + 0x48) + 0x18))();
        local_88 = 0;
      }
      if (local_90 != 0) {
        (**(code **)(*(long *)(local_90 + 0x48) + 0x18))();
        local_90 = 0;
      }
      plVar6 = (long *)(**(code **)plVar10[10])(plVar10 + 10);
      puVar15 = (undefined8 *)PTR_DAT_0271fd88;
      if (((*PTR_DAT_0271fd80 & 1) == 0) &&
         (iVar5 = __cxa_guard_acquire(PTR_DAT_0271fd80), puVar15 = (undefined8 *)PTR_DAT_0271fd88,
         iVar5 != 0)) {
        uVar11 = FUN_00f41e40();
        *(undefined8 *)PTR_DAT_0271fd88 = uVar11;
        __cxa_guard_release(PTR_DAT_0271fd80);
        puVar15 = (undefined8 *)PTR_DAT_0271fd88;
      }
      for (; PTR_DAT_0271fd88 = (undefined *)puVar15, plVar6 != (long *)0x0;
          plVar6 = (long *)*plVar6) {
        if (plVar6 == puVar15) {
          local_88 = plVar10[0x24];
          if ((local_88 != 0) && ((**(code **)(*(long *)(local_88 + 0x48) + 0x10))(), local_88 != 0)
             ) {
            iVar5 = 1;
            goto LAB_00f43f1c;
          }
          break;
        }
      }
      iVar5 = 1;
      goto LAB_00f442b4;
    }
  }
  iVar5 = 0;
  goto LAB_00f442b4;
LAB_00f43f1c:
  do {
    if (*(undefined8 **)(local_88 + 0x60) == (undefined8 *)0x0) {
LAB_00f44230:
      if (local_88 != 0) {
        (**(code **)(*(long *)(local_88 + 0x48) + 0x18))();
        local_88 = 0;
      }
      break;
    }
    plVar6 = (long *)(**(code **)**(undefined8 **)(local_88 + 0x60))();
    lVar14 = FUN_00f41e40();
    while( true ) {
      if (plVar6 == (long *)0x0) goto LAB_00f44230;
      if (plVar6 == (long *)lVar14) break;
      plVar6 = (long *)*plVar6;
    }
    if (*(long *)(param_1 + 600) != 0) {
      plVar6 = *(long **)(param_1 + 0x250);
      do {
        if ((*plVar6 != 0) &&
           (puVar17 = *(undefined8 **)(*plVar6 + 0x60), puVar17 != (undefined8 *)0x0)) {
          plVar10 = (long *)(**(code **)*puVar17)(puVar17);
          lVar14 = FUN_00f41e40();
          for (; plVar10 != (long *)0x0; plVar10 = (long *)*plVar10) {
            if (plVar10 == (long *)lVar14) {
              puVar17 = puVar17 + -10;
              goto joined_r0x00f44014;
            }
          }
        }
        puVar17 = (undefined8 *)0x0;
joined_r0x00f44014:
        if ((local_88 != 0) &&
           (puVar18 = *(undefined8 **)(local_88 + 0x60), puVar18 != (undefined8 *)0x0)) {
          plVar10 = (long *)(**(code **)*puVar18)(puVar18);
          lVar14 = FUN_00f41e40();
          for (; plVar10 != (long *)0x0; plVar10 = (long *)*plVar10) {
            if (plVar10 == (long *)lVar14) {
              puVar18 = puVar18 + -10;
              lVar14 = puVar17[0xd];
              goto joined_r0x00f43f84;
            }
          }
        }
        puVar18 = (undefined8 *)0x0;
        lVar14 = puVar17[0xd];
joined_r0x00f43f84:
        local_98 = lVar14;
        if (lVar14 != 0) {
          (**(code **)(*(long *)(lVar14 + 0x48) + 0x10))();
        }
        local_a0 = puVar18[0xd];
        if (local_a0 == 0) {
          uVar9 = FUN_00f443b0(&local_98,&local_a0);
        }
        else {
          plVar10 = (long *)(local_a0 + 0x48);
          (**(code **)(*plVar10 + 0x10))(plVar10);
          uVar9 = FUN_00f443b0(&local_98,&local_a0);
          (**(code **)(*plVar10 + 0x18))(plVar10);
          local_a0 = 0;
        }
        if (lVar14 != 0) {
          (**(code **)(*(long *)(lVar14 + 0x48) + 0x18))((long *)(lVar14 + 0x48));
          local_98 = 0;
        }
        if ((uVar9 & 1) != 0) {
          local_a8 = puVar18[0xd];
          if (local_a8 != 0) {
            (**(code **)(*(long *)(local_a8 + 0x48) + 0x10))();
          }
          FUN_00f44800(puVar17 + 0x16,&local_a8);
          if (local_a8 != 0) {
            (**(code **)(*(long *)(local_a8 + 0x48) + 0x18))();
            local_a8 = 0;
          }
          local_b0 = puVar17[0xd];
          if (local_b0 != 0) {
            (**(code **)(*(long *)(local_b0 + 0x48) + 0x10))();
          }
          FUN_00f44800(puVar18 + 0x16,&local_b0);
          if (local_b0 != 0) {
            (**(code **)(*(long *)(local_b0 + 0x48) + 0x18))();
            local_b0 = 0;
          }
        }
        plVar6 = plVar6 + 1;
      } while (plVar6 != (long *)(*(long *)(param_1 + 0x250) + *(long *)(param_1 + 600) * 8));
    }
    FUN_00f458b0(param_1 + 0x210,&local_88);
    puVar3 = PTR_DAT_0271fd80;
    if (local_88 == 0) {
LAB_00f44180:
      puVar17 = (undefined8 *)0x0;
    }
    else {
      puVar17 = *(undefined8 **)(local_88 + 0x60);
      if (puVar17 != (undefined8 *)0x0) {
        plVar6 = (long *)(**(code **)*puVar17)(puVar17);
        lVar14 = FUN_00f41e40();
        for (; plVar6 != (long *)0x0; plVar6 = (long *)*plVar6) {
          if (plVar6 == (long *)lVar14) {
            puVar17 = puVar17 + -10;
            goto LAB_00f44184;
          }
        }
        goto LAB_00f44180;
      }
    }
LAB_00f44184:
    iVar5 = iVar5 + 1;
    plVar6 = (long *)(**(code **)puVar17[10])(puVar17 + 10);
    lVar14 = local_88;
    if (((*puVar3 & 1) == 0) && (iVar4 = __cxa_guard_acquire(puVar3), lVar14 = local_88, iVar4 != 0)
       ) {
      uVar11 = FUN_00f41e40();
      *puVar15 = uVar11;
      __cxa_guard_release(puVar3);
      lVar14 = local_88;
    }
    for (; plVar6 != (long *)0x0; plVar6 = (long *)*plVar6) {
      if (plVar6 == puVar15) {
        lVar12 = puVar17[0x24];
        local_88 = lVar14;
        if (lVar12 != 0) {
          (**(code **)(*(long *)(lVar12 + 0x48) + 0x10))();
        }
        bVar2 = local_88 == 0;
        lVar14 = local_88;
        local_88 = lVar12;
        if (bVar2) goto LAB_00f441fc;
        goto LAB_00f441ec;
      }
    }
    local_88 = 0;
    if (lVar14 == 0) break;
LAB_00f441ec:
    (**(code **)(*(long *)(lVar14 + 0x48) + 0x18))();
LAB_00f441fc:
  } while (local_88 != 0);
LAB_00f442b4:
  uVar13 = *(uint *)(param_1 + 0x290);
  uVar1 = param_2 << 2 | 1;
  if (uVar1 < uVar13) {
    FUN_00f43c00(param_1,uVar1);
    uVar13 = *(uint *)(param_1 + 0x290);
    if (uVar1 + 1 < uVar13) goto LAB_00f44324;
LAB_00f442e8:
    if (uVar13 <= (param_2 << 2 | 3)) goto LAB_00f4433c;
LAB_00f442f4:
    FUN_00f43c00(param_1);
    if (*(uint *)(param_1 + 0x290) <= uVar1 + 3) goto joined_r0x00f44350;
  }
  else {
    if (uVar13 <= uVar1 + 1) goto LAB_00f442e8;
LAB_00f44324:
    FUN_00f43c00(param_1);
    uVar13 = *(uint *)(param_1 + 0x290);
    if ((param_2 << 2 | 3) < uVar13) goto LAB_00f442f4;
LAB_00f4433c:
    if (uVar13 <= uVar1 + 3) goto joined_r0x00f44350;
  }
  FUN_00f43c00(param_1);
joined_r0x00f44350:
  if (iVar5 != 0) {
    lVar14 = *(long *)(param_1 + 600);
    do {
      lVar16 = *(long *)(param_1 + 0x250) + -8;
      lVar12 = *(long *)(lVar16 + lVar14 * 8);
      if (lVar12 != 0) {
        (**(code **)(*(long *)(lVar12 + 0x48) + 0x18))();
        *(undefined8 *)(lVar16 + lVar14 * 8) = 0;
        lVar14 = *(long *)(param_1 + 600);
      }
      lVar14 = lVar14 + -1;
      iVar5 = iVar5 + -1;
      *(long *)(param_1 + 600) = lVar14;
    } while (iVar5 != 0);
  }
  return;
}


