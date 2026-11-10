/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0059b2e0; name: FUN_0059b2e0
 */


undefined8 FUN_0059b2e0(long param_1)

{
  char cVar1;
  undefined *puVar2;
  undefined *puVar3;
  bool bVar4;
  bool bVar5;
  bool bVar6;
  int iVar7;
  int iVar8;
  ulong *puVar9;
  undefined8 *puVar10;
  undefined8 uVar11;
  long *plVar12;
  ulong *puVar13;
  undefined4 *puVar14;
  code *pcVar15;
  ulong uVar16;
  long lVar17;
  ulong uVar18;
  uint uVar19;
  undefined4 uVar20;
  long *plVar21;
  long lVar22;
  long lVar23;
  uint uVar24;
  uint uVar25;
  float fVar26;
  float fVar27;
  float fVar28;
  undefined8 in_stack_ffffffffffffff60;
  undefined1 auStack_90 [8];
  undefined4 local_88;
  undefined4 uStack_84;
  int local_74;
  
  puVar2 = PTR_PTR_02713988;
  uVar25 = (uint)((ulong)in_stack_ffffffffffffff60 >> 0x20);
  uVar24 = *(uint *)(PTR_DAT_02713a88 + 0x10);
  if (uVar24 < 2) {
    uVar24 = 1;
  }
  puVar9 = (ulong *)FUN_005b9a50(*(undefined8 *)PTR_PTR_02713988,(ulong)uVar24 << 4 | 8,
                                 "C:/workspace/YEBIS_draft/src/GPU/GPURenderTexture.cpp",0x430,0);
  puVar13 = puVar9;
  if (puVar9 != (ulong *)0x0) {
    puVar13 = puVar9 + 1;
    *puVar9 = (ulong)uVar24;
  }
  iVar8 = *(int *)(param_1 + 0x38);
  local_74 = iVar8;
  if (*(int *)(param_1 + 0x48) != 0) {
    local_74 = *(int *)(param_1 + 0x48);
  }
  *(ulong **)(param_1 + 0x68) = puVar13;
  *(int *)(param_1 + 0x7c) = local_74;
  *(undefined4 *)(param_1 + 0x9c) = 0;
  puVar3 = PTR_DAT_02713ce0;
  FUN_00546ed0(0,0,*(undefined4 *)(param_1 + 0x30),*(undefined4 *)(param_1 + 0x34),1,&local_74,
               *(undefined4 *)PTR_DAT_02713ce0,*(undefined4 *)(param_1 + 0x40),(ulong)uVar25 << 0x20
              );
  iVar7 = *(int *)(param_1 + 0x9c) * 2;
  uVar24 = iVar7 + *(int *)(param_1 + 0x30);
  uVar25 = *(int *)(param_1 + 0x34) + iVar7;
  fVar26 = logf((float)uVar24);
  fVar28 = DAT_01d4c4dc;
  fVar26 = fVar26 / DAT_01d4c4dc;
  fVar27 = logf((float)uVar25);
  fVar27 = fVar27 / fVar28;
  uVar19 = (uint)fVar26;
  fVar28 = (float)(uint)(int)fVar27;
  bVar4 = false;
  if ((fVar26 == (float)uVar19) && (bVar4 = false, !NAN(fVar27) && !NAN(fVar28))) {
    bVar4 = fVar27 == fVar28;
  }
  if (bVar4) {
    plVar12 = *(long **)(param_1 + 0x108);
    plVar21 = *(long **)(param_1 + 0x110);
    if (plVar12 != plVar21) goto LAB_0059b44c;
  }
  else if ((*(byte *)(param_1 + 0x2c) & 1) == 0) {
    *(uint *)(param_1 + 0x78) = *(uint *)(param_1 + 0x78) | 2;
    plVar12 = *(long **)(param_1 + 0x108);
    plVar21 = *(long **)(param_1 + 0x110);
    if (plVar12 != plVar21) {
LAB_0059b44c:
      do {
        lVar22 = *plVar12;
        lVar17 = lVar22;
        do {
          lVar23 = lVar17;
          lVar17 = *(long *)(lVar23 + 0x120);
        } while (lVar17 != 0);
        if (*(long *)(lVar23 + 0xa8) != 0) {
          if (lVar22 != 0) goto LAB_0059b46c;
          break;
        }
        plVar12 = plVar12 + 1;
      } while (plVar12 != plVar21);
    }
  }
  else {
    uVar24 = 1 << (ulong)(uVar19 & 0x1f);
    uVar25 = 1 << (ulong)((int)fVar27 & 0x1f);
    plVar12 = *(long **)(param_1 + 0x108);
    plVar21 = *(long **)(param_1 + 0x110);
    if (plVar12 != plVar21) goto LAB_0059b44c;
  }
  uVar20 = 4;
  if (*(char *)(param_1 + 0x4c) == '\0') {
    uVar20 = 1;
  }
  uVar19 = *(uint *)(param_1 + 0x50) | 0x100;
  if ((*(uint *)(param_1 + 0x2c) & 0x1400) != 0) {
    uVar19 = *(uint *)(param_1 + 0x50);
  }
  uVar19 = (*(uint *)(param_1 + 0x2c) >> 1 ^ 0xffffffff) & 0x200 | uVar19;
  iVar7 = (**(code **)(**(long **)(param_1 + 0x20) + 0x1e0))
                    (*(long **)(param_1 + 0x20),uVar24,uVar25,*(undefined4 *)(param_1 + 0x3c),uVar20
                     ,iVar8,0,0,param_1 + 0xa8,uVar19);
  if ((iVar7 < 0) &&
     (uVar11 = (**(code **)(**(long **)(param_1 + 0x20) + 0x1e0))
                         (*(long **)(param_1 + 0x20),uVar24,uVar25,1,uVar20,iVar8,0,0,param_1 + 0xa8
                          ,uVar19), (int)uVar11 < 0)) {
    return uVar11;
  }
  uVar19 = *(uint *)(param_1 + 0x2c);
  if ((uVar19 >> 4 & 1) != 0) goto LAB_0059b564;
LAB_0059b544:
  if ((uVar19 >> 3 & 1) != 0) {
    plVar12 = *(long **)(param_1 + 0xa8);
    pcVar15 = *(code **)(*plVar12 + 0x78);
    uVar11 = 0;
    goto LAB_0059b590;
  }
  if ((uVar19 >> 2 & 1) != 0) {
    plVar12 = *(long **)(param_1 + 0xa8);
    pcVar15 = *(code **)(*plVar12 + 0x78);
    uVar11 = 4;
    goto LAB_0059b590;
  }
  goto LAB_0059b594;
LAB_0059b46c:
  do {
    lVar17 = lVar22;
    lVar22 = *(long *)(lVar17 + 0x120);
  } while (lVar22 != 0);
  puVar10 = *(undefined8 **)(lVar17 + 0xa8);
  *(undefined8 **)(param_1 + 0xa8) = puVar10;
  (**(code **)*puVar10)();
  uVar19 = *(uint *)(param_1 + 0x2c);
  if ((uVar19 >> 4 & 1) == 0) goto LAB_0059b544;
LAB_0059b564:
  plVar12 = *(long **)(param_1 + 0xa8);
  pcVar15 = *(code **)(*plVar12 + 0x78);
  uVar11 = 8;
LAB_0059b590:
  (*pcVar15)(plVar12,uVar11);
LAB_0059b594:
  plVar12 = *(long **)(param_1 + 0xa8);
  uVar11 = (**(code **)(*plVar12 + 0xb8))(plVar12,0,param_1 + 0xb0);
  if ((int)uVar11 < 0) {
    return uVar11;
  }
  uVar19 = (**(code **)(**(long **)(param_1 + 0xa8) + 0x60))();
  *(uint *)(param_1 + 0x98) = uVar19;
  puVar9 = (ulong *)FUN_005b9a50(*(undefined8 *)puVar2,(ulong)uVar19 * 8 + 8,
                                 "C:/workspace/YEBIS_draft/src/GPU/GPURenderTexture.cpp",0x5c8,0);
  puVar13 = puVar9;
  if (puVar9 != (ulong *)0x0) {
    puVar13 = puVar9 + 1;
    *puVar9 = (ulong)uVar19;
  }
  uVar19 = *(uint *)(param_1 + 0x98);
  *(ulong **)(param_1 + 200) = puVar13;
  puVar9 = (ulong *)FUN_005b9a50(*(undefined8 *)puVar2,(ulong)uVar19 * 0x18 + 8,
                                 "C:/workspace/YEBIS_draft/src/GPU/GPURenderTexture.cpp",0x5c9,0);
  puVar13 = puVar9;
  if (puVar9 != (ulong *)0x0) {
    puVar13 = puVar9 + 1;
    *puVar9 = (ulong)uVar19;
  }
  uVar19 = *(uint *)(param_1 + 0x98);
  *(ulong **)(param_1 + 0x80) = puVar13;
  puVar9 = (ulong *)FUN_005b9a50(*(undefined8 *)puVar2,(ulong)uVar19 * 8 + 8,
                                 "C:/workspace/YEBIS_draft/src/GPU/GPURenderTexture.cpp",0x5cd,0);
  puVar13 = puVar9;
  if (puVar9 != (ulong *)0x0) {
    puVar13 = puVar9 + 1;
    *puVar9 = (ulong)uVar19;
  }
  uVar19 = *(uint *)(param_1 + 0x98);
  *(ulong **)(param_1 + 0xd0) = puVar13;
  puVar9 = (ulong *)FUN_005b9a50(*(undefined8 *)puVar2,(ulong)uVar19 * 8 + 8,
                                 "C:/workspace/YEBIS_draft/src/GPU/GPURenderTexture.cpp",0x5ce,0);
  puVar13 = puVar9;
  if (puVar9 != (ulong *)0x0) {
    puVar13 = puVar9 + 1;
    *puVar9 = (ulong)uVar19;
  }
  *(ulong **)(param_1 + 0xe0) = puVar13;
  if (*(int *)(param_1 + 0x98) == 0) {
    uVar18 = 0;
  }
  else {
    uVar16 = 0;
    do {
      lVar22 = uVar16 * 8;
      uVar16 = uVar16 + 1;
      *(undefined8 *)(*(long *)(param_1 + 0xd0) + lVar22) = 0;
      *(undefined8 *)(*(long *)(param_1 + 0xe0) + lVar22) = 0;
      uVar18 = (ulong)*(uint *)(param_1 + 0x98);
    } while (uVar16 < uVar18);
  }
  puVar9 = (ulong *)FUN_005b9a50(*(undefined8 *)puVar2,uVar18 * 8 + 8,
                                 "C:/workspace/YEBIS_draft/src/GPU/GPURenderTexture.cpp",0x5cd,0);
  puVar13 = puVar9;
  if (puVar9 != (ulong *)0x0) {
    puVar13 = puVar9 + 1;
    *puVar9 = uVar18;
  }
  uVar19 = *(uint *)(param_1 + 0x98);
  *(ulong **)(param_1 + 0xd8) = puVar13;
  puVar9 = (ulong *)FUN_005b9a50(*(undefined8 *)puVar2,(ulong)uVar19 * 8 + 8,
                                 "C:/workspace/YEBIS_draft/src/GPU/GPURenderTexture.cpp",0x5ce,0);
  puVar13 = puVar9;
  if (puVar9 != (ulong *)0x0) {
    puVar13 = puVar9 + 1;
    *puVar9 = (ulong)uVar19;
  }
  *(ulong **)(param_1 + 0xe8) = puVar13;
  if (*(int *)(param_1 + 0x98) != 0) {
    uVar18 = 0;
    do {
      lVar22 = uVar18 * 8;
      uVar18 = uVar18 + 1;
      *(undefined8 *)(*(long *)(param_1 + 0xd8) + lVar22) = 0;
      *(undefined8 *)(*(long *)(param_1 + 0xe8) + lVar22) = 0;
    } while (uVar18 < *(uint *)(param_1 + 0x98));
  }
  iVar8 = *(int *)(param_1 + 0x40);
  uVar19 = *(uint *)(param_1 + 0x2c) & 2;
  cVar1 = *PTR_DAT_02713ce8;
  iVar7 = *(int *)(param_1 + 0x48);
  if (iVar7 == 0) {
    bVar4 = cVar1 != '\0';
    bVar5 = cVar1 != '\0' || (uVar19 != 0 || iVar8 != 0);
    if (iVar8 != 0) goto LAB_0059b7a0;
LAB_0059b864:
    bVar6 = *(int *)(param_1 + 0x44) == 0;
    if (bVar5) goto LAB_0059b7a8;
LAB_0059b874:
    uVar11 = (**(code **)(**(long **)(param_1 + 0xa8) + 0xb8))
                       (*(long **)(param_1 + 0xa8),0,param_1 + 0xb8);
    iVar8 = (int)uVar11;
  }
  else {
    bVar4 = iVar7 != *(int *)(param_1 + 0x38);
    bVar5 = cVar1 != '\0' || ((uVar19 != 0 || iVar8 != 0) || bVar4);
    bVar4 = cVar1 != '\0' || bVar4;
    if (iVar8 == 0) goto LAB_0059b864;
LAB_0059b7a0:
    bVar6 = false;
    if (!bVar5) goto LAB_0059b874;
LAB_0059b7a8:
    uVar11 = FUN_0059c810(param_1,0,0,uVar24,uVar25,local_74,iVar8,*(undefined4 *)(param_1 + 0x44),
                          *(undefined4 *)puVar3,param_1 + 0xb8);
    iVar8 = (int)uVar11;
  }
  if (iVar8 < 0) {
    return uVar11;
  }
  if (bVar4) {
    if (!bVar6) {
      uVar11 = FUN_0059c810(param_1,1,0,uVar24,uVar25,local_74,0,0,*(undefined4 *)(puVar3 + 4),
                            param_1 + 0xc0);
      iVar8 = (int)uVar11;
      goto joined_r0x0059b8ac;
    }
    *(undefined8 **)(param_1 + 0xc0) = *(undefined8 **)(param_1 + 0xb8);
    (**(code **)**(undefined8 **)(param_1 + 0xb8))();
    if (**(long **)(param_1 + 0xe0) != 0) {
      puVar14 = (undefined4 *)
                FUN_005b9a50(*(undefined8 *)puVar2,0x18,
                             "C:/workspace/YEBIS_draft/src/GPU/GPURenderTexture.cpp",0x61b,0);
      *puVar14 = 0;
      *(undefined8 *)(puVar14 + 2) = 0;
      **(undefined8 **)(param_1 + 0xe8) = puVar14;
      FUN_0059a940(**(undefined8 **)(param_1 + 0xe8),**(undefined8 **)(param_1 + 0xe0));
      iVar8 = *(int *)(param_1 + 0x98);
      goto joined_r0x0059b8b4;
    }
  }
  else {
    uVar11 = (**(code **)(**(long **)(param_1 + 0xa8) + 0xb8))
                       (*(long **)(param_1 + 0xa8),0,param_1 + 0xc0);
    iVar8 = (int)uVar11;
joined_r0x0059b8ac:
    if (iVar8 < 0) {
      return uVar11;
    }
  }
  iVar8 = *(int *)(param_1 + 0x98);
joined_r0x0059b8b4:
  if (iVar8 != 0) {
    lVar17 = 0;
    lVar22 = 0;
    uVar18 = 0;
    do {
      if (lVar22 == 0) {
        **(undefined8 **)(param_1 + 200) = *(undefined8 *)(param_1 + 0xb0);
        (*(code *)**(undefined8 **)**(undefined8 **)(param_1 + 200))();
      }
      else {
        uVar11 = (**(code **)(**(long **)(param_1 + 0xa8) + 0xb8))
                           (*(long **)(param_1 + 0xa8),uVar18 & 0xffffffff,
                            *(long *)(param_1 + 200) + lVar22);
        if ((int)uVar11 < 0) {
          return uVar11;
        }
      }
      plVar12 = *(long **)(*(long *)(param_1 + 200) + lVar22);
      (**(code **)(*plVar12 + 0x40))(plVar12,auStack_90);
      puVar10 = (undefined8 *)(*(long *)(param_1 + 0x80) + lVar17);
      *puVar10 = 0;
      *(undefined4 *)(puVar10 + 1) = local_88;
      *(undefined4 *)((long)puVar10 + 0xc) = uStack_84;
      puVar10[2] = 0x3f80000000000000;
      if (lVar22 == 0) {
        **(undefined8 **)(param_1 + 0xd0) = *(undefined8 *)(param_1 + 0xb8);
        (*(code *)**(undefined8 **)**(undefined8 **)(param_1 + 0xd0))();
        **(undefined8 **)(param_1 + 0xd8) = *(undefined8 *)(param_1 + 0xc0);
        (*(code *)**(undefined8 **)**(undefined8 **)(param_1 + 0xd8))();
      }
      else {
        if (bVar5) {
          uVar11 = FUN_0059c810(param_1,0,uVar18 & 0xffffffff,local_88,uStack_84,local_74,
                                *(undefined4 *)(param_1 + 0x40),*(undefined4 *)(param_1 + 0x44),
                                *(undefined4 *)puVar3,*(long *)(param_1 + 0xd0) + lVar22);
          iVar8 = (int)uVar11;
        }
        else {
          uVar11 = (**(code **)(**(long **)(param_1 + 0xa8) + 0xb8))
                             (*(long **)(param_1 + 0xa8),uVar18 & 0xffffffff,
                              *(long *)(param_1 + 0xd0) + lVar22);
          iVar8 = (int)uVar11;
        }
        if (iVar8 < 0) {
          return uVar11;
        }
        if (bVar4) {
          if (bVar6) {
            *(undefined8 *)(*(long *)(param_1 + 0xd8) + lVar22) =
                 *(undefined8 *)(*(long *)(param_1 + 0xd0) + lVar22);
            (**(code **)**(undefined8 **)(*(long *)(param_1 + 0xd8) + lVar22))();
            if (*(long *)(*(long *)(param_1 + 0xe0) + lVar22) != 0) {
              uVar11 = FUN_005b9a50(*(undefined8 *)puVar2,0x18,
                                    "C:/workspace/YEBIS_draft/src/GPU/GPURenderTexture.cpp",0x692,0)
              ;
              uVar11 = FUN_0059a940(uVar11,*(undefined8 *)(*(long *)(param_1 + 0xe0) + lVar22));
              *(undefined8 *)(*(long *)(param_1 + 0xe8) + lVar22) = uVar11;
            }
            goto LAB_0059baa8;
          }
          uVar11 = FUN_0059c810(param_1,1,uVar18 & 0xffffffff,local_88,uStack_84,local_74,0,0,
                                *(undefined4 *)(puVar3 + 4),*(long *)(param_1 + 0xd8) + lVar22);
          iVar8 = (int)uVar11;
        }
        else {
          uVar11 = (**(code **)(**(long **)(param_1 + 0xa8) + 0xb8))
                             (*(long **)(param_1 + 0xa8),uVar18 & 0xffffffff,
                              *(long *)(param_1 + 0xd8) + lVar22);
          iVar8 = (int)uVar11;
        }
        if (iVar8 < 0) {
          return uVar11;
        }
      }
LAB_0059baa8:
      uVar18 = uVar18 + 1;
      lVar22 = lVar22 + 8;
      lVar17 = lVar17 + 0x18;
    } while (uVar18 < *(uint *)(param_1 + 0x98));
  }
  FUN_0059ade0(param_1,0,0,0,0);
  if (*(long *)(param_1 + 0x20) != 0) {
    uVar24 = *(uint *)(PTR_DAT_02713a88 + 0x10);
    if (uVar24 < 2) {
      uVar24 = 1;
    }
    if (0 < (int)uVar24) {
      lVar17 = 0;
      lVar22 = 0;
      do {
        lVar22 = lVar22 + 1;
        *(undefined4 *)(*(long *)(param_1 + 0x68) + lVar17) = *(undefined4 *)(param_1 + 0x54);
        *(undefined4 *)(*(long *)(param_1 + 0x68) + lVar17 + 4) = *(undefined4 *)(param_1 + 0x58);
        *(undefined4 *)(*(long *)(param_1 + 0x68) + lVar17 + 8) = *(undefined4 *)(param_1 + 0x5c);
        lVar23 = *(long *)(param_1 + 0x68) + lVar17;
        lVar17 = lVar17 + 0x10;
        *(undefined4 *)(lVar23 + 0xc) = *(undefined4 *)(param_1 + 0x60);
      } while (lVar22 < (int)uVar24);
    }
  }
  *(undefined8 *)(param_1 + 0x70) = 0x3f80000000000000;
  if (*PTR_DAT_027139e8 != '\0') {
    FUN_0059cb20(param_1,0,0xffffffff);
  }
  return 0;
}


