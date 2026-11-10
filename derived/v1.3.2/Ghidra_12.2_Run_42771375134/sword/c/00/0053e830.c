/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0053e830; name: FUN_0053e830
 */


/* WARNING: Removing unreachable block (ram,0x0053eeb0) */

undefined8 FUN_0053e830(long param_1,undefined4 param_2)

{
  long *__src;
  undefined4 uVar1;
  long *plVar2;
  undefined8 *puVar3;
  void *pvVar4;
  long *plVar5;
  ulong uVar6;
  long lVar7;
  long lVar8;
  ulong uVar9;
  ulong *puVar10;
  long *plVar11;
  ulong uVar12;
  long lVar13;
  long *plVar14;
  long *plVar15;
  ulong *puVar16;
  ulong *puVar17;
  undefined8 *puVar18;
  undefined8 uVar19;
  undefined8 uVar20;
  undefined8 uVar21;
  long *plVar22;
  ulong *puVar23;
  long lVar24;
  float fVar25;
  undefined1 auStack_2a8 [288];
  ulong *local_188;
  long local_180;
  long local_178;
  undefined4 local_170;
  undefined8 local_16c [3];
  undefined4 local_154 [50];
  int local_8c;
  undefined1 auStack_88 [16];
  int local_78;
  undefined8 local_70;
  
  plVar22 = *(long **)(param_1 + 0x30);
  if ((plVar22 == (long *)0x0) || (*(char *)(param_1 + 0x14d09) == '\0')) {
    return 0xffffffff;
  }
  lVar24 = (long)*(int *)(param_1 + 0x14dc4);
  __src = (long *)(param_1 + lVar24 * 0x530 + 0x88);
  lVar7 = *(long *)(param_1 + 0x14f00);
  if (lVar7 == 0) {
    lVar7 = 0;
    plVar2 = (long *)0x0;
  }
  else {
    plVar2 = *(long **)(lVar7 + 0xa8);
    lVar7 = *(long *)(lVar7 + 0xb8);
  }
  *__src = *(long *)(param_1 + 0x14dc8);
  plVar14 = (long *)(param_1 + lVar24 * 0x530 + 0x90);
  *plVar14 = *(long *)(param_1 + 0x14dd8);
  if (plVar2 != (long *)0x0) {
    puVar3 = (undefined8 *)(**(code **)(*plVar2 + 0x118))();
    lVar8 = param_1 + lVar24 * 0x530;
    *(undefined8 *)(lVar8 + 0x574) = *puVar3;
    uVar20 = puVar3[3];
    uVar21 = puVar3[1];
    uVar19 = puVar3[2];
    *(undefined8 *)(lVar8 + 0x594) = puVar3[4];
    *(undefined8 *)(lVar8 + 0x58c) = uVar20;
    *(undefined8 *)(lVar8 + 0x584) = uVar19;
    *(undefined8 *)(lVar8 + 0x57c) = uVar21;
  }
  if (*(long **)(param_1 + 0x14de0) != (long *)0x0) {
    pvVar4 = (void *)(**(code **)(**(long **)(param_1 + 0x14de0) + 0x100))();
    memcpy((void *)(param_1 + lVar24 * 0x530 + 0x1f0),pvVar4,900);
  }
  lVar8 = param_1 + lVar24 * 0x530;
  *(undefined4 *)(lVar8 + 0x1e8) = param_2;
  *(long *)(lVar8 + 0x5a8) = lVar7;
  uVar9 = *__src + 0x9e3779b9;
  uVar9 = *plVar14 + uVar9 * 0x40 + (uVar9 >> 2) + 0x9e3779b9 ^ uVar9;
  uVar9 = lVar7 + uVar9 * 0x40 + (uVar9 >> 2) + 0x9e3779b9 ^ uVar9;
  puVar23 = (ulong *)((long)*(int *)(lVar8 + 0x578) + uVar9 * 0x40 + (uVar9 >> 2) + 0x9e3779b9 ^
                     uVar9);
  local_180 = 0;
  puVar16 = *(ulong **)(param_1 + 0x68);
  plVar2 = (long *)(param_1 + 0x60);
  local_188 = puVar23;
  if (puVar16 != (ulong *)0x0) {
    uVar9 = (long)puVar16 - 1;
    if ((uVar9 & (ulong)puVar16) == 0) {
      puVar10 = (ulong *)((ulong)puVar23 & uVar9);
      plVar15 = *(long **)(*plVar2 + (long)puVar10 * 8);
    }
    else {
      puVar10 = puVar23;
      if (puVar16 <= puVar23) {
        uVar12 = 0;
        if (puVar16 != (ulong *)0x0) {
          uVar12 = (ulong)puVar23 / (ulong)puVar16;
        }
        puVar10 = (ulong *)((long)puVar23 - uVar12 * (long)puVar16);
      }
      plVar15 = *(long **)(*plVar2 + (long)puVar10 * 8);
    }
    if ((plVar15 != (long *)0x0) && (plVar15 = (long *)*plVar15, plVar15 != (long *)0x0)) {
      if ((uVar9 & (ulong)puVar16) == 0) {
        do {
          puVar16 = (ulong *)plVar15[1];
          if (puVar16 != puVar23 && (ulong *)((ulong)puVar16 & uVar9) != puVar10) break;
          if ((puVar16 == puVar23) && ((ulong *)plVar15[2] == puVar23)) goto LAB_0053f11c;
          plVar15 = (long *)*plVar15;
        } while (plVar15 != (long *)0x0);
      }
      else {
        do {
          puVar17 = (ulong *)plVar15[1];
          if (puVar17 == puVar23) {
            if ((ulong *)plVar15[2] == puVar23) goto LAB_0053f11c;
          }
          else {
            if (puVar16 <= puVar17) {
              uVar9 = 0;
              if (puVar16 != (ulong *)0x0) {
                uVar9 = (ulong)puVar17 / (ulong)puVar16;
              }
              puVar17 = (ulong *)((long)puVar17 - uVar9 * (long)puVar16);
            }
            if (puVar17 != puVar10) break;
          }
          plVar15 = (long *)*plVar15;
        } while (plVar15 != (long *)0x0);
      }
    }
  }
  plVar15 = (long *)FUN_005cbff0();
  plVar5 = (long *)(**(code **)(*plVar15 + 0x30))();
  plVar15 = (long *)(**(code **)(*plVar5 + 0x38))
                              (plVar5,0x50,0xffffffff,
                               "C:/workspace/YEBIS_draft/src/GPU/GPUInterfaceDevice.cpp",0x4f6);
  *plVar15 = (long)(PTR_DAT_02713b60 + 0x10);
  plVar15[1] = (long)plVar5;
  puVar16 = (ulong *)(plVar15 + 2);
  *puVar16 = 0;
  plVar15[8] = 0;
  plVar15[9] = 0;
  plVar15[5] = 0;
  plVar15[6] = 0;
  plVar15[7] = 0;
  plVar15[3] = 0;
  plVar15[4] = 0x128;
  if (plVar5 == (long *)0x0) {
    lVar7 = FUN_005bc6f0();
    plVar15[1] = lVar7;
    if (plVar15[3] == 0) goto LAB_0053eb08;
  }
  else {
LAB_0053eb08:
    uVar9 = FUN_00543010(plVar15,1,1);
    if ((uVar9 & 1) == 0) {
      plVar15[2] = 0;
    }
    else {
      uVar12 = plVar15[3];
      uVar9 = *puVar16;
      if (uVar12 < *puVar16) {
        *puVar16 = uVar12;
        uVar9 = uVar12;
      }
      if (uVar9 != 0) {
        plVar15[6] = plVar15[5];
        plVar15[7] = plVar15[5] + uVar9 * 0x128;
        goto LAB_0053eb6c;
      }
    }
    plVar15[6] = 0;
    plVar15[7] = 0;
  }
LAB_0053eb6c:
  memcpy(auStack_2a8,&local_180,0x118);
  puVar10 = *(ulong **)(param_1 + 0x68);
  if (puVar10 == (ulong *)0x0) {
LAB_0053ec1c:
    plVar5 = (long *)FUN_005b9a50(*(undefined8 *)PTR_PTR_02713988,0x138,
                                  "../src/GPU/GPUMemoryAllocator.h",0x1b8,0);
    plVar5[2] = (long)puVar23;
    memcpy(plVar5 + 3,auStack_2a8,0x118);
    plVar5[0x26] = (long)plVar15;
    *plVar5 = 0;
    plVar5[1] = (long)puVar23;
    fVar25 = (float)(*(long *)(param_1 + 0x78) + 1);
    if ((puVar10 == (ulong *)0x0) || (*(float *)(param_1 + 0x80) * (float)puVar10 < fVar25)) {
      if (puVar10 < (ulong *)0x3) {
        uVar9 = 1;
      }
      else {
        uVar9 = (ulong)(((long)puVar10 - 1U & (ulong)puVar10) != 0);
      }
      uVar12 = (ulong)(fVar25 / *(float *)(param_1 + 0x80));
      uVar9 = uVar9 | (long)puVar10 << 1;
      if (uVar12 <= uVar9) {
        uVar12 = uVar9;
      }
      FUN_00543270(plVar2,uVar12);
      puVar10 = *(ulong **)(param_1 + 0x68);
      if (((long)puVar10 - 1U & (ulong)puVar10) == 0) {
        puVar16 = (ulong *)((long)puVar10 - 1U & (ulong)puVar23);
        plVar11 = *(long **)(*plVar2 + (long)puVar16 * 8);
        goto joined_r0x0053ed10;
      }
      if (puVar23 < puVar10) {
        plVar11 = *(long **)(*plVar2 + (long)puVar23 * 8);
        puVar16 = puVar23;
        goto joined_r0x0053ed10;
      }
      uVar9 = 0;
      if (puVar10 != (ulong *)0x0) {
        uVar9 = (ulong)puVar23 / (ulong)puVar10;
      }
      puVar16 = (ulong *)((long)puVar23 - uVar9 * (long)puVar10);
      plVar11 = *(long **)(*plVar2 + (long)puVar16 * 8);
      if (plVar11 == (long *)0x0) goto LAB_0053ed28;
LAB_0053ec90:
      *plVar5 = *plVar11;
LAB_0053ed90:
      *plVar11 = (long)plVar5;
    }
    else {
      plVar11 = *(long **)(*plVar2 + (long)puVar16 * 8);
joined_r0x0053ed10:
      if (plVar11 != (long *)0x0) goto LAB_0053ec90;
LAB_0053ed28:
      plVar11 = (long *)(param_1 + 0x70);
      *plVar5 = *plVar11;
      *plVar11 = (long)plVar5;
      *(long **)(*(long *)(param_1 + 0x60) + (long)puVar16 * 8) = plVar11;
      if (*plVar5 != 0) {
        puVar16 = *(ulong **)(*plVar5 + 8);
        if (((long)puVar10 - 1U & (ulong)puVar10) == 0) {
          puVar16 = (ulong *)((ulong)puVar16 & (long)puVar10 - 1U);
        }
        else if (puVar10 <= puVar16) {
          uVar9 = 0;
          if (puVar10 != (ulong *)0x0) {
            uVar9 = (ulong)puVar16 / (ulong)puVar10;
          }
          puVar16 = (ulong *)((long)puVar16 - uVar9 * (long)puVar10);
        }
        plVar11 = (long *)(*plVar2 + (long)puVar16 * 8);
        goto LAB_0053ed90;
      }
    }
    *(long *)(param_1 + 0x78) = *(long *)(param_1 + 0x78) + 1;
  }
  else {
    uVar9 = (long)puVar10 - 1;
    if ((uVar9 & (ulong)puVar10) == 0) {
      puVar16 = (ulong *)(uVar9 & (ulong)puVar23);
      plVar5 = *(long **)(*plVar2 + (long)puVar16 * 8);
      if (plVar5 != (long *)0x0) goto LAB_0053ebb0;
      goto LAB_0053ec1c;
    }
    puVar16 = puVar23;
    if (puVar10 <= puVar23) {
      uVar12 = 0;
      if (puVar10 != (ulong *)0x0) {
        uVar12 = (ulong)puVar23 / (ulong)puVar10;
      }
      puVar16 = (ulong *)((long)puVar23 - uVar12 * (long)puVar10);
    }
    plVar5 = *(long **)(*plVar2 + (long)puVar16 * 8);
    if (plVar5 == (long *)0x0) goto LAB_0053ec1c;
LAB_0053ebb0:
    if ((uVar9 & (ulong)puVar10) == 0) {
      do {
        plVar5 = (long *)*plVar5;
        if ((plVar5 == (long *)0x0) ||
           ((ulong *)plVar5[1] != puVar23 && (ulong *)((ulong)plVar5[1] & uVar9) != puVar16))
        goto LAB_0053ec1c;
      } while ((ulong *)plVar5[2] != puVar23);
    }
    else {
      do {
        plVar5 = (long *)*plVar5;
        if (plVar5 == (long *)0x0) goto LAB_0053ec1c;
        puVar17 = (ulong *)plVar5[1];
        if (puVar17 != puVar23) {
          if (puVar10 <= puVar17) {
            uVar9 = 0;
            if (puVar10 != (ulong *)0x0) {
              uVar9 = (ulong)puVar17 / (ulong)puVar10;
            }
            puVar17 = (ulong *)((long)puVar17 - uVar9 * (long)puVar10);
          }
          if (puVar17 != puVar16) goto LAB_0053ec1c;
        }
      } while ((ulong *)plVar5[2] != puVar23);
    }
  }
  uVar9 = plVar15[2];
joined_r0x0053f124:
  if (uVar9 != 0) {
    if (uVar9 == 1) {
      plVar2 = *(long **)(plVar15[5] + 0x120);
      goto LAB_0053f028;
    }
    lVar7 = plVar15[5];
    uVar12 = 1;
    plVar5 = (long *)0x0;
    do {
      uVar6 = FUN_0053e6f0(&local_188,lVar7);
      plVar2 = *(long **)(lVar7 + 0x120);
      if ((uVar6 & 1) == 0) {
        plVar2 = plVar5;
      }
      if (uVar9 <= uVar12) break;
      uVar12 = uVar12 + 1;
      lVar7 = lVar7 + 0x128;
      plVar5 = plVar2;
    } while ((uVar6 & 1) == 0);
    if (plVar2 != (long *)0x0) goto LAB_0053f028;
  }
  plVar2 = (long *)(**(code **)(**(long **)(param_1 + 0x38) + 200))
                             (*(long **)(param_1 + 0x38),1,0,0);
  (**(code **)(*plVar2 + 0x40))();
  pvVar4 = (void *)(**(code **)(*plVar2 + 0x50))(plVar2);
  memcpy(pvVar4,__src,0x52d);
  (**(code **)(*plVar2 + 0x48))(plVar2);
  local_180 = *__src;
  local_178 = *plVar14;
  local_170 = *(undefined4 *)(lVar8 + 0x1e8);
  local_70 = *(undefined8 *)(lVar8 + 0x5a8);
  local_8c = *(int *)(param_1 + lVar24 * 0x530 + 0x570);
  uVar9 = (ulong)local_8c;
  if (0 < local_8c) {
    uVar12 = uVar9 & 1;
    if (local_8c == 1) {
      lVar7 = 0;
    }
    else {
      lVar7 = 0;
      puVar3 = local_16c;
      puVar18 = (undefined8 *)(param_1 + lVar24 * 0x530 + 0x1f0);
      do {
        uVar20 = *puVar18;
        uVar21 = puVar18[1];
        uVar19 = puVar18[2];
        *(undefined4 *)(puVar3 + 3) = *(undefined4 *)(puVar18 + 3);
        *puVar3 = uVar20;
        puVar3[1] = uVar21;
        puVar3[2] = uVar19;
        uVar20 = *(undefined8 *)((long)puVar18 + 0x1c);
        uVar21 = *(undefined8 *)((long)puVar18 + 0x24);
        uVar1 = *(undefined4 *)((long)puVar18 + 0x34);
        lVar7 = lVar7 + 2;
        *(undefined8 *)((long)puVar3 + 0x2c) = *(undefined8 *)((long)puVar18 + 0x2c);
        *(undefined4 *)((long)puVar3 + 0x34) = uVar1;
        *(undefined8 *)((long)puVar3 + 0x24) = uVar21;
        *(undefined8 *)((long)puVar3 + 0x1c) = uVar20;
        puVar3 = puVar3 + 7;
        puVar18 = puVar18 + 7;
      } while (uVar9 - uVar12 != lVar7);
      if (uVar12 == 0) goto LAB_0053ef58;
    }
    lVar13 = lVar7 * 0x1c;
    lVar8 = param_1 + lVar24 * 0x530 + lVar13;
    uVar19 = *(undefined8 *)(lVar8 + 0x200);
    uVar20 = *(undefined8 *)(lVar8 + 0x1f0);
    uVar21 = *(undefined8 *)(lVar8 + 0x1f8);
    local_154[lVar7 * 7] = *(undefined4 *)(lVar8 + 0x208);
    *(undefined8 *)((long)local_16c + lVar13 + 0x10) = uVar19;
    *(undefined8 *)((long)local_16c + lVar13 + 8) = uVar21;
    *(undefined8 *)((long)local_16c + lVar13) = uVar20;
  }
LAB_0053ef58:
  local_78 = *(int *)(param_1 + lVar24 * 0x530 + 0x574);
  if (0 < local_78) {
    memcpy(auStack_88,(void *)(param_1 + lVar24 * 0x530 + 0x578),(long)local_78 << 2);
  }
  memcpy(auStack_2a8,&local_188,0x120);
  uVar9 = plVar15[2];
  uVar12 = plVar15[3];
  if (uVar12 <= uVar9) {
    if (plVar15[8] == 0) {
      lVar7 = uVar12 * 2;
      if (lVar7 == 0) {
        lVar7 = 1;
      }
      uVar9 = FUN_00543010(plVar15,lVar7,1);
    }
    else {
      uVar9 = FUN_00543010(plVar15,plVar15[8] + uVar12,1);
    }
    if ((uVar9 & 1) == 0) {
      plVar15[2] = 0;
      plVar15[6] = 0;
      plVar15[7] = 0;
      goto LAB_0053f028;
    }
    uVar9 = plVar15[2];
  }
  pvVar4 = (void *)(plVar15[5] + uVar9 * 0x128);
  memcpy(pvVar4,auStack_2a8,0x120);
  *(long **)((long)pvVar4 + 0x120) = plVar2;
  lVar7 = plVar15[2];
  plVar15[2] = lVar7 + 1;
  plVar15[6] = plVar15[5];
  plVar15[7] = plVar15[5] + (lVar7 + 1) * 0x128;
LAB_0053f028:
  (**(code **)(*plVar22 + 0x80))(plVar22,plVar2);
  (**(code **)(*plVar22 + 0x88))(plVar22,*(long *)(param_1 + 0x14dc8));
  (**(code **)(*plVar22 + 0xb8))(plVar22,*(undefined8 *)(param_1 + 0x14dd0));
  (**(code **)(*plVar22 + 0x70))(plVar22,1,param_1 + 0x14d10);
  (**(code **)(*plVar22 + 0x78))(plVar22,1,param_1 + 0x14d28);
  (**(code **)(*plVar22 + 0x98))
            (plVar22,*(undefined4 *)(param_1 + 0x14de8),*(undefined4 *)(param_1 + 0x14dec),
             param_1 + 0x14df0,param_1 + 0x14e70,param_1 + 0x14eb0);
  return 0;
LAB_0053f11c:
  plVar15 = (long *)plVar15[0x26];
  uVar9 = plVar15[2];
  goto joined_r0x0053f124;
}


