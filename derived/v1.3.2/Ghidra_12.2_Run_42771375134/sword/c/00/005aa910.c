/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 005aa910; name: FUN_005aa910
 */


/* WARNING: Removing unreachable block (ram,0x005aadbc) */

int FUN_005aa910(long param_1)

{
  uint *puVar1;
  long *plVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  uint uVar6;
  uint uVar7;
  double dVar8;
  double dVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  bool bVar21;
  int iVar22;
  int iVar23;
  undefined8 *puVar24;
  ulong *puVar25;
  long *plVar26;
  ulong *puVar27;
  size_t *psVar28;
  undefined8 uVar29;
  undefined8 *puVar30;
  long *plVar31;
  undefined8 *puVar32;
  undefined *puVar33;
  uint uVar34;
  uint uVar35;
  ulong uVar36;
  long lVar37;
  long lVar38;
  uint uVar39;
  uint uVar40;
  long lVar41;
  long *plVar42;
  uint uVar43;
  ulong uVar44;
  uint uVar45;
  uint uVar46;
  long lVar47;
  ulong uVar48;
  size_t *__s;
  long lVar49;
  size_t __n;
  long lVar50;
  int *piVar51;
  long lVar52;
  long lVar53;
  ulong uVar54;
  long lVar55;
  int iVar56;
  ulong uVar57;
  long *plVar58;
  float fVar59;
  double dVar60;
  float fVar61;
  undefined8 local_f8;
  undefined8 local_f0;
  undefined *puStack_e8;
  undefined *local_e0;
  undefined *puStack_d8;
  undefined *local_d0;
  undefined8 local_c8;
  float local_c0;
  float fStack_bc;
  float local_b8;
  float fStack_b4;
  undefined8 local_b0;
  
  plVar58 = (long *)(param_1 + 0x20);
  if (*plVar58 == 0) {
    return -1;
  }
  iVar22 = (**(code **)**(undefined8 **)(param_1 + 0x4a0))();
  if (iVar22 < 0) {
    return iVar22;
  }
  if (0 < *(int *)(param_1 + 0xd0)) {
    lVar47 = 0;
    do {
      lVar49 = *(long *)(param_1 + 0x4a8);
      if (*(char *)(param_1 + 0x124) == '\0') {
        puVar24 = *(undefined8 **)(lVar49 + lVar47 * 0x108 + 0xa0);
LAB_005aa9bc:
        iVar22 = (**(code **)*puVar24)(puVar24,*plVar58);
        if (iVar22 < 0) {
          return iVar22;
        }
      }
      else {
        puVar24 = *(undefined8 **)(lVar49 + lVar47 * 0x108 + 0x80);
        if ((puVar24 != (undefined8 *)0x0) &&
           (iVar22 = (**(code **)*puVar24)(puVar24,*plVar58), iVar22 < 0)) {
          return iVar22;
        }
        puVar24 = *(undefined8 **)(lVar49 + lVar47 * 0x108 + 0x88);
        if (puVar24 != (undefined8 *)0x0) goto LAB_005aa9bc;
      }
      iVar22 = *(int *)(param_1 + 0x180);
      if (0 < iVar22) {
        lVar52 = 0;
        do {
          puVar24 = *(undefined8 **)(lVar49 + lVar47 * 0x108 + 0x48 + lVar52 * 8);
          if (puVar24 != (undefined8 *)0x0) {
            iVar22 = (**(code **)*puVar24)(puVar24,*plVar58);
            if (iVar22 < 0) {
              return iVar22;
            }
            iVar22 = *(int *)(param_1 + 0x180);
          }
          lVar52 = lVar52 + 1;
        } while (lVar52 < iVar22);
      }
      puVar24 = *(undefined8 **)(lVar49 + lVar47 * 0x108 + 0xa8);
      if ((puVar24 != (undefined8 *)0x0) &&
         (puVar24 != *(undefined8 **)(lVar49 + lVar47 * 0x108 + 0x48))) {
        if (*(char *)(param_1 + 0x124) != '\0') {
          puVar24 = *(undefined8 **)(lVar49 + lVar47 * 0x108 + 0x90);
          if ((puVar24 != (undefined8 *)0x0) &&
             (iVar22 = (**(code **)*puVar24)(puVar24,*plVar58), iVar22 < 0)) {
            return iVar22;
          }
          puVar24 = *(undefined8 **)(lVar49 + lVar47 * 0x108 + 0x98);
          if (puVar24 == (undefined8 *)0x0) goto LAB_005aaa78;
        }
        iVar22 = (**(code **)*puVar24)(puVar24,*plVar58);
        if (iVar22 < 0) {
          return iVar22;
        }
      }
LAB_005aaa78:
      puVar24 = *(undefined8 **)(lVar49 + lVar47 * 0x108 + 0xb0);
      if ((puVar24 != (undefined8 *)0x0) &&
         (iVar22 = (**(code **)*puVar24)(puVar24,*plVar58), iVar22 < 0)) {
        return iVar22;
      }
      puVar24 = *(undefined8 **)(lVar49 + lVar47 * 0x108 + 0xb8);
      if ((puVar24 != (undefined8 *)0x0) &&
         (iVar22 = (**(code **)*puVar24)(puVar24,*plVar58), iVar22 < 0)) {
        return iVar22;
      }
      lVar47 = lVar47 + 1;
    } while (lVar47 < *(int *)(param_1 + 0xd0));
  }
  puVar24 = *(undefined8 **)(param_1 + 0x248);
  if (((puVar24 != (undefined8 *)0x0) && (puVar24 != *(undefined8 **)(param_1 + 0x228))) &&
     (iVar22 = (**(code **)*puVar24)(puVar24,*plVar58), iVar22 < 0)) {
    return iVar22;
  }
  uVar34 = *(uint *)(param_1 + 0x3f8);
  uVar36 = (ulong)uVar34;
  if (-1 < (int)uVar34) {
    lVar47 = 0;
    do {
      iVar22 = (int)uVar36;
      if (((*(long *)(param_1 + 0x430) != 0) &&
          (puVar24 = *(undefined8 **)(*(long *)(param_1 + 0x430) + lVar47 * 8),
          puVar24 != (undefined8 *)0x0)) && (puVar24 != *(undefined8 **)(param_1 + 0x228))) {
        iVar22 = (**(code **)*puVar24)(puVar24,*plVar58);
        if (iVar22 < 0) {
          return iVar22;
        }
        iVar22 = *(int *)(param_1 + 0x3f8);
      }
      if (lVar47 < iVar22) {
        puVar24 = *(undefined8 **)(*(long *)(param_1 + 0x438) + lVar47 * 8);
        if ((puVar24 != (undefined8 *)0x0) &&
           (iVar22 = (**(code **)*puVar24)(puVar24,*plVar58), iVar22 < 0)) {
          return iVar22;
        }
        if (((*(long *)(param_1 + 0x440) != 0) &&
            (puVar24 = *(undefined8 **)(*(long *)(param_1 + 0x440) + lVar47 * 8),
            puVar24 != (undefined8 *)0x0)) &&
           (iVar22 = (**(code **)*puVar24)(puVar24,*plVar58), iVar22 < 0)) {
          return iVar22;
        }
        if (((*(long *)(param_1 + 0x448) != 0) &&
            (puVar24 = *(undefined8 **)(*(long *)(param_1 + 0x448) + lVar47 * 8),
            puVar24 != (undefined8 *)0x0)) &&
           (iVar22 = (**(code **)*puVar24)(puVar24,*plVar58), iVar22 < 0)) {
          return iVar22;
        }
        if (((*(long *)(param_1 + 0x450) != 0) &&
            (puVar24 = *(undefined8 **)(*(long *)(param_1 + 0x450) + lVar47 * 8),
            puVar24 != (undefined8 *)0x0)) &&
           (iVar22 = (**(code **)*puVar24)(puVar24,*plVar58), iVar22 < 0)) {
          return iVar22;
        }
        if (*(long *)(param_1 + 0x468) != 0) {
          puVar24 = *(undefined8 **)(*(long *)(param_1 + 0x468) + lVar47 * 8);
          if (puVar24 != (undefined8 *)0x0) {
            iVar22 = (**(code **)*puVar24)(puVar24,*plVar58);
            if (iVar22 < 0) {
              return iVar22;
            }
            if (*(long *)(param_1 + 0x468) == 0) goto LAB_005aac10;
          }
          puVar24 = *(undefined8 **)(*(long *)(param_1 + 0x470) + lVar47 * 8);
          if ((puVar24 != (undefined8 *)0x0) &&
             (iVar22 = (**(code **)*puVar24)(puVar24,*plVar58), iVar22 < 0)) {
            return iVar22;
          }
        }
LAB_005aac10:
        if (((*(long *)(param_1 + 0x458) != 0) &&
            (puVar24 = *(undefined8 **)(*(long *)(param_1 + 0x458) + lVar47 * 8),
            puVar24 != (undefined8 *)0x0)) &&
           (iVar22 = (**(code **)*puVar24)(puVar24,*plVar58), iVar22 < 0)) {
          return iVar22;
        }
        if (((*(long *)(param_1 + 0x460) != 0) &&
            (puVar24 = *(undefined8 **)(*(long *)(param_1 + 0x460) + lVar47 * 8),
            puVar24 != (undefined8 *)0x0)) &&
           (iVar22 = (**(code **)*puVar24)(puVar24,*plVar58), iVar22 < 0)) {
          return iVar22;
        }
        if (*(long *)(param_1 + 0x478) != 0) {
          puVar24 = *(undefined8 **)(*(long *)(param_1 + 0x478) + lVar47 * 8);
          if (puVar24 != (undefined8 *)0x0) {
            iVar22 = (**(code **)*puVar24)(puVar24,*plVar58);
            if (iVar22 < 0) {
              return iVar22;
            }
            if (*(long *)(param_1 + 0x478) == 0) goto LAB_005aaca4;
          }
          puVar24 = *(undefined8 **)(*(long *)(param_1 + 0x480) + lVar47 * 8);
          if ((puVar24 != (undefined8 *)0x0) &&
             (iVar22 = (**(code **)*puVar24)(puVar24,*plVar58), iVar22 < 0)) {
            return iVar22;
          }
        }
LAB_005aaca4:
        if (((*(long *)(param_1 + 0x488) != 0) &&
            (puVar24 = *(undefined8 **)(*(long *)(param_1 + 0x488) + lVar47 * 8),
            puVar24 != (undefined8 *)0x0)) &&
           (iVar22 = (**(code **)*puVar24)(puVar24,*plVar58), iVar22 < 0)) {
          return iVar22;
        }
      }
      uVar34 = *(uint *)(param_1 + 0x3f8);
      uVar36 = (ulong)(int)uVar34;
      bVar21 = lVar47 < (long)uVar36;
      lVar47 = lVar47 + 1;
    } while (bVar21);
  }
  if (*(char *)(param_1 + 0x12d) == '\0') {
LAB_005ac234:
    *(undefined1 *)(param_1 + 0x240) = 0;
    return 0;
  }
  if ((int)uVar34 < 1) {
    puVar24 = (undefined8 *)(param_1 + 0x3a0);
    iVar22 = (**(code **)(**(long **)(param_1 + 0x20) + 0x1e0))
                       (*(long **)(param_1 + 0x20),0x100,0x100,7,0,0x1c,0,0,puVar24,4);
    if (((iVar22 < 0) && (*(int *)PTR_DAT_02713970 != 0)) && (*(int *)PTR_DAT_02713980 != 0)) {
      FUN_00517ae0("C:/workspace/YEBIS_draft/src/GPU/GPUDepthOfField.cpp(%d) : PPFX ERROR: ",0xfcf);
      uVar29 = FUN_00546ea0(iVar22);
      FUN_00517ae0("CDepthOfField::CreateDeviceResources(): m_pGPUDevice->CreateTexture(&m_pGPUScatterEclipseTexture) failed (0x%x: %s).\n"
                   ,iVar22,uVar29);
    }
    iVar22 = FUN_00546b90(0x1c);
    puVar30 = (undefined8 *)
              FUN_005b9a50(*(undefined8 *)PTR_PTR_02713988,0x40008,
                           "C:/workspace/YEBIS_draft/src/GPU/GPUDepthOfField.cpp",0xfdd,0);
    puVar32 = puVar30;
    if (puVar30 != (undefined8 *)0x0) {
      puVar32 = puVar30 + 1;
      *puVar30 = 0x10000;
    }
    fVar10 = DAT_01d4c32c;
    fVar15 = DAT_01d4bf54;
    local_f8 = (long *)0x3e00000042000000;
    local_b0 = 0x3b8000003b800000;
    uVar36 = 0;
    do {
      uVar48 = 0;
      uVar44 = 0;
      do {
        local_b8 = ((float)(uVar48 & 0xffffffff) + 0.5) * fVar10;
        fStack_b4 = ((float)(uVar36 & 0xffffffff) + 0.5) * fVar10;
        FUN_00561fd0(&local_c8,&local_b8,&local_b0,&local_f8);
        if (1.0 <= (float)local_c8) {
          uVar34 = 0xff;
joined_r0x005ab3ec:
          if (local_c8._4_4_ < 1.0) goto LAB_005ab3f0;
LAB_005ab420:
          uVar40 = 0xff00;
joined_r0x005ab42c:
          if (local_c0 < 1.0) goto LAB_005ab430;
LAB_005ab460:
          uVar35 = 0xff0000;
joined_r0x005ab468:
          if (fStack_bc < 1.0) goto LAB_005ab46c;
LAB_005ab490:
          uVar39 = 0xff000000;
        }
        else {
          if ((float)local_c8 <= 0.0) {
            uVar34 = 0;
            goto joined_r0x005ab3ec;
          }
          uVar34 = (uint)((float)local_c8 * fVar15);
          if (1.0 <= local_c8._4_4_) goto LAB_005ab420;
LAB_005ab3f0:
          if (local_c8._4_4_ <= 0.0) {
            uVar40 = 0;
            goto joined_r0x005ab42c;
          }
          uVar40 = (int)(local_c8._4_4_ * fVar15) << 8;
          if (1.0 <= local_c0) goto LAB_005ab460;
LAB_005ab430:
          if (local_c0 <= 0.0) {
            uVar35 = 0;
            goto joined_r0x005ab468;
          }
          uVar35 = (int)(local_c0 * fVar15) << 0x10;
          if (1.0 <= fStack_bc) goto LAB_005ab490;
LAB_005ab46c:
          if (fStack_bc <= 0.0) {
            uVar39 = 0;
          }
          else {
            uVar39 = (int)(fStack_bc * fVar15) << 0x18;
          }
        }
        uVar48 = uVar48 + 1;
        *(uint *)((long)puVar32 + uVar44 + (uint)(iVar22 * 0x100 * (int)uVar36)) =
             uVar40 | uVar34 | uVar35 | uVar39;
        uVar44 = (ulong)(uint)((int)uVar44 + iVar22);
      } while (uVar48 != 0x100);
      uVar36 = uVar36 + 1;
    } while (uVar36 != 0x100);
    FUN_005623e0(0x3f800000,*puVar24,puVar32,1,0,0);
    (**(code **)(*(long *)*puVar24 + 0x78))((long *)*puVar24,3);
    puVar24 = (undefined8 *)PTR_PTR_02713988;
    if (puVar32 != (undefined8 *)0x0) {
      FUN_005b9b10(*(undefined8 *)PTR_PTR_02713988,puVar32 + -1);
    }
    puStack_d8 = PTR_DAT_02713d98;
    local_e0 = PTR_DAT_02713d90;
    puStack_e8 = PTR_DAT_02713d88;
    local_f0 = PTR_DAT_02713d80;
    local_f8 = (long *)PTR_DAT_02713d78;
    if (*(char *)(param_1 + 0x12d) != '\0') {
      *(undefined4 *)(param_1 + 0x2c0) = 6;
      local_d0 = PTR_DAT_02713da0;
      puVar30 = (undefined8 *)
                FUN_005b9a50(*puVar24,0x38,"C:/workspace/YEBIS_draft/src/GPU/GPUDepthOfField.cpp",
                             0x10b8,0);
      puVar32 = puVar30;
      if (puVar30 != (undefined8 *)0x0) {
        puVar32 = puVar30 + 1;
        *puVar30 = 6;
      }
      iVar22 = *(int *)(param_1 + 0x2c0);
      *(undefined8 **)(param_1 + 0x2c8) = puVar32;
      plVar31 = (long *)FUN_005b9a50(*puVar24,(long)iVar22 * 8 + 8,
                                     "C:/workspace/YEBIS_draft/src/GPU/GPUDepthOfField.cpp",0x10b9,0
                                    );
      plVar26 = plVar31;
      if (plVar31 != (long *)0x0) {
        plVar26 = plVar31 + 1;
        *plVar31 = (long)iVar22;
      }
      iVar22 = *(int *)(param_1 + 0x2c0);
      *(long **)(param_1 + 0x2d0) = plVar26;
      plVar31 = (long *)FUN_005b9a50(*puVar24,(long)iVar22 << 4 | 8,
                                     "C:/workspace/YEBIS_draft/src/GPU/GPUDepthOfField.cpp",0x10ba,0
                                    );
      plVar26 = plVar31;
      if (plVar31 != (long *)0x0) {
        plVar26 = plVar31 + 1;
        *plVar31 = (long)iVar22;
      }
      iVar22 = *(int *)(param_1 + 0x2c0);
      *(long **)(param_1 + 0x2d8) = plVar26;
      plVar31 = (long *)FUN_005b9a50(*puVar24,(long)iVar22 * 4 + 8,
                                     "C:/workspace/YEBIS_draft/src/GPU/GPUDepthOfField.cpp",0x10bb,0
                                    );
      plVar26 = plVar31;
      if (plVar31 != (long *)0x0) {
        plVar26 = plVar31 + 1;
        *plVar31 = (long)iVar22;
      }
      iVar22 = *(int *)(param_1 + 0x2c0);
      *(long **)(param_1 + 0x2e0) = plVar26;
      plVar31 = (long *)FUN_005b9a50(*puVar24,(long)iVar22 * 4 + 8,
                                     "C:/workspace/YEBIS_draft/src/GPU/GPUDepthOfField.cpp",0x10bc,0
                                    );
      plVar26 = plVar31;
      if (plVar31 != (long *)0x0) {
        plVar26 = plVar31 + 1;
        *plVar31 = (long)iVar22;
      }
      *(long **)(param_1 + 0x2e8) = plVar26;
      if (0 < *(int *)(param_1 + 0x2c0)) {
        lVar52 = 0;
        lVar49 = 0;
        lVar47 = 0;
        puVar33 = PTR_DAT_02713d78;
        for (lVar53 = 1;
            FUN_005ad480(0x40000000,*(undefined4 *)(param_1 + 0x148),
                         *(undefined4 *)(param_1 + 0x14c),*(undefined4 *)(param_1 + 0x150),param_1,
                         0x80,0x40,puVar33,*(long *)(param_1 + 0x2c8) + lVar52,
                         *(long *)(param_1 + 0x2d0) + lVar52,*(long *)(param_1 + 0x2d8) + lVar49,
                         *(long *)(param_1 + 0x2e0) + lVar47,(long)plVar26 + lVar47),
            lVar53 < *(int *)(param_1 + 0x2c0); lVar53 = lVar53 + 1) {
          puVar33 = *(undefined **)((long)&local_f0 + lVar52);
          plVar26 = *(long **)(param_1 + 0x2e8);
          lVar47 = lVar47 + 4;
          lVar49 = lVar49 + 0x10;
          lVar52 = lVar52 + 8;
        }
      }
      if (*(char *)(param_1 + 0x12d) != '\0') {
        *(undefined4 *)(param_1 + 0x2f0) = 4;
        puVar30 = (undefined8 *)
                  FUN_005b9a50(*puVar24,0x18,"C:/workspace/YEBIS_draft/src/GPU/GPUDepthOfField.cpp",
                               0x10f1,0);
        puVar32 = puVar30;
        if (puVar30 != (undefined8 *)0x0) {
          puVar32 = puVar30 + 1;
          *puVar30 = 4;
        }
        fVar20 = DAT_01d4c4dc;
        fVar19 = DAT_01d4c2a0;
        fVar18 = DAT_01d4c284;
        fVar17 = DAT_01d4c1f0;
        fVar16 = DAT_01d4c130;
        fVar14 = DAT_01d4bef8;
        fVar13 = DAT_01d4bec4;
        fVar12 = DAT_01d4bb38;
        fVar11 = DAT_01d4bb04;
        fVar10 = DAT_01d4bae0;
        dVar9 = DAT_01cd5460;
        dVar8 = DAT_01cd5150;
        uVar36 = 0;
        *(undefined8 **)(param_1 + 0x398) = puVar32;
        do {
          iVar22 = *(int *)(param_1 + 0x2f0);
          plVar31 = (long *)FUN_005b9a50(*puVar24,(long)iVar22 * 8 + 8,
                                         "C:/workspace/YEBIS_draft/src/GPU/GPUDepthOfField.cpp",
                                         0x10f5,0);
          plVar26 = plVar31;
          if (plVar31 != (long *)0x0) {
            plVar26 = plVar31 + 1;
            *plVar31 = (long)iVar22;
          }
          lVar47 = param_1 + uVar36 * 8;
          *(long **)(lVar47 + 0x2f8) = plVar26;
          iVar22 = *(int *)(param_1 + 0x2f0);
          plVar31 = (long *)FUN_005b9a50(*puVar24,(long)iVar22 * 8 + 8,
                                         "C:/workspace/YEBIS_draft/src/GPU/GPUDepthOfField.cpp",
                                         0x10f6,0);
          plVar26 = plVar31;
          if (plVar31 != (long *)0x0) {
            plVar26 = plVar31 + 1;
            *plVar31 = (long)iVar22;
          }
          *(long **)(lVar47 + 0x318) = plVar26;
          iVar22 = *(int *)(param_1 + 0x2f0);
          plVar31 = (long *)FUN_005b9a50(*puVar24,(long)iVar22 * 4 + 8,
                                         "C:/workspace/YEBIS_draft/src/GPU/GPUDepthOfField.cpp",
                                         0x10f7,0);
          plVar26 = plVar31;
          if (plVar31 != (long *)0x0) {
            plVar26 = plVar31 + 1;
            *plVar31 = (long)iVar22;
          }
          *(long **)(lVar47 + 0x338) = plVar26;
          iVar22 = *(int *)(param_1 + 0x2f0);
          plVar31 = (long *)FUN_005b9a50(*puVar24,(long)iVar22 * 4 + 8,
                                         "C:/workspace/YEBIS_draft/src/GPU/GPUDepthOfField.cpp",
                                         0x10f8,0);
          plVar26 = plVar31;
          if (plVar31 != (long *)0x0) {
            plVar26 = plVar31 + 1;
            *plVar31 = (long)iVar22;
          }
          *(long **)(lVar47 + 0x358) = plVar26;
          iVar22 = *(int *)(param_1 + 0x2f0);
          uVar48 = (ulong)iVar22;
          puVar25 = (ulong *)FUN_005b9a50(*puVar24,uVar48 * 0x18 + 8,
                                          "C:/workspace/YEBIS_draft/src/GPU/GPUDepthOfField.cpp",
                                          0x10f9,0);
          puVar27 = puVar25;
          if (puVar25 != (ulong *)0x0) {
            puVar27 = puVar25 + 1;
            *puVar25 = uVar48;
            if (iVar22 != 0) {
              uVar44 = uVar48 & 3;
              puVar25 = puVar27;
              if (2 < uVar48 - 1) {
                lVar49 = uVar44 - uVar48;
                do {
                  *(undefined4 *)puVar25 = 6;
                  *(undefined8 *)((long)puVar25 + 4) = 0x3f00000000000000;
                  lVar49 = lVar49 + 4;
                  *(undefined8 *)((long)puVar25 + 0xc) = 0x3f4000003f400000;
                  *(undefined4 *)(puVar25 + 3) = 6;
                  *(undefined8 *)((long)puVar25 + 0x1c) = 0x3f00000000000000;
                  *(undefined8 *)((long)puVar25 + 0x24) = 0x3f4000003f400000;
                  *(undefined4 *)(puVar25 + 6) = 6;
                  *(undefined8 *)((long)puVar25 + 0x34) = 0x3f00000000000000;
                  *(undefined8 *)((long)puVar25 + 0x3c) = 0x3f4000003f400000;
                  *(undefined4 *)(puVar25 + 9) = 6;
                  *(undefined8 *)((long)puVar25 + 0x4c) = 0x3f00000000000000;
                  *(undefined8 *)((long)puVar25 + 0x54) = 0x3f4000003f400000;
                  puVar25 = puVar25 + 0xc;
                } while (lVar49 != 0);
              }
              if (uVar44 != 0) {
                lVar49 = -uVar44;
                do {
                  *(undefined4 *)puVar25 = 6;
                  *(undefined8 *)((long)puVar25 + 4) = 0x3f00000000000000;
                  lVar49 = lVar49 + 1;
                  *(undefined8 *)((long)puVar25 + 0xc) = 0x3f4000003f400000;
                  puVar25 = puVar25 + 3;
                } while (lVar49 != 0);
              }
            }
          }
          *(ulong **)(lVar47 + 0x378) = puVar27;
          uVar4 = *(undefined4 *)(param_1 + 0x13c);
          uVar5 = *(undefined4 *)(param_1 + 0x140);
          iVar22 = *(int *)(param_1 + 0x2f0);
          plVar31 = (long *)FUN_005b9a50(*puVar24,(long)iVar22 * 8 + 8,
                                         "C:/workspace/YEBIS_draft/src/GPU/GPUDepthOfField.cpp",
                                         0x1137,0);
          plVar26 = plVar31;
          if (plVar31 != (long *)0x0) {
            plVar26 = plVar31 + 1;
            *plVar31 = (long)iVar22;
          }
          if (*(int *)(param_1 + 0x2f0) < 1) {
LAB_005ac200:
            if (plVar26 != (long *)0x0) goto LAB_005ac204;
          }
          else {
            plVar31 = (long *)(lVar47 + 0x2f8);
            plVar2 = (long *)(lVar47 + 0x318);
            lVar49 = 0;
            do {
              puVar30 = (undefined8 *)
                        FUN_005b9a50(*puVar24,0x10008,
                                     "C:/workspace/YEBIS_draft/src/GPU/GPUDepthOfField.cpp",0x113b,0
                                    );
              puVar32 = puVar30;
              if (puVar30 != (undefined8 *)0x0) {
                puVar32 = puVar30 + 1;
                *puVar30 = 0x4000;
              }
              plVar26[lVar49] = (long)puVar32;
              iVar22 = *(int *)(param_1 + 0x2f0);
              lVar49 = lVar49 + 1;
            } while (lVar49 < iVar22);
            if (0 < iVar22) {
              lVar49 = (long)iVar22;
              do {
                lVar52 = lVar49 + -1;
                lVar53 = lVar52 * 8;
                *(undefined8 *)(*plVar31 + lVar53) = 0;
                *(undefined8 *)(*plVar2 + lVar53) = 0;
                lVar55 = lVar52 * 4;
                iVar56 = (int)lVar49;
                iVar3 = iVar22 + -1;
                if (iVar56 <= iVar22 + -1) {
                  iVar3 = iVar56;
                }
                fVar59 = exp2f(*(float *)(&UNK_01d4b9c0 + lVar55));
                *(float *)(*(long *)(param_1 + 0x398) + lVar55) = fVar59;
                iVar23 = (**(code **)(**(long **)(param_1 + 0x20) + 0x1e0))
                                   (*(long **)(param_1 + 0x20),0x80,0x80,6,0,0x1c,0,0,
                                    *plVar31 + lVar53,4);
                if (((iVar23 < 0) && (*(int *)PTR_DAT_02713970 != 0)) &&
                   (*(int *)PTR_DAT_02713980 != 0)) {
                  FUN_00517ae0("C:/workspace/YEBIS_draft/src/GPU/GPUDepthOfField.cpp(%d) : PPFX ERROR: "
                               ,0x1154);
                  uVar29 = FUN_00546ea0(iVar23);
                  FUN_00517ae0("CDepthOfField::CreateDeviceResources(): m_pGPUDevice->CreateTexture(&m_aapGPUScatterBokehLutTexture[s][i]) failed (0x%x: %s).\n"
                               ,iVar23,uVar29);
                }
                fVar59 = SQRT((float)DAT_02763504 * fVar16);
                if (NAN(fVar59)) {
                  fVar59 = sqrtf((float)DAT_02763504 * fVar16);
                }
                dVar60 = log((double)(int)fVar59);
                dVar60 = dVar60 / dVar9;
                iVar23 = (int)(dVar60 + 1.0);
                if (dVar60 == (double)(int)dVar60) {
                  iVar23 = (int)dVar60;
                }
                dVar60 = ldexp(1.0,iVar23);
                uVar34 = (uint)dVar60;
                iVar23 = (**(code **)(*(long *)*plVar58 + 0x1e0))
                                   ((long *)*plVar58,uVar34,uVar34,1,0,0x1c,0,0,*plVar2 + lVar52 * 8
                                    ,4);
                if (iVar23 < 0) {
                  if (*(int *)PTR_DAT_02713970 == 0) {
                    return iVar23;
                  }
                  if (*(int *)PTR_DAT_02713980 == 0) {
                    return iVar23;
                  }
                  FUN_00517ae0("C:/workspace/YEBIS_draft/src/GPU/GPUDepthOfField.cpp(%d) : PPFX ERROR: "
                               ,0x1169);
                  uVar29 = FUN_00546ea0(iVar23);
                  FUN_00517ae0("CDepthOfField::CreateDeviceResources(): m_pGPUDevice->CreateTexture(&m_aapGPUScatterBokehLutMinTexture[s][i]) failed (0x%x: %s).\n"
                               ,iVar23,uVar29);
                  return iVar23;
                }
                iVar23 = FUN_00546b90(0x1c);
                fVar59 = (float)(int)lVar52 + fVar19;
                lVar41 = plVar26[lVar52];
                lVar37 = plVar26[iVar3];
                lVar50 = *(long *)(lVar47 + 0x378);
                piVar51 = (int *)(lVar50 + lVar52 * 0x18);
                *piVar51 = (int)uVar36 + 5;
                fVar59 = expf((fVar59 * fVar59) / fVar11);
                fVar61 = 1.0;
                piVar51[2] = (int)fVar59;
                if (lVar52 == 0) {
LAB_005abc2c:
                  piVar51[2] = (int)fVar61;
                }
                else if (iVar56 == *(int *)(param_1 + 0x2f0)) {
                  fVar61 = fVar59 * fVar13;
                  goto LAB_005abc2c;
                }
                lVar38 = lVar50 + lVar52 * 0x18;
                *(undefined4 *)(lVar38 + 0xc) = uVar4;
                *(undefined4 *)(lVar38 + 0x10) = uVar5;
                uVar48 = 0;
                uVar40 = 0;
                *(float *)(lVar38 + 4) = ((fVar14 / (float)*piVar51) * 0.5 * fVar12) / fVar18;
                local_c8 = 0x3c0000003c000000;
                do {
                  fVar59 = ((float)(uVar48 & 0xffffffff) + 0.5) * fVar10;
                  uVar44 = (ulong)(uint)(iVar23 * 0x80 * (int)uVar48);
                  lVar38 = lVar41 + uVar44;
                  if (iVar56 < iVar22) {
                    uVar54 = 0;
                    uVar57 = 0;
                    do {
                      local_b0 = CONCAT44(fVar59,((float)(uVar54 & 0xffffffff) + 0.5) * fVar10);
                      FUN_00562140(&local_f8,&local_b0,&local_c8,piVar51);
                      if (1.0 <= (float)local_f8) {
                        uVar35 = 0xff;
joined_r0x005abd3c:
                        uVar39 = (uint)(0.0 < (float)local_f8 || 0.0 < local_f8._4_4_);
                        if (1.0 <= local_f8._4_4_) goto joined_r0x005abd88;
LAB_005abd40:
                        if (local_f8._4_4_ <= 0.0) goto joined_r0x005abd88;
                        uVar45 = (int)(local_f8._4_4_ * fVar15) << 8;
                        uVar39 = uVar39 | 0.0 < (float)local_f0;
                        if (1.0 <= (float)local_f0) goto LAB_005abdc4;
LAB_005abd8c:
                        if ((float)local_f0 <= 0.0) {
                          uVar46 = 0;
                          goto joined_r0x005abdd0;
                        }
                        uVar46 = (int)((float)local_f0 * fVar15) << 0x10;
                        uVar40 = uVar40 + uVar39;
                        if (local_f0._4_4_ < 1.0) goto LAB_005abdd4;
LAB_005abdfc:
                        uVar39 = 0xff000000;
                      }
                      else {
                        if ((float)local_f8 <= 0.0) {
                          uVar35 = 0;
                          goto joined_r0x005abd3c;
                        }
                        uVar35 = (uint)((float)local_f8 * fVar15);
                        uVar39 = (uint)(0.0 < (float)local_f8 || 0.0 < local_f8._4_4_);
                        if (local_f8._4_4_ < 1.0) goto LAB_005abd40;
joined_r0x005abd88:
                        uVar45 = 0;
                        uVar39 = uVar39 | 0.0 < (float)local_f0;
                        if ((float)local_f0 < 1.0) goto LAB_005abd8c;
LAB_005abdc4:
                        uVar46 = 0xff0000;
joined_r0x005abdd0:
                        uVar40 = uVar40 + uVar39;
                        if (1.0 <= local_f0._4_4_) goto LAB_005abdfc;
LAB_005abdd4:
                        if (local_f0._4_4_ <= 0.0) {
                          uVar39 = 0;
                        }
                        else {
                          uVar39 = (int)(local_f0._4_4_ * fVar15) << 0x18;
                        }
                      }
                      uVar54 = uVar54 + 1;
                      *(uint *)(lVar38 + uVar57) =
                           (*(uint *)(lVar37 + uVar44 + uVar57) & 0xff) << 8 |
                           (uVar45 | uVar35) & 0xffff00ff | uVar46 | uVar39;
                      uVar57 = (ulong)(uint)((int)uVar57 + iVar23);
                    } while (uVar54 != 0x80);
                  }
                  else {
                    uVar44 = 0;
                    uVar54 = 0;
                    do {
                      local_b0 = CONCAT44(fVar59,((float)(uVar44 & 0xffffffff) + 0.5) * fVar10);
                      FUN_00562140(&local_f8,&local_b0,&local_c8,piVar51);
                      if (1.0 <= (float)local_f8) {
                        uVar35 = 0xff;
joined_r0x005abebc:
                        uVar39 = (uint)(0.0 < (float)local_f8 || 0.0 < local_f8._4_4_);
                        if (local_f8._4_4_ < 1.0) goto LAB_005abec0;
LAB_005abef8:
                        uVar45 = 0xff00;
joined_r0x005abf08:
                        uVar39 = uVar39 | 0.0 < (float)local_f0;
                        if ((float)local_f0 < 1.0) goto LAB_005abf0c;
LAB_005abf44:
                        uVar46 = 0xff0000;
joined_r0x005abf50:
                        uVar40 = uVar40 + uVar39;
                        if (local_f0._4_4_ < 1.0) goto LAB_005abf54;
LAB_005abf7c:
                        uVar39 = 0xff000000;
                      }
                      else {
                        if ((float)local_f8 <= 0.0) {
                          uVar35 = 0;
                          goto joined_r0x005abebc;
                        }
                        uVar35 = (uint)((float)local_f8 * fVar15);
                        uVar39 = (uint)(0.0 < (float)local_f8 || 0.0 < local_f8._4_4_);
                        if (1.0 <= local_f8._4_4_) goto LAB_005abef8;
LAB_005abec0:
                        if (local_f8._4_4_ <= 0.0) {
                          uVar45 = 0;
                          goto joined_r0x005abf08;
                        }
                        uVar45 = (int)(local_f8._4_4_ * fVar15) << 8;
                        uVar39 = uVar39 | 0.0 < (float)local_f0;
                        if (1.0 <= (float)local_f0) goto LAB_005abf44;
LAB_005abf0c:
                        if ((float)local_f0 <= 0.0) {
                          uVar46 = 0;
                          goto joined_r0x005abf50;
                        }
                        uVar46 = (int)((float)local_f0 * fVar15) << 0x10;
                        uVar40 = uVar40 + uVar39;
                        if (1.0 <= local_f0._4_4_) goto LAB_005abf7c;
LAB_005abf54:
                        if (local_f0._4_4_ <= 0.0) {
                          uVar39 = 0;
                        }
                        else {
                          uVar39 = (int)(local_f0._4_4_ * fVar15) << 0x18;
                        }
                      }
                      uVar44 = uVar44 + 1;
                      *(uint *)(lVar38 + uVar54) = uVar45 | uVar35 | uVar46 | uVar39;
                      uVar54 = (ulong)(uint)((int)uVar54 + iVar23);
                    } while (uVar44 != 0x80);
                  }
                  uVar48 = uVar48 + 1;
                } while (uVar48 != 0x80);
                *(undefined4 *)(*(long *)(lVar47 + 0x338) + lVar55) =
                     *(undefined4 *)(lVar50 + lVar52 * 0x18 + 0x14);
                *(float *)(*(long *)(lVar47 + 0x358) + lVar55) = (float)((double)uVar40 * dVar8);
                local_f8 = (long *)0x0;
                FUN_005623e0(0x3f800000,*(undefined8 *)(*plVar31 + lVar53),lVar41,0,0,&local_f8);
                fVar59 = logf(fVar17 / (float)uVar34);
                (**(code **)(**(long **)(*plVar2 + lVar53) + 0x48))
                          (*(long **)(*plVar2 + lVar53),local_f8[(uint)(int)(fVar59 / fVar20)],0,0,1
                          );
                puVar24 = (undefined8 *)PTR_PTR_02713988;
                if (*local_f8 != 0) {
                  FUN_005b9b10(*(undefined8 *)PTR_PTR_02713988,*local_f8 + -8);
                  *local_f8 = 0;
                }
                if (local_f8[1] != 0) {
                  FUN_005b9b10(*puVar24,local_f8[1] + -8);
                  local_f8[1] = 0;
                }
                if (local_f8[2] != 0) {
                  FUN_005b9b10(*puVar24,local_f8[2] + -8);
                  local_f8[2] = 0;
                }
                if (local_f8[3] != 0) {
                  FUN_005b9b10(*puVar24,local_f8[3] + -8);
                  local_f8[3] = 0;
                }
                if (local_f8[4] != 0) {
                  FUN_005b9b10(*puVar24,local_f8[4] + -8);
                  local_f8[4] = 0;
                }
                if (local_f8[5] != 0) {
                  FUN_005b9b10(*puVar24,local_f8[5] + -8);
                  local_f8[5] = 0;
                }
                if (local_f8 != (long *)0x0) {
                  plVar42 = local_f8 + local_f8[-1];
                  do {
                    plVar42 = plVar42 + -1;
                  } while (local_f8 <= plVar42);
                  FUN_005b9b10(*puVar24);
                  local_f8 = (long *)0x0;
                }
                (**(code **)(**(long **)(*plVar31 + lVar53) + 0x78))
                          (*(long **)(*plVar31 + lVar53),3);
                (**(code **)(**(long **)(*plVar2 + lVar53) + 0x78))(*(long **)(*plVar2 + lVar53),3);
                iVar22 = *(int *)(param_1 + 0x2f0);
                bVar21 = 1 < lVar49;
                lVar49 = lVar52;
              } while (bVar21);
              if (iVar22 < 1) goto LAB_005ac200;
              lVar47 = 0;
              do {
                if (plVar26[lVar47] != 0) {
                  FUN_005b9b10(*puVar24,plVar26[lVar47] + -8);
                  plVar26[lVar47] = 0;
                  iVar22 = *(int *)(param_1 + 0x2f0);
                }
                lVar47 = lVar47 + 1;
              } while (lVar47 < iVar22);
            }
LAB_005ac204:
            plVar31 = plVar26 + plVar26[-1];
            do {
              plVar31 = plVar31 + -1;
            } while (plVar26 <= plVar31);
            FUN_005b9b10(*puVar24);
          }
          uVar36 = uVar36 + 1;
        } while (uVar36 < 4);
      }
    }
    goto LAB_005ac234;
  }
  uVar40 = (*(int **)(param_1 + 0x420))[1] * **(int **)(param_1 + 0x420);
  uVar34 = uVar40 * 4;
  **(uint **)(param_1 + 0x400) = uVar34;
  uVar36 = (ulong)(uVar40 * 6) << 2;
  uVar48 = -(ulong)((uVar40 * 3 & 0x7fffffff) >> 0x1e) & 0xfffffffc00000000 | uVar36;
  **(uint **)(param_1 + 0x408) = uVar40 * 6;
  puVar25 = (ulong *)FUN_005b9a50(*(undefined8 *)PTR_PTR_02713988,uVar48 + 8,
                                  "C:/workspace/YEBIS_draft/src/GPU/GPUDepthOfField.cpp",0xe4f,0);
  puVar27 = puVar25;
  if (puVar25 != (ulong *)0x0) {
    puVar27 = puVar25 + 1;
    *puVar25 = uVar48;
  }
  plVar26 = (long *)*plVar58;
  bVar21 = (char)plVar26[0xb] == '\0';
  uVar35 = 3;
  if (!bVar21) {
    uVar35 = 1;
  }
  uVar39 = 3;
  if (bVar21) {
    uVar39 = 1;
  }
  uVar45 = 1;
  if (bVar21) {
    uVar45 = 2;
  }
  uVar46 = 1;
  if (!bVar21) {
    uVar46 = 2;
  }
  if ((int)uVar40 < 1) goto LAB_005aae78;
  if (uVar40 == 1) {
    lVar47 = 0;
LAB_005aae40:
    iVar22 = (int)lVar47;
    uVar43 = iVar22 << 2;
    puVar1 = (uint *)((long)puVar27 + (ulong)(uint)(iVar22 * 6) * 4);
    *puVar1 = uVar43;
    puVar1[1] = uVar46 | uVar43;
    puVar1[4] = uVar39 | iVar22 << 2;
    puVar1[5] = uVar35 | iVar22 << 2;
    puVar1[2] = uVar45 | uVar43;
    puVar1[3] = iVar22 << 2 | 2;
  }
  else {
    lVar47 = 0;
    uVar43 = 4;
    uVar48 = 6;
    do {
      uVar7 = uVar43 - 4;
      puVar1 = (uint *)((long)puVar27 + ((ulong)((int)uVar48 - 6) & 0xfffffffc) * 4);
      *puVar1 = uVar7;
      puVar1[1] = uVar46 | uVar7;
      puVar1[2] = uVar45 | uVar7;
      puVar1[3] = uVar43 - 2;
      puVar1[4] = uVar39 | uVar7;
      puVar1[5] = uVar35 | uVar7;
      uVar44 = uVar48 & 0xfffffffe;
      uVar48 = uVar48 + 0xc;
      puVar1 = (uint *)((long)puVar27 + uVar44 * 4);
      *puVar1 = uVar43;
      puVar1[1] = uVar46 | uVar43;
      lVar47 = lVar47 + 2;
      uVar7 = uVar39 | uVar43;
      puVar1[2] = uVar45 | uVar43;
      puVar1[3] = uVar43 + 2;
      uVar6 = uVar35 | uVar43;
      uVar43 = uVar43 + 8;
      puVar1[4] = uVar7;
      puVar1[5] = uVar6;
    } while ((ulong)uVar40 - ((ulong)uVar40 & 1) != lVar47);
    if ((uVar40 & 1) != 0) goto LAB_005aae40;
  }
  plVar26 = (long *)*plVar58;
LAB_005aae78:
  (**(code **)(*plVar26 + 0x228))
            (plVar26,uVar36 & 0xffffffff,1,0x2a,0x800,*(undefined8 *)(param_1 + 0x418),0,puVar27);
  puVar33 = PTR_PTR_02713988;
  if (puVar27 != (ulong *)0x0) {
    FUN_005b9b10(*(undefined8 *)PTR_PTR_02713988,puVar27 + -1);
  }
  puVar27 = (ulong *)FUN_005b9a50(*(undefined8 *)puVar33,(long)(int)uVar34 << 4 | 8,
                                  "C:/workspace/YEBIS_draft/src/GPU/GPUDepthOfField.cpp",0xe83,0);
  if (puVar27 != (ulong *)0x0) {
    *puVar27 = -(ulong)((uVar40 & 0x3fffffff) >> 0x1d) & 0xfffffff000000000 | (ulong)uVar34 << 4;
  }
  __n = (size_t)(int)uVar40;
  psVar28 = (size_t *)
            FUN_005b9a50(*(undefined8 *)puVar33,__n + 8,
                         "C:/workspace/YEBIS_draft/src/GPU/GPUDepthOfField.cpp",0xe88,0);
  __s = psVar28;
  if (psVar28 != (size_t *)0x0) {
    __s = psVar28 + 1;
    *psVar28 = __n;
  }
                    /* WARNING: Subroutine does not return */
  memset(__s,0,__n);
}


