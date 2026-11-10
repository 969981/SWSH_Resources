/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0035b1c0; name: FUN_0035b1c0
 */


void FUN_0035b1c0(long *param_1,long *param_2)

{
  long lVar1;
  uint uVar2;
  char cVar3;
  byte bVar4;
  int iVar5;
  ulong uVar6;
  char *__s1;
  long lVar7;
  long *plVar8;
  ulonglong uVar9;
  undefined8 uVar10;
  uint *puVar11;
  byte *pbVar12;
  uint *puVar13;
  uint uVar14;
  uint uVar15;
  long *plVar16;
  long *plVar17;
  undefined1 local_2d0 [8];
  undefined8 local_2c8;
  long local_2c0;
  ulong local_2b8;
  long local_2b0;
  long local_2a8;
  long local_2a0;
  char *local_298 [6];
  undefined1 auStack_268 [32];
  undefined1 auStack_248 [32];
  undefined1 auStack_228 [32];
  undefined1 auStack_208 [32];
  undefined1 auStack_1e8 [32];
  undefined1 auStack_1c8 [32];
  undefined1 auStack_1a8 [56];
  undefined1 auStack_170 [88];
  long local_118;
  long lStack_110;
  long local_108;
  long lStack_100;
  long local_f8;
  long local_f0;
  long local_e8;
  long local_e0;
  long local_d8;
  undefined1 local_d0;
  char *local_c8;
  undefined8 local_c0;
  undefined8 local_b8;
  long local_b0;
  long local_a8;
  long lStack_a0;
  long local_98;
  long lStack_90;
  long local_88;
  long lStack_80;
  long local_78;
  long local_70;
  char local_64 [4];
  
  lVar7 = *param_1;
  lVar1 = param_1[1];
  plVar16 = (long *)param_1[5];
  plVar17 = (long *)param_1[8];
  local_298[0] = (char *)CONCAT44(local_298[0]._4_4_,*(undefined4 *)(lVar7 + 0x10));
  if (*(uint *)(lVar1 + 0x10) < (*(uint *)(lVar1 + 0x14) & 0x7fffffff)) {
    *(undefined4 *)(*(long *)(lVar1 + 8) + (ulong)*(uint *)(lVar1 + 0x10) * 4) =
         *(undefined4 *)(lVar7 + 0x10);
    *(int *)(lVar1 + 0x10) = *(int *)(lVar1 + 0x10) + 1;
    iVar5 = *(int *)(lVar7 + 0x10);
  }
  else {
    FUN_00321390(lVar1,local_298);
    lVar7 = *param_1;
    iVar5 = *(int *)(lVar7 + 0x10);
  }
  if (iVar5 != 0) {
    lVar7 = *(long *)(lVar7 + 8);
    uVar6 = (ulong)(iVar5 - 1);
    pbVar12 = (byte *)(lVar7 + uVar6 * 0x10 + 8);
    if (*pbVar12 == 0) {
      bVar4 = 0;
      if ((char)param_1[9] != '\0') {
        bVar4 = (**(code **)(*(long *)param_1[5] + 0x20))
                          ((long *)param_1[5],*(undefined8 *)(lVar7 + uVar6 * 0x10));
        bVar4 = bVar4 & 1;
        *(byte *)(param_1 + 9) = bVar4;
        lVar7 = *(long *)(*param_1 + 8);
        uVar6 = (ulong)(*(int *)(*param_1 + 0x10) - 1);
        pbVar12 = (byte *)(lVar7 + uVar6 * 0x10 + 8);
      }
      *(byte *)(lVar7 + uVar6 * 0x10 + 9) = bVar4;
      *pbVar12 = bVar4;
      cVar3 = (char)param_1[9];
      goto joined_r0x0035b5ec;
    }
  }
  cVar3 = (char)param_1[9];
joined_r0x0035b5ec:
  if ((cVar3 != '\0') && (uVar6 = FUN_0035b730(param_1), (uVar6 & 1) != 0)) {
    do {
      if ((char)param_1[9] == '\0') {
        iVar5 = strcasecmp("","PxShapeRef");
        if (iVar5 == 0) goto LAB_0035b4dc;
LAB_0035b2dc:
        local_2c0 = 0;
        local_2b8 = 0;
        local_2c8 = 0;
                    /* try { // try from 0035b2e4 to 0035b2f3 has its CatchHandler @ 0035b6e0 */
        FUN_0035b870(param_1,&local_2c8,&local_2c0);
        if ((int)local_2b8 != 0) {
          local_2d0[0] = 0xb;
                    /* try { // try from 0035b314 to 0035b497 has its CatchHandler @ 0035b6f0 */
          lVar7 = (**(code **)(*(long *)param_1[2] + 0xe0))
                            ((long *)param_1[2],local_2c8,local_2c0,local_2b8 & 0xffffffff,1,
                             local_2d0);
          if (lVar7 != 0) {
            FUN_00215bc0(local_298);
            local_2a0 = param_1[4];
            local_2a8 = param_1[3];
            local_2b0 = param_1[2];
            local_118 = *param_1;
            lStack_110 = param_1[1];
            local_f0 = param_1[5];
            local_e0 = param_1[7];
            local_d8 = param_1[8];
            local_64[0] = '\0';
            local_d0 = 1;
            local_c8 = local_64;
            local_c0 = 0;
            local_b8 = 0;
            local_108 = local_2b0;
            lStack_100 = local_2a8;
            local_f8 = local_2a0;
            local_e8 = lVar7;
            local_b0 = local_2b0;
            local_a8 = local_2a8;
            lStack_a0 = local_2a0;
            local_98 = local_2b0;
            lStack_90 = local_2a8;
            local_88 = local_2a0;
            lStack_80 = local_2b0;
            local_78 = local_2a8;
            local_70 = local_2a0;
            FUN_00324f90(&local_118,auStack_268,2);
            FUN_00325190(&local_118,auStack_248,3);
            FUN_00325350(&local_118,auStack_228,4);
            FUN_00325510(&local_118,auStack_208,5);
            FUN_003256a0(&local_118,auStack_1e8,6);
            FUN_00325850(&local_118,auStack_1c8,7);
            FUN_00325a00(&local_118,auStack_1a8,8);
            FUN_00325bc0(&local_118,auStack_170,10);
            if (local_64[0] != '\0') {
              *(undefined1 *)param_1[10] = 1;
            }
            (**(code **)(*param_2 + 0xc0))(param_2,lVar7);
            (**(code **)*plVar17)(plVar17,lVar7,0);
          }
        }
        plVar8 = (long *)(**(code **)(*(long *)param_1[7] + 0x20))();
        (**(code **)(*plVar8 + 0x18))(plVar8,local_2c8);
        lVar7 = local_2c0;
        if (((-1 < (long)local_2b8) && ((local_2b8 & 0x7fffffff00000000) != 0)) && (local_2c0 != 0))
        {
                    /* try { // try from 0035b4b0 to 0035b4c3 has its CatchHandler @ 0035b6dc */
          plVar8 = (long *)FUN_00400d30();
          (**(code **)(*plVar8 + 0x18))(plVar8,lVar7);
        }
LAB_0035b540:
        cVar3 = (char)param_1[9];
      }
      else {
        __s1 = (char *)(**(code **)(*(long *)param_1[5] + 0x40))();
        iVar5 = strcasecmp(__s1,"PxShapeRef");
        if (iVar5 != 0) goto LAB_0035b2dc;
LAB_0035b4dc:
        local_298[0] = (char *)(**(code **)(*plVar16 + 0x48))(plVar16);
        if (((local_298[0] == (char *)0x0) || (*local_298[0] == '\0')) ||
           (uVar9 = strtoull(local_298[0],local_298,10), uVar9 == 0)) goto LAB_0035b540;
        lVar7 = (**(code **)(*plVar17 + 0x50))(plVar17,uVar9);
        if (lVar7 != 0) {
          (**(code **)(*param_2 + 0xc0))(param_2,lVar7);
          goto LAB_0035b540;
        }
        uVar10 = FUN_00400880();
        FUN_00400890(uVar10,4,"./../../PhysXExtensions/src/serialization/Xml/SnXmlVisitorReader.h",
                     0x6c,
                     "PxSerialization::createCollectionFromXml: Reference to ID %d cannot be resolved. Make sure externalRefs collection is specified if required and check Xml file for completeness."
                     ,uVar9);
        *(undefined1 *)param_1[10] = 1;
        cVar3 = (char)param_1[9];
      }
    } while ((cVar3 != '\0') &&
            (uVar6 = (**(code **)(*(long *)param_1[5] + 0x30))(), (uVar6 & 1) != 0));
  }
  puVar13 = (uint *)(param_1[1] + 0x10);
  if (*puVar13 != 0) {
    uVar15 = *puVar13 - 1;
    uVar2 = *(uint *)(*(long *)(param_1[1] + 8) + (ulong)uVar15 * 4);
    lVar7 = *param_1;
    puVar11 = (uint *)(lVar7 + 0x10);
    uVar14 = *puVar11;
    if (uVar2 < uVar14) {
      do {
        while( true ) {
          uVar14 = uVar14 - 1;
          if ((*(char *)(*(long *)(lVar7 + 8) + (ulong)uVar14 * 0x10 + 8) != '\0') &&
             (*(char *)(*(long *)(lVar7 + 8) + (ulong)uVar14 * 0x10 + 9) != '\0')) {
            (**(code **)(*(long *)param_1[5] + 0x50))();
            lVar7 = *param_1;
            puVar11 = (uint *)(lVar7 + 0x10);
            uVar14 = *puVar11 - 1;
          }
          *puVar11 = uVar14;
          *(undefined1 *)(param_1 + 9) = 1;
          if ((uVar14 != 0) &&
             (*(char *)(*(long *)(lVar7 + 8) + (ulong)(uVar14 - 1) * 0x10 + 9) == '\0')) break;
          puVar11 = (uint *)(lVar7 + 0x10);
          uVar14 = *puVar11;
          if (uVar14 <= uVar2) goto LAB_0035b6ac;
        }
        *(undefined1 *)(param_1 + 9) = 0;
        puVar11 = (uint *)(lVar7 + 0x10);
        uVar14 = *puVar11;
      } while (uVar2 < uVar14);
LAB_0035b6ac:
      puVar13 = (uint *)(param_1[1] + 0x10);
      uVar15 = *puVar13 - 1;
    }
    *puVar13 = uVar15;
  }
  return;
}


