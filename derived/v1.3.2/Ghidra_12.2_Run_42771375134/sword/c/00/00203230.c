/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00203230; name: FUN_00203230
 */


/* WARNING: Restarted to delay deadcode elimination for space: stack */

undefined8 FUN_00203230(long param_1,float *param_2,long *param_3)

{
  uint uVar1;
  undefined *puVar2;
  byte *pbVar3;
  byte bVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  int *piVar10;
  ulong uVar11;
  uint uVar12;
  long lVar13;
  undefined8 *puVar14;
  long *plVar15;
  ulong uVar16;
  long lVar17;
  uint uVar18;
  undefined8 *puVar19;
  ushort uVar20;
  ulong uVar21;
  undefined8 *puVar22;
  uint *puVar23;
  undefined8 *puVar24;
  float fVar25;
  undefined2 local_140 [4];
  undefined *local_138;
  undefined8 local_130;
  undefined8 local_128;
  undefined4 local_120;
  undefined2 local_11c;
  undefined8 local_118;
  undefined8 local_110;
  undefined8 local_108;
  float local_100;
  undefined4 local_fc;
  undefined4 uStack_f8;
  undefined1 local_f0;
  undefined8 local_e8;
  undefined8 uStack_e0;
  undefined8 local_d8;
  undefined8 local_d0;
  ushort local_c8;
  undefined1 local_c6;
  undefined1 auStack_c0 [32];
  undefined8 local_a0;
  undefined8 local_98;
  undefined4 local_90;
  undefined2 local_8c;
  undefined8 local_88;
  undefined8 local_80;
  undefined8 local_78;
  undefined8 local_70;
  undefined4 uStack_68;
  
  puVar2 = PTR_DAT_02711068;
  local_90 = 0xffffffff;
  local_a0 = 0;
  local_98 = 0;
  local_8c = 0;
  uStack_68 = 0;
  local_88 = 0;
  local_80 = 0;
  local_78 = 0;
  local_70 = 0x7f7fffff;
  lVar17 = *param_3;
  lVar13 = param_3[1];
  uVar8 = FUN_003d9790(*(long *)(PTR_DAT_02711068 +
                                ((ulong)*(byte *)(lVar13 + 0xb) & 0xf) * 8 + 0x30) + lVar13);
  uVar9 = FUN_003f8c70(lVar17 + 0x20);
  puVar23 = *(uint **)(param_1 + 0x28);
  uVar20 = *(ushort *)(param_1 + 0x20);
  uVar18 = (uint)(short)puVar23[4];
  iVar7 = 1;
  if (*(int *)(*(long *)(param_1 + 0x18) + 0x58) == 0 && -1 < (int)uVar18 ||
      *(char *)(param_1 + 0x4e) != '\0') {
    iVar7 = 2;
  }
  if (*(char *)(param_1 + 0x4e) == '\0') {
    puVar24 = *(undefined8 **)(param_1 + 0x30);
    puVar22 = *(undefined8 **)(param_1 + 0x40);
    if (*(char *)((long)puVar23 + 0x12) !=
        *(char *)(*(long *)(puVar2 + ((ulong)*(byte *)(lVar13 + 0xb) & 0xf) * 8 + 0x30) + lVar13 +
                 0xb)) {
      (**(code **)(**(long **)(param_1 + 8) + 0x118))(&local_138);
      pbVar3 = (byte *)(*(long *)(puVar2 + (ulong)(*(uint *)(lVar13 + 8) >> 0x18 & 0xf) * 8 + 0x30)
                        + lVar13 + 0xe);
      if ((*(uint *)(lVar13 + 8) & 4) != 0) {
        pbVar3 = (byte *)(*(long *)(lVar13 + 0x10) + 2);
      }
      if ((((byte)local_138 & *pbVar3) >> 3 & 1) == 0) {
        return 1;
      }
    }
    if (puVar22 == (undefined8 *)0x0) {
      if ((((puVar23[1] != 0 || *puVar23 != 0) || puVar23[2] != 0) || puVar23[3] != 0) &&
         ((((*(uint *)(lVar17 + 0x24) & puVar23[1]) == 0 &&
           (*(uint *)(lVar17 + 0x20) & *puVar23) == 0) &&
          (*(uint *)(lVar17 + 0x28) & puVar23[2]) == 0) &&
          (*(uint *)(lVar17 + 0x2c) & puVar23[3]) == 0)) {
        return 1;
      }
    }
    if (((uVar18 >> 2 & 1) != 0) &&
       ((puVar24 != (undefined8 *)0x0 || (puVar22 != (undefined8 *)0x0)))) {
      local_138 = (undefined *)CONCAT62(local_138._2_6_,uVar20);
      if (puVar24 == (undefined8 *)0x0) {
        if ((code *)puVar22[2] != (code *)0x0) {
          iVar7 = (*(code *)puVar22[2])
                            (*(undefined8 *)puVar23,*(undefined8 *)(puVar23 + 2),
                             *(undefined8 *)(lVar17 + 0x20),*(undefined8 *)(lVar17 + 0x28),*puVar22,
                             *(undefined4 *)(puVar22 + 1),&local_138);
        }
      }
      else {
        iVar7 = (**(code **)*puVar24)(puVar24,puVar23,uVar9,uVar8,&local_138);
      }
      if (iVar7 == 0) {
        return 1;
      }
      uVar20 = (ushort)local_138 & 0x1b0 | uVar20 & 0xfe4f;
    }
  }
  FUN_001e1920(auStack_c0,lVar17,lVar13);
  if ((*(byte *)(lVar17 + 8) & 1) == 0) {
    piVar10 = (int *)(lVar17 + 0x68);
  }
  else {
    piVar10 = (int *)(*(long *)(lVar17 + 0x10) + 0x38);
  }
  lVar13 = *(long *)(param_1 + 0x18);
  uVar5 = *(uint *)(lVar13 + 0x5c);
  iVar6 = *(uint *)(lVar13 + 0x58) - uVar5;
  puVar22 = (undefined8 *)(*(long *)(lVar13 + 0x50) + (ulong)uVar5 * 0x40);
  if (*(uint *)(lVar13 + 0x58) < uVar5 || iVar6 == 0) {
    iVar6 = 1;
    puVar22 = &local_a0;
  }
  if ((*piVar10 == 5) && ((uVar20 & 0x20) == 0)) {
    iVar6 = 1;
  }
  local_138 = (undefined *)CONCAT62(local_138._2_6_,*(ushort *)(param_1 + 0x48) | uVar20);
  uVar5 = (**(code **)(*(long *)(*(long *)(param_1 + 8) + 0x24c8) + (long)*piVar10 * 8))
                    (*(undefined4 *)(param_1 + 0x38),piVar10,auStack_c0,
                     **(undefined8 **)(param_1 + 0x10),(*(undefined8 **)(param_1 + 0x10))[1],
                     &local_138,iVar6,puVar22);
  if (uVar5 == 0) {
    return 1;
  }
  uVar21 = 0;
  puVar2 = PTR_DAT_02711210 + 0x10;
  do {
    while( true ) {
      puVar24 = puVar22 + uVar21 * 8;
      *puVar24 = uVar8;
      puVar24[1] = uVar9;
      iVar6 = iVar7;
      if (*(char *)(param_1 + 0x4e) == '\0') {
        plVar15 = *(long **)(param_1 + 0x30);
        if (plVar15 == (long *)0x0) {
          if (((uVar18 >> 3 & 1) != 0) && (*(long *)(param_1 + 0x40) != 0)) {
            puVar14 = *(undefined8 **)(param_1 + 0x40);
            if ((code *)puVar14[3] != (code *)0x0) {
              iVar6 = (*(code *)puVar14[3])
                                (**(undefined8 **)(param_1 + 0x28),
                                 (*(undefined8 **)(param_1 + 0x28))[1],
                                 *(undefined8 *)(lVar17 + 0x20),*(undefined8 *)(lVar17 + 0x28),
                                 *puVar14,*(undefined4 *)(puVar14 + 1),puVar24);
            }
          }
        }
        else if ((uVar18 >> 3 & 1) != 0) {
          iVar6 = (**(code **)(*plVar15 + 8))(plVar15,*(undefined8 *)(param_1 + 0x28),puVar24);
        }
      }
      if ((iVar6 != 0) && (*(char *)(param_1 + 0x4d) != '\0')) {
        lVar17 = *(long *)(param_1 + 0x18);
        *(undefined4 *)(lVar17 + 0x18) = *(undefined4 *)(puVar24 + 2);
        *(undefined8 *)(lVar17 + 0x10) = puVar24[1];
        uVar21 = uVar21 & 0xffffffff;
        *(undefined8 *)(lVar17 + 8) = *puVar24;
        *(undefined2 *)(lVar17 + 0x1c) = *(undefined2 *)((long)puVar22 + uVar21 * 0x40 + 0x14);
        *(undefined4 *)(lVar17 + 0x20) = *(undefined4 *)(puVar22 + uVar21 * 8 + 3);
        *(undefined4 *)(lVar17 + 0x24) = *(undefined4 *)((long)puVar22 + uVar21 * 0x40 + 0x1c);
        *(undefined4 *)(lVar17 + 0x28) = *(undefined4 *)(puVar22 + uVar21 * 8 + 4);
        *(undefined4 *)(lVar17 + 0x2c) = *(undefined4 *)((long)puVar22 + uVar21 * 0x40 + 0x24);
        *(undefined4 *)(lVar17 + 0x30) = *(undefined4 *)(puVar22 + uVar21 * 8 + 5);
        *(undefined4 *)(lVar17 + 0x34) = *(undefined4 *)((long)puVar22 + uVar21 * 0x40 + 0x2c);
        *(undefined4 *)(lVar17 + 0x38) = *(undefined4 *)(puVar22 + uVar21 * 8 + 6);
        *(undefined8 *)(lVar17 + 0x3c) = *(undefined8 *)((long)puVar22 + uVar21 * 0x40 + 0x34);
        *(undefined1 *)(*(long *)(param_1 + 0x18) + 0x48) = 1;
        return 0;
      }
      if (*(char *)(param_1 + 0x4c) != '\0') {
        iVar6 = 1;
      }
      if (iVar6 != 2) break;
      fVar25 = *(float *)(puVar24 + 6);
      if (fVar25 <= *(float *)(param_1 + 0x38)) {
        *(float *)(param_1 + 0x38) = fVar25;
        *param_2 = fVar25;
        lVar13 = *(long *)(param_1 + 0x18);
        *(undefined4 *)(lVar13 + 0x18) = *(undefined4 *)(puVar24 + 2);
        *(undefined8 *)(lVar13 + 0x10) = puVar24[1];
        *(undefined8 *)(lVar13 + 8) = *puVar24;
        *(undefined2 *)(lVar13 + 0x1c) = *(undefined2 *)((long)puVar24 + 0x14);
        *(undefined4 *)(lVar13 + 0x20) = *(undefined4 *)(puVar24 + 3);
        *(undefined4 *)(lVar13 + 0x24) = *(undefined4 *)((long)puVar24 + 0x1c);
        *(undefined4 *)(lVar13 + 0x28) = *(undefined4 *)(puVar24 + 4);
        *(undefined4 *)(lVar13 + 0x2c) = *(undefined4 *)((long)puVar24 + 0x24);
        *(undefined4 *)(lVar13 + 0x30) = *(undefined4 *)(puVar24 + 5);
        *(undefined4 *)(lVar13 + 0x34) = *(undefined4 *)((long)puVar24 + 0x2c);
        *(float *)(lVar13 + 0x38) = *(float *)(puVar24 + 6);
        *(undefined8 *)(lVar13 + 0x3c) = *(undefined8 *)((long)puVar24 + 0x34);
        *(undefined1 *)(*(long *)(param_1 + 0x18) + 0x48) = 1;
      }
LAB_00203688:
      uVar21 = uVar21 + 1;
      if (uVar5 <= uVar21) {
        return 1;
      }
    }
    if (iVar6 != 1) goto LAB_00203688;
    puVar14 = *(undefined8 **)(param_1 + 0x18);
    if (((*(uint *)(puVar14 + 0xb) == 0) || (*(char *)(param_1 + 0x4a) == '\0')) ||
       (*(float *)(param_1 + 0x38) < *(float *)(puVar24 + 6))) goto LAB_00203688;
    puVar23 = (uint *)((long)puVar14 + 0x5c);
    uVar12 = *puVar23;
    if (uVar12 == *(uint *)(puVar14 + 0xb)) {
      puVar19 = *(undefined8 **)(param_1 + 0x28);
      local_d0 = puVar19[1];
      local_d8 = *puVar19;
      local_c6 = *(undefined1 *)((long)puVar19 + 0x12);
      local_130 = 0;
      local_128 = 0;
      local_c8 = *(ushort *)(puVar19 + 2) | 0x8000;
      local_120 = 0xffffffff;
      local_118 = 0;
      local_110 = 0;
      local_11c = 0;
      local_e8 = 0;
      uStack_e0 = 0;
      uStack_f8 = 0;
      local_108 = 0;
      local_100 = 3.4028235e+38;
      local_fc = 0;
      local_f0 = 0;
      local_138 = puVar2;
      if ((*(char *)(param_1 + 0x4b) == '\0') && (*(int *)(puVar14 + 0xb) != 0)) {
        local_140[0] = *(undefined2 *)(param_1 + 0x20);
                    /* try { // try from 00203704 to 00203717 has its CatchHandler @ 002039e0 */
        uVar11 = FUN_00202880(*(undefined8 *)(param_1 + 8),*(undefined8 *)(param_1 + 0x10),
                              &local_138,local_140,0,&local_d8,*(undefined8 *)(param_1 + 0x30),
                              *(undefined8 *)(param_1 + 0x40));
        puVar14 = *(undefined8 **)(param_1 + 0x18);
        if ((uVar11 & 1) == 0) {
          puVar23 = (uint *)((long)puVar14 + 0x5c);
        }
        else {
          *(undefined4 *)(puVar14 + 3) = local_120;
          puVar14[2] = local_128;
          puVar14[1] = local_130;
          *(undefined2 *)((long)puVar14 + 0x1c) = local_11c;
          *(undefined4 *)(puVar14 + 4) = (undefined4)local_118;
          *(undefined4 *)((long)puVar14 + 0x24) = local_118._4_4_;
          *(undefined4 *)(puVar14 + 5) = (undefined4)local_110;
          *(undefined4 *)((long)puVar14 + 0x2c) = local_110._4_4_;
          *(undefined4 *)(puVar14 + 6) = (undefined4)local_108;
          *(undefined4 *)((long)puVar14 + 0x34) = local_108._4_4_;
          *(float *)(puVar14 + 7) = local_100;
          *(ulong *)((long)puVar14 + 0x3c) = CONCAT44(uStack_f8,local_fc);
          puVar14 = *(undefined8 **)(param_1 + 0x18);
          *(undefined1 *)(puVar14 + 9) = 1;
          lVar13 = puVar14[10];
          puVar23 = (uint *)((long)puVar14 + 0x5c);
          uVar11 = (ulong)*puVar23;
          if (*puVar23 == 0) {
            uVar12 = 0;
          }
          else {
            uVar16 = 0;
            do {
              while( true ) {
                uVar12 = (uint)uVar11;
                puVar14 = (undefined8 *)(lVar13 + uVar16 * 0x40);
                if (*(float *)(puVar14 + 6) <= local_100) break;
                uVar12 = uVar12 - 1;
                uVar11 = (ulong)uVar12;
                puVar19 = (undefined8 *)(lVar13 + uVar11 * 0x40);
                *(undefined4 *)(puVar14 + 2) = *(undefined4 *)(puVar19 + 2);
                puVar14[1] = puVar19[1];
                *puVar14 = *puVar19;
                *(undefined2 *)((long)puVar14 + 0x14) = *(undefined2 *)((long)puVar19 + 0x14);
                *(undefined4 *)(puVar14 + 3) = *(undefined4 *)(puVar19 + 3);
                *(undefined4 *)((long)puVar14 + 0x1c) = *(undefined4 *)((long)puVar19 + 0x1c);
                *(undefined4 *)(puVar14 + 4) = *(undefined4 *)(puVar19 + 4);
                *(undefined4 *)((long)puVar14 + 0x24) = *(undefined4 *)((long)puVar19 + 0x24);
                *(undefined4 *)(puVar14 + 5) = *(undefined4 *)(puVar19 + 5);
                *(undefined4 *)((long)puVar14 + 0x2c) = *(undefined4 *)((long)puVar19 + 0x2c);
                *(float *)(puVar14 + 6) = *(float *)(puVar19 + 6);
                *(undefined8 *)((long)puVar14 + 0x34) = *(undefined8 *)((long)puVar19 + 0x34);
                if ((uint)uVar16 == uVar12) goto LAB_0020383c;
              }
              uVar1 = (uint)uVar16 + 1;
              uVar16 = (ulong)uVar1;
            } while (uVar1 != uVar12);
LAB_0020383c:
            puVar14 = *(undefined8 **)(param_1 + 0x18);
            puVar23 = (uint *)((long)puVar14 + 0x5c);
          }
          *(uint *)((long)puVar14 + 0x5c) = uVar12;
          *(float *)(param_1 + 0x38) = local_100;
          *param_2 = local_100;
        }
      }
      *(undefined1 *)(param_1 + 0x4b) = 1;
      uVar12 = *puVar23;
      if (uVar12 == *(uint *)(puVar14 + 0xb)) {
        bVar4 = (**(code **)*puVar14)(puVar14,puVar14[10]);
        *(byte *)(param_1 + 0x4a) = bVar4 & 1;
        if ((bVar4 & 1) == 0) {
          return 0;
        }
        puVar14 = *(undefined8 **)(param_1 + 0x18);
        uVar12 = 0;
        puVar23 = (uint *)((long)puVar14 + 0x5c);
        *puVar23 = 0;
      }
    }
    lVar13 = puVar14[10];
    *puVar23 = uVar12 + 1;
    puVar14 = (undefined8 *)(lVar13 + (ulong)uVar12 * 0x40);
    *(undefined4 *)(puVar14 + 2) = *(undefined4 *)(puVar24 + 2);
    puVar14[1] = puVar24[1];
    *puVar14 = *puVar24;
    *(undefined2 *)((long)puVar14 + 0x14) = *(undefined2 *)((long)puVar24 + 0x14);
    *(undefined4 *)(puVar14 + 3) = *(undefined4 *)(puVar24 + 3);
    *(undefined4 *)((long)puVar14 + 0x1c) = *(undefined4 *)((long)puVar24 + 0x1c);
    *(undefined4 *)(puVar14 + 4) = *(undefined4 *)(puVar24 + 4);
    *(undefined4 *)((long)puVar14 + 0x24) = *(undefined4 *)((long)puVar24 + 0x24);
    *(undefined4 *)(puVar14 + 5) = *(undefined4 *)(puVar24 + 5);
    *(undefined4 *)((long)puVar14 + 0x2c) = *(undefined4 *)((long)puVar24 + 0x2c);
    *(float *)(puVar14 + 6) = *(float *)(puVar24 + 6);
    *(undefined8 *)((long)puVar14 + 0x34) = *(undefined8 *)((long)puVar24 + 0x34);
    uVar21 = uVar21 + 1;
    if (uVar5 <= uVar21) {
      return 1;
    }
  } while( true );
}


