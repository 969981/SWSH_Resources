/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0029e6f0; name: FUN_0029e6f0
 */


undefined8 FUN_0029e6f0(long param_1,undefined8 *param_2)

{
  long lVar1;
  long lVar2;
  undefined1 *puVar3;
  int iVar4;
  long lVar5;
  char *pcVar6;
  byte bVar7;
  ushort uVar8;
  undefined1 uVar9;
  undefined1 uVar10;
  uint uVar11;
  ulong uVar12;
  undefined8 uVar13;
  long *plVar14;
  long *plVar15;
  long lVar16;
  ulong uVar17;
  ulong uVar18;
  long lVar19;
  long lVar20;
  ulong uVar21;
  ulong uVar22;
  long lVar23;
  ulong uVar24;
  ulong uVar25;
  long lVar26;
  code *pcVar27;
  float fVar28;
  undefined4 local_98;
  float local_94;
  float fStack_90;
  float local_8c;
  float fStack_88;
  float local_84;
  float fStack_80;
  float local_7c;
  undefined1 local_78 [4];
  uint local_74;
  char local_68 [4];
  uint local_64;
  
  uVar12 = FUN_002af620(0x43,0x56,0x58,0x4d,&local_74,local_78,param_2);
  if ((uVar12 & 1) != 0) {
    if (local_74 < 0xd) {
      uVar13 = FUN_00400880();
      FUN_00400890(uVar13,0x20,
                   "C:/gitlab-runner/builds/ba119cc0/0/research_and_development/physx/PhysX/PhysX_3.4/Source/GeomUtils/src/convex/GuConvexMesh.cpp"
                   ,0x139,"Loading convex mesh failed: Deprecated mesh cooking format.");
    }
    else {
      FUN_002af410(local_78[0],param_2);
      uVar12 = FUN_002af7f0(0x43,0x4c,0x48,0x4c,&local_64,local_68,param_2);
      if (((uVar12 & 1) != 0) &&
         (uVar12 = FUN_002af7f0(0x43,0x56,0x48,0x4c,&local_64,local_68,param_2), (uVar12 & 1) != 0))
      {
        FUN_002af4d0(&local_98,4,local_68[0],param_2);
        fVar28 = local_8c;
        *(char *)(param_1 + 0x46) = (char)local_98;
        *(short *)(param_1 + 0x44) = SUB42(local_94,0);
        *(char *)(param_1 + 0x47) = SUB41(fStack_90,0);
        iVar4 = 0;
        if (SUB42(local_94,0) < 0) {
          iVar4 = ((uint)local_94 & 0x7fff) << 2;
        }
        uVar11 = ((uint)local_94 & 0x7fff) * 2 + (local_98 & 0xff) * 0xf + iVar4 + (int)local_8c +
                 ((uint)fStack_90 & 0xff) * 0x14;
        lVar26 = *(long *)(param_1 + 0x48);
        iVar4 = 0;
        if ((uVar11 & 3) != 0) {
          iVar4 = 4 - (uVar11 & 3);
        }
        if (lVar26 != 0) {
          plVar14 = (long *)FUN_00400d30();
          (**(code **)(*plVar14 + 0x18))(plVar14,lVar26);
        }
        *(float *)(param_1 + 0x68) = fVar28;
        if (iVar4 + uVar11 == 0) {
          lVar26 = 0;
        }
        else {
          plVar14 = (long *)FUN_00400d30();
          lVar26 = (**(code **)(*plVar14 + 0x10))
                             (plVar14,iVar4 + uVar11,"NonTrackedAlloc",
                              "C:/gitlab-runner/builds/ba119cc0/0/research_and_development/physx/PhysX/PhysX_3.4/Source/GeomUtils/src/convex/GuConvexMesh.cpp"
                              ,0xc2);
        }
        uVar12 = (ulong)*(byte *)(param_1 + 0x46);
        uVar8 = *(ushort *)(param_1 + 0x44);
        *(long *)(param_1 + 0x48) = lVar26;
        lVar16 = (ulong)*(byte *)(param_1 + 0x47) * 0x14;
        lVar19 = ((ulong)uVar8 & 0x7fff) * 2;
        lVar23 = lVar26 + lVar16 + uVar12 * 0xc;
        lVar1 = lVar23 + lVar19;
        lVar2 = lVar1 + uVar12 * 3;
        lVar5 = 0;
        if ((short)uVar8 < 0) {
          lVar5 = ((ulong)uVar8 & 0x7fff) << 2;
        }
        FUN_002af4d0(lVar26 + lVar16,(uint)*(byte *)(param_1 + 0x46) * 3,local_68[0],param_2);
        if (local_64 < 7) {
          FUN_002af3c0(local_68[0],param_2);
        }
        (**(code **)*param_2)
                  (param_2,*(undefined8 *)(param_1 + 0x48),(uint)*(byte *)(param_1 + 0x47) * 0x14);
        if ((local_68[0] != '\0') && (*(char *)(param_1 + 0x47) != '\0')) {
          uVar17 = 0;
          lVar20 = 0x11;
          do {
            puVar3 = (undefined1 *)(*(long *)(param_1 + 0x48) + lVar20);
            lVar20 = lVar20 + 0x14;
            uVar9 = puVar3[-0x11];
            puVar3[-0x11] = puVar3[-0xe];
            puVar3[-0xe] = uVar9;
            uVar9 = puVar3[-0x10];
            puVar3[-0x10] = puVar3[-0xf];
            puVar3[-0xf] = uVar9;
            uVar9 = puVar3[-0xd];
            puVar3[-0xd] = puVar3[-10];
            puVar3[-10] = uVar9;
            uVar9 = puVar3[-0xc];
            puVar3[-0xc] = puVar3[-0xb];
            uVar10 = puVar3[-9];
            puVar3[-0xb] = uVar9;
            puVar3[-9] = puVar3[-6];
            puVar3[-6] = uVar10;
            uVar9 = puVar3[-8];
            puVar3[-8] = puVar3[-7];
            puVar3[-7] = uVar9;
            uVar9 = puVar3[-5];
            puVar3[-5] = puVar3[-2];
            puVar3[-2] = uVar9;
            uVar9 = puVar3[-4];
            puVar3[-4] = puVar3[-3];
            puVar3[-3] = uVar9;
            uVar9 = puVar3[-1];
            puVar3[-1] = *puVar3;
            *puVar3 = uVar9;
            uVar17 = uVar17 + 1;
          } while (uVar17 < *(byte *)(param_1 + 0x47));
        }
        (**(code **)*param_2)(param_2,lVar2 + lVar5,fVar28);
        (**(code **)*param_2)(param_2,lVar23,(*(ushort *)(param_1 + 0x44) & 0x7fff) << 1);
        if (local_64 < 6) {
          uVar17 = (ulong)*(byte *)(param_1 + 0x46);
          if (*(byte *)(param_1 + 0x46) != 0) {
            uVar18 = 0;
            do {
              bVar7 = *(byte *)(param_1 + 0x47);
              if ((ulong)bVar7 == 0) {
LAB_0029eb68:
                if ((int)uVar17 != 0) {
                  uVar17 = 0;
                  lVar26 = lVar26 + lVar16 + uVar12 * 0xc + lVar19 + 1;
                  do {
                    *(undefined2 *)(lVar26 + -1) = 0xffff;
                    *(undefined1 *)(lVar26 + 1) = 0xff;
                    uVar17 = uVar17 + 1;
                    lVar26 = lVar26 + 3;
                  } while (uVar17 < *(byte *)(param_1 + 0x46));
                }
                break;
              }
              lVar23 = *(long *)(param_1 + 0x48);
              uVar22 = 0;
              uVar21 = 0;
              do {
                uVar24 = (ulong)*(byte *)(lVar23 + uVar22 * 0x14 + 0x12);
                if (uVar24 != 0) {
                  uVar25 = 0;
                  do {
                    if (uVar18 == *(byte *)(lVar26 + lVar5 + lVar16 + uVar12 * 0xf + lVar19 +
                                            (ulong)*(ushort *)(lVar23 + uVar22 * 0x14 + 0x10) +
                                           uVar25)) {
                      local_78[uVar21 - 0x20] = (char)uVar22;
                      uVar21 = (ulong)((int)uVar21 + 1);
                      break;
                    }
                    uVar25 = uVar25 + 1;
                  } while (uVar25 < uVar24);
                }
                uVar22 = uVar22 + 1;
              } while ((uVar22 < bVar7) && ((int)uVar21 != 3));
              if ((int)uVar21 != 3) goto LAB_0029eb68;
              lVar23 = uVar18 * 3;
              uVar18 = uVar18 + 1;
              puVar3 = (undefined1 *)(lVar1 + lVar23);
              *puVar3 = (undefined1)local_98;
              puVar3[1] = local_98._1_1_;
              puVar3[2] = local_98._2_1_;
              uVar17 = (ulong)*(byte *)(param_1 + 0x46);
            } while (uVar18 < uVar17);
          }
          uVar8 = *(ushort *)(param_1 + 0x44);
        }
        else {
          (**(code **)*param_2)(param_2,lVar1,(uint)*(byte *)(param_1 + 0x46) * 3);
          uVar8 = *(ushort *)(param_1 + 0x44);
        }
        if ((short)uVar8 < 0) {
          if (local_64 < 8) {
            if ((uVar8 & 0x7fff) != 0) {
              uVar12 = 0;
              do {
                *(undefined2 *)(lVar2 + uVar12 * 2) = 0xffff;
                uVar12 = uVar12 + 1;
              } while (uVar12 < ((ulong)*(ushort *)(param_1 + 0x44) & 0x7fff) << 1);
            }
          }
          else {
            FUN_002af560(lVar2,((int)(short)uVar8 & 0x7fffU) << 1,local_68[0],param_2);
          }
        }
        FUN_002af4d0(&local_98,8,local_78[0],param_2);
        *(float *)(param_1 + 0x20) = (local_94 + fStack_88) * 0.5;
        *(float *)(param_1 + 0x24) = (fStack_90 + local_84) * 0.5;
        *(float *)(param_1 + 0x28) = (local_8c + fStack_80) * 0.5;
        *(float *)(param_1 + 0x2c) = (fStack_88 - local_94) * 0.5;
        *(float *)(param_1 + 0x30) = (local_84 - fStack_90) * 0.5;
        *(float *)(param_1 + 0x34) = (fStack_80 - local_8c) * 0.5;
        *(float *)(param_1 + 0x78) = local_7c;
        if (local_7c != -1.0) {
          FUN_002af4d0(param_1 + 0x7c,9,local_78[0],param_2);
          FUN_002af4d0(param_1 + 0x38,3,local_78[0],param_2);
        }
        fVar28 = (float)FUN_002af470(local_78[0],param_2);
        if (fVar28 != -1.0) {
          lVar26 = *(long *)(param_1 + 0x70);
          if (lVar26 != 0) {
            FUN_0029f0e0(lVar26);
                    /* try { // try from 0029ecc8 to 0029ecdb has its CatchHandler @ 0029ed98 */
            plVar14 = (long *)FUN_00400d30();
            (**(code **)(*plVar14 + 0x18))(plVar14,lVar26);
          }
          *(undefined8 *)(param_1 + 0x70) = 0;
          plVar14 = (long *)FUN_00400d30();
          pcVar27 = *(code **)(*plVar14 + 0x10);
          plVar15 = (long *)FUN_00400d60();
          uVar12 = (**(code **)(*plVar15 + 0x28))();
          pcVar6 = 
          "static const char *physx::shdfnd::ReflectionAllocator<physx::BigConvexData>::getName() [T = physx::BigConvexData]"
          ;
          if ((uVar12 & 1) == 0) {
            pcVar6 = "<allocation names disabled>";
          }
          lVar26 = (*pcVar27)(plVar14,0x30,pcVar6,
                              "C:/gitlab-runner/builds/ba119cc0/0/research_and_development/physx/PhysX/PhysX_3.4/Source/GeomUtils/src/convex/GuConvexMesh.cpp"
                              ,0x15a);
                    /* try { // try from 0029ed34 to 0029ed37 has its CatchHandler @ 0029ed70 */
          FUN_0029f0c0();
          *(long *)(param_1 + 0x70) = lVar26;
          if (lVar26 != 0) {
            FUN_0029f330(lVar26,param_2);
            *(undefined8 *)(param_1 + 0x50) = *(undefined8 *)(param_1 + 0x70);
          }
        }
        FUN_002af4d0(param_1 + 0x58,4,local_78[0],param_2);
        return 1;
      }
    }
  }
  return 0;
}


