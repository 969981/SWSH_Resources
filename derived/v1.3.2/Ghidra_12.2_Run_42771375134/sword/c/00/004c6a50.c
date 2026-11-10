/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 004c6a50; name: FUN_004c6a50
 */


long FUN_004c6a50(undefined8 *param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  uint uVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  ulong uVar7;
  long *plVar8;
  long lVar9;
  long lVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  long *plVar13;
  long lVar14;
  long lVar15;
  undefined8 *puVar16;
  long *plVar17;
  long alStack_90 [5];
  long local_68;
  undefined1 local_60 [16];
  
  local_60 = FUN_004ca2f0();
  lVar15 = local_60._8_8_;
  lVar9 = local_60._0_8_;
  if (lVar9 == 0) {
    uVar11 = *param_1;
    uVar12 = param_1[1];
    lVar10 = 0;
LAB_004c6d14:
    lVar9 = FUN_004c6d60(uVar11,uVar12,lVar10);
    return lVar9;
  }
  uVar7 = FUN_00484f20(*param_1);
  if ((uVar7 & 1) == 0) {
    if (*(uint *)(PTR_DAT_027134f8 + 8) != 0) {
      plVar8 = *(long **)PTR_DAT_027134f8;
      lVar14 = (ulong)*(uint *)(PTR_DAT_027134f8 + 8) << 3;
      do {
        lVar10 = *plVar8;
        if ((((*(long *)(lVar10 + 0x70) == lVar9) && (*(long *)(lVar10 + 0x78) == lVar15)) &&
            (*(int *)(lVar10 + 0x348) != 2)) &&
           ((*(long *)(lVar10 + 0x20) == 0 ||
            (*(char *)(*(long *)(*(long *)(lVar10 + 0x20) + 0x10) + 0x54) != '\0'))))
        goto LAB_004c6d0c;
        plVar8 = plVar8 + 1;
        lVar14 = lVar14 + -8;
      } while (lVar14 != 0);
    }
    lVar10 = FUN_004c6a50(local_60);
    if (lVar10 == 0) {
      return 0;
    }
LAB_004c6d0c:
    uVar11 = *param_1;
    uVar12 = param_1[1];
    goto LAB_004c6d14;
  }
  alStack_90[4] = param_1[1];
  local_68 = 0;
  alStack_90[3] = *param_1;
  FUN_004ca560(alStack_90 + 3);
  if (local_68 != 0) {
    plVar8 = (long *)FUN_004958e0();
    puVar6 = PTR_DAT_02712d38;
    puVar5 = PTR_DAT_02712d18;
    puVar4 = PTR_DAT_02712a90;
    if ((char)plVar8[0x17] == '\0') {
      plVar8 = *(long **)PTR_DAT_02712d18;
      puVar1 = PTR_DAT_02712d28 + 0x10;
      puVar2 = PTR_DAT_02712d30 + 0x10;
      do {
        while (plVar8 != (long *)0x0) {
          if ((char)plVar8[0x17] != '\0') goto LAB_004c6b74;
        }
        plVar8 = (long *)FUN_00404690(*(undefined4 *)puVar4,0xc0);
        *plVar8 = (long)puVar1;
        plVar8[1] = 0;
        lVar9 = *(long *)(puVar6 + 8);
        plVar8[2] = 0;
        plVar8[3] = lVar9;
        plVar17 = (long *)(puVar6 + 0x10);
        if (*(long *)(puVar6 + 0x10) != 0) {
          plVar17 = (long *)(lVar9 + 0x10);
        }
        *plVar17 = (long)plVar8;
        *(long **)(puVar6 + 8) = plVar8;
        *(int *)puVar6 = *(int *)puVar6 + 1;
        *plVar8 = (long)puVar2;
        plVar8[7] = 0;
        plVar8[8] = 0;
        plVar8[10] = 0;
        plVar8[0xb] = 0;
        plVar8[0xf] = 0;
        plVar8[0x10] = 0;
        plVar8[0x12] = 0;
        plVar8[0x13] = 0;
        plVar8[0x15] = 0;
        plVar8[0x16] = 0;
        *(long **)puVar5 = plVar8;
        *(undefined2 *)(plVar8 + 0x17) = 0x101;
      } while ((char)plVar8[0x17] == '\0');
    }
LAB_004c6b74:
    if ((int)plVar8[0xb] != 0) {
      lVar9 = FUN_004e9f10(local_68);
      puVar4 = PTR_DAT_027134f8;
      if (lVar9 != 0) {
        lVar9 = -((ulong)*(uint *)(plVar8 + 0xb) * 8 + 0xf & 0xffffffff0);
        puVar16 = (undefined8 *)((long)alStack_90 + lVar9);
        if (*(uint *)(plVar8 + 0xb) != 0) {
          plVar17 = (long *)plVar8[10];
          uVar7 = 0;
          do {
            uVar3 = *(uint *)(puVar4 + 8);
            alStack_90[1] = local_60._0_8_;
            alStack_90[2] = *plVar17;
            if (uVar3 != 0) {
              plVar13 = *(long **)puVar4;
              lVar15 = (ulong)uVar3 << 3;
              do {
                lVar10 = *plVar13;
                if ((((*(long *)(lVar10 + 0x70) == local_60._0_8_) &&
                     (*(long *)(lVar10 + 0x78) == *plVar17)) && (*(int *)(lVar10 + 0x348) != 2)) &&
                   ((*(long *)(lVar10 + 0x20) == 0 ||
                    (*(char *)(*(long *)(*(long *)(lVar10 + 0x20) + 0x10) + 0x54) != '\0'))))
                goto LAB_004c6c28;
                plVar13 = plVar13 + 1;
                lVar15 = lVar15 + -8;
              } while (lVar15 != 0);
            }
            lVar10 = FUN_004c6a50(alStack_90 + 1);
            if (lVar10 != 0) {
LAB_004c6c28:
              puVar16[uVar7] = lVar10;
              uVar7 = (ulong)((int)uVar7 + 1);
            }
            plVar17 = plVar17 + 1;
          } while (plVar17 != (long *)(plVar8[10] + (ulong)*(uint *)(plVar8 + 0xb) * 8));
          if ((uint)uVar7 != 0) {
            lVar15 = FUN_004c6d60(*param_1,param_1[1],*puVar16);
            if ((lVar15 != 0) && (1 < (uint)uVar7)) {
              lVar10 = uVar7 - 1;
              puVar16 = (undefined8 *)((long)alStack_90 + lVar9 + 8);
              do {
                FUN_004d0be0(lVar15,*puVar16,0);
                lVar10 = lVar10 + -1;
                puVar16 = puVar16 + 1;
              } while (lVar10 != 0);
            }
            goto LAB_004c6d24;
          }
        }
      }
    }
  }
  lVar15 = 0;
LAB_004c6d24:
  FUN_004ca500(alStack_90 + 3);
  return lVar15;
}


