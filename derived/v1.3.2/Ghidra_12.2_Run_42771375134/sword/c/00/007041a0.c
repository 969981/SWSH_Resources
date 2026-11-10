/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 007041a0; name: FUN_007041a0
 */


/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_007041a0(long *param_1,long *param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  bool bVar3;
  int iVar4;
  long *plVar5;
  undefined8 uVar6;
  long *plVar7;
  long *plVar8;
  ulong uVar9;
  long *plVar10;
  long *plVar11;
  uint uVar12;
  ulong uVar13;
  long lVar14;
  long lVar15;
  long *plVar16;
  undefined8 *puVar17;
  undefined8 *puVar18;
  long *plVar19;
  long *local_78;
  int local_6c;
  
  puVar2 = PTR_DAT_02715890;
  puVar1 = PTR_DAT_02715888;
  local_78 = param_2;
LAB_007041ec:
  plVar11 = local_78 + -1;
LAB_00704208:
  plVar16 = param_1;
  lVar14 = (long)local_78 - (long)plVar16;
  uVar13 = lVar14 >> 3;
  switch(uVar13) {
  case 0:
  case 1:
    return;
  case 2:
    if ((local_78[-1] == 0) ||
       (puVar17 = *(undefined8 **)(local_78[-1] + 0x60), puVar17 == (undefined8 *)0x0))
    goto LAB_00704cdc;
    plVar11 = (long *)(**(code **)*puVar17)(puVar17);
    if (((*puVar1 & 1) == 0) && (iVar4 = __cxa_guard_acquire(PTR_DAT_02715888), iVar4 != 0)) {
      uVar6 = FUN_00702ff0();
      *(undefined8 *)puVar2 = uVar6;
      __cxa_guard_release(PTR_DAT_02715888);
    }
    goto joined_r0x00705178;
  case 3:
    FUN_00705180(plVar16,plVar16 + 1,plVar11);
    return;
  case 4:
    FUN_007056f0(plVar16,plVar16 + 1,plVar16 + 2,plVar11);
    return;
  case 5:
    FUN_00705b10(plVar16,plVar16 + 1,plVar16 + 2,plVar16 + 3,plVar11);
    return;
  default:
    if (lVar14 < 0x38) {
      FUN_00705180(plVar16,plVar16 + 1,plVar16 + 2);
      plVar11 = plVar16 + 2;
      plVar10 = plVar16 + 3;
      goto joined_r0x00704da4;
    }
    uVar9 = uVar13;
    if ((long)uVar13 < 0) {
      uVar9 = uVar13 + 1;
    }
    plVar10 = (long *)((long)plVar16 + (uVar9 & 0x3ffffffffffffffe) * 4);
    if (lVar14 < 0x1f39) {
      local_6c = FUN_00705180(plVar16,plVar10,plVar11);
      lVar14 = *plVar16;
    }
    else {
      uVar9 = uVar13 + 3;
      if (-1 < (long)uVar13) {
        uVar9 = uVar13;
      }
      lVar14 = (uVar9 & 0x7ffffffffffffffc) * 2;
      local_6c = FUN_00705b10(plVar16,(long)plVar16 + lVar14,plVar10,(long)plVar10 + lVar14,plVar11)
      ;
      lVar14 = *plVar16;
    }
    if ((lVar14 != 0) && (puVar17 = *(undefined8 **)(lVar14 + 0x60), puVar17 != (undefined8 *)0x0))
    {
      plVar5 = (long *)(**(code **)*puVar17)(puVar17);
      if (((*puVar1 & 1) == 0) && (iVar4 = __cxa_guard_acquire(puVar1), iVar4 != 0)) {
        uVar6 = FUN_00702ff0();
        *(undefined8 *)puVar2 = uVar6;
        __cxa_guard_release(puVar1);
      }
      for (; plVar5 != (long *)0x0; plVar5 = (long *)*plVar5) {
        if (plVar5 == (long *)puVar2) {
          puVar17 = puVar17 + -10;
          goto LAB_007042dc;
        }
      }
    }
    puVar17 = (undefined8 *)0x0;
LAB_007042dc:
    puVar18 = *(undefined8 **)(*plVar10 + 0x60);
    plVar5 = (long *)(**(code **)*puVar18)(puVar18);
    if (((*puVar1 & 1) == 0) && (iVar4 = __cxa_guard_acquire(puVar1), iVar4 != 0)) {
      uVar6 = FUN_00702ff0();
      *(undefined8 *)puVar2 = uVar6;
      __cxa_guard_release(puVar1);
    }
    for (; plVar5 != (long *)puVar2; plVar5 = (long *)*plVar5) {
    }
    plVar5 = plVar11;
    if (*(int *)(puVar18 + 0x2b) <= *(int *)(puVar17 + 0x35)) {
      do {
        plVar5 = plVar5 + -1;
        if (plVar16 == plVar5) {
          plVar10 = plVar16 + 1;
          if ((*plVar16 == 0) ||
             (puVar17 = *(undefined8 **)(*plVar16 + 0x60), puVar17 == (undefined8 *)0x0))
          goto LAB_00704868;
          plVar5 = (long *)(**(code **)*puVar17)(puVar17);
          if (((*puVar1 & 1) == 0) && (iVar4 = __cxa_guard_acquire(puVar1), iVar4 != 0)) {
            uVar6 = FUN_00702ff0();
            *(undefined8 *)puVar2 = uVar6;
            __cxa_guard_release(puVar1);
          }
          goto joined_r0x00704c7c;
        }
        if ((*plVar5 != 0) &&
           (puVar17 = *(undefined8 **)(*plVar5 + 0x60), puVar17 != (undefined8 *)0x0)) {
          plVar7 = (long *)(**(code **)*puVar17)(puVar17);
          if (((*puVar1 & 1) == 0) && (iVar4 = __cxa_guard_acquire(puVar1), iVar4 != 0)) {
            uVar6 = FUN_00702ff0();
            *(undefined8 *)puVar2 = uVar6;
            __cxa_guard_release(puVar1);
          }
          for (; plVar7 != (long *)0x0; plVar7 = (long *)*plVar7) {
            if (plVar7 == (long *)puVar2) {
              puVar17 = puVar17 + -10;
              goto LAB_007044c0;
            }
          }
        }
        puVar17 = (undefined8 *)0x0;
LAB_007044c0:
        puVar18 = *(undefined8 **)(*plVar10 + 0x60);
        plVar7 = (long *)(**(code **)*puVar18)(puVar18);
        if (((*puVar1 & 1) == 0) && (iVar4 = __cxa_guard_acquire(puVar1), iVar4 != 0)) {
          uVar6 = FUN_00702ff0();
          *(undefined8 *)puVar2 = uVar6;
          __cxa_guard_release(puVar1);
        }
        for (; plVar7 != (long *)puVar2; plVar7 = (long *)*plVar7) {
        }
      } while (*(int *)(puVar18 + 0x2b) <= *(int *)(puVar17 + 0x35));
      lVar15 = *plVar16;
      *plVar16 = 0;
      lVar14 = *plVar5;
      *plVar5 = 0;
      *plVar16 = lVar14;
      if (*plVar5 != 0) {
        (**(code **)(*(long *)(*plVar5 + 0x48) + 0x18))();
        *plVar5 = 0;
      }
      local_6c = local_6c + 1;
      *plVar5 = lVar15;
      plVar7 = plVar16 + 1;
      if (plVar5 <= plVar16 + 1) goto LAB_00704350;
LAB_00704588:
      do {
        plVar19 = plVar7;
        if ((*plVar19 != 0) &&
           (puVar17 = *(undefined8 **)(*plVar19 + 0x60), puVar17 != (undefined8 *)0x0)) {
          plVar7 = (long *)(**(code **)*puVar17)(puVar17);
          if (((*puVar1 & 1) == 0) && (iVar4 = __cxa_guard_acquire(puVar1), iVar4 != 0)) {
            uVar6 = FUN_00702ff0();
            *(undefined8 *)puVar2 = uVar6;
            __cxa_guard_release(puVar1);
          }
          for (; plVar7 != (long *)0x0; plVar7 = (long *)*plVar7) {
            if (plVar7 == (long *)puVar2) {
              puVar17 = puVar17 + -10;
              goto LAB_007045d0;
            }
          }
        }
        puVar17 = (undefined8 *)0x0;
LAB_007045d0:
        puVar18 = *(undefined8 **)(*plVar10 + 0x60);
        plVar7 = (long *)(**(code **)*puVar18)(puVar18);
        if (((*puVar1 & 1) == 0) && (iVar4 = __cxa_guard_acquire(puVar1), iVar4 != 0)) {
          uVar6 = FUN_00702ff0();
          *(undefined8 *)puVar2 = uVar6;
          __cxa_guard_release(puVar1);
        }
        for (; plVar7 != (long *)puVar2; plVar7 = (long *)*plVar7) {
        }
        plVar7 = plVar19 + 1;
      } while (*(int *)(puVar17 + 0x35) < *(int *)(puVar18 + 0x2b));
      do {
        plVar5 = plVar5 + -1;
        if ((*plVar5 != 0) &&
           (puVar17 = *(undefined8 **)(*plVar5 + 0x60), puVar17 != (undefined8 *)0x0)) {
          plVar8 = (long *)(**(code **)*puVar17)(puVar17);
          if (((*puVar1 & 1) == 0) && (iVar4 = __cxa_guard_acquire(puVar1), iVar4 != 0)) {
            uVar6 = FUN_00702ff0();
            *(undefined8 *)puVar2 = uVar6;
            __cxa_guard_release(puVar1);
          }
          for (; plVar8 != (long *)0x0; plVar8 = (long *)*plVar8) {
            if (plVar8 == (long *)puVar2) {
              puVar17 = puVar17 + -10;
              goto LAB_007046b4;
            }
          }
        }
        puVar17 = (undefined8 *)0x0;
LAB_007046b4:
        puVar18 = *(undefined8 **)(*plVar10 + 0x60);
        plVar8 = (long *)(**(code **)*puVar18)(puVar18);
        if (((*puVar1 & 1) == 0) && (iVar4 = __cxa_guard_acquire(puVar1), iVar4 != 0)) {
          uVar6 = FUN_00702ff0();
          *(undefined8 *)puVar2 = uVar6;
          __cxa_guard_release(puVar1);
        }
        for (; plVar8 != (long *)puVar2; plVar8 = (long *)*plVar8) {
        }
      } while (*(int *)(puVar18 + 0x2b) <= *(int *)(puVar17 + 0x35));
      if (plVar19 <= plVar5) {
        lVar15 = *plVar19;
        *plVar19 = 0;
        lVar14 = *plVar5;
        *plVar5 = 0;
        *plVar19 = lVar14;
        if (*plVar5 != 0) {
          (**(code **)(*(long *)(*plVar5 + 0x48) + 0x18))();
          *plVar5 = 0;
        }
        local_6c = local_6c + 1;
        *plVar5 = lVar15;
        plVar8 = plVar5;
        if (plVar10 != plVar19) {
          plVar8 = plVar10;
        }
        plVar10 = plVar8;
        goto LAB_00704588;
      }
      if (plVar19 == plVar10) goto LAB_00704784;
LAB_0070435c:
      if ((*plVar10 != 0) &&
         (puVar17 = *(undefined8 **)(*plVar10 + 0x60), puVar17 != (undefined8 *)0x0)) {
        plVar5 = (long *)(**(code **)*puVar17)(puVar17);
        if (((*puVar1 & 1) == 0) && (iVar4 = __cxa_guard_acquire(puVar1), iVar4 != 0)) {
          uVar6 = FUN_00702ff0();
          *(undefined8 *)puVar2 = uVar6;
          __cxa_guard_release(puVar1);
        }
        for (; plVar5 != (long *)0x0; plVar5 = (long *)*plVar5) {
          if (plVar5 == (long *)puVar2) {
            puVar17 = puVar17 + -10;
            goto LAB_007043a0;
          }
        }
      }
      puVar17 = (undefined8 *)0x0;
LAB_007043a0:
      puVar18 = *(undefined8 **)(*plVar19 + 0x60);
      plVar5 = (long *)(**(code **)*puVar18)(puVar18);
      if (((*puVar1 & 1) == 0) && (iVar4 = __cxa_guard_acquire(puVar1), iVar4 != 0)) {
        uVar6 = FUN_00702ff0();
        *(undefined8 *)puVar2 = uVar6;
        __cxa_guard_release(puVar1);
      }
      for (; plVar5 != (long *)puVar2; plVar5 = (long *)*plVar5) {
      }
      if (*(int *)(puVar18 + 0x2b) <= *(int *)(puVar17 + 0x35)) goto LAB_00704784;
      lVar15 = *plVar19;
      *plVar19 = 0;
      lVar14 = *plVar10;
      *plVar10 = 0;
      *plVar19 = lVar14;
      if (*plVar10 != 0) {
        (**(code **)(*(long *)(*plVar10 + 0x48) + 0x18))();
        *plVar10 = 0;
      }
      *plVar10 = lVar15;
      if (local_6c == -1) goto LAB_0070478c;
      goto LAB_007047b4;
    }
    plVar7 = plVar16 + 1;
    if (plVar16 + 1 < plVar11) goto LAB_00704588;
LAB_00704350:
    plVar19 = plVar16 + 1;
    if (plVar19 != plVar10) goto LAB_0070435c;
LAB_00704784:
    if (local_6c != 0) goto LAB_007047b4;
LAB_0070478c:
    uVar13 = FUN_00706060(plVar16,plVar19);
    uVar9 = FUN_00706060(plVar19 + 1,local_78);
    if ((uVar9 & 1) == 0) goto code_r0x007047b0;
    bVar3 = (uVar13 & 1) == 0;
    if (bVar3) {
      local_78 = plVar19;
    }
    uVar12 = 1;
    if (bVar3) {
      uVar12 = 2;
    }
    param_1 = plVar16;
    if (4 < uVar12) {
      return;
    }
  }
  goto LAB_00704c18;
joined_r0x00704da4:
  if (plVar10 == local_78) {
    return;
  }
  if ((*plVar10 != 0) && (puVar17 = *(undefined8 **)(*plVar10 + 0x60), puVar17 != (undefined8 *)0x0)
     ) {
    plVar5 = (long *)(**(code **)*puVar17)(puVar17);
    if (((*puVar1 & 1) == 0) && (iVar4 = __cxa_guard_acquire(puVar1), iVar4 != 0)) {
      uVar6 = FUN_00702ff0();
      *(undefined8 *)puVar2 = uVar6;
      __cxa_guard_release(puVar1);
    }
    for (; plVar5 != (long *)0x0; plVar5 = (long *)*plVar5) {
      if (plVar5 == (long *)puVar2) {
        puVar17 = puVar17 + -10;
        goto LAB_00704e24;
      }
    }
  }
  puVar17 = (undefined8 *)0x0;
LAB_00704e24:
  puVar18 = *(undefined8 **)(*plVar11 + 0x60);
  plVar5 = (long *)(**(code **)*puVar18)(puVar18);
  if (((*puVar1 & 1) == 0) && (iVar4 = __cxa_guard_acquire(puVar1), iVar4 != 0)) {
    uVar6 = FUN_00702ff0();
    *(undefined8 *)puVar2 = uVar6;
    __cxa_guard_release(puVar1);
  }
  for (; plVar5 != (long *)puVar2; plVar5 = (long *)*plVar5) {
  }
  if (*(int *)(puVar17 + 0x35) < *(int *)(puVar18 + 0x2b)) {
    lVar14 = *plVar10;
    *plVar10 = 0;
    plVar5 = plVar10;
    if (lVar14 == 0) {
      while( true ) {
        plVar7 = plVar11;
        lVar15 = *plVar7;
        *plVar7 = 0;
        *plVar5 = lVar15;
        if (plVar7 == plVar16) break;
        plVar11 = plVar7 + -1;
        puVar17 = *(undefined8 **)(*plVar11 + 0x60);
        plVar5 = (long *)(**(code **)*puVar17)(puVar17);
        if (((*puVar1 & 1) == 0) && (iVar4 = __cxa_guard_acquire(puVar1), iVar4 != 0)) {
          uVar6 = FUN_00702ff0();
          *(undefined8 *)puVar2 = uVar6;
          __cxa_guard_release(puVar1);
        }
        for (; plVar5 != (long *)puVar2; plVar5 = (long *)*plVar5) {
        }
        if (*(int *)(puVar17 + 0x2b) <= _DAT_000001a8) goto LAB_0070506c;
        plVar5 = plVar7;
        if (*plVar7 != 0) {
          (**(code **)(*(long *)(*plVar7 + 0x48) + 0x18))();
          *plVar7 = 0;
        }
      }
    }
    else {
      while( true ) {
        plVar7 = plVar11;
        lVar15 = *plVar7;
        *plVar7 = 0;
        *plVar5 = lVar15;
        if (plVar7 == plVar16) break;
        puVar17 = *(undefined8 **)(lVar14 + 0x60);
        plVar11 = plVar7 + -1;
        if (puVar17 != (undefined8 *)0x0) {
          plVar5 = (long *)(**(code **)*puVar17)(puVar17);
          if (((*puVar1 & 1) == 0) && (iVar4 = __cxa_guard_acquire(puVar1), iVar4 != 0)) {
            uVar6 = FUN_00702ff0();
            *(undefined8 *)puVar2 = uVar6;
            __cxa_guard_release(puVar1);
          }
          for (; plVar5 != (long *)0x0; plVar5 = (long *)*plVar5) {
            if (plVar5 == (long *)puVar2) {
              puVar17 = puVar17 + -10;
              goto LAB_00704f50;
            }
          }
        }
        puVar17 = (undefined8 *)0x0;
LAB_00704f50:
        puVar18 = *(undefined8 **)(*plVar11 + 0x60);
        plVar5 = (long *)(**(code **)*puVar18)(puVar18);
        if (((*puVar1 & 1) == 0) && (iVar4 = __cxa_guard_acquire(puVar1), iVar4 != 0)) {
          uVar6 = FUN_00702ff0();
          *(undefined8 *)puVar2 = uVar6;
          __cxa_guard_release(puVar1);
        }
        for (; plVar5 != (long *)puVar2; plVar5 = (long *)*plVar5) {
        }
        if (*(int *)(puVar18 + 0x2b) <= *(int *)(puVar17 + 0x35)) goto LAB_0070506c;
        plVar5 = plVar7;
        if (*plVar7 != 0) {
          (**(code **)(*(long *)(*plVar7 + 0x48) + 0x18))();
          *plVar7 = 0;
        }
      }
    }
    plVar7 = plVar16;
LAB_0070506c:
    if (*plVar7 != 0) {
      (**(code **)(*(long *)(*plVar7 + 0x48) + 0x18))();
      *plVar7 = 0;
    }
    *plVar7 = lVar14;
  }
  plVar11 = plVar10;
  plVar10 = plVar10 + 1;
  goto joined_r0x00704da4;
joined_r0x00704c7c:
  if (plVar5 == (long *)0x0) goto LAB_00704868;
  if (plVar5 == (long *)puVar2) {
    puVar17 = puVar17 + -10;
    goto LAB_0070486c;
  }
  plVar5 = (long *)*plVar5;
  goto joined_r0x00704c7c;
LAB_00704868:
  puVar17 = (undefined8 *)0x0;
LAB_0070486c:
  puVar18 = *(undefined8 **)(*plVar11 + 0x60);
  plVar5 = (long *)(**(code **)*puVar18)(puVar18);
  if (((*puVar1 & 1) == 0) && (iVar4 = __cxa_guard_acquire(puVar1), iVar4 != 0)) {
    uVar6 = FUN_00702ff0();
    *(undefined8 *)puVar2 = uVar6;
    __cxa_guard_release(puVar1);
  }
  for (; plVar5 != (long *)puVar2; plVar5 = (long *)*plVar5) {
  }
  if (*(int *)(puVar18 + 0x2b) <= *(int *)(puVar17 + 0x35)) {
    do {
      if (plVar10 == plVar11) {
        return;
      }
      if ((*plVar16 != 0) &&
         (puVar17 = *(undefined8 **)(*plVar16 + 0x60), puVar17 != (undefined8 *)0x0)) {
        plVar5 = (long *)(**(code **)*puVar17)(puVar17);
        if (((*puVar1 & 1) == 0) && (iVar4 = __cxa_guard_acquire(puVar1), iVar4 != 0)) {
          uVar6 = FUN_00702ff0();
          *(undefined8 *)puVar2 = uVar6;
          __cxa_guard_release(puVar1);
        }
        for (; plVar5 != (long *)0x0; plVar5 = (long *)*plVar5) {
          if (plVar5 == (long *)puVar2) {
            puVar17 = puVar17 + -10;
            goto LAB_00704934;
          }
        }
      }
      puVar17 = (undefined8 *)0x0;
LAB_00704934:
      puVar18 = *(undefined8 **)(*plVar10 + 0x60);
      plVar5 = (long *)(**(code **)*puVar18)(puVar18);
      if (((*puVar1 & 1) == 0) && (iVar4 = __cxa_guard_acquire(puVar1), iVar4 != 0)) {
        uVar6 = FUN_00702ff0();
        *(undefined8 *)puVar2 = uVar6;
        __cxa_guard_release(puVar1);
      }
      for (; plVar5 != (long *)puVar2; plVar5 = (long *)*plVar5) {
      }
      if (*(int *)(puVar17 + 0x35) < *(int *)(puVar18 + 0x2b)) goto LAB_007049c8;
      plVar10 = plVar10 + 1;
    } while( true );
  }
joined_r0x00704a04:
  if (plVar10 == plVar11) {
    return;
  }
LAB_00704a10:
  do {
    param_1 = plVar10;
    if ((*plVar16 != 0) &&
       (puVar17 = *(undefined8 **)(*plVar16 + 0x60), puVar17 != (undefined8 *)0x0)) {
      plVar10 = (long *)(**(code **)*puVar17)(puVar17);
      if (((*puVar1 & 1) == 0) && (iVar4 = __cxa_guard_acquire(puVar1), iVar4 != 0)) {
        uVar6 = FUN_00702ff0();
        *(undefined8 *)puVar2 = uVar6;
        __cxa_guard_release(puVar1);
      }
      for (; plVar10 != (long *)0x0; plVar10 = (long *)*plVar10) {
        if (plVar10 == (long *)puVar2) {
          puVar17 = puVar17 + -10;
          goto LAB_00704a58;
        }
      }
    }
    puVar17 = (undefined8 *)0x0;
LAB_00704a58:
    puVar18 = *(undefined8 **)(*param_1 + 0x60);
    plVar10 = (long *)(**(code **)*puVar18)(puVar18);
    if (((*puVar1 & 1) == 0) && (iVar4 = __cxa_guard_acquire(puVar1), iVar4 != 0)) {
      uVar6 = FUN_00702ff0();
      *(undefined8 *)puVar2 = uVar6;
      __cxa_guard_release(puVar1);
    }
    for (; plVar10 != (long *)puVar2; plVar10 = (long *)*plVar10) {
    }
    plVar10 = param_1 + 1;
  } while (*(int *)(puVar18 + 0x2b) <= *(int *)(puVar17 + 0x35));
  do {
    plVar11 = plVar11 + -1;
    if ((*plVar16 != 0) &&
       (puVar17 = *(undefined8 **)(*plVar16 + 0x60), puVar17 != (undefined8 *)0x0)) {
      plVar5 = (long *)(**(code **)*puVar17)(puVar17);
      if (((*puVar1 & 1) == 0) && (iVar4 = __cxa_guard_acquire(puVar1), iVar4 != 0)) {
        uVar6 = FUN_00702ff0();
        *(undefined8 *)puVar2 = uVar6;
        __cxa_guard_release(puVar1);
      }
      for (; plVar5 != (long *)0x0; plVar5 = (long *)*plVar5) {
        if (plVar5 == (long *)puVar2) {
          puVar17 = puVar17 + -10;
          goto LAB_00704b44;
        }
      }
    }
    puVar17 = (undefined8 *)0x0;
LAB_00704b44:
    puVar18 = *(undefined8 **)(*plVar11 + 0x60);
    plVar5 = (long *)(**(code **)*puVar18)(puVar18);
    if (((*puVar1 & 1) == 0) && (iVar4 = __cxa_guard_acquire(puVar1), iVar4 != 0)) {
      uVar6 = FUN_00702ff0();
      *(undefined8 *)puVar2 = uVar6;
      __cxa_guard_release(puVar1);
    }
    for (; plVar5 != (long *)puVar2; plVar5 = (long *)*plVar5) {
    }
  } while (*(int *)(puVar17 + 0x35) < *(int *)(puVar18 + 0x2b));
  if (param_1 < plVar11) {
    lVar15 = *param_1;
    *param_1 = 0;
    lVar14 = *plVar11;
    *plVar11 = 0;
    *param_1 = lVar14;
    if (*plVar11 != 0) {
      (**(code **)(*(long *)(*plVar11 + 0x48) + 0x18))();
      *plVar11 = 0;
    }
    *plVar11 = lVar15;
    goto LAB_00704a10;
  }
  uVar12 = 4;
LAB_00704c18:
  if ((1 << (ulong)uVar12 & 0x15U) == 0) {
    return;
  }
  goto LAB_007041ec;
LAB_007049c8:
  lVar15 = *plVar10;
  *plVar10 = 0;
  lVar14 = *plVar11;
  *plVar11 = 0;
  *plVar10 = lVar14;
  if (*plVar11 != 0) {
    (**(code **)(*(long *)(*plVar11 + 0x48) + 0x18))();
    *plVar11 = 0;
  }
  plVar10 = plVar10 + 1;
  *plVar11 = lVar15;
  goto joined_r0x00704a04;
code_r0x007047b0:
  param_1 = plVar19 + 1;
  if ((uVar13 & 1) == 0) {
LAB_007047b4:
    if ((long)local_78 - (long)plVar19 <= (long)plVar19 - (long)plVar16) {
      FUN_007041a0(plVar19 + 1,local_78);
      param_1 = plVar16;
      local_78 = plVar19;
      goto LAB_007041ec;
    }
    FUN_007041a0(plVar16,plVar19);
    param_1 = plVar19 + 1;
  }
  goto LAB_00704208;
joined_r0x00705178:
  if (plVar11 == (long *)0x0) {
LAB_00704cdc:
    puVar17 = (undefined8 *)0x0;
LAB_00704ce0:
    puVar18 = *(undefined8 **)(*plVar16 + 0x60);
    plVar11 = (long *)(**(code **)*puVar18)(puVar18);
    if (((*puVar1 & 1) == 0) && (iVar4 = __cxa_guard_acquire(PTR_DAT_02715888), iVar4 != 0)) {
      uVar6 = FUN_00702ff0();
      *(undefined8 *)puVar2 = uVar6;
      __cxa_guard_release(PTR_DAT_02715888);
    }
    for (; plVar11 != (long *)puVar2; plVar11 = (long *)*plVar11) {
    }
    if (*(int *)(puVar17 + 0x35) < *(int *)(puVar18 + 0x2b)) {
      lVar15 = *plVar16;
      *plVar16 = 0;
      lVar14 = local_78[-1];
      local_78[-1] = 0;
      *plVar16 = lVar14;
      if (local_78[-1] != 0) {
        (**(code **)(*(long *)(local_78[-1] + 0x48) + 0x18))();
        local_78[-1] = 0;
      }
      local_78[-1] = lVar15;
    }
    return;
  }
  if (plVar11 == (long *)puVar2) {
    puVar17 = puVar17 + -10;
    goto LAB_00704ce0;
  }
  plVar11 = (long *)*plVar11;
  goto joined_r0x00705178;
}


