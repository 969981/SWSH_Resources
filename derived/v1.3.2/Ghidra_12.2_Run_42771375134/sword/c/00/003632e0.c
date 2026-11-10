/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 003632e0; name: FUN_003632e0
 */


void FUN_003632e0(long *param_1,undefined8 *param_2,long *param_3)

{
  char cVar1;
  byte bVar2;
  int iVar3;
  long lVar4;
  ulong uVar5;
  ulonglong uVar6;
  long lVar7;
  char *__s1;
  undefined8 uVar8;
  undefined8 *puVar9;
  undefined4 *puVar10;
  int *piVar11;
  uint *puVar12;
  uint *puVar13;
  uint uVar14;
  uint uVar15;
  byte *pbVar16;
  uint uVar17;
  long *plVar18;
  long *plVar19;
  undefined4 local_210;
  undefined8 local_20c;
  undefined4 local_200;
  undefined8 local_1fc;
  undefined4 local_1f4;
  undefined4 uStack_1f0;
  undefined8 local_1ec;
  undefined8 local_1e4;
  undefined8 local_1dc;
  undefined4 local_1d4;
  undefined8 local_1d0;
  undefined8 uStack_1c8;
  undefined4 local_1c0;
  undefined4 uStack_1bc;
  undefined4 uStack_1b8;
  undefined8 local_1b4;
  undefined8 local_1ac;
  undefined8 local_1a4;
  undefined8 local_198;
  undefined4 local_190 [2];
  undefined8 local_188;
  undefined8 uStack_180;
  undefined8 local_178;
  undefined1 auStack_170 [32];
  long local_150;
  long local_148;
  long local_140;
  undefined1 auStack_138 [32];
  char *local_118;
  long lStack_110;
  long local_108;
  long local_100;
  long lStack_f8;
  long local_f0;
  undefined8 *puStack_e8;
  long local_e0;
  long lStack_d8;
  undefined1 local_d0;
  char *local_c8;
  undefined8 uStack_c0;
  undefined8 local_b8;
  long local_b0;
  long local_a8;
  long lStack_a0;
  long local_98;
  long local_90;
  long local_88;
  long local_80;
  long local_78;
  long local_70;
  char local_64 [4];
  
  lVar7 = *param_1;
  lVar4 = param_1[1];
  plVar18 = (long *)param_1[5];
  plVar19 = (long *)param_1[8];
  local_118 = (char *)CONCAT44(local_118._4_4_,*(undefined4 *)(lVar7 + 0x10));
  if (*(uint *)(lVar4 + 0x10) < (*(uint *)(lVar4 + 0x14) & 0x7fffffff)) {
    *(undefined4 *)(*(long *)(lVar4 + 8) + (ulong)*(uint *)(lVar4 + 0x10) * 4) =
         *(undefined4 *)(lVar7 + 0x10);
    *(int *)(lVar4 + 0x10) = *(int *)(lVar4 + 0x10) + 1;
    iVar3 = *(int *)(lVar7 + 0x10);
  }
  else {
    FUN_00321390(lVar4,&local_118);
    lVar7 = *param_1;
    iVar3 = *(int *)(lVar7 + 0x10);
  }
  if (iVar3 != 0) {
    lVar4 = *(long *)(lVar7 + 8);
    uVar5 = (ulong)(iVar3 - 1);
    pbVar16 = (byte *)(lVar4 + uVar5 * 0x10 + 8);
    if (*pbVar16 == 0) {
      bVar2 = 0;
      if ((char)param_1[9] != '\0') {
        bVar2 = (**(code **)(*(long *)param_1[5] + 0x20))
                          ((long *)param_1[5],*(undefined8 *)(lVar4 + uVar5 * 0x10));
        lVar7 = *param_1;
        bVar2 = bVar2 & 1;
        *(byte *)(param_1 + 9) = bVar2;
        lVar4 = *(long *)(lVar7 + 8);
        uVar5 = (ulong)(*(int *)(lVar7 + 0x10) - 1);
        pbVar16 = (byte *)(lVar4 + uVar5 * 0x10 + 8);
      }
      *(byte *)(lVar4 + uVar5 * 0x10 + 9) = bVar2;
      *pbVar16 = bVar2;
    }
  }
  lVar4 = param_1[1];
  if ((char)param_1[9] == '\0') goto LAB_00363958;
  local_118 = (char *)CONCAT44(local_118._4_4_,*(undefined4 *)(lVar7 + 0x10));
  if (*(uint *)(lVar4 + 0x10) < (*(uint *)(lVar4 + 0x14) & 0x7fffffff)) {
    *(undefined4 *)(*(long *)(lVar4 + 8) + (ulong)*(uint *)(lVar4 + 0x10) * 4) =
         *(undefined4 *)(lVar7 + 0x10);
    *(int *)(lVar4 + 0x10) = *(int *)(lVar4 + 0x10) + 1;
  }
  else {
    FUN_00321390(lVar4,&local_118);
  }
  uVar5 = FUN_00363b30(param_1,"Materials");
  if ((uVar5 & 1) != 0) {
    uVar5 = FUN_003631a0(param_1);
    while ((uVar5 & 1) != 0) {
      local_1c0 = 0;
      uStack_1bc = 0;
      local_118 = (char *)(**(code **)(*plVar18 + 0x48))(plVar18);
      if (((local_118 == (char *)0x0) || (*local_118 == '\0')) ||
         (uVar6 = strtoull(local_118,&local_118,10), uVar6 == 0)) {
        local_1c0 = 0;
        uStack_1bc = 0;
        cVar1 = (char)param_1[9];
      }
      else {
        lVar7 = (**(code **)(*plVar19 + 0x50))(plVar19,uVar6);
        if (lVar7 == 0) {
          uVar8 = FUN_00400880();
          FUN_00400890(uVar8,4,"./../../PhysXExtensions/src/serialization/Xml/SnXmlVisitorReader.h",
                       0x6c,
                       "PxSerialization::createCollectionFromXml: Reference to ID %d cannot be resolved. Make sure externalRefs collection is specified if required and check Xml file for completeness."
                       ,uVar6);
          local_1c0 = 0;
          uStack_1bc = 0;
          *(undefined1 *)param_1[10] = 1;
          cVar1 = (char)param_1[9];
        }
        else {
          local_1c0 = (undefined4)lVar7;
          uStack_1bc = (undefined4)((ulong)lVar7 >> 0x20);
          uVar14 = *(uint *)(param_3 + 1);
          if (uVar14 < (*(uint *)((long)param_3 + 0xc) & 0x7fffffff)) {
            *(long *)(*param_3 + (ulong)uVar14 * 8) = lVar7;
            *(uint *)(param_3 + 1) = uVar14 + 1;
            cVar1 = (char)param_1[9];
          }
          else {
            FUN_003216d0(param_3,&local_1c0);
            cVar1 = (char)param_1[9];
          }
        }
      }
      if (cVar1 == '\0') break;
      uVar5 = (**(code **)(*(long *)param_1[5] + 0x30))();
    }
  }
  lVar7 = param_1[1];
  piVar11 = (int *)(lVar7 + 0x10);
  if (*piVar11 == 0) {
    lVar4 = *param_1;
    uVar14 = 0;
  }
  else {
    uVar14 = *piVar11 - 1;
    lVar4 = *param_1;
    uVar15 = *(uint *)(*(long *)(lVar7 + 8) + (ulong)uVar14 * 4);
    puVar13 = (uint *)(lVar4 + 0x10);
    uVar17 = *puVar13;
    if (uVar15 < uVar17) {
      do {
        while( true ) {
          uVar17 = uVar17 - 1;
          if ((*(char *)(*(long *)(lVar4 + 8) + (ulong)uVar17 * 0x10 + 8) != '\0') &&
             (*(char *)(*(long *)(lVar4 + 8) + (ulong)uVar17 * 0x10 + 9) != '\0')) {
            (**(code **)(*(long *)param_1[5] + 0x50))();
            lVar4 = *param_1;
            puVar13 = (uint *)(lVar4 + 0x10);
            uVar17 = *puVar13 - 1;
          }
          *puVar13 = uVar17;
          *(undefined1 *)(param_1 + 9) = 1;
          if ((uVar17 != 0) &&
             (*(char *)(*(long *)(lVar4 + 8) + (ulong)(uVar17 - 1) * 0x10 + 9) == '\0')) break;
          puVar13 = (uint *)(lVar4 + 0x10);
          uVar17 = *puVar13;
          if (uVar17 <= uVar15) goto LAB_003635e8;
        }
        *(undefined1 *)(param_1 + 9) = 0;
        puVar13 = (uint *)(lVar4 + 0x10);
        uVar17 = *puVar13;
      } while (uVar15 < uVar17);
LAB_003635e8:
      lVar7 = param_1[1];
      piVar11 = (int *)(lVar7 + 0x10);
      uVar14 = *piVar11 - 1;
    }
    *(uint *)(lVar7 + 0x10) = uVar14;
  }
  local_118 = (char *)CONCAT44(local_118._4_4_,*(undefined4 *)(lVar4 + 0x10));
  if (uVar14 < (*(uint *)(lVar7 + 0x14) & 0x7fffffff)) {
    *(undefined4 *)(*(long *)(lVar7 + 8) + (ulong)uVar14 * 4) = *(undefined4 *)(lVar4 + 0x10);
    *piVar11 = *piVar11 + 1;
  }
  else {
    FUN_00321390(lVar7,&local_118);
  }
  local_190[0] = 6;
  local_188 = 0;
  uStack_180 = 0x3f8000003f800000;
  uStack_1bc = 0x3f800000;
  uStack_1b8 = 0x3f800000;
  local_1ec = 0x3f8000003f800000;
  local_1d0 = 0;
  uStack_1c8 = 0x7f7fc99e;
  local_1c0 = 5;
  local_200 = 3;
  local_178 = 0x3f800000;
  local_1b4 = 0x3f800000;
  local_1ac = 0;
  local_1a4 = 0x3f800000;
  local_198 = 0;
  local_1f4 = 0;
  uStack_1f0 = 4;
  local_1e4 = 0x3f800000;
  local_1dc = 0;
  local_1d4 = 0x3f800000;
  local_1fc = 0;
  local_210 = 2;
  local_20c = 0;
  uVar5 = FUN_00363b30(param_1,"Geometry");
  if (((uVar5 & 1) == 0) || (uVar5 = FUN_003631a0(param_1), (uVar5 & 1) == 0)) {
LAB_00363890:
    lVar4 = param_1[1];
    iVar3 = *(int *)(lVar4 + 0x10);
  }
  else {
    if ((char)param_1[9] == '\0') {
      __s1 = "";
    }
    else {
      __s1 = (char *)(**(code **)(*(long *)param_1[5] + 0x40))();
    }
    iVar3 = strcasecmp(__s1,"PxSphereGeometry");
    if (iVar3 == 0) {
      plVar18 = (long *)(**(code **)(*(long *)param_1[7] + 0x20))();
      puVar9 = (undefined8 *)
               (**(code **)(*plVar18 + 0x10))
                         (plVar18,8,"parseGeometry",
                          "./../../PhysXExtensions/src/serialization/Xml/SnXmlVisitorReader.h",0xad)
      ;
      *puVar9 = 0;
      FUN_00217550(auStack_170);
      FUN_00217550(auStack_138);
      local_140 = param_1[4];
      local_f0 = param_1[5];
      local_148 = param_1[3];
      lStack_110 = param_1[1];
      local_150 = param_1[2];
      local_118 = (char *)*param_1;
      local_e0 = param_1[7];
      lStack_d8 = param_1[8];
      local_64[0] = '\0';
      local_c8 = local_64;
      local_b8 = 0;
      uStack_c0 = 0;
      local_d0 = 1;
      local_108 = local_150;
      local_100 = local_148;
      lStack_f8 = local_140;
      puStack_e8 = puVar9;
      local_b0 = local_150;
      local_a8 = local_148;
      lStack_a0 = local_140;
      local_98 = local_150;
      local_90 = local_148;
      local_88 = local_140;
      local_80 = local_150;
      local_78 = local_148;
      local_70 = local_140;
      FUN_00321860(&local_118,auStack_138,0);
      if (local_64[0] != '\0') {
        *(undefined1 *)param_1[10] = 1;
      }
      *param_2 = puVar9;
      goto LAB_00363890;
    }
    iVar3 = strcasecmp(__s1,"PxPlaneGeometry");
    if (iVar3 == 0) {
      plVar18 = (long *)(**(code **)(*(long *)param_1[7] + 0x20))();
      puVar10 = (undefined4 *)
                (**(code **)(*plVar18 + 0x10))
                          (plVar18,4,"parseGeometry",
                           "./../../PhysXExtensions/src/serialization/Xml/SnXmlVisitorReader.h",0xad
                          );
      *puVar10 = 1;
      FUN_002175a0(auStack_138);
      FUN_002175a0(&local_118);
      *param_2 = puVar10;
      lVar4 = param_1[1];
      iVar3 = *(int *)(lVar4 + 0x10);
    }
    else {
      iVar3 = strcasecmp(__s1,"PxCapsuleGeometry");
      if (iVar3 == 0) {
        uVar8 = FUN_00363ca0(param_1,&local_210);
        *param_2 = uVar8;
        lVar4 = param_1[1];
        iVar3 = *(int *)(lVar4 + 0x10);
      }
      else {
        iVar3 = strcasecmp(__s1,"PxBoxGeometry");
        if (iVar3 == 0) {
          uVar8 = FUN_00363de0(param_1,&local_200);
          *param_2 = uVar8;
          lVar4 = param_1[1];
          iVar3 = *(int *)(lVar4 + 0x10);
        }
        else {
          iVar3 = strcasecmp(__s1,"PxConvexMeshGeometry");
          if (iVar3 == 0) {
            uVar8 = FUN_00363f00(param_1,&uStack_1f0);
            *param_2 = uVar8;
            lVar4 = param_1[1];
            iVar3 = *(int *)(lVar4 + 0x10);
          }
          else {
            iVar3 = strcasecmp(__s1,"PxTriangleMeshGeometry");
            if (iVar3 == 0) {
              uVar8 = FUN_00364070(param_1,&local_1c0);
              *param_2 = uVar8;
              lVar4 = param_1[1];
              iVar3 = *(int *)(lVar4 + 0x10);
            }
            else {
              iVar3 = strcasecmp(__s1,"PxHeightFieldGeometry");
              if (iVar3 != 0) goto LAB_00363890;
              uVar8 = FUN_003641d0(param_1,local_190);
              *param_2 = uVar8;
              lVar4 = param_1[1];
              iVar3 = *(int *)(lVar4 + 0x10);
            }
          }
        }
      }
    }
  }
  if (iVar3 != 0) {
    uVar15 = iVar3 - 1;
    lVar7 = *param_1;
    uVar17 = *(uint *)(*(long *)(lVar4 + 8) + (ulong)uVar15 * 4);
    puVar13 = (uint *)(lVar7 + 0x10);
    uVar14 = *puVar13;
    if (uVar17 < uVar14) {
      do {
        while( true ) {
          uVar14 = uVar14 - 1;
          if ((*(char *)(*(long *)(lVar7 + 8) + (ulong)uVar14 * 0x10 + 8) != '\0') &&
             (*(char *)(*(long *)(lVar7 + 8) + (ulong)uVar14 * 0x10 + 9) != '\0')) {
            (**(code **)(*(long *)param_1[5] + 0x50))();
            lVar7 = *param_1;
            puVar13 = (uint *)(lVar7 + 0x10);
            uVar14 = *puVar13 - 1;
          }
          *puVar13 = uVar14;
          *(undefined1 *)(param_1 + 9) = 1;
          if ((uVar14 != 0) &&
             (*(char *)(*(long *)(lVar7 + 8) + (ulong)(uVar14 - 1) * 0x10 + 9) == '\0')) break;
          puVar13 = (uint *)(lVar7 + 0x10);
          uVar14 = *puVar13;
          if (uVar14 <= uVar17) goto LAB_00363948;
        }
        *(undefined1 *)(param_1 + 9) = 0;
        puVar13 = (uint *)(lVar7 + 0x10);
        uVar14 = *puVar13;
      } while (uVar17 < uVar14);
LAB_00363948:
      lVar4 = param_1[1];
      uVar15 = *(int *)(lVar4 + 0x10) - 1;
    }
    *(uint *)(lVar4 + 0x10) = uVar15;
  }
LAB_00363958:
  puVar13 = (uint *)(lVar4 + 0x10);
  if (*puVar13 != 0) {
    uVar15 = *puVar13 - 1;
    lVar7 = *param_1;
    uVar17 = *(uint *)(*(long *)(lVar4 + 8) + (ulong)uVar15 * 4);
    puVar12 = (uint *)(lVar7 + 0x10);
    uVar14 = *puVar12;
    if (uVar17 < uVar14) {
      do {
        while( true ) {
          uVar14 = uVar14 - 1;
          if ((*(char *)(*(long *)(lVar7 + 8) + (ulong)uVar14 * 0x10 + 8) != '\0') &&
             (*(char *)(*(long *)(lVar7 + 8) + (ulong)uVar14 * 0x10 + 9) != '\0')) {
            (**(code **)(*(long *)param_1[5] + 0x50))();
            lVar7 = *param_1;
            puVar12 = (uint *)(lVar7 + 0x10);
            uVar14 = *puVar12 - 1;
          }
          *puVar12 = uVar14;
          *(undefined1 *)(param_1 + 9) = 1;
          if ((uVar14 != 0) &&
             (*(char *)(*(long *)(lVar7 + 8) + (ulong)(uVar14 - 1) * 0x10 + 9) == '\0')) break;
          puVar12 = (uint *)(lVar7 + 0x10);
          uVar14 = *puVar12;
          if (uVar14 <= uVar17) goto LAB_00363a10;
        }
        *(undefined1 *)(param_1 + 9) = 0;
        puVar12 = (uint *)(lVar7 + 0x10);
        uVar14 = *puVar12;
      } while (uVar17 < uVar14);
LAB_00363a10:
      puVar13 = (uint *)(param_1[1] + 0x10);
      uVar15 = *puVar13 - 1;
    }
    *puVar13 = uVar15;
  }
  return;
}


