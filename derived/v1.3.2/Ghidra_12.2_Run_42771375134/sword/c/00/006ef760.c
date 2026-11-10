/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 006ef760; name: FUN_006ef760
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_006ef760(long *param_1,long *param_2)

{
  bool bVar1;
  int iVar2;
  long *plVar3;
  long *plVar4;
  long *plVar5;
  ulong uVar6;
  long *plVar7;
  long *plVar8;
  uint uVar9;
  ulong uVar10;
  long lVar11;
  long lVar12;
  long *plVar13;
  undefined8 *puVar14;
  undefined8 *puVar15;
  long *plVar16;
  long *local_68;
  
  local_68 = param_2;
LAB_006ef7a4:
  plVar8 = local_68 + -1;
LAB_006ef7c0:
  plVar13 = param_1;
  lVar11 = (long)local_68 - (long)plVar13;
  uVar10 = lVar11 >> 3;
  switch(uVar10) {
  case 0:
  case 1:
    return;
  case 2:
    if ((local_68[-1] == 0) ||
       (puVar14 = *(undefined8 **)(local_68[-1] + 0x60), puVar14 == (undefined8 *)0x0))
    goto LAB_006effd4;
    plVar8 = (long *)(**(code **)*puVar14)(puVar14);
    plVar7 = (long *)FUN_006f10c0();
    if (plVar8 == (long *)0x0) goto LAB_006effd4;
    goto LAB_006effc4;
  case 3:
    FUN_006f0370(plVar13,plVar13 + 1,plVar8);
    return;
  case 4:
    FUN_006f06f0(plVar13,plVar13 + 1,plVar13 + 2,plVar8);
    return;
  case 5:
    FUN_006f0980(plVar13,plVar13 + 1,plVar13 + 2,plVar13 + 3,plVar8);
    return;
  default:
    if (lVar11 < 0x38) {
      FUN_006f0370(plVar13,plVar13 + 1,plVar13 + 2);
      plVar8 = plVar13 + 2;
      plVar7 = plVar13 + 3;
      goto joined_r0x006f0074;
    }
    uVar6 = uVar10;
    if ((long)uVar10 < 0) {
      uVar6 = uVar10 + 1;
    }
    plVar7 = (long *)((long)plVar13 + (uVar6 & 0x3ffffffffffffffe) * 4);
    if (lVar11 < 0x1f39) {
      iVar2 = FUN_006f0370(plVar13,plVar7,plVar8);
      lVar11 = *plVar13;
    }
    else {
      uVar6 = uVar10 + 3;
      if (-1 < (long)uVar10) {
        uVar6 = uVar10;
      }
      lVar11 = (uVar6 & 0x7ffffffffffffffc) * 2;
      iVar2 = FUN_006f0980(plVar13,(long)plVar13 + lVar11,plVar7,(long)plVar7 + lVar11,plVar8);
      lVar11 = *plVar13;
    }
    if ((lVar11 != 0) && (puVar14 = *(undefined8 **)(lVar11 + 0x60), puVar14 != (undefined8 *)0x0))
    {
      plVar3 = (long *)(**(code **)*puVar14)(puVar14);
      lVar11 = FUN_006f10c0();
      for (; plVar3 != (long *)0x0; plVar3 = (long *)*plVar3) {
        if (plVar3 == (long *)lVar11) {
          puVar14 = puVar14 + -10;
          goto LAB_006ef888;
        }
      }
    }
    puVar14 = (undefined8 *)0x0;
LAB_006ef888:
    puVar15 = *(undefined8 **)(*plVar7 + 0x60);
    plVar3 = (long *)(**(code **)*puVar15)(puVar15);
    lVar11 = FUN_006f10c0();
    for (; plVar3 != (long *)lVar11; plVar3 = (long *)*plVar3) {
    }
    plVar3 = plVar8;
    if (*(int *)(puVar15 + 0x1e) <= *(int *)(puVar14 + 0x28)) {
      do {
        plVar3 = plVar3 + -1;
        if (plVar13 == plVar3) {
          plVar7 = plVar13 + 1;
          if ((*plVar13 == 0) ||
             (puVar14 = *(undefined8 **)(*plVar13 + 0x60), puVar14 == (undefined8 *)0x0))
          goto LAB_006efc94;
          plVar3 = (long *)(**(code **)*puVar14)(puVar14);
          plVar4 = (long *)FUN_006f10c0();
          if (plVar3 == (long *)0x0) goto LAB_006efc94;
          goto LAB_006efc84;
        }
        if ((*plVar3 != 0) &&
           (puVar14 = *(undefined8 **)(*plVar3 + 0x60), puVar14 != (undefined8 *)0x0)) {
          plVar4 = (long *)(**(code **)*puVar14)(puVar14);
          lVar11 = FUN_006f10c0();
          for (; plVar4 != (long *)0x0; plVar4 = (long *)*plVar4) {
            if (plVar4 == (long *)lVar11) {
              puVar14 = puVar14 + -10;
              goto LAB_006ef9fc;
            }
          }
        }
        puVar14 = (undefined8 *)0x0;
LAB_006ef9fc:
        puVar15 = *(undefined8 **)(*plVar7 + 0x60);
        plVar4 = (long *)(**(code **)*puVar15)(puVar15);
        lVar11 = FUN_006f10c0();
        for (; plVar4 != (long *)lVar11; plVar4 = (long *)*plVar4) {
        }
      } while (*(int *)(puVar15 + 0x1e) <= *(int *)(puVar14 + 0x28));
      lVar12 = *plVar13;
      *plVar13 = 0;
      lVar11 = *plVar3;
      *plVar3 = 0;
      *plVar13 = lVar11;
      if (*plVar3 != 0) {
        (**(code **)(*(long *)(*plVar3 + 0x48) + 0x18))();
        *plVar3 = 0;
      }
      iVar2 = iVar2 + 1;
      *plVar3 = lVar12;
      plVar4 = plVar13 + 1;
      if (plVar3 <= plVar13 + 1) goto LAB_006ef8dc;
LAB_006efa94:
      do {
        plVar16 = plVar4;
        if ((*plVar16 != 0) &&
           (puVar14 = *(undefined8 **)(*plVar16 + 0x60), puVar14 != (undefined8 *)0x0)) {
          plVar4 = (long *)(**(code **)*puVar14)(puVar14);
          lVar11 = FUN_006f10c0();
          for (; plVar4 != (long *)0x0; plVar4 = (long *)*plVar4) {
            if (plVar4 == (long *)lVar11) {
              puVar14 = puVar14 + -10;
              goto LAB_006efad8;
            }
          }
        }
        puVar14 = (undefined8 *)0x0;
LAB_006efad8:
        puVar15 = *(undefined8 **)(*plVar7 + 0x60);
        plVar4 = (long *)(**(code **)*puVar15)(puVar15);
        lVar11 = FUN_006f10c0();
        for (; plVar4 != (long *)lVar11; plVar4 = (long *)*plVar4) {
        }
        plVar4 = plVar16 + 1;
      } while (*(int *)(puVar14 + 0x28) < *(int *)(puVar15 + 0x1e));
      do {
        plVar3 = plVar3 + -1;
        if ((*plVar3 != 0) &&
           (puVar14 = *(undefined8 **)(*plVar3 + 0x60), puVar14 != (undefined8 *)0x0)) {
          plVar5 = (long *)(**(code **)*puVar14)(puVar14);
          lVar11 = FUN_006f10c0();
          for (; plVar5 != (long *)0x0; plVar5 = (long *)*plVar5) {
            if (plVar5 == (long *)lVar11) {
              puVar14 = puVar14 + -10;
              goto LAB_006efb74;
            }
          }
        }
        puVar14 = (undefined8 *)0x0;
LAB_006efb74:
        puVar15 = *(undefined8 **)(*plVar7 + 0x60);
        plVar5 = (long *)(**(code **)*puVar15)(puVar15);
        lVar11 = FUN_006f10c0();
        for (; plVar5 != (long *)lVar11; plVar5 = (long *)*plVar5) {
        }
      } while (*(int *)(puVar15 + 0x1e) <= *(int *)(puVar14 + 0x28));
      if (plVar16 <= plVar3) {
        lVar12 = *plVar16;
        *plVar16 = 0;
        lVar11 = *plVar3;
        *plVar3 = 0;
        *plVar16 = lVar11;
        if (*plVar3 != 0) {
          (**(code **)(*(long *)(*plVar3 + 0x48) + 0x18))();
          *plVar3 = 0;
        }
        *plVar3 = lVar12;
        iVar2 = iVar2 + 1;
        plVar5 = plVar3;
        if (plVar7 != plVar16) {
          plVar5 = plVar7;
        }
        plVar7 = plVar5;
        goto LAB_006efa94;
      }
      if (plVar16 == plVar7) goto LAB_006efc04;
LAB_006ef8e8:
      if ((*plVar7 != 0) &&
         (puVar14 = *(undefined8 **)(*plVar7 + 0x60), puVar14 != (undefined8 *)0x0)) {
        plVar3 = (long *)(**(code **)*puVar14)(puVar14);
        lVar11 = FUN_006f10c0();
        for (; plVar3 != (long *)0x0; plVar3 = (long *)*plVar3) {
          if (plVar3 == (long *)lVar11) {
            puVar14 = puVar14 + -10;
            goto LAB_006ef928;
          }
        }
      }
      puVar14 = (undefined8 *)0x0;
LAB_006ef928:
      puVar15 = *(undefined8 **)(*plVar16 + 0x60);
      plVar3 = (long *)(**(code **)*puVar15)(puVar15);
      lVar11 = FUN_006f10c0();
      for (; plVar3 != (long *)lVar11; plVar3 = (long *)*plVar3) {
      }
      if (*(int *)(puVar15 + 0x1e) <= *(int *)(puVar14 + 0x28)) goto LAB_006efc04;
      lVar12 = *plVar16;
      *plVar16 = 0;
      lVar11 = *plVar7;
      *plVar7 = 0;
      *plVar16 = lVar11;
      if (*plVar7 != 0) {
        (**(code **)(*(long *)(*plVar7 + 0x48) + 0x18))();
        *plVar7 = 0;
      }
      *plVar7 = lVar12;
      if (iVar2 == -1) goto LAB_006efc08;
      goto LAB_006efc30;
    }
    plVar4 = plVar13 + 1;
    if (plVar13 + 1 < plVar8) goto LAB_006efa94;
LAB_006ef8dc:
    plVar16 = plVar13 + 1;
    if (plVar16 != plVar7) goto LAB_006ef8e8;
LAB_006efc04:
    if (iVar2 != 0) goto LAB_006efc30;
LAB_006efc08:
    uVar10 = FUN_006f0ce0(plVar13,plVar16);
    uVar6 = FUN_006f0ce0(plVar16 + 1,local_68);
    if ((uVar6 & 1) == 0) goto code_r0x006efc2c;
    bVar1 = (uVar10 & 1) == 0;
    if (bVar1) {
      local_68 = plVar16;
    }
    uVar9 = 1;
    if (bVar1) {
      uVar9 = 2;
    }
    param_1 = plVar13;
    if (4 < uVar9) {
      return;
    }
  }
  goto LAB_006eff38;
joined_r0x006f0074:
  if (plVar7 == local_68) {
    return;
  }
  if ((*plVar7 != 0) && (puVar14 = *(undefined8 **)(*plVar7 + 0x60), puVar14 != (undefined8 *)0x0))
  {
    plVar3 = (long *)(**(code **)*puVar14)(puVar14);
    lVar11 = FUN_006f10c0();
    for (; plVar3 != (long *)0x0; plVar3 = (long *)*plVar3) {
      if (plVar3 == (long *)lVar11) {
        puVar14 = puVar14 + -10;
        goto LAB_006f00cc;
      }
    }
  }
  puVar14 = (undefined8 *)0x0;
LAB_006f00cc:
  puVar15 = *(undefined8 **)(*plVar8 + 0x60);
  plVar3 = (long *)(**(code **)*puVar15)(puVar15);
  lVar11 = FUN_006f10c0();
  for (; plVar3 != (long *)lVar11; plVar3 = (long *)*plVar3) {
  }
  if (*(int *)(puVar14 + 0x28) < *(int *)(puVar15 + 0x1e)) {
    lVar11 = *plVar7;
    *plVar7 = 0;
    plVar3 = plVar7;
    if (lVar11 == 0) {
      while( true ) {
        plVar4 = plVar8;
        lVar12 = *plVar4;
        *plVar4 = 0;
        *plVar3 = lVar12;
        if (plVar4 == plVar13) break;
        plVar8 = plVar4 + -1;
        puVar14 = *(undefined8 **)(*plVar8 + 0x60);
        plVar3 = (long *)(**(code **)*puVar14)(puVar14);
        lVar12 = FUN_006f10c0();
        for (; plVar3 != (long *)lVar12; plVar3 = (long *)*plVar3) {
        }
        if (*(int *)(puVar14 + 0x1e) <= _DAT_00000140) goto LAB_006f0280;
        plVar3 = plVar4;
        if (*plVar4 != 0) {
          (**(code **)(*(long *)(*plVar4 + 0x48) + 0x18))();
          *plVar4 = 0;
        }
      }
    }
    else {
      while( true ) {
        plVar4 = plVar8;
        lVar12 = *plVar4;
        *plVar4 = 0;
        *plVar3 = lVar12;
        if (plVar4 == plVar13) break;
        puVar14 = *(undefined8 **)(lVar11 + 0x60);
        plVar8 = plVar4 + -1;
        if (puVar14 != (undefined8 *)0x0) {
          plVar3 = (long *)(**(code **)*puVar14)(puVar14);
          lVar12 = FUN_006f10c0();
          for (; plVar3 != (long *)0x0; plVar3 = (long *)*plVar3) {
            if (plVar3 == (long *)lVar12) {
              puVar14 = puVar14 + -10;
              goto LAB_006f01a8;
            }
          }
        }
        puVar14 = (undefined8 *)0x0;
LAB_006f01a8:
        puVar15 = *(undefined8 **)(*plVar8 + 0x60);
        plVar3 = (long *)(**(code **)*puVar15)(puVar15);
        lVar12 = FUN_006f10c0();
        for (; plVar3 != (long *)lVar12; plVar3 = (long *)*plVar3) {
        }
        if (*(int *)(puVar15 + 0x1e) <= *(int *)(puVar14 + 0x28)) goto LAB_006f0280;
        plVar3 = plVar4;
        if (*plVar4 != 0) {
          (**(code **)(*(long *)(*plVar4 + 0x48) + 0x18))();
          *plVar4 = 0;
        }
      }
    }
    plVar4 = plVar13;
LAB_006f0280:
    if (*plVar4 != 0) {
      (**(code **)(*(long *)(*plVar4 + 0x48) + 0x18))();
      *plVar4 = 0;
    }
    *plVar4 = lVar11;
  }
  plVar8 = plVar7;
  plVar7 = plVar7 + 1;
  goto joined_r0x006f0074;
  while (plVar3 = (long *)*plVar3, plVar3 != (long *)0x0) {
LAB_006efc84:
    if (plVar3 == plVar4) {
      puVar14 = puVar14 + -10;
      goto LAB_006efc98;
    }
  }
LAB_006efc94:
  puVar14 = (undefined8 *)0x0;
LAB_006efc98:
  puVar15 = *(undefined8 **)(*plVar8 + 0x60);
  plVar3 = (long *)(**(code **)*puVar15)(puVar15);
  lVar11 = FUN_006f10c0();
  for (; plVar3 != (long *)lVar11; plVar3 = (long *)*plVar3) {
  }
  if (*(int *)(puVar15 + 0x1e) <= *(int *)(puVar14 + 0x28)) {
    do {
      if (plVar7 == plVar8) {
        return;
      }
      if ((*plVar13 != 0) &&
         (puVar14 = *(undefined8 **)(*plVar13 + 0x60), puVar14 != (undefined8 *)0x0)) {
        plVar3 = (long *)(**(code **)*puVar14)(puVar14);
        lVar11 = FUN_006f10c0();
        for (; plVar3 != (long *)0x0; plVar3 = (long *)*plVar3) {
          if (plVar3 == (long *)lVar11) {
            puVar14 = puVar14 + -10;
            goto LAB_006efd34;
          }
        }
      }
      puVar14 = (undefined8 *)0x0;
LAB_006efd34:
      puVar15 = *(undefined8 **)(*plVar7 + 0x60);
      plVar3 = (long *)(**(code **)*puVar15)(puVar15);
      lVar11 = FUN_006f10c0();
      for (; plVar3 != (long *)lVar11; plVar3 = (long *)*plVar3) {
      }
      if (*(int *)(puVar14 + 0x28) < *(int *)(puVar15 + 0x1e)) goto LAB_006efd84;
      plVar7 = plVar7 + 1;
    } while( true );
  }
joined_r0x006efdbc:
  if (plVar7 == plVar8) {
    return;
  }
LAB_006efdc8:
  do {
    param_1 = plVar7;
    if ((*plVar13 != 0) &&
       (puVar14 = *(undefined8 **)(*plVar13 + 0x60), puVar14 != (undefined8 *)0x0)) {
      plVar7 = (long *)(**(code **)*puVar14)(puVar14);
      lVar11 = FUN_006f10c0();
      for (; plVar7 != (long *)0x0; plVar7 = (long *)*plVar7) {
        if (plVar7 == (long *)lVar11) {
          puVar14 = puVar14 + -10;
          goto LAB_006efe0c;
        }
      }
    }
    puVar14 = (undefined8 *)0x0;
LAB_006efe0c:
    puVar15 = *(undefined8 **)(*param_1 + 0x60);
    plVar7 = (long *)(**(code **)*puVar15)(puVar15);
    lVar11 = FUN_006f10c0();
    for (; plVar7 != (long *)lVar11; plVar7 = (long *)*plVar7) {
    }
    plVar7 = param_1 + 1;
  } while (*(int *)(puVar15 + 0x1e) <= *(int *)(puVar14 + 0x28));
  do {
    plVar8 = plVar8 + -1;
    if ((*plVar13 != 0) &&
       (puVar14 = *(undefined8 **)(*plVar13 + 0x60), puVar14 != (undefined8 *)0x0)) {
      plVar3 = (long *)(**(code **)*puVar14)(puVar14);
      lVar11 = FUN_006f10c0();
      for (; plVar3 != (long *)0x0; plVar3 = (long *)*plVar3) {
        if (plVar3 == (long *)lVar11) {
          puVar14 = puVar14 + -10;
          goto LAB_006efeac;
        }
      }
    }
    puVar14 = (undefined8 *)0x0;
LAB_006efeac:
    puVar15 = *(undefined8 **)(*plVar8 + 0x60);
    plVar3 = (long *)(**(code **)*puVar15)(puVar15);
    lVar11 = FUN_006f10c0();
    for (; plVar3 != (long *)lVar11; plVar3 = (long *)*plVar3) {
    }
  } while (*(int *)(puVar14 + 0x28) < *(int *)(puVar15 + 0x1e));
  if (param_1 < plVar8) {
    lVar12 = *param_1;
    *param_1 = 0;
    lVar11 = *plVar8;
    *plVar8 = 0;
    *param_1 = lVar11;
    if (*plVar8 != 0) {
      (**(code **)(*(long *)(*plVar8 + 0x48) + 0x18))();
      *plVar8 = 0;
    }
    *plVar8 = lVar12;
    goto LAB_006efdc8;
  }
  uVar9 = 4;
LAB_006eff38:
  if ((1 << (ulong)uVar9 & 0x15U) == 0) {
    return;
  }
  goto LAB_006ef7a4;
LAB_006efd84:
  lVar12 = *plVar7;
  *plVar7 = 0;
  lVar11 = *plVar8;
  *plVar8 = 0;
  *plVar7 = lVar11;
  if (*plVar8 != 0) {
    (**(code **)(*(long *)(*plVar8 + 0x48) + 0x18))();
    *plVar8 = 0;
  }
  plVar7 = plVar7 + 1;
  *plVar8 = lVar12;
  goto joined_r0x006efdbc;
code_r0x006efc2c:
  param_1 = plVar16 + 1;
  if ((uVar10 & 1) == 0) {
LAB_006efc30:
    if ((long)local_68 - (long)plVar16 <= (long)plVar16 - (long)plVar13) {
      FUN_006ef760(plVar16 + 1,local_68);
      param_1 = plVar13;
      local_68 = plVar16;
      goto LAB_006ef7a4;
    }
    FUN_006ef760(plVar13,plVar16);
    param_1 = plVar16 + 1;
  }
  goto LAB_006ef7c0;
  while (plVar8 = (long *)*plVar8, plVar8 != (long *)0x0) {
LAB_006effc4:
    if (plVar8 == plVar7) {
      puVar14 = puVar14 + -10;
      goto LAB_006effd8;
    }
  }
LAB_006effd4:
  puVar14 = (undefined8 *)0x0;
LAB_006effd8:
  puVar15 = *(undefined8 **)(*plVar13 + 0x60);
  plVar8 = (long *)(**(code **)*puVar15)(puVar15);
  lVar11 = FUN_006f10c0();
  for (; plVar8 != (long *)lVar11; plVar8 = (long *)*plVar8) {
  }
  if (*(int *)(puVar14 + 0x28) < *(int *)(puVar15 + 0x1e)) {
    lVar12 = *plVar13;
    *plVar13 = 0;
    lVar11 = local_68[-1];
    local_68[-1] = 0;
    *plVar13 = lVar11;
    if (local_68[-1] != 0) {
      (**(code **)(*(long *)(local_68[-1] + 0x48) + 0x18))();
      local_68[-1] = 0;
    }
    local_68[-1] = lVar12;
  }
  return;
}


