/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00e0a910; name: FUN_00e0a910
 */


void FUN_00e0a910(long param_1,ulong *param_2,int param_3,ulong param_4)

{
  int *piVar1;
  int iVar2;
  char cVar3;
  undefined *puVar4;
  undefined8 uVar5;
  byte bVar6;
  int iVar7;
  long *plVar8;
  int iVar9;
  ulong uVar10;
  ulong uVar11;
  long lVar12;
  undefined4 uVar13;
  ulong uVar14;
  long *plVar15;
  uint *puVar16;
  ulong uVar17;
  long *plVar18;
  long lVar19;
  long *plVar20;
  ulong *puVar21;
  undefined8 *puVar22;
  undefined8 *puVar23;
  long lVar24;
  undefined8 *puVar25;
  long lVar26;
  undefined8 *puVar27;
  long local_88;
  long local_80;
  undefined8 local_78;
  undefined8 local_70;
  undefined8 local_68;
  
  puVar21 = (ulong *)(param_1 + 0xf0);
  uVar10 = *puVar21;
  iVar9 = *(int *)(param_1 + 0x358);
  lVar26 = *(long *)(param_1 + 0x108);
  uVar11 = uVar10;
  if (lVar26 != 0) {
    (**(code **)(*(long *)(lVar26 + 0x48) + 0x10))();
    uVar11 = *puVar21;
  }
  *(int *)(param_1 + 0x358) = param_3;
  *(undefined1 *)(param_1 + 0x353) = 0;
  iVar2 = *(int *)(param_1 + 0x35c);
  cVar3 = *(char *)(param_1 + 0x354);
  if (*param_2 != uVar11) {
    puVar22 = *(undefined8 **)(param_1 + 0x80);
    *(undefined1 *)(param_1 + 0x355) = 0;
    *(undefined8 *)(param_1 + 0x48) = 0;
    *(undefined8 *)(param_1 + 0xe0) = 0;
    if (*(undefined8 **)(param_1 + 0x88) != puVar22) {
      puVar23 = *(undefined8 **)(param_1 + 0x88);
      do {
        puVar27 = puVar23 + -4;
        puVar25 = (undefined8 *)*puVar27;
        *puVar27 = 0;
        if (puVar25 != (undefined8 *)0x0) {
          (**(code **)*puVar25)(puVar25);
          (**(code **)(*(long *)puVar23[-3] + 0x18))
                    ((long *)puVar23[-3],puVar25,puVar23[-2],puVar23[-1]);
        }
        puVar23 = puVar27;
      } while (puVar22 != puVar27);
    }
    *(undefined8 **)(param_1 + 0x88) = puVar22;
    *(undefined8 *)(param_1 + 0xb8) = *(undefined8 *)(param_1 + 0xb0);
    if ((param_4 & 1) != 0) {
      *(undefined8 *)(param_1 + 0x138) = 0;
      *(undefined8 *)(param_1 + 0x140) = 0;
      *(undefined8 *)(param_1 + 0x110) = 0;
      *(undefined8 *)(param_1 + 0x128) = 0;
      *(undefined8 *)(param_1 + 0x130) = 0;
      *(undefined8 *)(param_1 + 0x118) = 0;
      *(undefined8 *)(param_1 + 0x120) = 0;
    }
    local_88 = 0;
    if (*(char *)param_2[1] == '\0') {
      lVar24 = FUN_006e5e60();
      if (lVar24 != 0) {
        (**(code **)(*(long *)(lVar24 + 0x48) + 0x10))();
      }
      local_88 = lVar24;
    }
    else {
      FUN_006cf520(&local_80,*(undefined8 *)PTR_DAT_02710440);
      local_88 = local_80;
    }
    FUN_006cf0c0(&local_80,&local_88);
    *(long *)(param_1 + 0xf0) = local_80;
    *(undefined8 *)(param_1 + 0xf8) = local_78;
    *(undefined8 *)(param_1 + 0x100) = local_70;
    if (*(long *)(param_1 + 0x108) != 0) {
      (**(code **)(*(long *)(*(long *)(param_1 + 0x108) + 0x48) + 0x18))();
      *(undefined8 *)(param_1 + 0x108) = 0;
    }
    uVar5 = local_68;
    local_68 = 0;
    *(undefined8 *)(param_1 + 0x108) = uVar5;
    if (local_88 != 0) {
      (**(code **)(*(long *)(local_88 + 0x48) + 0x18))();
      local_88 = 0;
    }
    *(undefined8 *)(param_1 + 0x150) = *(undefined8 *)(param_1 + 0x148);
    bVar6 = FUN_00fc6ad0(puVar21);
    *(byte *)(param_1 + 0x350) = bVar6 & 1;
    iVar7 = FUN_00fc6b70(puVar21);
    *(bool *)(param_1 + 0x351) = 0 < iVar7;
    *(bool *)(param_1 + 0x352) = iVar7 == 2;
  }
  puVar4 = PTR_DAT_02710848;
  lVar24 = *(long *)(*(long *)PTR_DAT_02710848 + 0x90);
  if (lVar24 != 0) {
    (**(code **)(*(long *)(lVar24 + 0x48) + 0x10))();
  }
  uVar14 = *(ulong *)(lVar24 + 0x3b8);
  uVar11 = *puVar21;
  if ((uVar14 - 1 & uVar14) == 0) {
    plVar15 = *(long **)(*(long *)(lVar24 + 0x3b0) + (uVar14 - 1 & uVar11) * 8);
    do {
      do {
        plVar15 = (long *)*plVar15;
      } while (uVar11 != plVar15[1]);
    } while (plVar15[2] != uVar11);
  }
  else {
    uVar17 = uVar11;
    if (uVar14 <= uVar11) {
      uVar17 = 0;
      if (uVar14 != 0) {
        uVar17 = uVar11 / uVar14;
      }
      uVar17 = uVar11 - uVar17 * uVar14;
    }
    plVar15 = *(long **)(*(long *)(lVar24 + 0x3b0) + uVar17 * 8);
    do {
      do {
        plVar15 = (long *)*plVar15;
      } while (uVar11 != plVar15[1]);
    } while (plVar15[2] != uVar11);
  }
  puVar16 = *(uint **)(*(long *)((long)plVar15 + 0x38) + 400);
  lVar19 = (long)puVar16 + (ulong)*puVar16;
  *(long *)(param_1 + 0x48) = lVar19;
  uVar14 = *(ulong *)(lVar24 + 0x3b8);
  if ((uVar14 - 1 & uVar14) == 0) {
    plVar15 = *(long **)(*(long *)(lVar24 + 0x3b0) + (uVar14 - 1 & uVar11) * 8);
    do {
      do {
        plVar15 = (long *)*plVar15;
      } while (uVar11 != plVar15[1]);
    } while (plVar15[2] != uVar11);
  }
  else {
    uVar17 = uVar11;
    if (uVar14 <= uVar11) {
      uVar17 = 0;
      if (uVar14 != 0) {
        uVar17 = uVar11 / uVar14;
      }
      uVar17 = uVar11 - uVar17 * uVar14;
    }
    plVar15 = *(long **)(*(long *)(lVar24 + 0x3b0) + uVar17 * 8);
    do {
      do {
        plVar15 = (long *)*plVar15;
      } while (uVar11 != plVar15[1]);
    } while (plVar15[2] != uVar11);
  }
  puVar16 = *(uint **)(*(long *)((long)plVar15 + 0x148) + 400);
  *(ulong *)(param_1 + 0xe0) = (long)puVar16 + (ulong)*puVar16;
  if (lVar19 != 0) {
    FUN_00e0b390(param_1);
  }
  if (lVar24 != 0) {
    (**(code **)(*(long *)(lVar24 + 0x48) + 0x18))((long *)(lVar24 + 0x48));
  }
  if (param_3 - 1U < 2) {
LAB_00e0acac:
    *(undefined4 *)(param_1 + 0x35c) = 4;
  }
  else {
    uVar11 = *param_2;
    if (uVar11 == 0x237593673ceae561) {
      *(undefined4 *)(param_1 + 0x35c) = 3;
    }
    else {
      if (uVar11 == 0x23f8a3e14659241a) goto LAB_00e0acac;
      lVar24 = *(long *)(*(long *)puVar4 + 0x90);
      if (lVar24 != 0) {
        (**(code **)(*(long *)(lVar24 + 0x48) + 0x10))();
        uVar11 = *param_2;
      }
      uVar14 = *(ulong *)(lVar24 + 0x3b8);
      if ((uVar14 - 1 & uVar14) == 0) {
        plVar15 = *(long **)(*(long *)(lVar24 + 0x3b0) + (uVar14 - 1 & uVar11) * 8);
        do {
          do {
            plVar15 = (long *)*plVar15;
          } while (uVar11 != plVar15[1]);
        } while (plVar15[2] != uVar11);
      }
      else {
        uVar17 = uVar11;
        if (uVar14 <= uVar11) {
          uVar17 = 0;
          if (uVar14 != 0) {
            uVar17 = uVar11 / uVar14;
          }
          uVar17 = uVar11 - uVar17 * uVar14;
        }
        plVar15 = *(long **)(*(long *)(lVar24 + 0x3b0) + uVar17 * 8);
        do {
          do {
            plVar15 = (long *)*plVar15;
          } while (uVar11 != plVar15[1]);
        } while (plVar15[2] != uVar11);
      }
      puVar16 = *(uint **)(*(long *)((long)plVar15 + 0x38) + 400);
      piVar1 = (int *)((long)puVar16 + (ulong)*puVar16);
      puVar16 = (uint *)((long)piVar1 + (ulong)*(ushort *)((long)piVar1 + (4 - (long)*piVar1)));
      puVar16 = (uint *)((long)puVar16 + (ulong)*puVar16 + 4);
      piVar1 = (int *)((long)puVar16 + (ulong)*puVar16);
      puVar16 = (uint *)((long)piVar1 + (ulong)*(ushort *)((long)piVar1 + (4 - (long)*piVar1)));
      piVar1 = (int *)((long)puVar16 + (ulong)*puVar16);
      if ((*(ushort *)((long)piVar1 - (long)*piVar1) < 0xd) ||
         (uVar11 = (ulong)((ushort *)((long)piVar1 - (long)*piVar1))[6], uVar11 == 0)) {
LAB_00e0adf0:
        *(undefined4 *)(param_1 + 0x35c) = 1;
        *(undefined1 *)(param_1 + 0x355) = 1;
      }
      else {
        iVar7 = *(int *)((long)piVar1 + uVar11);
        if (iVar7 - 1U < 5) {
          uVar13 = 2;
        }
        else {
          if (iVar7 == 6) {
            *(undefined4 *)(param_1 + 0x35c) = 3;
            *(undefined1 *)(param_1 + 0x355) = 1;
            goto joined_r0x00e0adfc;
          }
          if (iVar7 == 0) goto LAB_00e0adf0;
          uVar13 = 1;
        }
        *(undefined4 *)(param_1 + 0x35c) = uVar13;
      }
joined_r0x00e0adfc:
      if (lVar24 != 0) {
        (**(code **)(*(long *)(lVar24 + 0x48) + 0x18))((long *)(lVar24 + 0x48));
      }
    }
  }
  if (iVar2 != 0) {
    lVar24 = 2;
    if (iVar2 - 2U < 3) {
      lVar24 = 3;
    }
    lVar19 = *(long *)(*(long *)PTR_DAT_027194e0 + 0x108);
    if (lVar19 != 0) {
      puVar22 = *(undefined8 **)(*(long *)PTR_DAT_027194e0 + 0x100);
      lVar19 = lVar19 << 3;
      do {
        uVar11 = (**(code **)(*(long *)*puVar22 + 0x40))();
        if ((uVar11 & 1) == 0) {
          FUN_00dcf110(*puVar22);
        }
        puVar22 = puVar22 + 1;
        lVar19 = lVar19 + -8;
      } while (lVar19 != 0);
    }
    lVar24 = *(long *)PTR_DAT_0271e8d0 + lVar24 * 0x10;
    *(uint *)(lVar24 + 0x1a8) = (uint)(iVar9 != 0);
    *(ulong *)(lVar24 + 0x1b0) = uVar10;
  }
  uVar13 = 2;
  if (*(int *)(param_1 + 0x35c) - 2U < 3) {
    uVar13 = 3;
  }
  *(undefined4 *)(param_1 + 0x360) = uVar13;
  if (((*(int *)(param_1 + 0x35c) == 3) || (*(int *)(param_1 + 0x358) == 2)) ||
     ((*(int *)(param_1 + 0x358) == 1 &&
      (uVar11 = FUN_01002950(*(undefined8 *)PTR_DAT_027108d0), (uVar11 & 1) != 0)))) {
    *(undefined1 *)(param_1 + 0x354) = 1;
LAB_00e0aef0:
    lVar24 = *(long *)PTR_DAT_0271e8d0;
    *(undefined8 *)(lVar24 + 0x1d8) = 0;
    *(undefined8 *)(lVar24 + 0x1e0) = 0xcbf29ce484222645;
    if (*(long *)(lVar24 + 0x198) != 0) {
      plVar15 = (long *)*(long *)(lVar24 + 0x178);
      while (plVar15 != (long *)0x0) {
        puVar22 = (undefined8 *)plVar15[3];
        lVar19 = *plVar15;
        plVar15[3] = 0;
        if (puVar22 != (undefined8 *)0x0) {
          (**(code **)*puVar22)(puVar22);
          (**(code **)(*(long *)plVar15[4] + 0x18))
                    ((long *)plVar15[4],puVar22,plVar15[5],plVar15[6]);
        }
        (**(code **)(**(long **)(lVar24 + 0x180) + 0x18))(*(long **)(lVar24 + 0x180),plVar15,0x38,8)
        ;
        plVar15 = (long *)lVar19;
      }
      uVar11 = *(ulong *)(lVar24 + 0x158);
      *(undefined8 *)(lVar24 + 0x178) = 0;
      if (uVar11 != 0) {
        uVar10 = uVar11 & 3;
        if (uVar11 - 1 < 3) {
          lVar19 = 0;
        }
        else {
          lVar19 = 0;
          do {
            lVar12 = lVar19 * 8;
            lVar19 = lVar19 + 4;
            *(undefined8 *)(*(long *)(lVar24 + 0x150) + lVar12) = 0;
            *(undefined8 *)(*(long *)(lVar24 + 0x150) + lVar12 + 8) = 0;
            *(undefined8 *)(*(long *)(lVar24 + 0x150) + lVar12 + 0x10) = 0;
            *(undefined8 *)(*(long *)(lVar24 + 0x150) + lVar12 + 0x18) = 0;
          } while (uVar11 - uVar10 != lVar19);
        }
        if (uVar10 != 0) {
          lVar19 = lVar19 << 3;
          lVar12 = -uVar10;
          do {
            *(undefined8 *)(*(long *)(lVar24 + 0x150) + lVar19) = 0;
            lVar19 = lVar19 + 8;
            lVar12 = lVar12 + 1;
          } while (lVar12 != 0);
        }
      }
      *(undefined8 *)(lVar24 + 0x198) = 0;
    }
  }
  else {
    uVar11 = *param_2;
    *(bool *)(param_1 + 0x354) = uVar11 == 0x23f8a3e14659241a;
    if ((cVar3 != '\0') || (uVar11 == 0x23f8a3e14659241a)) goto LAB_00e0aef0;
  }
  puVar4 = PTR_DAT_0271e8d0;
  iVar9 = *(int *)(param_1 + 0x360);
  lVar19 = *(long *)PTR_DAT_0271e8d0;
  lVar24 = lVar19 + (long)iVar9 * 0x10;
  if (*(uint *)(lVar24 + 0x1a8) == (uint)(*(int *)(param_1 + 0x358) != 0) &&
      *(long *)(lVar24 + 0x1b0) == *(long *)(param_1 + 0xf0)) {
LAB_00e0b150:
    if (iVar9 == -1) goto LAB_00e0b20c;
LAB_00e0b158:
    if (*(long *)(lVar19 + (long)iVar9 * 0x58 + 0x90) == 0) goto LAB_00e0b20c;
    *(undefined1 *)(param_1 + 0x353) = 1;
joined_r0x00e0b174:
    if ((iVar9 != 2) || (*(int *)(param_1 + 0x364) == 2)) goto LAB_00e0b330;
  }
  else {
    *(undefined8 *)(lVar24 + 0x1a8) = 0;
    *(undefined8 *)(lVar24 + 0x1b0) = 0xcbf29ce484222645;
    lVar19 = *(long *)puVar4;
    iVar9 = *(int *)(param_1 + 0x360);
    plVar15 = (long *)(lVar19 + (long)iVar9 * 0x58 + 0x90);
    if (*plVar15 == 0) goto LAB_00e0b150;
    lVar24 = (long)iVar9;
    puVar22 = (undefined8 *)(lVar19 + lVar24 * 0x58 + 0x70);
    plVar20 = (long *)*puVar22;
    if (plVar20 != (long *)0x0) {
      do {
        puVar23 = (undefined8 *)plVar20[3];
        plVar18 = (long *)*plVar20;
        plVar20[3] = 0;
        if (puVar23 != (undefined8 *)0x0) {
          (**(code **)*puVar23)(puVar23);
          (**(code **)(*(long *)plVar20[4] + 0x18))
                    ((long *)plVar20[4],puVar23,plVar20[5],plVar20[6]);
        }
        plVar8 = *(long **)(lVar19 + lVar24 * 0x58 + 0x78);
        (**(code **)(*plVar8 + 0x18))(plVar8,plVar20,0x38,8);
        plVar20 = plVar18;
      } while (plVar18 != (long *)0x0);
    }
    *puVar22 = 0;
    uVar11 = *(ulong *)(lVar19 + lVar24 * 0x58 + 0x50);
    if (uVar11 != 0) {
      plVar20 = (long *)(lVar19 + lVar24 * 0x58 + 0x48);
      uVar10 = uVar11 & 3;
      if (uVar11 - 1 < 3) {
        lVar24 = 0;
      }
      else {
        lVar24 = 0;
        do {
          lVar19 = lVar24 * 8;
          lVar24 = lVar24 + 4;
          *(undefined8 *)(*plVar20 + lVar19) = 0;
          *(undefined8 *)(*plVar20 + lVar19 + 8) = 0;
          *(undefined8 *)(*plVar20 + lVar19 + 0x10) = 0;
          *(undefined8 *)(*plVar20 + lVar19 + 0x18) = 0;
        } while (uVar11 - uVar10 != lVar24);
      }
      if (uVar10 != 0) {
        lVar24 = lVar24 << 3;
        lVar19 = -uVar10;
        do {
          *(undefined8 *)(*plVar20 + lVar24) = 0;
          lVar24 = lVar24 + 8;
          lVar19 = lVar19 + 1;
        } while (lVar19 != 0);
      }
    }
    *plVar15 = 0;
    iVar9 = *(int *)(param_1 + 0x360);
    lVar19 = *(long *)puVar4;
    if (iVar9 != -1) goto LAB_00e0b158;
LAB_00e0b20c:
    if (*(char *)(param_1 + 0x353) != '\0') goto joined_r0x00e0b174;
  }
  if (*(int *)(lVar19 + 0x1d8) != 0) {
    *(undefined8 *)(lVar19 + 0x1d8) = 0;
    *(undefined8 *)(lVar19 + 0x1e0) = 0xcbf29ce484222645;
    if (*(long *)(lVar19 + 0x198) != 0) {
      plVar15 = (long *)*(long *)(lVar19 + 0x178);
      while (plVar15 != (long *)0x0) {
        puVar22 = (undefined8 *)plVar15[3];
        lVar24 = *plVar15;
        plVar15[3] = 0;
        if (puVar22 != (undefined8 *)0x0) {
          (**(code **)*puVar22)(puVar22);
          (**(code **)(*(long *)plVar15[4] + 0x18))
                    ((long *)plVar15[4],puVar22,plVar15[5],plVar15[6]);
        }
        (**(code **)(**(long **)(lVar19 + 0x180) + 0x18))(*(long **)(lVar19 + 0x180),plVar15,0x38,8)
        ;
        plVar15 = (long *)lVar24;
      }
      uVar11 = *(ulong *)(lVar19 + 0x158);
      *(undefined8 *)(lVar19 + 0x178) = 0;
      if (uVar11 != 0) {
        uVar10 = uVar11 & 3;
        if (uVar11 - 1 < 3) {
          lVar24 = 0;
        }
        else {
          lVar24 = 0;
          do {
            lVar12 = lVar24 * 8;
            lVar24 = lVar24 + 4;
            *(undefined8 *)(*(long *)(lVar19 + 0x150) + lVar12) = 0;
            *(undefined8 *)(*(long *)(lVar19 + 0x150) + lVar12 + 8) = 0;
            *(undefined8 *)(*(long *)(lVar19 + 0x150) + lVar12 + 0x10) = 0;
            *(undefined8 *)(*(long *)(lVar19 + 0x150) + lVar12 + 0x18) = 0;
          } while (uVar11 - uVar10 != lVar24);
        }
        if (uVar10 != 0) {
          lVar24 = lVar24 << 3;
          lVar12 = -uVar10;
          do {
            *(undefined8 *)(*(long *)(lVar19 + 0x150) + lVar24) = 0;
            lVar24 = lVar24 + 8;
            lVar12 = lVar12 + 1;
          } while (lVar12 != 0);
        }
      }
      *(undefined8 *)(lVar19 + 0x198) = 0;
    }
  }
LAB_00e0b330:
  if (param_3 == 0) {
    *(undefined4 *)(param_1 + 0x364) = *(undefined4 *)(param_1 + 0x360);
  }
  if (lVar26 != 0) {
    (**(code **)(*(long *)(lVar26 + 0x48) + 0x18))((long *)(lVar26 + 0x48));
  }
  return;
}


