/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0012c500; name: FUN_0012c500
 */


void FUN_0012c500(long param_1,long param_2,uint param_3,long param_4,int *param_5,int *param_6,
                 uint *param_7)

{
  float *pfVar1;
  float *pfVar2;
  float *pfVar3;
  undefined4 *puVar4;
  long *plVar5;
  byte bVar6;
  undefined1 uVar7;
  ushort uVar8;
  byte bVar9;
  uint uVar10;
  int iVar11;
  char cVar12;
  undefined8 uVar13;
  float fVar14;
  int iVar15;
  long lVar16;
  long lVar17;
  undefined8 *puVar18;
  void *__s;
  float *pfVar19;
  ulong uVar20;
  long lVar21;
  long lVar22;
  long *plVar23;
  uint uVar24;
  ulong uVar25;
  long lVar26;
  byte *pbVar27;
  byte bVar28;
  undefined8 *puVar29;
  long lVar30;
  ulong uVar31;
  long lVar32;
  long *plVar33;
  byte *pbVar34;
  ulong uVar35;
  long lVar36;
  uint uVar37;
  byte *pbVar38;
  float fVar39;
  float fVar40;
  int *local_110;
  int *local_108;
  uint *local_100;
  long local_f8;
  uint local_ec;
  undefined8 local_e8;
  ulong local_e0;
  long local_d8;
  int local_cc;
  byte *local_c8;
  long local_c0;
  ulong local_b8;
  long *local_b0;
  uint local_a4;
  long local_a0;
  long local_98;
  long *local_90;
  long local_88;
  char local_80;
  undefined1 auStack_68 [4];
  int local_64;
  
  local_cc = *param_5;
  local_64 = *param_6;
  local_a4 = *param_7;
  local_a0 = param_4;
  local_98 = param_2;
  if (*(long *)(param_1 + 0x50) != 0) {
    uVar37 = param_3 * 0x68;
    local_80 = 0x400 < uVar37;
    if (uVar37 < 0x401) {
      lVar16 = (long)&local_110 - ((ulong)uVar37 + 0xf & 0x1fffffff0);
      iVar15 = local_cc;
      iVar11 = local_64;
      uVar37 = local_a4;
      cVar12 = local_80;
      pbVar34 = local_c8;
      lVar21 = local_d8;
      uVar35 = local_e0;
      uVar13 = local_e8;
      uVar24 = local_ec;
      plVar5 = (long *)PTR_DAT_02710c08;
      fVar14 = DAT_01d4c18c;
    }
    else {
                    /* try { // try from 0012c57c to 0012c593 has its CatchHandler @ 0012cf98 */
      lVar16 = FUN_00401b30(auStack_68,uVar37,
                            "C:/gitlab-runner/builds/ba119cc0/0/research_and_development/physx/PhysX/PhysX_3.4/Source/LowLevel/software/src/PxsNphaseImplementationContext.cpp"
                            ,0x8f);
      iVar15 = local_cc;
      iVar11 = local_64;
      uVar37 = local_a4;
      cVar12 = local_80;
      param_4 = local_a0;
      param_2 = local_98;
      pbVar34 = local_c8;
      lVar21 = local_d8;
      uVar35 = local_e0;
      uVar13 = local_e8;
      uVar24 = local_ec;
      plVar5 = (long *)PTR_DAT_02710c08;
      fVar14 = DAT_01d4c18c;
    }
    DAT_01d4c18c = fVar14;
    PTR_DAT_02710c08 = (undefined *)plVar5;
    if (param_3 != 0) {
      lVar36 = *(long *)(*(long *)(param_1 + 0x48) + 0xa48);
      lVar22 = *plVar5;
      uVar20 = 0;
      do {
        uVar25 = (ulong)*(uint *)(param_2 + uVar20 * 4);
        lVar26 = *(long *)(param_1 + 0x30) + uVar25 * 0x20;
        bVar28 = *(byte *)(lVar26 + 0x18);
        uVar31 = (ulong)bVar28;
        if (bVar28 != 0) {
          lVar30 = *(long *)(*(long *)(param_1 + 0x28) + uVar25 * 8);
          plVar33 = (long *)(lVar16 + uVar20 * 0x68);
          plVar33[2] = *(long *)(lVar30 + 0x30) + lVar22;
          plVar33[3] = *(long *)(lVar30 + 0x38) + lVar22;
          uVar8 = *(ushort *)(lVar30 + 0x50);
          plVar23 = plVar5 + 2;
          if ((uVar8 & 0x20) != 0) {
            plVar23 = plVar5 + 1;
          }
          *plVar33 = *(long *)(lVar30 + 0x20) + *plVar23;
          plVar23 = plVar5 + 2;
          if ((uVar8 & 0x40) != 0) {
            plVar23 = plVar5 + 1;
          }
          plVar33[1] = *(long *)(lVar30 + 0x28) + *plVar23;
          lVar17 = *(long *)(lVar36 + 8);
          puVar4 = (undefined4 *)(lVar17 + (ulong)*(uint *)(lVar30 + 0x60) * 0x20);
          *(undefined4 *)(plVar33 + 4) = *puVar4;
          *(undefined4 *)((long)plVar33 + 0x24) = puVar4[1];
          *(undefined4 *)(plVar33 + 5) = puVar4[2];
          *(undefined4 *)((long)plVar33 + 0x2c) = puVar4[3];
          *(undefined4 *)(plVar33 + 6) = puVar4[4];
          *(undefined4 *)((long)plVar33 + 0x34) = puVar4[5];
          *(undefined4 *)(plVar33 + 7) = puVar4[6];
          puVar4 = (undefined4 *)(lVar17 + (ulong)*(uint *)(lVar30 + 100) * 0x20);
          *(undefined4 *)((long)plVar33 + 0x3c) = *puVar4;
          *(undefined4 *)(plVar33 + 8) = puVar4[1];
          *(undefined4 *)((long)plVar33 + 0x44) = puVar4[2];
          *(undefined4 *)(plVar33 + 9) = puVar4[3];
          *(undefined4 *)((long)plVar33 + 0x4c) = puVar4[4];
          *(undefined4 *)(plVar33 + 10) = puVar4[5];
          *(undefined4 *)((long)plVar33 + 0x54) = puVar4[6];
          lVar26 = *(long *)(lVar26 + 8);
          *(uint *)(plVar33 + 0xb) = (uint)bVar28;
          plVar33[0xc] = lVar26;
          fVar39 = fVar14;
          if ((*(ushort *)(lVar30 + 0x50) >> 5 & 1) != 0) {
            fVar39 = *(float *)(*(long *)(lVar30 + 0x20) + 0x80);
          }
          fVar40 = fVar14;
          if ((*(ushort *)(lVar30 + 0x50) >> 6 & 1) != 0) {
            fVar40 = *(float *)(*(long *)(lVar30 + 0x28) + 0x80);
          }
          if (fVar40 <= fVar39) {
            fVar39 = fVar40;
          }
          if (uVar31 - 1 < 7) {
            lVar17 = 0;
          }
          else {
            lVar17 = 0;
            pfVar19 = (float *)(lVar26 + 0x11c);
            do {
              lVar17 = lVar17 + 8;
              pfVar19[-0x40] = fVar39;
              pfVar19[-0x30] = fVar39;
              pfVar19[-0x20] = fVar39;
              pfVar19[-0x10] = fVar39;
              *pfVar19 = fVar39;
              pfVar19[0x10] = fVar39;
              pfVar19[0x20] = fVar39;
              pfVar19[0x30] = fVar39;
              pfVar19 = pfVar19 + 0x80;
            } while (uVar31 - (uVar31 & 7) != lVar17);
          }
          if ((bVar28 & 7) != 0) {
            lVar32 = -(uVar31 & 7);
            pfVar19 = (float *)(lVar26 + lVar17 * 0x40 + 0x1c);
            do {
              lVar32 = lVar32 + 1;
              *pfVar19 = fVar39;
              pfVar19 = pfVar19 + 0x10;
            } while (lVar32 != 0);
          }
          bVar28 = *(byte *)(lVar30 + 0x56);
          bVar9 = *(byte *)(lVar30 + 0x57);
          bVar6 = bVar9;
          uVar10 = (uint)bVar28;
          if ((uint)bVar9 <= (uint)bVar28) {
            bVar6 = bVar28;
            uVar10 = (uint)bVar9;
          }
          lVar26 = param_4 + (ulong)uVar10 * 0x1c + (ulong)bVar6 * 4;
          *(int *)(lVar26 + 0x13c) = *(int *)(lVar26 + 0x13c) + 1;
        }
        uVar20 = uVar20 + 1;
      } while (uVar20 != param_3);
    }
    local_ec = uVar24;
    local_e8 = uVar13;
    local_e0 = uVar35;
    local_d8 = lVar21;
    local_cc = iVar15;
    local_c8 = pbVar34;
    local_a4 = uVar37;
    local_a0 = param_4;
    local_98 = param_2;
    local_88 = lVar16;
    local_80 = cVar12;
    local_64 = iVar11;
                    /* try { // try from 0012c7e0 to 0012c7e7 has its CatchHandler @ 0012cfac */
    (**(code **)**(undefined8 **)(param_1 + 0x50))(*(undefined8 **)(param_1 + 0x50),lVar16,param_3);
    if (local_80 != '\0') {
                    /* try { // try from 0012c7f4 to 0012c7fb has its CatchHandler @ 0012cfa8 */
      FUN_00401ce0(&local_88,local_88);
    }
  }
  fVar14 = DAT_01d4c5a4;
  local_110 = param_5;
  local_108 = param_6;
  local_100 = param_7;
  if (param_3 != 0) {
    local_b0 = (long *)(local_a0 + 0x1c70);
    local_b8 = (ulong)param_3;
    uVar35 = 0;
    local_c0 = param_1;
    do {
      while( true ) {
        plVar23 = local_b0;
        uVar20 = (ulong)*(uint *)(local_98 + uVar35 * 4);
        plVar5 = (long *)(*(long *)(param_1 + 0x30) + uVar20 * 0x20);
        lVar16 = *(long *)(*(long *)(param_1 + 0x28) + uVar20 * 8);
        pbVar38 = (byte *)((long)plVar5 + 0x19);
        uVar20 = (ulong)*pbVar38;
        pbVar34 = (byte *)(plVar5 + 3);
        uVar37 = (uint)*pbVar38;
        local_90 = plVar5;
        if (*pbVar34 == 0) break;
        lVar21 = *plVar5;
        lVar36 = plVar5[1];
        if (((*(byte *)(lVar21 + 0x2b) >> 6 & 1) != 0) && (uVar37 != 0)) {
          uVar25 = 0;
          do {
            while( true ) {
              uVar24 = (uint)uVar25;
              lVar26 = lVar21 + uVar25 * 0x30;
              pbVar27 = (byte *)(lVar26 + 0x29);
              bVar28 = *pbVar27;
              bVar9 = *(byte *)(lVar26 + 0x28);
              lVar22 = lVar36 + (ulong)bVar9 * 0x40;
              *(float *)(lVar26 + 0x10) = *(float *)(lVar22 + 0x20);
              *(float *)(lVar26 + 0x14) = *(float *)(lVar22 + 0x24);
              *(float *)(lVar26 + 0x18) = *(float *)(lVar22 + 0x28);
              *(undefined4 *)(lVar26 + 0x20) = *(undefined4 *)(lVar22 + 0x3c);
              *(undefined4 *)(lVar26 + 0x24) = *(undefined4 *)(lVar22 + 0x38);
              *(undefined4 *)(lVar26 + 0x1c) = *(undefined4 *)(lVar22 + 0x2c);
              *(undefined2 *)(lVar26 + 0x2c) = *(undefined2 *)(lVar22 + 0x34);
              *(undefined2 *)(lVar26 + 0x2e) = *(undefined2 *)(lVar22 + 0x36);
              uVar37 = (uint)uVar20;
              if ((ulong)bVar28 < 2) break;
              lVar26 = (ulong)bVar9 * 0x40;
              pfVar19 = (float *)(lVar36 + 0x68 + lVar26);
              uVar31 = 1;
LAB_0012c908:
              if ((fVar14 <= *(float *)(lVar22 + 0x20) * pfVar19[-2] +
                             *(float *)(lVar22 + 0x24) * pfVar19[-1] +
                             *(float *)(lVar22 + 0x28) * *pfVar19) ||
                 (*(float *)(lVar36 + lVar26 + 0x1c) <= 0.0)) goto LAB_0012c938;
              bVar6 = (byte)uVar31;
              if (uVar24 < uVar37 - 1) {
                puVar29 = (undefined8 *)(lVar21 + 0x1c + (ulong)(uVar37 - 1) * 0x30);
                do {
                  puVar18 = (undefined8 *)(lVar21 + uVar20 * 0x30);
                  puVar18[1] = *(undefined8 *)((long)puVar29 + -0x14);
                  *puVar18 = *(undefined8 *)((long)puVar29 + -0x1c);
                  *(undefined4 *)(puVar18 + 2) = *(undefined4 *)((long)puVar29 + -0xc);
                  *(undefined4 *)((long)puVar18 + 0x14) = *(undefined4 *)(puVar29 + -1);
                  *(undefined4 *)(puVar18 + 3) = *(undefined4 *)((long)puVar29 + -4);
                  *(undefined4 *)((long)puVar18 + 0x2c) = *(undefined4 *)(puVar29 + 2);
                  *(undefined8 *)((long)puVar18 + 0x24) = puVar29[1];
                  *(undefined8 *)((long)puVar18 + 0x1c) = *puVar29;
                  iVar15 = (int)uVar20;
                  uVar20 = (ulong)(iVar15 - 1);
                  puVar29 = puVar29 + -6;
                } while (uVar24 < iVar15 - 2U);
                bVar28 = *pbVar27;
              }
              lVar22 = lVar21 + uVar25 * 0x30;
              lVar26 = lVar21 + (ulong)(uVar24 + 1) * 0x30;
              *(undefined1 *)(lVar26 + 0x2a) = *(undefined1 *)(lVar22 + 0x2a);
              uVar7 = *(undefined1 *)(lVar22 + 0x2b);
              *(byte *)(lVar26 + 0x28) = bVar9 + bVar6;
              *(undefined1 *)(lVar26 + 0x2b) = uVar7;
              uVar37 = uVar37 + 1;
              uVar20 = (ulong)uVar37;
              *(byte *)(lVar26 + 0x29) = bVar28 - bVar6;
              *pbVar27 = bVar6;
              uVar24 = uVar24 + 1 & 0xff;
              uVar25 = (ulong)uVar24;
              if (uVar37 <= uVar24) goto LAB_0012ca0c;
            }
LAB_0012c948:
            uVar24 = uVar24 + 1 & 0xff;
            uVar25 = (ulong)uVar24;
          } while (uVar24 < uVar37);
        }
LAB_0012ca0c:
        pbVar27 = (byte *)((long)plVar5 + 0x1b);
        if (*pbVar27 < uVar37) {
          uVar24 = *(uint *)(lVar16 + 0x58);
          local_cc = local_cc + 1;
          local_c8 = pbVar27;
          FUN_00190b50(local_b0,uVar24 + 1);
          lVar21 = (ulong)(uVar24 >> 5) * 4;
          *(uint *)(*plVar23 + lVar21) = *(uint *)(*plVar23 + lVar21) | 1 << ((ulong)uVar24 & 0x1f);
          pbVar27 = local_c8;
        }
        *pbVar38 = (byte)uVar37;
        uVar20 = (ulong)*pbVar34;
        uVar24 = uVar37;
        if (uVar37 <= local_a4) {
          uVar24 = local_a4;
        }
        local_a4 = uVar24;
        if (uVar20 == 0) {
          iVar15 = 0;
          if ((uint)*pbVar27 <= (uVar37 & 0xff)) goto LAB_0012cd38;
          goto LAB_0012cb98;
        }
        if (uVar20 - 1 < 3) {
          lVar21 = 0;
          iVar15 = 0;
        }
        else {
          lVar21 = 0;
          iVar15 = 0;
          pfVar19 = (float *)(lVar36 + 0x9c);
          do {
            pfVar2 = pfVar19 + -0x20;
            pfVar3 = pfVar19 + -0x10;
            fVar39 = *pfVar19;
            pfVar1 = pfVar19 + 0x10;
            pfVar19 = pfVar19 + 0x40;
            lVar21 = lVar21 + 4;
            iVar15 = iVar15 + (uint)(*pfVar2 != 0.0) + (uint)(*pfVar3 != 0.0) +
                     (uint)(fVar39 != 0.0) + (uint)(*pfVar1 != 0.0);
          } while (uVar20 - (uVar20 & 3) != lVar21);
        }
        if ((*pbVar34 & 3) != 0) {
          lVar22 = -(uVar20 & 3);
          pfVar19 = (float *)(lVar36 + lVar21 * 0x40 + 0x1c);
          do {
            lVar22 = lVar22 + 1;
            iVar15 = iVar15 + (uint)(*pfVar19 != 0.0);
            pfVar19 = pfVar19 + 0x10;
          } while (lVar22 != 0);
        }
        if ((uVar37 & 0xff) < (uint)*pbVar27) goto LAB_0012cb98;
LAB_0012cd38:
        if (iVar15 == 0) goto LAB_0012cd40;
LAB_0012cbe4:
        lVar16 = local_a0;
        if (*(long *)(local_a0 + 0x1c38) == 0) {
          uVar35 = uVar35 + 1;
          param_1 = local_c0;
          if (uVar35 == local_b8) goto LAB_0012cf50;
        }
        else {
          bVar28 = *pbVar38;
          local_e0 = FUN_003ff4b0(*(long *)(local_a0 + 0x1c38) + 8,(ulong)*pbVar34 << 5);
          plVar23 = *(long **)(lVar16 + 0x1c38);
          uVar37 = *(uint *)((long)plVar23 + 0xc);
          lVar21 = plVar23[2];
          lVar36 = plVar23[1];
          local_d8 = *plVar23;
          local_e8 = FUN_003ff4b0(*(long *)(lVar16 + 0x1c40) + 8,(uint)bVar28 * 0x30);
          plVar23 = *(long **)(lVar16 + 0x1c40);
          uVar24 = *(uint *)((long)plVar23 + 0xc);
          lVar22 = plVar23[2];
          lVar26 = plVar23[1];
          local_c8 = (byte *)*plVar23;
          local_ec = (uint)*(byte *)(*local_90 + 0x2b);
          iVar15 = FUN_003ff4b0(*(long *)(lVar16 + 0x1c48) + 8,(ulong)*pbVar34 << 2);
          if (((uint)((int)lVar21 + (int)lVar36) < uVar37) &&
             ((uint)((int)lVar22 + (int)lVar26) < uVar24)) {
            plVar23 = *(long **)(local_a0 + 0x1c48);
            if ((uint)((int)plVar23[2] + (int)plVar23[1]) < *(uint *)((long)plVar23 + 0xc)) {
              local_f8 = local_d8 + (ulong)uVar37;
              __s = (void *)((*plVar23 + (ulong)*(uint *)((long)plVar23 + 0xc)) - (long)iVar15);
              plVar5[2] = (long)__s;
              local_e0 = (ulong)uVar24;
                    /* WARNING: Subroutine does not return */
              memset(__s,0,(ulong)*pbVar34 << 2);
            }
          }
          plVar5[1] = 0;
          plVar5[2] = 0;
          *local_90 = 0;
          *pbVar38 = 0;
          *pbVar34 = 0;
          uVar35 = uVar35 + 1;
          param_1 = local_c0;
          if (uVar35 == local_b8) goto LAB_0012cf50;
        }
      }
      iVar15 = 0;
      pbVar27 = (byte *)((long)plVar5 + 0x1b);
      if (*pbVar27 <= uVar37) goto LAB_0012cd38;
LAB_0012cb98:
      plVar23 = local_b0;
      uVar37 = *(uint *)(lVar16 + 0x58);
      local_64 = local_64 + 1;
      FUN_00190b50(local_b0,uVar37 + 1);
      lVar21 = (ulong)(uVar37 >> 5) * 4;
      *(uint *)(*plVar23 + lVar21) = *(uint *)(*plVar23 + lVar21) | 1 << ((ulong)uVar37 & 0x1f);
      if (iVar15 != 0) goto LAB_0012cbe4;
LAB_0012cd40:
      plVar5 = local_b0;
      param_1 = local_c0;
      *(undefined8 *)(lVar16 + 0x40) = 0;
      *(undefined8 *)(lVar16 + 0x48) = 0;
      *(undefined1 *)(lVar16 + 0x52) = 0;
      *pbVar38 = 0;
      *pbVar34 = 0;
      if (*pbVar27 != 0) {
        uVar37 = *(uint *)(lVar16 + 0x58);
        local_64 = local_64 + 1;
        FUN_00190b50(local_b0,uVar37 + 1);
        lVar16 = (ulong)(uVar37 >> 5) * 4;
        *(uint *)(*plVar5 + lVar16) = *(uint *)(*plVar5 + lVar16) | 1 << ((ulong)uVar37 & 0x1f);
      }
      uVar35 = uVar35 + 1;
    } while (uVar35 != local_b8);
  }
LAB_0012cf50:
  *local_110 = local_cc;
  *local_108 = local_64;
  *local_100 = local_a4;
  return;
LAB_0012c938:
  uVar31 = uVar31 + 1;
  pfVar19 = pfVar19 + 0x10;
  if (bVar28 <= uVar31) goto LAB_0012c948;
  goto LAB_0012c908;
}


