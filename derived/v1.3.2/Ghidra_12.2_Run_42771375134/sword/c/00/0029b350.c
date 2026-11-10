/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0029b350; name: FUN_0029b350
 */


/* WARNING: Removing unreachable block (ram,0x0029b85c) */
/* WARNING: Removing unreachable block (ram,0x0029be94) */

undefined8 FUN_0029b350(undefined8 param_1,undefined8 *param_2)

{
  char *pcVar1;
  undefined1 uVar2;
  undefined1 uVar3;
  ushort uVar4;
  bool bVar5;
  bool bVar6;
  int iVar7;
  uint uVar8;
  int iVar9;
  uint uVar10;
  ulong uVar11;
  long *plVar12;
  long *plVar13;
  long lVar14;
  uint *puVar15;
  long *plVar16;
  undefined8 uVar17;
  int iVar18;
  undefined1 *puVar19;
  uint uVar20;
  code *pcVar21;
  long lVar22;
  undefined2 *puVar23;
  ushort *puVar24;
  uint uVar25;
  uint *puVar26;
  undefined4 uVar27;
  undefined4 local_6c;
  char local_68 [4];
  uint local_64;
  
  uVar11 = FUN_002af620(0x4d,0x45,0x53,0x48,&local_64,local_68,param_2);
  if ((uVar11 & 1) == 0) {
    return 0;
  }
  if (local_64 < 0xe) {
    iVar7 = 0;
  }
  else {
    iVar7 = FUN_002af410(local_68[0],param_2);
  }
  if (local_64 < 10) {
    uVar17 = FUN_00400880();
    FUN_00400890(uVar17,0x20,
                 "C:/gitlab-runner/builds/ba119cc0/0/research_and_development/physx/PhysX/PhysX_3.4/Source/GeomUtils/src/GuMeshFactory.cpp"
                 ,0xa4,
                 "Loading triangle mesh failed: Deprecated mesh cooking format. Please recook your mesh in a new cooking format."
                );
    return 0;
  }
  uVar8 = FUN_002af410(local_68[0],param_2);
  if (local_64 < 0xd) {
    FUN_002af470(local_68[0],param_2);
  }
  if (iVar7 == 0) {
    plVar12 = (long *)FUN_00400d30();
    pcVar21 = *(code **)(*plVar12 + 0x10);
    plVar13 = (long *)FUN_00400d60();
    uVar11 = (**(code **)(*plVar13 + 0x28))();
    pcVar1 = 
    "static const char *physx::shdfnd::ReflectionAllocator<physx::Gu::RTreeTriangleData>::getName() [T = physx::Gu::RTreeTriangleData]"
    ;
    if ((uVar11 & 1) == 0) {
      pcVar1 = "<allocation names disabled>";
    }
    plVar12 = (long *)(*pcVar21)(plVar12,0xf0,pcVar1,
                                 "C:/gitlab-runner/builds/ba119cc0/0/research_and_development/physx/PhysX/PhysX_3.4/Source/GeomUtils/src/GuMeshFactory.cpp"
                                 ,0xb6);
    *(undefined8 *)((long)plVar12 + 0xc) = 0;
    plVar12[5] = 0x7e7fffff7e7fffff;
    plVar12[6] = -0x180000081800001;
    plVar12[3] = 0;
    plVar12[4] = 0;
    *(undefined4 *)(plVar12 + 9) = 0;
    *(undefined1 *)((long)plVar12 + 0x4c) = 0;
    plVar12[7] = -0x180000001800001;
    plVar12[8] = 0;
    plVar12[10] = 0;
    plVar12[0xb] = 0;
    plVar12[0xc] = 0;
    plVar12[0xd] = 0;
    plVar12[0xe] = 0;
    plVar12[0xf] = 0;
    *plVar12 = (long)(PTR_DAT_02711f68 + 0x10);
    plVar12[0x10] = 0;
    *(undefined4 *)((long)plVar12 + 0xe4) = 0;
    plVar12[0x1d] = 0;
    plVar12[0x1b] = 0;
    *(undefined4 *)(plVar12 + 0x1a) = 4;
    *(undefined4 *)(plVar12 + 1) = 0;
  }
  else {
    if (iVar7 != 1) {
      return 0;
    }
    plVar12 = (long *)FUN_00400d30();
    pcVar21 = *(code **)(*plVar12 + 0x10);
    plVar13 = (long *)FUN_00400d60();
    uVar11 = (**(code **)(*plVar13 + 0x28))();
    pcVar1 = 
    "static const char *physx::shdfnd::ReflectionAllocator<physx::Gu::BV4TriangleData>::getName() [T = physx::Gu::BV4TriangleData]"
    ;
    if ((uVar11 & 1) == 0) {
      pcVar1 = "<allocation names disabled>";
    }
    plVar12 = (long *)(*pcVar21)(plVar12,0x100,pcVar1,
                                 "C:/gitlab-runner/builds/ba119cc0/0/research_and_development/physx/PhysX/PhysX_3.4/Source/GeomUtils/src/GuMeshFactory.cpp"
                                 ,0xb8);
                    /* try { // try from 0029b450 to 0029b453 has its CatchHandler @ 0029c314 */
    FUN_0029cf20();
  }
  iVar9 = FUN_002af410(local_68[0],param_2);
  if (iVar9 + 1U == 0) {
    lVar14 = 0;
  }
  else {
    plVar13 = (long *)FUN_00400d30();
    lVar14 = (**(code **)(*plVar13 + 0x10))
                       (plVar13,(ulong)(iVar9 + 1U) * 0xc,"NonTrackedAlloc",
                        "./../../GeomUtils/src/mesh/GuMeshData.h",0xae);
  }
  plVar12[3] = lVar14;
  *(int *)((long)plVar12 + 0xc) = iVar9;
  uVar10 = FUN_002af410(local_68[0],param_2);
  bVar6 = (uVar8 & 0xc) == 0;
  bVar5 = 0xffff < *(uint *)((long)plVar12 + 0xc);
  if (!bVar6 && !bVar5) {
    *(byte *)((long)plVar12 + 0x4c) = *(byte *)((long)plVar12 + 0x4c) | 2;
  }
  lVar22 = 2;
  if (bVar6 || bVar5) {
    lVar22 = 4;
  }
  lVar22 = lVar22 * (ulong)uVar10;
  if (lVar22 == 0) {
    puVar15 = (uint *)0x0;
    plVar12[4] = 0;
  }
  else {
    plVar13 = (long *)FUN_00400d30();
    puVar15 = (uint *)(**(code **)(*plVar13 + 0x10))
                                (plVar13,lVar22 * 3,"NonTrackedAlloc",
                                 "./../../GeomUtils/src/mesh/GuMeshData.h",0xbc);
    plVar12[4] = (long)puVar15;
  }
  if ((uVar8 >> 5 & 1) != 0) {
    if (lVar22 == 0) {
      lVar22 = 0;
    }
    else {
      plVar13 = (long *)FUN_00400d30();
      lVar22 = (**(code **)(*plVar13 + 0x10))
                         (plVar13,lVar22 * 3,"NonTrackedAlloc",
                          "./../../GeomUtils/src/mesh/GuMeshData.h",0xbe);
      puVar15 = (uint *)plVar12[4];
    }
    plVar12[0xd] = lVar22;
  }
  *(uint *)(plVar12 + 2) = uVar10;
  (**(code **)*param_2)(param_2,lVar14,*(int *)((long)plVar12 + 0xc) * 0xc);
  if ((local_68[0] != '\0') && (*(int *)((long)plVar12 + 0xc) != 0)) {
    uVar11 = 0;
    puVar19 = (undefined1 *)(lVar14 + 5);
    do {
      uVar2 = puVar19[-5];
      puVar19[-5] = puVar19[-2];
      uVar3 = puVar19[-4];
      puVar19[-2] = uVar2;
      puVar19[-4] = puVar19[-3];
      puVar19[-3] = uVar3;
      uVar2 = puVar19[-1];
      puVar19[-1] = puVar19[2];
      puVar19[2] = uVar2;
      uVar2 = *puVar19;
      *puVar19 = puVar19[1];
      puVar19[1] = uVar2;
      uVar2 = puVar19[3];
      puVar19[3] = puVar19[6];
      puVar19[6] = uVar2;
      uVar2 = puVar19[4];
      puVar19[4] = puVar19[5];
      puVar19[5] = uVar2;
      uVar11 = uVar11 + 1;
      puVar19 = puVar19 + 0xc;
    } while (uVar11 < *(uint *)((long)plVar12 + 0xc));
  }
  iVar9 = (int)plVar12[2];
  uVar20 = iVar9 * 3;
  if ((uVar8 >> 2 & 1) == 0) {
    if ((uVar8 >> 3 & 1) == 0) {
      if ((*(byte *)((long)plVar12 + 0x4c) >> 1 & 1) == 0) {
        (**(code **)*param_2)(param_2,puVar15,iVar9 * 0xc);
        if ((uVar20 != 0) && (local_68[0] != '\0')) {
          uVar11 = (ulong)uVar20;
          puVar19 = (undefined1 *)((long)puVar15 + 3);
          do {
            uVar2 = puVar19[-3];
            puVar19[-3] = *puVar19;
            uVar3 = puVar19[-2];
            *puVar19 = uVar2;
            puVar19[-2] = puVar19[-1];
            puVar19[-1] = uVar3;
            uVar11 = uVar11 - 1;
            puVar19 = puVar19 + 4;
          } while (uVar11 != 0);
        }
      }
      else if (uVar20 != 0) {
        puVar26 = puVar15;
        uVar25 = uVar20;
        do {
          (**(code **)*param_2)(param_2,&local_6c,4);
          if (local_68[0] != '\0') {
            uVar2 = (byte)local_6c;
            uVar3 = local_6c._1_1_;
            local_6c._0_2_ = CONCAT11(local_6c._2_1_,local_6c._3_1_);
            local_6c._0_3_ = CONCAT12(uVar3,(undefined2)local_6c);
            local_6c = CONCAT13(uVar2,(undefined3)local_6c);
          }
          uVar25 = uVar25 - 1;
          *(ushort *)puVar26 = (ushort)local_6c;
          puVar26 = (uint *)((long)puVar26 + 2);
        } while (uVar25 != 0);
      }
    }
    else if ((*(byte *)((long)plVar12 + 0x4c) >> 1 & 1) == 0) {
      if (uVar20 != 0) {
        puVar26 = puVar15;
        uVar25 = uVar20;
        do {
          (**(code **)*param_2)(param_2,&local_6c,2);
          if (local_68[0] != '\0') {
            local_6c._0_2_ = CONCAT11((byte)local_6c,local_6c._1_1_);
          }
          uVar25 = uVar25 - 1;
          *puVar26 = local_6c & 0xffff;
          puVar26 = puVar26 + 1;
        } while (uVar25 != 0);
      }
    }
    else {
      (**(code **)*param_2)(param_2,puVar15,iVar9 * 6);
      if ((uVar20 != 0) && (local_68[0] != '\0')) {
        if (uVar20 == 1) {
          lVar22 = 0;
        }
        else {
          lVar22 = 0;
          puVar19 = (undefined1 *)((long)puVar15 + 3);
          do {
            uVar2 = puVar19[-3];
            lVar22 = lVar22 + 2;
            uVar3 = puVar19[-1];
            puVar19[-3] = puVar19[-2];
            puVar19[-2] = uVar2;
            puVar19[-1] = *puVar19;
            *puVar19 = uVar3;
            puVar19 = puVar19 + 4;
          } while ((ulong)uVar20 - ((ulong)uVar20 & 1) != lVar22);
          if ((uVar20 & 1) == 0) goto LAB_0029b95c;
        }
        puVar24 = (ushort *)((long)puVar15 + lVar22 * 2);
        uVar4 = *puVar24;
        *(undefined1 *)puVar24 = *(undefined1 *)((long)puVar24 + 1);
        *(char *)((long)puVar24 + 1) = (char)uVar4;
      }
    }
  }
  else if ((*(byte *)((long)plVar12 + 0x4c) >> 1 & 1) == 0) {
    if (uVar20 != 0) {
      puVar26 = puVar15;
      uVar25 = uVar20;
      do {
        (**(code **)*param_2)(param_2,&local_6c,1);
        uVar25 = uVar25 - 1;
        *puVar26 = local_6c & 0xff;
        puVar26 = puVar26 + 1;
      } while (uVar25 != 0);
    }
  }
  else if (uVar20 != 0) {
    puVar26 = puVar15;
    uVar25 = uVar20;
    do {
      (**(code **)*param_2)(param_2,&local_6c,1);
      uVar25 = uVar25 - 1;
      *(ushort *)puVar26 = (ushort)(byte)local_6c;
      puVar26 = (uint *)((long)puVar26 + 2);
    } while (uVar25 != 0);
  }
LAB_0029b95c:
  if ((uVar8 & 1) != 0) {
    uVar25 = *(uint *)(plVar12 + 2);
    if (uVar25 == 0) {
      lVar22 = 0;
      iVar18 = 0;
    }
    else {
      plVar13 = (long *)FUN_00400d30();
      pcVar21 = *(code **)(*plVar13 + 0x10);
      plVar16 = (long *)FUN_00400d60();
      uVar11 = (**(code **)(*plVar16 + 0x28))();
      pcVar1 = 
      "static const char *physx::shdfnd::ReflectionAllocator<unsigned short>::getName() [T = unsigned short]"
      ;
      if ((uVar11 & 1) == 0) {
        pcVar1 = "<allocation names disabled>";
      }
      lVar22 = (*pcVar21)(plVar13,(ulong)uVar25 << 1,pcVar1,
                          "./../../GeomUtils/src/mesh/GuMeshData.h",199);
      iVar18 = (int)plVar12[2];
    }
    plVar12[10] = lVar22;
    (**(code **)*param_2)(param_2,lVar22,iVar18 << 1);
    if ((local_68[0] != '\0') && ((int)plVar12[2] != 0)) {
      uVar11 = 0;
      puVar19 = (undefined1 *)(lVar22 + 1);
      do {
        uVar2 = puVar19[-1];
        puVar19[-1] = *puVar19;
        *puVar19 = uVar2;
        uVar11 = uVar11 + 1;
        puVar19 = puVar19 + 2;
      } while (uVar11 < *(uint *)(plVar12 + 2));
    }
  }
  if ((uVar8 >> 1 & 1) != 0) {
    uVar25 = *(uint *)(plVar12 + 2);
    if (uVar25 == 0) {
      lVar22 = 0;
    }
    else {
      plVar13 = (long *)FUN_00400d30();
      pcVar21 = *(code **)(*plVar13 + 0x10);
      plVar16 = (long *)FUN_00400d60();
      uVar11 = (**(code **)(*plVar16 + 0x28))();
      pcVar1 = 
      "static const char *physx::shdfnd::ReflectionAllocator<unsigned int>::getName() [T = unsigned int]"
      ;
      if ((uVar11 & 1) == 0) {
        pcVar1 = "<allocation names disabled>";
      }
      lVar22 = (*pcVar21)(plVar13,(ulong)uVar25 << 2,pcVar1,
                          "./../../GeomUtils/src/mesh/GuMeshData.h",0xd8);
    }
    plVar12[0xb] = lVar22;
    uVar17 = FUN_002af410(local_68[0],param_2);
    FUN_002af9c0(uVar17,(int)plVar12[2],lVar22,param_2,local_68[0]);
  }
  if ((uVar8 >> 4 & 1) != 0) {
    iVar18 = (int)plVar12[2];
    if (iVar18 * 3 == 0) {
      lVar22 = 0;
    }
    else {
      plVar13 = (long *)FUN_00400d30();
      pcVar21 = *(code **)(*plVar13 + 0x10);
      plVar16 = (long *)FUN_00400d60();
      uVar11 = (**(code **)(*plVar16 + 0x28))();
      pcVar1 = 
      "static const char *physx::shdfnd::ReflectionAllocator<unsigned int>::getName() [T = unsigned int]"
      ;
      if ((uVar11 & 1) == 0) {
        pcVar1 = "<allocation names disabled>";
      }
      lVar22 = (*pcVar21)(plVar13,(ulong)(uint)(iVar18 * 3) << 2,pcVar1,
                          "./../../GeomUtils/src/mesh/GuMeshData.h",0xcf);
      iVar18 = (int)plVar12[2];
    }
    plVar12[0xc] = lVar22;
    *(byte *)((long)plVar12 + 0x4c) = *(byte *)((long)plVar12 + 0x4c) | 4;
    (**(code **)*param_2)(param_2,lVar22,iVar18 * 0xc);
    if ((local_68[0] != '\0') && ((int)plVar12[2] * 3 != 0)) {
      uVar11 = 0;
      puVar19 = (undefined1 *)(lVar22 + 3);
      do {
        uVar2 = puVar19[-3];
        puVar19[-3] = *puVar19;
        *puVar19 = uVar2;
        uVar2 = puVar19[-2];
        puVar19[-2] = puVar19[-1];
        puVar19[-1] = uVar2;
        uVar11 = uVar11 + 1;
        puVar19 = puVar19 + 4;
      } while (uVar11 < (uint)((int)plVar12[2] * 3));
    }
  }
  if (iVar7 == 0) {
    uVar11 = FUN_002a1100(plVar12 + 0x12,param_2,local_64,local_68[0]);
    if ((uVar11 & 1) == 0) {
      uVar17 = FUN_00400880();
      FUN_00400890(uVar17,0x20,
                   "C:/gitlab-runner/builds/ba119cc0/0/research_and_development/physx/PhysX/PhysX_3.4/Source/GeomUtils/src/GuMeshFactory.cpp"
                   ,0x13b,"RTree binary image load error.");
joined_r0x0029bcb8:
      if (plVar12 == (long *)0x0) {
        return 0;
      }
      goto LAB_0029c2b8;
    }
  }
  else if (iVar7 == 1) {
    uVar11 = FUN_0029f7b0(plVar12 + 0x17,param_2,local_68[0]);
    if ((uVar11 & 1) == 0) {
      uVar17 = FUN_00400880();
      FUN_00400890(uVar17,0x20,
                   "C:/gitlab-runner/builds/ba119cc0/0/research_and_development/physx/PhysX/PhysX_3.4/Source/GeomUtils/src/GuMeshFactory.cpp"
                   ,0x145,"BV4 binary image load error.");
      goto joined_r0x0029bcb8;
    }
    *(undefined4 *)(plVar12 + 0x11) = *(undefined4 *)((long)plVar12 + 0xc);
    *(uint *)(plVar12 + 0x13) = uVar10;
    if ((*(byte *)((long)plVar12 + 0x4c) >> 1 & 1) == 0) {
      plVar12[0x14] = (long)puVar15;
      plVar12[0x15] = 0;
    }
    else {
      plVar12[0x14] = 0;
      plVar12[0x15] = (long)puVar15;
    }
    plVar12[0x12] = lVar14;
    plVar12[0x17] = (long)(plVar12 + 0x11);
  }
  uVar27 = FUN_002af470(local_68[0],param_2);
  *(undefined4 *)(plVar12 + 9) = uVar27;
  FUN_002af4d0(plVar12 + 5,6,local_68[0],param_2);
  iVar7 = FUN_002af410(local_68[0],param_2);
  if (iVar7 != 0) {
    lVar14 = plVar12[2];
    if ((int)lVar14 == 0) {
      lVar14 = 0;
    }
    else {
      plVar13 = (long *)FUN_00400d30();
      pcVar21 = *(code **)(*plVar13 + 0x10);
      plVar16 = (long *)FUN_00400d60();
      uVar11 = (**(code **)(*plVar16 + 0x28))();
      pcVar1 = 
      "static const char *physx::shdfnd::ReflectionAllocator<unsigned char>::getName() [T = unsigned char]"
      ;
      if ((uVar11 & 1) == 0) {
        pcVar1 = "<allocation names disabled>";
      }
      lVar14 = (*pcVar21)(plVar13,(int)lVar14,pcVar1,"./../../GeomUtils/src/mesh/GuMeshData.h",0xe0)
      ;
    }
    plVar12[8] = lVar14;
    (**(code **)*param_2)(param_2,lVar14,iVar7);
  }
  if ((uVar8 >> 5 & 1) == 0) goto LAB_0029c274;
  if (local_64 < 0xf) {
    iVar7 = FUN_002af410(local_68[0],param_2);
    if ((uVar8 >> 2 & 1) != 0) goto LAB_0029be14;
LAB_0029bda4:
    if ((uVar8 >> 3 & 1) == 0) {
      if ((*(byte *)((long)plVar12 + 0x4c) >> 1 & 1) == 0) {
        lVar14 = plVar12[0xd];
        (**(code **)*param_2)(param_2,lVar14,iVar9 * 0xc);
        if ((uVar20 != 0) && (local_68[0] != '\0')) {
          uVar11 = (ulong)uVar20;
          puVar19 = (undefined1 *)(lVar14 + 3);
          do {
            uVar2 = puVar19[-3];
            puVar19[-3] = *puVar19;
            uVar3 = puVar19[-2];
            *puVar19 = uVar2;
            puVar19[-2] = puVar19[-1];
            puVar19[-1] = uVar3;
            uVar11 = uVar11 - 1;
            puVar19 = puVar19 + 4;
          } while (uVar11 != 0);
        }
      }
      else if (uVar20 != 0) {
        puVar23 = (undefined2 *)plVar12[0xd];
        do {
          (**(code **)*param_2)(param_2,&local_6c,4);
          if (local_68[0] != '\0') {
            uVar2 = (byte)local_6c;
            uVar3 = local_6c._1_1_;
            local_6c._0_2_ = CONCAT11(local_6c._2_1_,local_6c._3_1_);
            local_6c._0_3_ = CONCAT12(uVar3,(undefined2)local_6c);
            local_6c = CONCAT13(uVar2,(undefined3)local_6c);
          }
          uVar20 = uVar20 - 1;
          *puVar23 = (short)local_6c;
          puVar23 = puVar23 + 1;
        } while (uVar20 != 0);
      }
    }
    else if ((*(byte *)((long)plVar12 + 0x4c) >> 1 & 1) == 0) {
      if (uVar20 != 0) {
        puVar15 = (uint *)plVar12[0xd];
        do {
          (**(code **)*param_2)(param_2,&local_6c,2);
          if (local_68[0] != '\0') {
            local_6c._0_2_ = CONCAT11((byte)local_6c,local_6c._1_1_);
          }
          uVar20 = uVar20 - 1;
          *puVar15 = local_6c & 0xffff;
          puVar15 = puVar15 + 1;
        } while (uVar20 != 0);
      }
    }
    else {
      lVar14 = plVar12[0xd];
      (**(code **)*param_2)(param_2,lVar14,iVar9 * 6);
      if ((uVar20 != 0) && (local_68[0] != '\0')) {
        if (uVar20 == 1) {
          lVar22 = 0;
        }
        else {
          lVar22 = 0;
          puVar19 = (undefined1 *)(lVar14 + 3);
          do {
            uVar2 = puVar19[-3];
            lVar22 = lVar22 + 2;
            uVar3 = puVar19[-1];
            puVar19[-3] = puVar19[-2];
            puVar19[-2] = uVar2;
            puVar19[-1] = *puVar19;
            *puVar19 = uVar3;
            puVar19 = puVar19 + 4;
          } while ((ulong)uVar20 - ((ulong)uVar20 & 1) != lVar22);
          if ((uVar20 & 1) == 0) goto LAB_0029bfc8;
        }
        puVar19 = (undefined1 *)(lVar14 + lVar22 * 2);
        uVar2 = *puVar19;
        *puVar19 = puVar19[1];
        puVar19[1] = uVar2;
      }
    }
  }
  else {
    iVar7 = 0;
    if ((uVar8 >> 2 & 1) == 0) goto LAB_0029bda4;
LAB_0029be14:
    if ((*(byte *)((long)plVar12 + 0x4c) >> 1 & 1) == 0) {
      if (uVar20 != 0) {
        puVar15 = (uint *)plVar12[0xd];
        do {
          (**(code **)*param_2)(param_2,&local_6c,1);
          uVar20 = uVar20 - 1;
          *puVar15 = local_6c & 0xff;
          puVar15 = puVar15 + 1;
        } while (uVar20 != 0);
      }
    }
    else if (uVar20 != 0) {
      puVar24 = (ushort *)plVar12[0xd];
      do {
        (**(code **)*param_2)(param_2,&local_6c,1);
        uVar20 = uVar20 - 1;
        *puVar24 = (ushort)(byte)local_6c;
        puVar24 = puVar24 + 1;
      } while (uVar20 != 0);
    }
  }
LAB_0029bfc8:
  uVar8 = *(uint *)(plVar12 + 2);
  if (uVar8 << 2 == 0) {
    lVar14 = 0;
    plVar12[0xe] = 0;
    if (uVar8 != 0) goto LAB_0029c03c;
LAB_0029c0b0:
    iVar9 = 0;
    lVar22 = 0;
  }
  else {
    plVar13 = (long *)FUN_00400d30();
    pcVar21 = *(code **)(*plVar13 + 0x10);
    plVar16 = (long *)FUN_00400d60();
    uVar11 = (**(code **)(*plVar16 + 0x28))();
    pcVar1 = 
    "static const char *physx::shdfnd::ReflectionAllocator<unsigned int>::getName() [T = unsigned int]"
    ;
    if ((uVar11 & 1) == 0) {
      pcVar1 = "<allocation names disabled>";
    }
    lVar14 = (*pcVar21)(plVar13,(ulong)(uVar8 << 2) << 2,pcVar1,
                        "C:/gitlab-runner/builds/ba119cc0/0/research_and_development/physx/PhysX/PhysX_3.4/Source/GeomUtils/src/GuMeshFactory.cpp"
                        ,0x1b7);
    uVar8 = *(uint *)(plVar12 + 2);
    plVar12[0xe] = lVar14;
    if (uVar8 == 0) goto LAB_0029c0b0;
LAB_0029c03c:
    plVar13 = (long *)FUN_00400d30();
    pcVar21 = *(code **)(*plVar13 + 0x10);
    plVar16 = (long *)FUN_00400d60();
    uVar11 = (**(code **)(*plVar16 + 0x28))();
    pcVar1 = 
    "static const char *physx::shdfnd::ReflectionAllocator<unsigned int>::getName() [T = unsigned int]"
    ;
    if ((uVar11 & 1) == 0) {
      pcVar1 = "<allocation names disabled>";
    }
    lVar22 = (*pcVar21)(plVar13,(ulong)uVar8 << 2,pcVar1,
                        "C:/gitlab-runner/builds/ba119cc0/0/research_and_development/physx/PhysX/PhysX_3.4/Source/GeomUtils/src/GuMeshFactory.cpp"
                        ,0x1b8);
    lVar14 = plVar12[0xe];
    iVar9 = (int)plVar12[2] << 4;
  }
  plVar12[0xf] = lVar22;
  (**(code **)*param_2)(param_2,lVar14,iVar9);
  if (local_64 < 0xf) {
    if (*(int *)((long)plVar12 + 0xc) != 0) {
      uVar8 = 0;
      do {
        FUN_002af410(local_68[0],param_2);
        uVar8 = uVar8 + 1;
      } while (uVar8 < *(uint *)((long)plVar12 + 0xc));
      if (*(uint *)((long)plVar12 + 0xc) != 0) {
        uVar8 = 0;
        do {
          FUN_002af410(local_68[0],param_2);
          uVar8 = uVar8 + 1;
        } while (uVar8 < *(uint *)((long)plVar12 + 0xc));
      }
    }
    for (; iVar7 != 0; iVar7 = iVar7 + -1) {
      FUN_002af410(local_68[0],param_2);
    }
  }
  (**(code **)*param_2)(param_2,plVar12[0xf],(int)plVar12[2] << 2);
  if ((local_68[0] != '\0') && ((*(uint *)(plVar12 + 2) & 0x3fffffff) != 0)) {
    lVar14 = 0;
    uVar11 = 0;
    do {
      puVar19 = (undefined1 *)(plVar12[0xd] + lVar14);
      lVar14 = lVar14 + 4;
      uVar2 = *puVar19;
      *puVar19 = puVar19[3];
      puVar19[3] = uVar2;
      uVar2 = puVar19[1];
      puVar19[1] = puVar19[2];
      puVar19[2] = uVar2;
      uVar11 = uVar11 + 1;
    } while (uVar11 < *(uint *)(plVar12 + 2) << 2);
    if ((*(uint *)(plVar12 + 2) & 0x3fffffff) != 0) {
      lVar14 = 0;
      uVar11 = 0;
      do {
        puVar19 = (undefined1 *)(plVar12[0xe] + lVar14);
        lVar14 = lVar14 + 4;
        uVar2 = *puVar19;
        *puVar19 = puVar19[3];
        puVar19[3] = uVar2;
        uVar2 = puVar19[1];
        puVar19[1] = puVar19[2];
        puVar19[2] = uVar2;
        uVar11 = uVar11 + 1;
      } while (uVar11 < (uint)((int)plVar12[2] << 2));
    }
  }
  plVar13 = (long *)FUN_00400d30();
  pcVar21 = *(code **)(*plVar13 + 0x10);
  plVar16 = (long *)FUN_00400d60();
  uVar11 = (**(code **)(*plVar16 + 0x28))();
  pcVar1 = 
  "static const char *physx::shdfnd::ReflectionAllocator<physx::Gu::BV32Tree>::getName() [T = physx::Gu::BV32Tree]"
  ;
  if ((uVar11 & 1) == 0) {
    pcVar1 = "<allocation names disabled>";
  }
  lVar14 = (*pcVar21)(plVar13,0x40,pcVar1,
                      "C:/gitlab-runner/builds/ba119cc0/0/research_and_development/physx/PhysX/PhysX_3.4/Source/GeomUtils/src/GuMeshFactory.cpp"
                      ,0x1d3);
                    /* try { // try from 0029c258 to 0029c25b has its CatchHandler @ 0029c2f0 */
  FUN_002a06b0();
  plVar12[0x10] = lVar14;
  uVar11 = FUN_002a0750(lVar14,param_2,local_68[0]);
  if ((uVar11 & 1) == 0) {
    uVar17 = FUN_00400880();
    FUN_00400890(uVar17,0x20,
                 "C:/gitlab-runner/builds/ba119cc0/0/research_and_development/physx/PhysX/PhysX_3.4/Source/GeomUtils/src/GuMeshFactory.cpp"
                 ,0x1d7,"BV32 binary image load error.");
LAB_0029c2b8:
    (**(code **)(*plVar12 + 8))(plVar12);
    return 0;
  }
LAB_0029c274:
  uVar17 = FUN_0029b1a0(param_1,plVar12);
  (**(code **)(*plVar12 + 8))(plVar12);
  return uVar17;
}


