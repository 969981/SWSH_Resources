/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00315e70; name: FUN_00315e70
 */


void FUN_00315e70(long *param_1,undefined8 *param_2,long *param_3)

{
  char cVar1;
  byte bVar2;
  int iVar3;
  long lVar4;
  ulong uVar5;
  long lVar6;
  ulonglong uVar7;
  char *__s1;
  undefined8 uVar8;
  undefined8 *puVar9;
  uint *puVar10;
  uint uVar11;
  int *piVar12;
  uint *puVar13;
  uint uVar14;
  uint uVar15;
  byte *pbVar16;
  long *plVar17;
  long *plVar18;
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
  long local_110;
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
  
  plVar17 = (long *)param_1[5];
  lVar6 = *param_1;
  lVar4 = param_1[1];
  plVar18 = (long *)param_1[8];
  local_118 = (char *)CONCAT44(local_118._4_4_,*(undefined4 *)(lVar6 + 0x10));
  if (*(uint *)(lVar4 + 0x10) < (*(uint *)(lVar4 + 0x14) & 0x7fffffff)) {
    *(undefined4 *)(*(long *)(lVar4 + 8) + (ulong)*(uint *)(lVar4 + 0x10) * 4) =
         *(undefined4 *)(lVar6 + 0x10);
    *(int *)(lVar4 + 0x10) = *(int *)(lVar4 + 0x10) + 1;
    iVar3 = *(int *)(lVar6 + 0x10);
  }
  else {
    FUN_00321390(lVar4,&local_118);
    lVar6 = *param_1;
    iVar3 = *(int *)(lVar6 + 0x10);
  }
  if (iVar3 != 0) {
    lVar4 = *(long *)(lVar6 + 8);
    uVar5 = (ulong)(iVar3 - 1);
    pbVar16 = (byte *)(lVar4 + uVar5 * 0x10 + 8);
    if (*pbVar16 == 0) {
      bVar2 = 0;
      if ((char)param_1[9] != '\0') {
        bVar2 = (**(code **)(*(long *)param_1[5] + 0x20))
                          ((long *)param_1[5],*(undefined8 *)(lVar4 + uVar5 * 0x10));
        lVar6 = *param_1;
        bVar2 = bVar2 & 1;
        *(byte *)(param_1 + 9) = bVar2;
        lVar4 = *(long *)(lVar6 + 8);
        uVar5 = (ulong)(*(int *)(lVar6 + 0x10) - 1);
        pbVar16 = (byte *)(lVar4 + uVar5 * 0x10 + 8);
      }
      *(byte *)(lVar4 + uVar5 * 0x10 + 9) = bVar2;
      *pbVar16 = bVar2;
    }
  }
  lVar4 = param_1[1];
  if ((char)param_1[9] == '\0') goto LAB_0031672c;
  local_118 = (char *)CONCAT44(local_118._4_4_,*(undefined4 *)(lVar6 + 0x10));
  if (*(uint *)(lVar4 + 0x10) < (*(uint *)(lVar4 + 0x14) & 0x7fffffff)) {
    *(undefined4 *)(*(long *)(lVar4 + 8) + (ulong)*(uint *)(lVar4 + 0x10) * 4) =
         *(undefined4 *)(lVar6 + 0x10);
    *(int *)(lVar4 + 0x10) = *(int *)(lVar4 + 0x10) + 1;
  }
  else {
    FUN_00321390(lVar4,&local_118);
  }
  uVar5 = FUN_00320b70(param_1,"Materials");
  if ((uVar5 & 1) != 0) {
    lVar6 = *param_1;
    puVar10 = (uint *)(lVar6 + 0x10);
    uVar11 = *puVar10;
    if (uVar11 != 0) {
      lVar4 = *(long *)(lVar6 + 8);
      uVar5 = (ulong)(uVar11 - 1);
      pbVar16 = (byte *)(lVar4 + uVar5 * 0x10 + 8);
      if (*pbVar16 == 0) {
        bVar2 = 0;
        if ((char)param_1[9] != '\0') {
          bVar2 = (**(code **)(*(long *)param_1[5] + 0x20))
                            ((long *)param_1[5],*(undefined8 *)(lVar4 + uVar5 * 0x10));
          bVar2 = bVar2 & 1;
          lVar6 = *param_1;
          *(byte *)(param_1 + 9) = bVar2;
          lVar4 = *(long *)(lVar6 + 8);
          puVar10 = (uint *)(lVar6 + 0x10);
          uVar11 = *puVar10;
          uVar5 = (ulong)(uVar11 - 1);
          pbVar16 = (byte *)(lVar4 + uVar5 * 0x10 + 8);
        }
        *(byte *)(lVar4 + uVar5 * 0x10 + 9) = bVar2;
        *pbVar16 = bVar2;
      }
    }
    local_118 = "__child";
    local_110 = (ulong)CONCAT61((int6)((ulong)local_110 >> 0x10),(char)param_1[9]) << 8;
    if (uVar11 < (*(uint *)(lVar6 + 0x14) & 0x7fffffff)) {
      puVar9 = (undefined8 *)(*(long *)(lVar6 + 8) + (ulong)uVar11 * 0x10);
      puVar9[1] = local_110;
      *puVar9 = "__child";
      *puVar10 = *puVar10 + 1;
      if ((char)param_1[9] == '\0') {
        bVar2 = 0;
      }
      else {
LAB_00316088:
        bVar2 = (**(code **)(*(long *)param_1[5] + 0x28))();
        bVar2 = bVar2 & 1;
        *(byte *)(param_1 + 9) = bVar2;
      }
    }
    else {
      FUN_00321500(lVar6,&local_118);
      bVar2 = 0;
      if ((char)param_1[9] != '\0') goto LAB_00316088;
    }
    lVar6 = *(long *)(*param_1 + 8) + (ulong)(*(int *)(*param_1 + 0x10) - 1) * 0x10;
    *(byte *)(lVar6 + 9) = bVar2;
    *(byte *)(lVar6 + 8) = bVar2;
    if (bVar2 != 0) {
      do {
        local_1c0 = 0;
        uStack_1bc = 0;
        local_118 = (char *)(**(code **)(*plVar17 + 0x48))(plVar17);
        if (((local_118 == (char *)0x0) || (*local_118 == '\0')) ||
           (uVar7 = strtoull(local_118,&local_118,10), uVar7 == 0)) {
          local_1c0 = 0;
          uStack_1bc = 0;
          cVar1 = (char)param_1[9];
        }
        else {
          lVar6 = (**(code **)(*plVar18 + 0x50))(plVar18,uVar7);
          if (lVar6 == 0) {
            uVar8 = FUN_00400880();
            FUN_00400890(uVar8,4,
                         "./../../PhysXExtensions/src/serialization/Xml/SnXmlVisitorReader.h",0x6c,
                         "PxSerialization::createCollectionFromXml: Reference to ID %d cannot be resolved. Make sure externalRefs collection is specified if required and check Xml file for completeness."
                         ,uVar7);
            local_1c0 = 0;
            uStack_1bc = 0;
            *(undefined1 *)param_1[10] = 1;
            cVar1 = (char)param_1[9];
          }
          else {
            local_1c0 = (undefined4)lVar6;
            uStack_1bc = (undefined4)((ulong)lVar6 >> 0x20);
            uVar11 = *(uint *)(param_3 + 1);
            if (uVar11 < (*(uint *)((long)param_3 + 0xc) & 0x7fffffff)) {
              *(long *)(*param_3 + (ulong)uVar11 * 8) = lVar6;
              *(uint *)(param_3 + 1) = uVar11 + 1;
              cVar1 = (char)param_1[9];
            }
            else {
              FUN_003216d0(param_3,&local_1c0);
              cVar1 = (char)param_1[9];
            }
          }
        }
      } while ((cVar1 != '\0') &&
              (uVar5 = (**(code **)(*(long *)param_1[5] + 0x30))(), (uVar5 & 1) != 0));
    }
  }
  lVar6 = param_1[1];
  piVar12 = (int *)(lVar6 + 0x10);
  if (*piVar12 == 0) {
    lVar4 = *param_1;
    uVar11 = 0;
  }
  else {
    uVar11 = *piVar12 - 1;
    lVar4 = *param_1;
    uVar14 = *(uint *)(*(long *)(lVar6 + 8) + (ulong)uVar11 * 4);
    puVar10 = (uint *)(lVar4 + 0x10);
    uVar15 = *puVar10;
    if (uVar14 < uVar15) {
      do {
        while( true ) {
          uVar15 = uVar15 - 1;
          if ((*(char *)(*(long *)(lVar4 + 8) + (ulong)uVar15 * 0x10 + 8) != '\0') &&
             (*(char *)(*(long *)(lVar4 + 8) + (ulong)uVar15 * 0x10 + 9) != '\0')) {
            (**(code **)(*(long *)param_1[5] + 0x50))();
            lVar4 = *param_1;
            puVar10 = (uint *)(lVar4 + 0x10);
            uVar15 = *puVar10 - 1;
          }
          *puVar10 = uVar15;
          *(undefined1 *)(param_1 + 9) = 1;
          if ((uVar15 != 0) &&
             (*(char *)(*(long *)(lVar4 + 8) + (ulong)(uVar15 - 1) * 0x10 + 9) == '\0')) break;
          puVar10 = (uint *)(lVar4 + 0x10);
          uVar15 = *puVar10;
          if (uVar15 <= uVar14) goto LAB_00316284;
        }
        *(undefined1 *)(param_1 + 9) = 0;
        puVar10 = (uint *)(lVar4 + 0x10);
        uVar15 = *puVar10;
      } while (uVar14 < uVar15);
LAB_00316284:
      lVar6 = param_1[1];
      piVar12 = (int *)(lVar6 + 0x10);
      uVar11 = *piVar12 - 1;
    }
    *(uint *)(lVar6 + 0x10) = uVar11;
  }
  local_118 = (char *)CONCAT44(local_118._4_4_,*(undefined4 *)(lVar4 + 0x10));
  if (uVar11 < (*(uint *)(lVar6 + 0x14) & 0x7fffffff)) {
    *(undefined4 *)(*(long *)(lVar6 + 8) + (ulong)uVar11 * 4) = *(undefined4 *)(lVar4 + 0x10);
    *piVar12 = *piVar12 + 1;
  }
  else {
    FUN_00321390(lVar6,&local_118);
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
  uVar5 = FUN_00320b70(param_1,"Geometry");
  if ((uVar5 & 1) == 0) {
LAB_00316664:
    lVar4 = param_1[1];
    iVar3 = *(int *)(lVar4 + 0x10);
  }
  else {
    lVar6 = *param_1;
    puVar10 = (uint *)(lVar6 + 0x10);
    uVar11 = *puVar10;
    if (uVar11 != 0) {
      lVar4 = *(long *)(lVar6 + 8);
      uVar5 = (ulong)(uVar11 - 1);
      pbVar16 = (byte *)(lVar4 + uVar5 * 0x10 + 8);
      if (*pbVar16 == 0) {
        bVar2 = 0;
        if ((char)param_1[9] != '\0') {
          bVar2 = (**(code **)(*(long *)param_1[5] + 0x20))
                            ((long *)param_1[5],*(undefined8 *)(lVar4 + uVar5 * 0x10));
          bVar2 = bVar2 & 1;
          lVar6 = *param_1;
          *(byte *)(param_1 + 9) = bVar2;
          lVar4 = *(long *)(lVar6 + 8);
          puVar10 = (uint *)(lVar6 + 0x10);
          uVar11 = *puVar10;
          uVar5 = (ulong)(uVar11 - 1);
          pbVar16 = (byte *)(lVar4 + uVar5 * 0x10 + 8);
        }
        *(byte *)(lVar4 + uVar5 * 0x10 + 9) = bVar2;
        *pbVar16 = bVar2;
      }
    }
    local_118 = "__child";
    local_110 = (ulong)CONCAT61((int6)((ulong)local_110 >> 0x10),(char)param_1[9]) << 8;
    if (uVar11 < (*(uint *)(lVar6 + 0x14) & 0x7fffffff)) {
      puVar9 = (undefined8 *)(*(long *)(lVar6 + 8) + (ulong)uVar11 * 0x10);
      puVar9[1] = local_110;
      *puVar9 = "__child";
      *puVar10 = *puVar10 + 1;
      if ((char)param_1[9] == '\0') {
        bVar2 = 0;
      }
      else {
LAB_0031643c:
        bVar2 = (**(code **)(*(long *)param_1[5] + 0x28))();
        bVar2 = bVar2 & 1;
        *(byte *)(param_1 + 9) = bVar2;
      }
    }
    else {
      FUN_00321500(lVar6,&local_118);
      bVar2 = 0;
      if ((char)param_1[9] != '\0') goto LAB_0031643c;
    }
    lVar6 = *(long *)(*param_1 + 8) + (ulong)(*(int *)(*param_1 + 0x10) - 1) * 0x10;
    *(byte *)(lVar6 + 9) = bVar2;
    *(byte *)(lVar6 + 8) = bVar2;
    if (bVar2 == 0) goto LAB_00316664;
    __s1 = (char *)(**(code **)(*(long *)param_1[5] + 0x40))();
    iVar3 = strcasecmp(__s1,"PxSphereGeometry");
    if (iVar3 == 0) {
      plVar17 = (long *)(**(code **)(*(long *)param_1[7] + 0x20))();
      puVar9 = (undefined8 *)
               (**(code **)(*plVar17 + 0x10))
                         (plVar17,8,"parseGeometry",
                          "./../../PhysXExtensions/src/serialization/Xml/SnXmlVisitorReader.h",0xad)
      ;
      *puVar9 = 0;
      FUN_00217550(auStack_170);
      FUN_00217550(auStack_138);
      local_140 = param_1[4];
      local_f0 = param_1[5];
      local_148 = param_1[3];
      local_110 = param_1[1];
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
LAB_0031665c:
      *param_2 = puVar9;
      goto LAB_00316664;
    }
    iVar3 = strcasecmp(__s1,"PxPlaneGeometry");
    if (iVar3 == 0) {
      plVar17 = (long *)(**(code **)(*(long *)param_1[7] + 0x20))();
      puVar9 = (undefined8 *)
               (**(code **)(*plVar17 + 0x10))
                         (plVar17,4,"parseGeometry",
                          "./../../PhysXExtensions/src/serialization/Xml/SnXmlVisitorReader.h",0xad)
      ;
      *(undefined4 *)puVar9 = 1;
      FUN_002175a0(auStack_138);
      FUN_002175a0(&local_118);
      goto LAB_0031665c;
    }
    iVar3 = strcasecmp(__s1,"PxCapsuleGeometry");
    if (iVar3 == 0) {
      uVar8 = FUN_00320ce0(param_1,&local_210);
    }
    else {
      iVar3 = strcasecmp(__s1,"PxBoxGeometry");
      if (iVar3 == 0) {
        uVar8 = FUN_00320e20(param_1,&local_200);
      }
      else {
        iVar3 = strcasecmp(__s1,"PxConvexMeshGeometry");
        if (iVar3 == 0) {
          uVar8 = FUN_00320f40(param_1,&uStack_1f0);
        }
        else {
          iVar3 = strcasecmp(__s1,"PxTriangleMeshGeometry");
          if (iVar3 == 0) {
            uVar8 = FUN_003210b0(param_1,&local_1c0);
          }
          else {
            iVar3 = strcasecmp(__s1,"PxHeightFieldGeometry");
            if (iVar3 != 0) goto LAB_00316664;
            uVar8 = FUN_00321210(param_1,local_190);
          }
        }
      }
    }
    *param_2 = uVar8;
    lVar4 = param_1[1];
    iVar3 = *(int *)(lVar4 + 0x10);
  }
  if (iVar3 != 0) {
    uVar14 = iVar3 - 1;
    lVar6 = *param_1;
    uVar15 = *(uint *)(*(long *)(lVar4 + 8) + (ulong)uVar14 * 4);
    puVar10 = (uint *)(lVar6 + 0x10);
    uVar11 = *puVar10;
    if (uVar15 < uVar11) {
      do {
        while( true ) {
          uVar11 = uVar11 - 1;
          if ((*(char *)(*(long *)(lVar6 + 8) + (ulong)uVar11 * 0x10 + 8) != '\0') &&
             (*(char *)(*(long *)(lVar6 + 8) + (ulong)uVar11 * 0x10 + 9) != '\0')) {
            (**(code **)(*(long *)param_1[5] + 0x50))();
            lVar6 = *param_1;
            puVar10 = (uint *)(lVar6 + 0x10);
            uVar11 = *puVar10 - 1;
          }
          *puVar10 = uVar11;
          *(undefined1 *)(param_1 + 9) = 1;
          if ((uVar11 != 0) &&
             (*(char *)(*(long *)(lVar6 + 8) + (ulong)(uVar11 - 1) * 0x10 + 9) == '\0')) break;
          puVar10 = (uint *)(lVar6 + 0x10);
          uVar11 = *puVar10;
          if (uVar11 <= uVar15) goto LAB_0031671c;
        }
        *(undefined1 *)(param_1 + 9) = 0;
        puVar10 = (uint *)(lVar6 + 0x10);
        uVar11 = *puVar10;
      } while (uVar15 < uVar11);
LAB_0031671c:
      lVar4 = param_1[1];
      uVar14 = *(int *)(lVar4 + 0x10) - 1;
    }
    *(uint *)(lVar4 + 0x10) = uVar14;
  }
LAB_0031672c:
  puVar10 = (uint *)(lVar4 + 0x10);
  if (*puVar10 != 0) {
    uVar14 = *puVar10 - 1;
    lVar6 = *param_1;
    uVar15 = *(uint *)(*(long *)(lVar4 + 8) + (ulong)uVar14 * 4);
    puVar13 = (uint *)(lVar6 + 0x10);
    uVar11 = *puVar13;
    if (uVar15 < uVar11) {
      do {
        while( true ) {
          uVar11 = uVar11 - 1;
          if ((*(char *)(*(long *)(lVar6 + 8) + (ulong)uVar11 * 0x10 + 8) != '\0') &&
             (*(char *)(*(long *)(lVar6 + 8) + (ulong)uVar11 * 0x10 + 9) != '\0')) {
            (**(code **)(*(long *)param_1[5] + 0x50))();
            lVar6 = *param_1;
            puVar13 = (uint *)(lVar6 + 0x10);
            uVar11 = *puVar13 - 1;
          }
          *puVar13 = uVar11;
          *(undefined1 *)(param_1 + 9) = 1;
          if ((uVar11 != 0) &&
             (*(char *)(*(long *)(lVar6 + 8) + (ulong)(uVar11 - 1) * 0x10 + 9) == '\0')) break;
          puVar13 = (uint *)(lVar6 + 0x10);
          uVar11 = *puVar13;
          if (uVar11 <= uVar15) goto LAB_003167e4;
        }
        *(undefined1 *)(param_1 + 9) = 0;
        puVar13 = (uint *)(lVar6 + 0x10);
        uVar11 = *puVar13;
      } while (uVar15 < uVar11);
LAB_003167e4:
      puVar10 = (uint *)(param_1[1] + 0x10);
      uVar14 = *puVar10 - 1;
    }
    *puVar10 = uVar14;
  }
  return;
}


