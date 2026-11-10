/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00797220; name: FUN_00797220
 */


void FUN_00797220(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  byte bVar3;
  code *pcVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined2 uVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  undefined8 *puVar11;
  undefined8 *puVar12;
  ulong extraout_x1;
  ulong extraout_x1_00;
  ulong extraout_x1_01;
  ulong extraout_x1_02;
  ulong extraout_x1_03;
  ulong extraout_x1_04;
  ulong extraout_x1_05;
  long *plVar13;
  undefined8 uVar14;
  undefined *local_320;
  long local_318;
  long local_310;
  code *local_308;
  undefined8 local_300;
  undefined8 uStack_2f8;
  undefined1 auStack_2f0 [96];
  long local_290;
  code *local_288;
  undefined8 local_280;
  undefined8 uStack_278;
  undefined1 auStack_270 [320];
  undefined8 local_130;
  char *pcStack_128;
  undefined8 local_120;
  long local_118;
  long local_110;
  undefined8 uStack_108;
  undefined8 local_100;
  undefined8 uStack_f8;
  undefined8 local_f0;
  undefined8 uStack_e8;
  undefined8 local_e0;
  undefined8 uStack_d8;
  undefined8 local_d0;
  undefined8 uStack_c8;
  undefined8 local_c0;
  undefined8 uStack_b8;
  undefined1 *local_b0;
  long local_a8;
  long local_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  undefined4 local_78;
  undefined1 local_74;
  undefined8 local_70;
  undefined4 local_68;
  undefined1 local_64;
  
  *(undefined8 *)(param_1 + 0x268) = param_2;
  *(undefined8 *)(param_1 + 0x270) = param_3;
  *(undefined8 *)(param_1 + 0x278) = param_4;
  puVar5 = PTR_DAT_02710860;
  plVar13 = *(long **)(param_1 + 8);
  lVar8 = nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_02710860);
  if (*(ulong *)(lVar8 + 0x80) < 0x10) {
    *(long **)(lVar8 + *(ulong *)(lVar8 + 0x80) * 8) = plVar13;
    *(long *)(lVar8 + 0x80) = *(long *)(lVar8 + 0x80) + 1;
    lVar9 = (**(code **)(*plVar13 + 0x10))(plVar13,0x108,8);
    if (lVar9 == 0) {
      (**(code **)(*plVar13 + 0xb8))(plVar13);
    }
    FUN_00739060(lVar9,plVar13);
    *(long **)(lVar9 + 8) = plVar13;
    *(long *)(lVar9 + 0x10) = lVar9;
    *(undefined8 *)(lVar9 + 0x18) = 0x108;
    *(undefined8 *)(lVar9 + 0x20) = 8;
    *(long *)(lVar8 + 0x80) = *(long *)(lVar8 + 0x80) + -1;
    if (lVar9 != 0) {
      (**(code **)(*(long *)(lVar9 + 0x48) + 0x10))();
    }
    if (*(long *)(param_1 + 0x280) != 0) {
      (**(code **)(*(long *)(*(long *)(param_1 + 0x280) + 0x48) + 0x18))();
      *(undefined8 *)(param_1 + 0x280) = 0;
    }
    *(long *)(param_1 + 0x280) = lVar9;
    local_280 = 0;
    uStack_278 = 0;
    local_290 = 0;
    local_288 = (code *)0x0;
    local_300 = 0;
    uStack_2f8 = 0;
    local_310 = 0;
    local_308 = (code *)0x0;
    local_320 = PTR_DAT_02710810 + 0x10;
    local_318 = 0;
    FUN_001103d0(&local_c0,PTR_DAT_02710908,"shader/outline.bnsh",&DAT_01d38550);
    lVar8 = *(long *)PTR_DAT_02710788;
    lVar9 = *(long *)(lVar8 + 0x1e8);
    if (lVar9 == 0) {
      lVar9 = *(long *)(lVar8 + 8);
    }
    FUN_0010d7b0(&local_110,lVar8,0,&local_c0,0,lVar9,0);
    if (local_318 != 0) {
      (**(code **)(*(long *)(local_318 + 0x48) + 0x18))();
    }
    lVar8 = local_110;
    local_318 = local_110;
    if (local_110 != 0) {
      plVar13 = (long *)(local_110 + 0x48);
      (**(code **)(*plVar13 + 0x10))(plVar13);
      if ((local_310 != 0) || (local_290 != 0)) {
        FUN_006e1e70(lVar8,&local_320,1);
      }
      FUN_006e1be0(lVar8);
      (**(code **)(*plVar13 + 0x18))(plVar13);
    }
    if ((local_a8 != 0) && (local_c0 != (undefined *)0x0)) {
      (**(code **)(*(long *)(local_c0 + 0x48) + 0x18))();
    }
    local_c0 = (undefined *)0x0;
    uStack_b8 = 0xcbf29ce484222645;
    local_b0 = &DAT_01d38550;
    local_a8 = 0;
    if (local_a0 != 0) {
      (**(code **)(*(long *)(local_a0 + 0x48) + 0x18))();
      local_a0 = 0;
    }
    FUN_007299a0(&local_c0,*(undefined8 *)(param_1 + 8),1);
    local_c0 = PTR_DAT_02716508 + 0x10;
    FUN_00798040(*(undefined8 *)(param_1 + 0x280),&local_320,&local_c0);
    local_320 = PTR_DAT_02710800 + 0x10;
    if (local_318 == 0) {
      local_318 = 0;
      pcVar4 = local_288;
    }
    else {
      FUN_006e2100(local_318,&local_320);
      lVar8 = local_318;
      local_318 = 0;
      pcVar4 = local_288;
      if (lVar8 != 0) {
        (**(code **)(*(long *)(lVar8 + 0x48) + 0x18))();
        pcVar4 = local_288;
      }
    }
    local_288 = pcVar4;
    if (pcVar4 != (code *)0x0) {
      local_280 = 0;
      uStack_278 = 0;
      local_290 = 0;
      local_288 = (code *)0x0;
      (*pcVar4)(auStack_270);
    }
    pcVar4 = local_308;
    if (local_308 != (code *)0x0) {
      local_300 = 0;
      uStack_2f8 = 0;
      local_310 = 0;
      local_308 = (code *)0x0;
      (*pcVar4)(auStack_2f0);
    }
    if (local_318 != 0) {
      (**(code **)(*(long *)(local_318 + 0x48) + 0x18))();
      local_318 = 0;
    }
    local_80 = 0xffffffff00000002;
    local_78 = 0;
    local_74 = 0;
    local_68 = 0;
    local_64 = 0;
    local_70 = 0xffffffff00000001;
    *(undefined4 *)(*(long *)(param_1 + 0x280) + 0xf8) = 3;
    puVar6 = PTR_DAT_027154f0;
    lVar9 = *(long *)(param_1 + 0x280);
    plVar13 = *(long **)(lVar9 + 8);
    uVar14 = *(undefined8 *)(*(long *)PTR_DAT_027154f0 + 0x10);
    lVar8 = nn::os::GetTlsValue(*(undefined4 *)puVar5);
    if (*(ulong *)(lVar8 + 0x80) < 0x10) {
      *(long **)(lVar8 + *(ulong *)(lVar8 + 0x80) * 8) = plVar13;
      *(long *)(lVar8 + 0x80) = *(long *)(lVar8 + 0x80) + 1;
      lVar10 = (**(code **)(*plVar13 + 0x10))(plVar13,0x1b0,8);
      if (lVar10 == 0) {
        (**(code **)(*plVar13 + 0xb8))(plVar13);
      }
      FUN_00721450(lVar10,&local_80,2,4,1,uVar14);
      *(long **)(lVar10 + 8) = plVar13;
      *(long *)(lVar10 + 0x10) = lVar10;
      *(undefined8 *)(lVar10 + 0x18) = 0x1b0;
      *(undefined8 *)(lVar10 + 0x20) = 8;
      *(long *)(lVar8 + 0x80) = *(long *)(lVar8 + 0x80) + -1;
      if (lVar10 != 0) {
        (**(code **)(*(long *)(lVar10 + 0x48) + 0x10))();
      }
      if (*(long *)(lVar9 + 0xe8) != 0) {
        (**(code **)(*(long *)(*(long *)(lVar9 + 0xe8) + 0x48) + 0x18))();
        *(undefined8 *)(lVar9 + 0xe8) = 0;
      }
      *(long *)(lVar9 + 0xe8) = lVar10;
      lVar9 = *(long *)(param_1 + 0x280);
      plVar13 = *(long **)(lVar9 + 8);
      uVar14 = *(undefined8 *)(*(long *)puVar6 + 0x10);
      lVar8 = nn::os::GetTlsValue(*(undefined4 *)puVar5);
      if (*(ulong *)(lVar8 + 0x80) < 0x10) {
        *(long **)(lVar8 + *(ulong *)(lVar8 + 0x80) * 8) = plVar13;
        *(long *)(lVar8 + 0x80) = *(long *)(lVar8 + 0x80) + 1;
        lVar10 = (**(code **)(*plVar13 + 0x10))(plVar13,0x140,8);
        if (lVar10 == 0) {
          (**(code **)(*plVar13 + 0xb8))(plVar13);
        }
        FUN_0071dad0(lVar10,6,uVar14);
        *(long **)(lVar10 + 8) = plVar13;
        *(long *)(lVar10 + 0x10) = lVar10;
        *(undefined8 *)(lVar10 + 0x18) = 0x140;
        *(undefined8 *)(lVar10 + 0x20) = 8;
        *(long *)(lVar8 + 0x80) = *(long *)(lVar8 + 0x80) + -1;
        if (lVar10 != 0) {
          (**(code **)(*(long *)(lVar10 + 0x48) + 0x10))();
        }
        if (*(long *)(lVar9 + 0xf0) != 0) {
          (**(code **)(*(long *)(*(long *)(lVar9 + 0xf0) + 0x48) + 0x18))();
          *(undefined8 *)(lVar9 + 0xf0) = 0;
        }
        *(long *)(lVar9 + 0xf0) = lVar10;
        lVar8 = *(long *)(*(long *)(*(long *)(*(long *)(param_1 + 0x280) + 0xe8) + 0x98) + 0x58);
        puVar11 = (undefined8 *)thunk_FUN_0199c7e0(lVar8);
        *(undefined4 *)(puVar11 + 2) = 0;
        *puVar11 = 0xbf800000bf800000;
        puVar11[1] = 0;
        puVar11 = (undefined8 *)((long)puVar11 + (long)*(int *)(lVar8 + 0x68));
        *puVar11 = 0xbf8000003f800000;
        puVar11[1] = 0x3f80000000000000;
        *(undefined4 *)(puVar11 + 2) = 0;
        puVar11 = (undefined8 *)((long)puVar11 + (long)*(int *)(lVar8 + 0x68));
        *puVar11 = 0x3f800000bf800000;
        puVar11[1] = 0;
        *(undefined4 *)(puVar11 + 2) = 0x3f800000;
        puVar11 = (undefined8 *)((long)puVar11 + (long)*(int *)(lVar8 + 0x68));
        *puVar11 = 0x3f8000003f800000;
        puVar11[1] = 0x3f80000000000000;
        *(undefined4 *)(puVar11 + 2) = 0x3f800000;
        if (lVar8 != 0) {
          thunk_FUN_0199c800(lVar8);
        }
        lVar8 = *(long *)(*(long *)(param_1 + 0x280) + 0xf0) + 0x58;
        puVar11 = (undefined8 *)thunk_FUN_0199c7e0(lVar8);
        *puVar11 = 0x2000200010000;
        *(undefined4 *)(puVar11 + 1) = 0x30001;
        thunk_FUN_0199c800(lVar8);
        local_90 = 0;
        uStack_88 = 0;
        local_a0 = 0;
        uStack_98 = 0;
        local_b0 = (undefined1 *)0x0;
        local_a8 = 0;
        local_c0 = (undefined *)0x0;
        uStack_b8 = 0;
        FUN_0199c0f0(&local_c0);
        uVar14 = local_c0;
        uVar7 = local_c0._4_2_;
        local_c0 = (undefined *)CONCAT71(local_c0._1_7_,7);
        uVar1 = local_c0;
        local_c0._6_2_ = SUB82(uVar14,6);
        local_c0._0_4_ = (undefined4)uVar1;
        local_c0 = (undefined *)
                   (CONCAT26(local_c0._6_2_,CONCAT24(uVar7,(undefined4)local_c0)) | 0x700000000);
        uStack_b8._0_5_ = CONCAT23(0xfe05,(undefined3)uStack_b8);
        FUN_00739580(*(undefined8 *)(param_1 + 0x280),&local_c0);
        local_d0 = 0;
        uStack_c8 = 0;
        local_e0 = 0;
        uStack_d8 = 0;
        FUN_0199c080(&local_e0);
        uVar14 = local_e0;
        local_f0 = 0;
        uStack_e8 = 0;
        local_100 = 0;
        uStack_f8 = 0;
        bVar3 = (byte)local_e0;
        local_e0._0_3_ = CONCAT21(0x701,bVar3 | 1);
        local_e0 = CONCAT53((int5)((ulong)uVar14 >> 0x18),(undefined3)local_e0) & 0xffffffff00ffffff
        ;
        local_110 = 0;
        uStack_108 = 0;
        FUN_0199c0b0(&local_110);
        FUN_007395d0(*(undefined8 *)(param_1 + 0x280),&local_110,&local_e0);
        lVar9 = *(long *)(param_1 + 0x280);
        uVar14 = *(undefined8 *)(param_1 + 0x138);
        uVar2 = *(undefined8 *)(param_1 + 0x140);
        uVar1 = *(undefined8 *)(param_1 + 0x148);
        lVar8 = *(long *)(param_1 + 0x150);
        if (lVar8 != 0) {
          (**(code **)(*(long *)(lVar8 + 0x48) + 0x10))();
        }
        *(undefined8 *)(lVar9 + 0x80) = uVar14;
        *(undefined8 *)(lVar9 + 0x88) = uVar2;
        *(undefined8 *)(lVar9 + 0x90) = uVar1;
        if (lVar8 != 0) {
          (**(code **)(*(long *)(lVar8 + 0x48) + 0x10))();
        }
        lVar10 = *(long *)(lVar9 + 0x98);
        *(long *)(lVar9 + 0x98) = lVar8;
        if (lVar10 != 0) {
          (**(code **)(*(long *)(lVar10 + 0x48) + 0x18))();
        }
        if (lVar8 != 0) {
          (**(code **)(*(long *)(lVar8 + 0x48) + 0x18))((long *)(lVar8 + 0x48));
        }
        uVar14 = *(undefined8 *)(param_1 + 0x280);
        local_130 = 0x556483e7a1ceb2;
        pcStack_128 = "Normal";
        local_120 = 6;
        local_118 = 0;
        FUN_00784060(&local_320,*(undefined8 *)(param_1 + 0x268));
        FUN_007394b0(uVar14,&local_130,&local_320,4);
        FUN_00784490(&local_320);
        if (local_118 != 0) {
          (**(code **)(*(long *)(local_118 + 0x48) + 0x18))();
        }
        uVar14 = *(undefined8 *)(param_1 + 0x280);
        local_130 = 0xa9467a944c3c2678;
        pcStack_128 = "Color";
        local_120 = 5;
        local_118 = 0;
        FUN_00784060(&local_320,*(undefined8 *)(param_1 + 0x270));
        FUN_007394b0(uVar14,&local_130,&local_320,4);
        FUN_00784490(&local_320);
        if (local_118 != 0) {
          (**(code **)(*(long *)(local_118 + 0x48) + 0x18))();
        }
        uVar14 = *(undefined8 *)(param_1 + 0x280);
        local_130 = 0x5a714284d77b0b4;
        pcStack_128 = "DepthBuffer";
        local_120 = 0xb;
        local_118 = 0;
        FUN_006f29a0(&local_320,*(undefined8 *)(param_1 + 0x278));
        FUN_007394b0(uVar14,&local_130,&local_320,4);
        FUN_00784490(&local_320);
        if (local_118 != 0) {
          (**(code **)(*(long *)(local_118 + 0x48) + 0x18))();
          local_118 = 0;
        }
        lVar8 = param_1 + 0x288;
        FUN_00799370(lVar8,(long)(7.0 / *(float *)(param_1 + 0x2d8)));
        puVar11 = (undefined8 *)(param_1 + 0x2b8);
        puVar12 = (undefined8 *)
                  (**(code **)(**(long **)(param_1 + 0x2b8) + 0x10))
                            (*(long **)(param_1 + 0x2b8),0x38,8);
        if (puVar12 == (undefined8 *)0x0) {
          (**(code **)(*(long *)*puVar11 + 0xb8))();
        }
        uVar14 = *puVar11;
        lVar9 = nn::os::GetTlsValue(*(undefined4 *)puVar5);
        if (*(ulong *)(lVar9 + 0x80) < 0x10) {
          *(undefined8 *)(lVar9 + *(ulong *)(lVar9 + 0x80) * 8) = uVar14;
          *(long *)(lVar9 + 0x80) = *(long *)(lVar9 + 0x80) + 1;
          puVar12[2] = 0xc6f762fc8bbe4512;
          puVar12[3] = "EdgePow";
          puVar12[4] = 7;
          puVar12[5] = 0;
          *(undefined4 *)(puVar12 + 6) = 0x41800000;
          *(long *)(lVar9 + 0x80) = *(long *)(lVar9 + 0x80) + -1;
          *puVar12 = 0;
          puVar12[1] = puVar12[2];
          FUN_00799740(lVar8,puVar12);
          if ((puVar12 != (undefined8 *)0x0) && ((extraout_x1 & 1) == 0)) {
            if (puVar12[5] != 0) {
              (**(code **)(*(long *)(puVar12[5] + 0x48) + 0x18))();
              puVar12[5] = 0;
            }
            (**(code **)(*(long *)*puVar11 + 0x18))((long *)*puVar11,puVar12,0x38,8);
          }
          puVar12 = (undefined8 *)(**(code **)(*(long *)*puVar11 + 0x10))((long *)*puVar11,0x38,8);
          if (puVar12 == (undefined8 *)0x0) {
            (**(code **)(*(long *)*puVar11 + 0xb8))();
          }
          uVar14 = *puVar11;
          lVar9 = nn::os::GetTlsValue(*(undefined4 *)puVar5);
          if (*(ulong *)(lVar9 + 0x80) < 0x10) {
            *(undefined8 *)(lVar9 + *(ulong *)(lVar9 + 0x80) * 8) = uVar14;
            *(long *)(lVar9 + 0x80) = *(long *)(lVar9 + 0x80) + 1;
            puVar12[2] = 0xb5aa511b387015ec;
            puVar12[3] = "DepthPow";
            puVar12[4] = 8;
            puVar12[5] = 0;
            *(undefined4 *)(puVar12 + 6) = 0x42c80000;
            *(long *)(lVar9 + 0x80) = *(long *)(lVar9 + 0x80) + -1;
            *puVar12 = 0;
            puVar12[1] = puVar12[2];
            FUN_00799740(lVar8,puVar12);
            if ((puVar12 != (undefined8 *)0x0) && ((extraout_x1_00 & 1) == 0)) {
              if (puVar12[5] != 0) {
                (**(code **)(*(long *)(puVar12[5] + 0x48) + 0x18))();
                puVar12[5] = 0;
              }
              (**(code **)(*(long *)*puVar11 + 0x18))((long *)*puVar11,puVar12,0x38,8);
            }
            puVar12 = (undefined8 *)(**(code **)(*(long *)*puVar11 + 0x10))((long *)*puVar11,0x38,8)
            ;
            if (puVar12 == (undefined8 *)0x0) {
              (**(code **)(*(long *)*puVar11 + 0xb8))();
            }
            uVar14 = *puVar11;
            lVar9 = nn::os::GetTlsValue(*(undefined4 *)puVar5);
            if (*(ulong *)(lVar9 + 0x80) < 0x10) {
              *(undefined8 *)(lVar9 + *(ulong *)(lVar9 + 0x80) * 8) = uVar14;
              *(long *)(lVar9 + 0x80) = *(long *)(lVar9 + 0x80) + 1;
              *(undefined4 *)(puVar12 + 6) = 0;
              puVar12[2] = 0x1542e69519c1f645;
              puVar12[3] = "DepthDiscardValue";
              puVar12[4] = 0x11;
              puVar12[5] = 0;
              *(long *)(lVar9 + 0x80) = *(long *)(lVar9 + 0x80) + -1;
              *puVar12 = 0;
              puVar12[1] = puVar12[2];
              FUN_00799740(lVar8,puVar12);
              if ((puVar12 != (undefined8 *)0x0) && ((extraout_x1_01 & 1) == 0)) {
                if (puVar12[5] != 0) {
                  (**(code **)(*(long *)(puVar12[5] + 0x48) + 0x18))();
                  puVar12[5] = 0;
                }
                (**(code **)(*(long *)*puVar11 + 0x18))((long *)*puVar11,puVar12,0x38,8);
              }
              puVar12 = (undefined8 *)
                        (**(code **)(*(long *)*puVar11 + 0x10))((long *)*puVar11,0x38,8);
              if (puVar12 == (undefined8 *)0x0) {
                (**(code **)(*(long *)*puVar11 + 0xb8))();
              }
              uVar14 = *puVar11;
              lVar9 = nn::os::GetTlsValue(*(undefined4 *)puVar5);
              if (*(ulong *)(lVar9 + 0x80) < 0x10) {
                *(undefined8 *)(lVar9 + *(ulong *)(lVar9 + 0x80) * 8) = uVar14;
                *(long *)(lVar9 + 0x80) = *(long *)(lVar9 + 0x80) + 1;
                puVar12[2] = 0x4ca5f4446a8e87bb;
                puVar12[3] = "EdgeColorScale";
                puVar12[4] = 0xe;
                puVar12[5] = 0;
                *(undefined4 *)(puVar12 + 6) = 0x41a00000;
                *(long *)(lVar9 + 0x80) = *(long *)(lVar9 + 0x80) + -1;
                *puVar12 = 0;
                puVar12[1] = puVar12[2];
                FUN_00799740(lVar8,puVar12);
                if ((puVar12 != (undefined8 *)0x0) && ((extraout_x1_02 & 1) == 0)) {
                  if (puVar12[5] != 0) {
                    (**(code **)(*(long *)(puVar12[5] + 0x48) + 0x18))();
                    puVar12[5] = 0;
                  }
                  (**(code **)(*(long *)*puVar11 + 0x18))((long *)*puVar11,puVar12,0x38,8);
                }
                puVar12 = (undefined8 *)
                          (**(code **)(*(long *)*puVar11 + 0x10))((long *)*puVar11,0x38,8);
                if (puVar12 == (undefined8 *)0x0) {
                  (**(code **)(*(long *)*puVar11 + 0xb8))();
                }
                uVar14 = *puVar11;
                lVar9 = nn::os::GetTlsValue(*(undefined4 *)puVar5);
                if (*(ulong *)(lVar9 + 0x80) < 0x10) {
                  *(undefined8 *)(lVar9 + *(ulong *)(lVar9 + 0x80) * 8) = uVar14;
                  *(long *)(lVar9 + 0x80) = *(long *)(lVar9 + 0x80) + 1;
                  puVar12[2] = 0xa2ce0e1a0ae2e068;
                  puVar12[3] = "NormalEdgeOffSet";
                  puVar12[4] = 0x10;
                  puVar12[5] = 0;
                  *(undefined4 *)(puVar12 + 6) = 0x3dcccccd;
                  *(long *)(lVar9 + 0x80) = *(long *)(lVar9 + 0x80) + -1;
                  *puVar12 = 0;
                  puVar12[1] = puVar12[2];
                  FUN_00799740(lVar8,puVar12);
                  if ((puVar12 != (undefined8 *)0x0) && ((extraout_x1_03 & 1) == 0)) {
                    if (puVar12[5] != 0) {
                      (**(code **)(*(long *)(puVar12[5] + 0x48) + 0x18))();
                      puVar12[5] = 0;
                    }
                    (**(code **)(*(long *)*puVar11 + 0x18))((long *)*puVar11,puVar12,0x38,8);
                  }
                  puVar12 = (undefined8 *)
                            (**(code **)(*(long *)*puVar11 + 0x10))((long *)*puVar11,0x38,8);
                  if (puVar12 == (undefined8 *)0x0) {
                    (**(code **)(*(long *)*puVar11 + 0xb8))();
                  }
                  uVar14 = *puVar11;
                  lVar9 = nn::os::GetTlsValue(*(undefined4 *)puVar5);
                  if (*(ulong *)(lVar9 + 0x80) < 0x10) {
                    *(undefined8 *)(lVar9 + *(ulong *)(lVar9 + 0x80) * 8) = uVar14;
                    *(long *)(lVar9 + 0x80) = *(long *)(lVar9 + 0x80) + 1;
                    puVar12[2] = 0x1113b1102eaf318e;
                    puVar12[3] = "VcolorEdgeOffSet";
                    puVar12[4] = 0x10;
                    puVar12[5] = 0;
                    *(undefined4 *)(puVar12 + 6) = 0x3f000000;
                    *(long *)(lVar9 + 0x80) = *(long *)(lVar9 + 0x80) + -1;
                    *puVar12 = 0;
                    puVar12[1] = puVar12[2];
                    FUN_00799740(lVar8,puVar12);
                    if ((puVar12 != (undefined8 *)0x0) && ((extraout_x1_04 & 1) == 0)) {
                      if (puVar12[5] != 0) {
                        (**(code **)(*(long *)(puVar12[5] + 0x48) + 0x18))();
                        puVar12[5] = 0;
                      }
                      (**(code **)(*(long *)*puVar11 + 0x18))((long *)*puVar11,puVar12,0x38,8);
                    }
                    puVar12 = (undefined8 *)
                              (**(code **)(*(long *)*puVar11 + 0x10))((long *)*puVar11,0x38,8);
                    if (puVar12 == (undefined8 *)0x0) {
                      (**(code **)(*(long *)*puVar11 + 0xb8))();
                    }
                    uVar14 = *puVar11;
                    lVar9 = nn::os::GetTlsValue(*(undefined4 *)puVar5);
                    if (*(ulong *)(lVar9 + 0x80) < 0x10) {
                      *(undefined8 *)(lVar9 + *(ulong *)(lVar9 + 0x80) * 8) = uVar14;
                      *(long *)(lVar9 + 0x80) = *(long *)(lVar9 + 0x80) + 1;
                      puVar12[2] = 0xd95fb3b10f22803d;
                      puVar12[3] = "LineWidthScale";
                      puVar12[4] = 0xe;
                      puVar12[5] = 0;
                      *(undefined4 *)(puVar12 + 6) = 0x3f800000;
                      *(long *)(lVar9 + 0x80) = *(long *)(lVar9 + 0x80) + -1;
                      *puVar12 = 0;
                      puVar12[1] = puVar12[2];
                      FUN_00799740(lVar8,puVar12);
                      if ((puVar12 != (undefined8 *)0x0) && ((extraout_x1_05 & 1) == 0)) {
                        if (puVar12[5] != 0) {
                          (**(code **)(*(long *)(puVar12[5] + 0x48) + 0x18))();
                          puVar12[5] = 0;
                        }
                        (**(code **)(*(long *)*puVar11 + 0x18))((long *)*puVar11,puVar12,0x38,8);
                      }
                      return;
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  abort();
}


