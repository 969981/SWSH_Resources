/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00f32f00; name: FUN_00f32f00
 */


void FUN_00f32f00(undefined8 *param_1,undefined8 param_2,undefined4 param_3)

{
  long *plVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  long ****pppplVar4;
  uint uVar5;
  long lVar6;
  ulong uVar7;
  ulong uVar8;
  long lVar9;
  long lVar10;
  ulong uVar11;
  long *plVar12;
  long lVar13;
  undefined8 *puVar14;
  long *plVar15;
  undefined8 *puVar16;
  long *plVar17;
  long ****pppplVar18;
  undefined8 uVar19;
  undefined4 uVar20;
  uint uVar21;
  undefined4 uVar22;
  undefined4 uVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  ulong uVar27;
  float fVar28;
  ulong local_1a0;
  undefined1 auStack_180 [16];
  undefined8 local_170 [2];
  undefined8 local_160 [2];
  undefined8 local_150;
  undefined1 *puStack_148;
  undefined8 local_140;
  long local_138;
  undefined8 local_130;
  char *pcStack_128;
  undefined8 local_120;
  undefined8 local_118 [2];
  undefined1 auStack_108 [16];
  undefined1 auStack_f8 [16];
  undefined1 auStack_e8 [16];
  undefined1 auStack_d8 [16];
  long ****local_c8;
  long ****local_c0;
  long local_b8;
  long *local_b0;
  undefined8 local_a8;
  undefined4 local_a0;
  
  FUN_012b4da0(auStack_d8,param_2,param_3);
  local_c8 = (long ****)0xd21cd40ed9bd2025;
  local_c0 = (long ****)&DAT_01d151fa;
  local_b8 = 4;
  FUN_012b4250(auStack_e8,auStack_d8,&local_c8);
  local_c8 = (long ****)0xc966982c4c77ce8a;
  local_c0 = (long ****)0x1ce8e6e;
  local_b8 = 10;
  FUN_012b4250(auStack_f8,auStack_e8,&local_c8);
  lVar6 = FUN_012b40f0(auStack_f8);
  if (lVar6 != 0) {
    uVar5 = 1;
    do {
      FUN_012b4190(auStack_108,auStack_f8,(long)(int)(uVar5 - 1));
      local_130 = 0xb69f90860571c1d6;
      pcStack_128 = "dispName";
      local_120 = 8;
      FUN_012b4250(local_118,auStack_108,&local_130);
      local_150 = 0xcbf29ce484222645;
      puStack_148 = &DAT_01d38550;
      local_140 = 0;
      local_138 = 0;
      FUN_012b4820(&local_c8,local_118,&local_150);
      if (local_138 != 0) {
        (**(code **)(*(long *)(local_138 + 0x48) + 0x18))();
        local_138 = 0;
      }
      local_150 = 0xfb21d509305adfa3;
      puStack_148 = &DAT_01d00f86;
      local_140 = 4;
      FUN_012b4250(&local_130,auStack_108,&local_150);
      uVar20 = FUN_012b4630(0,&local_130);
      local_150 = 0xfb21d709305ae309;
      puStack_148 = &DAT_01cfda2b;
      local_140 = 4;
      FUN_012b4250(&local_130,auStack_108,&local_150);
      uVar21 = FUN_012b4630(0,&local_130);
      local_1a0 = CONCAT44((int)(local_1a0 >> 0x20),uVar20);
      lVar6 = FUN_00f33c40(param_1,&local_c8);
      *(ulong *)(lVar6 + 0x18) = (ulong)uVar21;
      *(ulong *)(lVar6 + 0x10) = local_1a0;
      if (local_b0 != (long *)0x0) {
        (**(code **)(local_b0[9] + 0x18))();
        local_b0 = (long *)0x0;
      }
      uVar7 = FUN_012b40f0(auStack_f8);
      uVar27 = (ulong)uVar5;
      uVar5 = uVar5 + 1;
    } while (uVar27 < uVar7);
  }
  local_c8 = (long ****)0x772b81b057a44cc4;
  local_c0 = (long ****)0x1d151ff;
  local_b8 = 0xb;
  FUN_012b4250(&local_150,auStack_e8,&local_c8);
  lVar6 = FUN_012b40f0(&local_150);
  if (lVar6 != 0) {
    uVar5 = 1;
    do {
      FUN_012b4190(&local_130,&local_150,(long)(int)(uVar5 - 1));
      local_c8 = (long ****)0x4bb7c6e790d4fc0a;
      local_c0 = (long ****)0x1d1edfd;
      local_b8 = 8;
      FUN_012b4250(auStack_108,&local_130,&local_c8);
      local_160[0] = 0;
      local_118[0] = FUN_012b4b40(auStack_108,local_160);
      lVar6 = FUN_00f33e40(param_1,local_118);
      if (lVar6 != 0) {
        local_b8 = 4;
        local_c8 = (long ****)0xfb21d509305adfa3;
        local_c0 = (long ****)&DAT_01d00f86;
        FUN_012b4250(auStack_108,&local_130,&local_c8);
        local_1a0 = FUN_012b4630(0,auStack_108);
        local_c8 = (long ****)0xfb21d709305ae309;
        local_c0 = (long ****)&DAT_01cfda2b;
        local_b8 = 4;
        FUN_012b4250(auStack_108,&local_130,&local_c8);
        uVar27 = FUN_012b4630(0,auStack_108);
        *(ulong *)(lVar6 + 0x18) = uVar27 & 0xffffffff;
        *(ulong *)(lVar6 + 0x10) = local_1a0 & 0xffffffff;
      }
      uVar7 = FUN_012b40f0(&local_150);
      uVar27 = (ulong)uVar5;
      uVar5 = uVar5 + 1;
    } while (uVar27 < uVar7);
  }
  local_c8 = (long ****)0xb7678a6af8c49d9d;
  local_c0 = (long ****)0x1d0ae89;
  local_b8 = 8;
  FUN_012b4250(&local_130,auStack_e8,&local_c8);
  lVar6 = FUN_012b40f0(&local_130);
  if (lVar6 != 0) {
    fVar28 = *(float *)PTR_FloatPi_02715160 / *(float *)PTR_FloatDegree180_027194f0;
    uVar5 = 1;
    do {
      FUN_012b4190(auStack_108,&local_130,(long)(int)(uVar5 - 1));
      local_c8 = (long ****)0x4bb7c6e790d4fc0a;
      local_c0 = (long ****)0x1d1edfd;
      local_b8 = 8;
      FUN_012b4250(local_118,auStack_108,&local_c8);
      local_160[0] = 0;
      FUN_012b4b40(local_118,local_160);
      local_c8 = (long ****)0xfb21d509305adfa3;
      local_c0 = (long ****)&DAT_01d00f86;
      local_b8 = 4;
      FUN_012b4250(local_118,auStack_108,&local_c8);
      uVar20 = FUN_012b4630(0,local_118);
      local_c8 = (long ****)0xfb21d709305ae309;
      local_c0 = (long ****)&DAT_01cfda2b;
      local_b8 = 4;
      FUN_012b4250(local_118,auStack_108,&local_c8);
      uVar21 = FUN_012b4630(0,local_118);
      local_1a0 = CONCAT44((int)(local_1a0 >> 0x20),uVar20);
      local_c8 = (long ****)0x6f5a920d7b2e953b;
      local_c0 = (long ****)0x1cec34e;
      local_b8 = 8;
      FUN_012b4250(local_118,auStack_108,&local_c8);
      uVar20 = FUN_012b4420(local_118,0);
      local_c8 = (long ****)0x89da1f017ae3e323;
      local_c0 = (long ****)0x1cfa0bc;
      local_b8 = 5;
      FUN_012b4250(local_118,auStack_108,&local_c8);
      uVar22 = FUN_012b4630(0,local_118);
      local_c8 = (long ****)0x89da21017ae3e689;
      local_c0 = (long ****)0x1d1f02f;
      local_b8 = 5;
      FUN_012b4250(local_118,auStack_108,&local_c8);
      uVar23 = FUN_012b4630(0,local_118);
      local_c8 = (long ****)0x10d1f8176e627f86;
      local_c0 = (long ****)0x1d44f48;
      local_b8 = 6;
      FUN_012b4250(local_118,auStack_108,&local_c8);
      fVar24 = (float)FUN_012b4630(0,local_118);
      local_b8 = 7;
      local_c8 = (long ****)0x8ee3d966fe368c00;
      local_c0 = (long ****)0x1d21fb7;
      FUN_012b4250(local_118,auStack_108,&local_c8);
      fVar25 = (float)FUN_012b4630(0,local_118);
      local_c8 = (long ****)0x9bb56e2793d10b88;
      local_c0 = (long ****)&DAT_01d2915d;
      local_b8 = 3;
      FUN_012b4250(local_118,auStack_108,&local_c8);
      fVar26 = (float)FUN_012b4630(0,local_118);
      lVar6 = FUN_00f33f70(param_1,uVar20);
      if (lVar6 != 0) {
        *(undefined4 *)(lVar6 + 0x34) = uVar20;
        *(undefined4 *)(lVar6 + 0x20) = uVar22;
        *(undefined4 *)(lVar6 + 0x24) = uVar23;
        *(float *)(lVar6 + 0x28) = fVar24 * fVar28;
        *(float *)(lVar6 + 0x2c) = fVar28 * fVar25;
        *(float *)(lVar6 + 0x30) = fVar28 * fVar26;
        *(ulong *)(lVar6 + 0x18) = (ulong)uVar21;
        *(ulong *)(lVar6 + 0x10) = local_1a0;
      }
      uVar7 = FUN_012b40f0(&local_130);
      uVar27 = (ulong)uVar5;
      uVar5 = uVar5 + 1;
    } while (uVar27 < uVar7);
  }
  local_c8 = (long ****)0xc902968dfff2b1fe;
  local_c0 = (long ****)0x1d340c5;
  local_b8 = 0xb;
  FUN_012b4250(auStack_108,auStack_e8,&local_c8);
  lVar6 = FUN_012b40f0(auStack_108);
  if (lVar6 != 0) {
    plVar1 = param_1 + 8;
    puVar2 = param_1 + 0xe;
    puVar3 = param_1 + 2;
    fVar28 = *(float *)PTR_FloatPi_02715160;
    fVar24 = *(float *)PTR_FloatDegree180_027194f0;
    uVar27 = 0;
    do {
      FUN_012b4190(local_118,auStack_108,(long)(int)uVar27);
      local_c8 = (long ****)0x68c27427773fc969;
      local_c0 = (long ****)&DAT_01cfa0c2;
      local_b8 = 3;
      FUN_012b4250(local_160,local_118,&local_c8);
      local_170[0] = 0;
      uVar7 = FUN_012b4b40(local_160,local_170);
      local_b8 = 3;
      local_c8 = (long ****)0xb41e08271149e1bc;
      local_c0 = (long ****)&DAT_01d3e5da;
      FUN_012b4250(local_160,local_118,&local_c8);
      local_170[0] = 0;
      uVar8 = FUN_012b4b40(local_160,local_170);
      plVar12 = (long *)*plVar1;
      if (plVar12 != (long *)0x0) {
        plVar15 = plVar1;
        plVar17 = plVar12;
        do {
          if ((ulong)plVar17[4] >= uVar7) {
            plVar15 = plVar17;
          }
          plVar17 = (long *)plVar17[(ulong)plVar17[4] < uVar7];
        } while (plVar17 != (long *)0x0);
        if ((plVar15 == plVar1) || (uVar7 < (ulong)plVar15[4])) {
          lVar6 = 0;
        }
        else {
          lVar6 = plVar15[5];
        }
        plVar15 = plVar1;
        do {
          if ((ulong)plVar12[4] >= uVar8) {
            plVar15 = plVar12;
          }
          plVar12 = (long *)plVar12[(ulong)plVar12[4] < uVar8];
        } while (plVar12 != (long *)0x0);
        if ((((plVar15 != plVar1) && ((ulong)plVar15[4] <= uVar8)) && (lVar6 != 0)) &&
           (plVar15[5] != 0)) {
          lVar6 = FUN_00f340a0(param_1);
          local_c8 = (long ****)0x772b81b057a44cc4;
          local_c0 = (long ****)0x1d151ff;
          local_b8 = 0xb;
          FUN_012b4250(local_160,local_118,&local_c8);
          uVar5 = FUN_012b40f0(local_160);
          uVar7 = (ulong)uVar5;
          lVar13 = *(long *)(lVar6 + 0x10);
          uVar8 = *(long *)(lVar6 + 0x18) - lVar13 >> 3;
          if (uVar7 < uVar8 || uVar7 - uVar8 == 0) {
            if (uVar7 < uVar8) {
              *(ulong *)(lVar6 + 0x18) = lVar13 + uVar7 * 8;
            }
          }
          else {
            FUN_00f349c0((long *)(lVar6 + 0x10),uVar7 - uVar8);
          }
          uVar7 = (ulong)(uVar5 + 1);
          uVar8 = *(long *)(lVar6 + 0x48) - *(long *)(lVar6 + 0x40) >> 3;
          if (uVar7 < uVar8 || uVar7 - uVar8 == 0) {
            if (uVar7 < uVar8) {
              *(ulong *)(lVar6 + 0x48) = *(long *)(lVar6 + 0x40) + uVar7 * 8;
            }
            lVar13 = FUN_012b40f0(local_160,uVar7 - uVar8);
          }
          else {
            FUN_00f34be0();
            lVar13 = FUN_012b40f0(local_160);
          }
          if (lVar13 != 0) {
            uVar7 = 0;
            do {
              uVar5 = (uint)uVar7;
              FUN_012b4190(&local_c8,local_160,(long)(int)uVar5);
              local_170[0] = 0;
              uVar8 = FUN_012b4b40(&local_c8,local_170);
              puVar16 = (undefined8 *)*puVar2;
              if (puVar16 == (undefined8 *)0x0) {
LAB_00f338a0:
                uVar19 = 0;
              }
              else {
                puVar14 = puVar2;
                do {
                  if ((ulong)puVar16[4] >= uVar8) {
                    puVar14 = puVar16;
                  }
                  puVar16 = (undefined8 *)puVar16[(ulong)puVar16[4] < uVar8];
                } while (puVar16 != (undefined8 *)0x0);
                if ((puVar14 == puVar2) || (uVar8 < (ulong)puVar14[4])) goto LAB_00f338a0;
                uVar19 = puVar14[5];
              }
              if (uVar5 < (uint)((ulong)(*(long *)(lVar6 + 0x18) - *(long *)(lVar6 + 0x10)) >> 3)) {
                *(undefined8 *)(*(long *)(lVar6 + 0x10) + uVar7 * 8) = uVar19;
              }
              uVar7 = (ulong)(uVar5 + 1);
              uVar8 = FUN_012b40f0(local_160);
            } while (uVar7 < uVar8);
          }
          local_c8 = (long ****)0x4b5b181c4abe8134;
          local_c0 = (long ****)0x1d44f4f;
          local_b8 = 0xd;
          FUN_012b4250(local_170,local_118,&local_c8);
          lVar13 = FUN_012b40f0(local_170);
          if (lVar13 != 0) {
            uVar7 = 0;
            do {
              uVar5 = (uint)uVar7;
              FUN_012b4190(auStack_180,local_170,(long)(int)uVar5);
              local_b0 = (long *)*param_1;
              local_a0 = 0;
              local_b8 = 0;
              local_a8 = 0;
              local_c8 = (long ****)&local_c8;
              local_c0 = (long ****)&local_c8;
              FUN_00f34e00(param_1 + 0x19,&local_c8);
              lVar13 = param_1[0x19];
              if (local_b8 != 0) {
                (*local_c0)[1] = (long **)local_c8[1];
                *local_c8[1] = (long **)*local_c0;
                local_b8 = 0;
                pppplVar4 = local_c0;
                while ((long *****)pppplVar4 != &local_c8) {
                  pppplVar18 = (long ****)pppplVar4[1];
                  (**(code **)(*local_b0 + 0x18))(local_b0,pppplVar4,0x18,8);
                  pppplVar4 = pppplVar18;
                }
              }
              lVar9 = FUN_012b40f0(auStack_180);
              if (lVar9 != 0) {
                uVar8 = 0;
                do {
                  FUN_012b4190(&local_c8,auStack_180,(long)(int)uVar8);
                  uVar21 = FUN_012b4420(&local_c8,0);
                  puVar16 = (undefined8 *)*puVar3;
                  if (puVar16 != (undefined8 *)0x0) {
                    puVar14 = puVar3;
                    do {
                      if (*(uint *)(puVar16 + 4) >= uVar21) {
                        puVar14 = puVar16;
                      }
                      puVar16 = (undefined8 *)puVar16[*(uint *)(puVar16 + 4) < uVar21];
                    } while (puVar16 != (undefined8 *)0x0);
                    if (((puVar14 != puVar3) && (*(uint *)(puVar14 + 4) <= uVar21)) &&
                       (lVar9 = puVar14[5], lVar9 != 0)) {
                      plVar12 = (long *)(**(code **)(**(long **)(lVar13 + 0x28) + 0x10))
                                                  (*(long **)(lVar13 + 0x28),0x18,8);
                      if (plVar12 == (long *)0x0) {
                        (**(code **)(**(long **)(lVar13 + 0x28) + 0xb8))();
                      }
                      *plVar12 = 0;
                      uVar19 = *(undefined8 *)(lVar13 + 0x28);
                      lVar10 = nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_02710860);
                      if (0xf < *(ulong *)(lVar10 + 0x80)) {
                    /* WARNING: Subroutine does not return */
                        abort();
                      }
                      *(undefined8 *)(lVar10 + *(ulong *)(lVar10 + 0x80) * 8) = uVar19;
                      *(long *)(lVar10 + 0x80) = *(long *)(lVar10 + 0x80) + 1;
                      plVar12[2] = lVar9;
                      *(long *)(lVar10 + 0x80) = *(long *)(lVar10 + 0x80) + -1;
                      plVar12[1] = lVar13 + 0x10;
                      lVar9 = *(long *)(lVar13 + 0x10);
                      *plVar12 = lVar9;
                      *(long **)(lVar9 + 8) = plVar12;
                      *(long **)(lVar13 + 0x10) = plVar12;
                      *(long *)(lVar13 + 0x20) = *(long *)(lVar13 + 0x20) + 1;
                    }
                  }
                  uVar8 = (ulong)((int)uVar8 + 1);
                  uVar11 = FUN_012b40f0(auStack_180);
                } while (uVar8 < uVar11);
              }
              if (uVar5 < (uint)((ulong)(*(long *)(lVar6 + 0x48) - *(long *)(lVar6 + 0x40)) >> 3)) {
                *(long *)(*(long *)(lVar6 + 0x40) + uVar7 * 8) = lVar13 + 0x10;
              }
              uVar7 = (ulong)(uVar5 + 1);
              uVar8 = FUN_012b40f0(local_170);
            } while (uVar7 < uVar8);
          }
          local_c8 = (long ****)0x8ee3d966fe368c00;
          local_c0 = (long ****)0x1d21fb7;
          local_b8 = 7;
          FUN_012b4250(auStack_180,local_118,&local_c8);
          fVar25 = (float)FUN_012b4630(0,auStack_180);
          *(float *)(lVar6 + 0x70) = fVar25 * (fVar28 / fVar24);
          local_c8 = (long ****)0x43d6be941a40b739;
          local_c0 = (long ****)0x1ce8e79;
          local_b8 = 6;
          FUN_012b4250(auStack_180,local_118,&local_c8);
          uVar20 = FUN_012b4630(0,auStack_180);
          *(undefined4 *)(lVar6 + 0x74) = uVar20;
          local_c8 = (long ****)0xe3ca9de5ce64d2a4;
          local_c0 = (long ****)&DAT_01d1f035;
          local_b8 = 4;
          FUN_012b4250(auStack_180,local_118,&local_c8);
          uVar20 = FUN_012b4420(auStack_180,0);
          *(undefined4 *)(lVar6 + 0x78) = uVar20;
        }
      }
      uVar27 = (ulong)((int)uVar27 + 1);
      uVar7 = FUN_012b40f0(auStack_108);
    } while (uVar27 < uVar7);
  }
  return;
}


