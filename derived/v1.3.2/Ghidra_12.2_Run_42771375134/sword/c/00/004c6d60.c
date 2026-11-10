/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 004c6d60; name: FUN_004c6d60
 */


/* WARNING: Removing unreachable block (ram,0x004c72a0) */
/* WARNING: Removing unreachable block (ram,0x004c6fe8) */

long * FUN_004c6d60(long param_1,undefined8 param_2,long *param_3)

{
  uint uVar1;
  uint uVar2;
  undefined4 uVar3;
  undefined *puVar4;
  undefined *puVar5;
  int iVar6;
  long *plVar7;
  long lVar8;
  undefined8 *puVar9;
  ulong uVar10;
  long lVar11;
  long lVar12;
  long *plVar13;
  undefined8 *puVar14;
  long *plVar15;
  undefined8 *puVar16;
  uint uVar17;
  ulong uVar18;
  uint uVar19;
  char local_64 [4];
  long local_60;
  undefined8 uStack_58;
  
  local_60 = param_1;
  uStack_58 = param_2;
  if (param_3 == (long *)0x0) {
    lVar8 = FUN_0047d760(&local_60);
    if (lVar8 == 0) {
      return (long *)0x0;
    }
    if (*(char *)(lVar8 + 0x3c) == '\0') {
      return (long *)0x0;
    }
    local_64[0] = '\0';
    param_3 = (long *)FUN_0047ae00(lVar8,local_64);
    puVar5 = PTR_DAT_027134f8;
    puVar4 = PTR_DAT_02712e28;
    if (local_64[0] != '\0') {
      if (param_3 == (long *)0x0) {
        return (long *)0x0;
      }
      uVar1 = *(uint *)(PTR_DAT_027134f8 + 8);
      if (uVar1 == 0) {
        if (*(int *)(PTR_DAT_027134f8 + 0xc) == 0) {
          puVar16 = (undefined8 *)FUN_00404690(*(undefined4 *)PTR_DAT_02712e28,0x40);
          if (puVar16 == (undefined8 *)0x0) goto LAB_004c720c;
          puVar9 = *(undefined8 **)puVar5;
          if ((puVar9 == (undefined8 *)0x0) || (puVar9 == puVar16)) {
            *(undefined8 **)puVar5 = puVar16;
            *(undefined4 *)(puVar5 + 0xc) = 8;
          }
          else {
            uVar1 = *(uint *)(puVar5 + 8);
            if (uVar1 != 0) {
              *puVar16 = *puVar9;
              if (uVar1 != 1) {
                if (uVar1 == 2) {
                  lVar11 = 1;
                }
                else {
                  lVar12 = 0;
                  do {
                    lVar11 = lVar12;
                    puVar16[lVar11 + 1] = *(undefined8 *)(*(long *)puVar5 + lVar11 * 8 + 8);
                    puVar16[lVar11 + 2] = *(undefined8 *)(*(long *)puVar5 + lVar11 * 8 + 0x10);
                    lVar12 = lVar11 + 2;
                  } while (((ulong)uVar1 - 1) - (ulong)(~uVar1 & 1) != lVar11 + 2);
                  lVar11 = lVar11 + 3;
                  if ((~uVar1 & 1) == 0) goto LAB_004c6fd0;
                }
                puVar16[lVar11] = *(undefined8 *)(*(long *)puVar5 + lVar11 * 8);
              }
LAB_004c6fd0:
              puVar9 = *(undefined8 **)puVar5;
            }
            FUN_00404870(*(undefined4 *)puVar4,puVar9);
            *(undefined8 **)puVar5 = puVar16;
            *(undefined4 *)(puVar5 + 0xc) = 8;
          }
        }
        plVar7 = (long *)(*(long *)puVar5 + (ulong)*(uint *)(puVar5 + 8) * 8);
        *(uint *)(puVar5 + 8) = *(uint *)(puVar5 + 8) + 1;
        if (plVar7 == (long *)0x0) goto LAB_004c720c;
        *plVar7 = (long)param_3;
        *plVar7 = (long)param_3;
        uVar1 = *(uint *)(puVar5 + 8);
      }
      else {
        puVar16 = *(undefined8 **)PTR_DAT_027134f8;
        uVar17 = uVar1;
        do {
          if (*(int *)(puVar16[uVar17 - 1] + 0x350) <= (int)param_3[0x6a]) break;
          uVar17 = uVar17 - 1;
        } while (uVar17 != 0);
        uVar19 = *(uint *)(PTR_DAT_027134f8 + 0xc);
        if (uVar19 <= uVar1) {
          uVar19 = uVar19 + 8;
          puVar16 = (undefined8 *)FUN_00404690(*(undefined4 *)PTR_DAT_02712e28,(ulong)uVar19 << 3);
          if (puVar16 == (undefined8 *)0x0) goto LAB_004c720c;
          puVar9 = *(undefined8 **)puVar5;
          if ((puVar9 != (undefined8 *)0x0) && (puVar9 != puVar16)) {
            uVar2 = *(uint *)(puVar5 + 8);
            if (uVar2 != 0) {
              *puVar16 = *puVar9;
              if (uVar2 != 1) {
                if (uVar2 == 2) {
                  lVar11 = 1;
                }
                else {
                  lVar12 = 0;
                  do {
                    lVar11 = lVar12;
                    puVar16[lVar11 + 1] = *(undefined8 *)(*(long *)puVar5 + lVar11 * 8 + 8);
                    puVar16[lVar11 + 2] = *(undefined8 *)(*(long *)puVar5 + lVar11 * 8 + 0x10);
                    lVar12 = lVar11 + 2;
                  } while (((ulong)uVar2 - 1) - (ulong)(~uVar2 & 1) != lVar11 + 2);
                  lVar11 = lVar11 + 3;
                  if ((~uVar2 & 1) == 0) goto LAB_004c6ec8;
                }
                puVar16[lVar11] = *(undefined8 *)(*(long *)puVar5 + lVar11 * 8);
              }
LAB_004c6ec8:
              puVar9 = *(undefined8 **)puVar5;
            }
            FUN_00404870(*(undefined4 *)puVar4,puVar9);
          }
          *(undefined8 **)puVar5 = puVar16;
          *(uint *)(puVar5 + 0xc) = uVar19;
        }
        if (uVar19 <= uVar1) {
LAB_004c720c:
          FUN_0047af60(lVar8);
          return (long *)0x0;
        }
        uVar1 = *(uint *)(puVar5 + 8);
        *(uint *)(puVar5 + 8) = uVar1 + 1;
        if (uVar17 < uVar1) {
          plVar15 = puVar16 + uVar1;
          do {
            plVar13 = plVar15 + -1;
            *plVar15 = *plVar13;
            plVar7 = (long *)(*(long *)puVar5 + (ulong)uVar17 * 8);
            plVar15 = plVar13;
          } while (plVar7 < plVar13);
        }
        else {
          plVar7 = puVar16 + uVar17;
        }
        if (plVar7 == (long *)0x0) goto LAB_004c720c;
        *plVar7 = (long)param_3;
        uVar1 = *(uint *)(puVar5 + 8);
      }
      if (uVar1 != 0) {
        uVar10 = (ulong)uVar1;
        uVar18 = 0;
        do {
          plVar7 = *(long **)(*(long *)puVar5 + uVar18 * 8);
          if (((plVar7 != param_3) && (plVar7[9] == 0)) &&
             ((plVar7[0xe] == 0 || (*(long *)(plVar7[0xe] + 0x80) == 0)))) {
            lVar12 = FUN_0047d760(plVar7 + 0xe);
            if (lVar12 == lVar8) {
              FUN_004d0be0(plVar7,param_3,0);
              break;
            }
            uVar10 = (ulong)*(uint *)(puVar5 + 8);
          }
          uVar18 = uVar18 + 1;
        } while (uVar18 < uVar10);
      }
    }
    if (param_3 != (long *)0x0) goto LAB_004c6d88;
    iVar6 = 0;
    if (local_60 != 0) goto LAB_004c6d98;
LAB_004c705c:
    plVar7 = (long *)FUN_00404690(*(undefined4 *)PTR_DAT_02712e28,0x358);
    if (plVar7 == (long *)0x0) {
LAB_004c70b0:
      plVar15 = (long *)0x0;
      goto joined_r0x004c70b4;
    }
    FUN_004d1680(plVar7);
    puVar4 = PTR_DAT_027131f8;
    *(int *)(plVar7 + 0x6a) = iVar6;
    plVar7[0x18] = (long)(puVar4 + 0x168);
    *plVar7 = (long)(puVar4 + 0x10);
    *(byte *)((long)plVar7 + 0x354) = *(byte *)((long)plVar7 + 0x354) & 0xfc;
    plVar15 = plVar7;
  }
  else {
LAB_004c6d88:
    if (local_60 == 0) {
      return param_3;
    }
    iVar6 = (int)param_3[0x6a] + 1;
LAB_004c6d98:
    if ((*(byte *)(local_60 + 0x9a) & 0xe) == 0) goto LAB_004c705c;
    plVar7 = (long *)FUN_00404690(*(undefined4 *)PTR_DAT_02712e28,0x370);
    if (plVar7 == (long *)0x0) goto LAB_004c70b0;
    FUN_004c8050(plVar7,iVar6,local_60,uStack_58);
    plVar15 = plVar7;
joined_r0x004c70b4:
    if (plVar7 == (long *)0x0) {
      return (long *)0x0;
    }
  }
  iVar6 = FUN_004c74a0(plVar7,local_60,uStack_58,param_3);
  puVar5 = PTR_DAT_027134f8;
  puVar4 = PTR_DAT_02712e28;
  if (iVar6 != 1) goto LAB_004c72b4;
  uVar1 = *(uint *)(PTR_DAT_027134f8 + 8);
  if (uVar1 == 0) {
    if (*(int *)(PTR_DAT_027134f8 + 0xc) == 0) {
      puVar16 = (undefined8 *)FUN_00404690(*(undefined4 *)PTR_DAT_02712e28,0x40);
      if (puVar16 == (undefined8 *)0x0) goto LAB_004c72b4;
      puVar9 = *(undefined8 **)puVar5;
      if ((puVar9 == (undefined8 *)0x0) || (puVar9 == puVar16)) {
        *(undefined8 **)puVar5 = puVar16;
        *(undefined4 *)(puVar5 + 0xc) = 8;
      }
      else {
        uVar1 = *(uint *)(puVar5 + 8);
        if (uVar1 != 0) {
          *puVar16 = *puVar9;
          if (uVar1 != 1) {
            if (uVar1 == 2) {
              lVar12 = 1;
            }
            else {
              lVar8 = 0;
              do {
                lVar12 = lVar8;
                puVar16[lVar12 + 1] = *(undefined8 *)(*(long *)puVar5 + lVar12 * 8 + 8);
                puVar16[lVar12 + 2] = *(undefined8 *)(*(long *)puVar5 + lVar12 * 8 + 0x10);
                lVar8 = lVar12 + 2;
              } while (((ulong)uVar1 - 1) - (ulong)(~uVar1 & 1) != lVar12 + 2);
              lVar12 = lVar12 + 3;
              if ((~uVar1 & 1) == 0) goto LAB_004c7288;
            }
            puVar16[lVar12] = *(undefined8 *)(*(long *)puVar5 + lVar12 * 8);
          }
LAB_004c7288:
          puVar9 = *(undefined8 **)puVar5;
        }
        FUN_00404870(*(undefined4 *)puVar4,puVar9);
        *(undefined8 **)puVar5 = puVar16;
        *(undefined4 *)(puVar5 + 0xc) = 8;
      }
    }
    puVar16 = (undefined8 *)(*(long *)puVar5 + (ulong)*(uint *)(puVar5 + 8) * 8);
    *(uint *)(puVar5 + 8) = *(uint *)(puVar5 + 8) + 1;
    if (puVar16 != (undefined8 *)0x0) {
      *puVar16 = plVar15;
      *puVar16 = plVar7;
      return plVar7;
    }
    goto LAB_004c72b4;
  }
  puVar16 = *(undefined8 **)PTR_DAT_027134f8;
  uVar17 = uVar1;
  do {
    if (*(int *)(puVar16[uVar17 - 1] + 0x350) <= (int)plVar7[0x6a]) break;
    uVar17 = uVar17 - 1;
  } while (uVar17 != 0);
  uVar19 = *(uint *)(PTR_DAT_027134f8 + 0xc);
  if (uVar19 <= uVar1) {
    uVar19 = uVar19 + 8;
    puVar16 = (undefined8 *)FUN_00404690(*(undefined4 *)PTR_DAT_02712e28,(ulong)uVar19 << 3);
    if (puVar16 == (undefined8 *)0x0) goto LAB_004c72b4;
    puVar9 = *(undefined8 **)puVar5;
    if ((puVar9 != (undefined8 *)0x0) && (puVar9 != puVar16)) {
      uVar2 = *(uint *)(puVar5 + 8);
      if (uVar2 != 0) {
        *puVar16 = *puVar9;
        if (uVar2 != 1) {
          if (uVar2 == 2) {
            lVar12 = 1;
          }
          else {
            lVar8 = 0;
            do {
              lVar12 = lVar8;
              puVar16[lVar12 + 1] = *(undefined8 *)(*(long *)puVar5 + lVar12 * 8 + 8);
              puVar16[lVar12 + 2] = *(undefined8 *)(*(long *)puVar5 + lVar12 * 8 + 0x10);
              lVar8 = lVar12 + 2;
            } while (((ulong)uVar2 - 1) - (ulong)(~uVar2 & 1) != lVar12 + 2);
            lVar12 = lVar12 + 3;
            if ((~uVar2 & 1) == 0) goto LAB_004c7184;
          }
          puVar16[lVar12] = *(undefined8 *)(*(long *)puVar5 + lVar12 * 8);
        }
LAB_004c7184:
        puVar9 = *(undefined8 **)puVar5;
      }
      FUN_00404870(*(undefined4 *)puVar4,puVar9);
    }
    *(undefined8 **)puVar5 = puVar16;
    *(uint *)(puVar5 + 0xc) = uVar19;
  }
  if (uVar1 < uVar19) {
    uVar1 = *(uint *)(puVar5 + 8);
    *(uint *)(puVar5 + 8) = uVar1 + 1;
    if (uVar17 < uVar1) {
      puVar9 = puVar16 + uVar1;
      do {
        puVar14 = puVar9 + -1;
        *puVar9 = *puVar14;
        puVar16 = (undefined8 *)(*(long *)puVar5 + (ulong)uVar17 * 8);
        puVar9 = puVar14;
      } while (puVar16 < puVar14);
    }
    else {
      puVar16 = puVar16 + uVar17;
    }
    if (puVar16 != (undefined8 *)0x0) {
      *puVar16 = plVar7;
      return plVar7;
    }
  }
LAB_004c72b4:
  uVar3 = *(undefined4 *)PTR_DAT_02712e28;
  if (((plVar7[9] == 0) &&
      (((plVar7[0xe] == 0 || (*(long *)(plVar7[0xe] + 0x80) == 0)) &&
       (lVar8 = FUN_0047d760(plVar7 + 0xe), lVar8 != 0)))) &&
     ((*(long **)(lVar8 + 0x118) == plVar7 || (*(long **)(lVar8 + 0x118) == (long *)0x0)))) {
    FUN_0047b000();
  }
  FUN_004d43c0(plVar7);
  FUN_00404870(uVar3,plVar15);
  return (long *)0x0;
}


