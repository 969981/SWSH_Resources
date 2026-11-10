/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 009f7c50; name: FUN_009f7c50
 */


void FUN_009f7c50(long param_1,int param_2,undefined8 *param_3,undefined8 *param_4,uint param_5)

{
  uint uVar1;
  uint uVar2;
  code *pcVar3;
  short sVar4;
  undefined4 uVar5;
  ulong uVar6;
  long *plVar7;
  undefined8 uVar8;
  int iVar9;
  byte *pbVar10;
  long lVar11;
  long lVar12;
  ulong uVar13;
  ulong uVar14;
  undefined8 *puVar15;
  long lVar16;
  undefined *puVar17;
  long lVar18;
  long lVar19;
  long lVar20;
  uint local_2a8;
  undefined8 local_2a0;
  code *local_298;
  undefined8 local_290;
  undefined8 uStack_288;
  undefined8 local_280;
  undefined8 uStack_278;
  undefined8 local_270;
  undefined8 uStack_268;
  undefined8 local_260;
  undefined8 uStack_258;
  undefined8 local_250;
  undefined8 uStack_248;
  undefined8 local_240;
  undefined8 uStack_238;
  undefined8 local_230;
  undefined8 uStack_228;
  undefined8 local_220;
  code *local_218;
  undefined8 local_210;
  undefined8 uStack_208;
  undefined8 local_200;
  undefined8 uStack_1f8;
  undefined8 local_1f0;
  undefined8 uStack_1e8;
  undefined8 local_1e0;
  undefined8 uStack_1d8;
  undefined8 local_1d0;
  undefined8 uStack_1c8;
  undefined8 local_1c0;
  undefined8 uStack_1b8;
  undefined8 local_1b0;
  undefined8 uStack_1a8;
  long local_198 [12];
  undefined4 local_138;
  long local_130;
  long local_128;
  long local_120;
  long local_118;
  long local_110;
  undefined1 local_108;
  undefined8 local_100;
  undefined8 uStack_f8;
  ulong local_f0;
  code *local_e8;
  undefined8 local_e0;
  undefined8 uStack_d8;
  undefined8 local_d0;
  undefined8 uStack_c8;
  undefined8 local_c0;
  undefined8 uStack_b8;
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined4 local_90;
  
  local_108 = 0;
  local_130 = 0;
  local_118 = 0;
  local_110 = 0;
  local_128 = 0;
  local_120 = 0;
  iVar9 = 0;
  if (*(char *)(param_1 + 0xa58) != '\0') {
    iVar9 = 2;
  }
  local_100 = 0;
  uStack_f8 = 0;
  lVar12 = *(long *)(param_1 + 0x2b0);
  uVar1 = iVar9 + param_2;
  if (lVar12 != 0) {
    (**(code **)(*(long *)(lVar12 + 0x48) + 0x10))();
  }
  local_130 = lVar12;
  FUN_00ff86a0(&local_f0,*(undefined8 *)(*(long *)(param_1 + 0x60) + 0xb0),0);
  lVar12 = *(long *)(local_f0 + 0x60);
  if (lVar12 != 0) {
    (**(code **)(*(long *)(lVar12 + 0x48) + 0x10))();
  }
  if (local_118 != 0) {
    (**(code **)(*(long *)(local_118 + 0x48) + 0x18))();
  }
  uVar2 = ((uVar1 & 0xff) + (uVar1 & 0xff) * 2) * 2;
  uVar14 = (ulong)uVar2;
  local_118 = lVar12;
  if (local_f0 != 0) {
    (**(code **)(*(long *)(local_f0 + 0x48) + 0x18))();
    local_f0 = 0;
  }
  puVar17 = &UNK_0214f4b0 + uVar14 * 0x180;
  uVar13 = 0;
  local_2a8 = uVar1 & 0xff;
  puVar15 = (undefined8 *)(param_1 + (ulong)(uVar1 & 0xff) * 0xc0 + 0x5d0);
  do {
    uVar6 = FUN_00884820(*param_4);
    if (uVar13 < (uVar6 & 0xffffffff)) {
      lVar12 = (**(code **)(*(long *)*param_4 + 0x50))((long *)*param_4,uVar13 & 0xffffffff);
      if (lVar12 != 0) {
        (**(code **)(*(long *)(lVar12 + 0x48) + 0x10))();
      }
      if (local_120 != 0) {
        plVar7 = (long *)(local_120 + 0x48);
        local_120 = lVar12;
        (**(code **)(*plVar7 + 0x18))();
        lVar12 = local_120;
      }
      local_120 = lVar12;
      FUN_0146b6d0(*puVar15,&local_130,puVar17);
      lVar12 = *(long *)(param_1 + 0x2b0);
      if (lVar12 == 0) {
        uVar8 = 1;
        goto LAB_009f7e4c;
      }
      plVar7 = (long *)(lVar12 + 0x48);
      (**(code **)(*plVar7 + 0x10))(plVar7);
      uVar8 = 1;
LAB_009f7e18:
      FUN_0167b9b0(lVar12,puVar17,uVar8);
      (**(code **)(*plVar7 + 0x18))(plVar7);
    }
    else {
      lVar12 = *(long *)(param_1 + 0x2b0);
      if (lVar12 != 0) {
        plVar7 = (long *)(lVar12 + 0x48);
        (**(code **)(*plVar7 + 0x10))(plVar7);
        uVar8 = 0;
        goto LAB_009f7e18;
      }
      uVar8 = 0;
LAB_009f7e4c:
      FUN_0167b9b0(0,puVar17,uVar8);
    }
    uVar13 = uVar13 + 1;
    puVar17 = puVar17 + 0x180;
    puVar15 = puVar15 + 4;
    if (uVar13 == 6) {
      lVar12 = *(long *)(param_1 + 0x2b0);
      if (lVar12 != 0) {
        (**(code **)(*(long *)(lVar12 + 0x48) + 0x10))();
      }
      lVar11 = *(long *)(lVar12 + 0x2e0);
      if (lVar11 != 0) {
        (**(code **)(*(long *)(lVar11 + 0x48) + 0x10))();
      }
      (**(code **)(*(long *)(lVar12 + 0x48) + 0x18))((long *)(lVar12 + 0x48));
      FUN_014c9030(lVar11,0,*param_3);
      local_f0 = 0xf2140bff1b7ad54c;
      FUN_00ff86a0(local_198,*(undefined8 *)(*(long *)(param_1 + 0x60) + 0xb0),0);
      lVar12 = *(long *)(local_198[0] + 0x60);
      if (lVar12 != 0) {
        (**(code **)(*(long *)(lVar12 + 0x48) + 0x10))();
      }
      if (local_198[0] != 0) {
        (**(code **)(*(long *)(local_198[0] + 0x48) + 0x18))();
        local_198[0] = 0;
      }
      lVar19 = *(long *)(param_1 + 0x2b0);
      if (lVar19 != 0) {
        (**(code **)(*(long *)(lVar19 + 0x48) + 0x10))();
      }
      lVar18 = *(long *)(lVar19 + 0x2e8);
      if (lVar18 != 0) {
        (**(code **)(*(long *)(lVar18 + 0x48) + 0x10))();
      }
      (**(code **)(*(long *)(lVar19 + 0x48) + 0x18))((long *)(lVar19 + 0x48));
      lVar19 = *(long *)(param_1 + 0x2b0);
      if (lVar19 != 0) {
        (**(code **)(*(long *)(lVar19 + 0x48) + 0x10))();
      }
      lVar20 = *(long *)(lVar19 + 0x2e0);
      if (lVar20 != 0) {
        (**(code **)(*(long *)(lVar20 + 0x48) + 0x10))();
      }
      (**(code **)(*(long *)(lVar19 + 0x48) + 0x18))((long *)(lVar19 + 0x48));
      FUN_0077eb10(lVar12,&local_f0,lVar18);
      lVar19 = *(long *)(param_1 + 0x2b0);
      if (lVar19 != 0) {
        (**(code **)(*(long *)(lVar19 + 0x48) + 0x10))();
      }
      lVar16 = *(long *)(lVar19 + 0x2f0);
      if (lVar16 == 0) {
        FUN_014c62d0(lVar20,0,lVar18);
      }
      else {
        plVar7 = (long *)(lVar16 + 0x48);
        (**(code **)(*plVar7 + 0x10))(plVar7);
        FUN_014c62d0(lVar20,lVar16,lVar18);
        (**(code **)(*plVar7 + 0x18))(plVar7);
      }
      (**(code **)(*(long *)(lVar19 + 0x48) + 0x18))((long *)(lVar19 + 0x48));
      if (lVar20 != 0) {
        (**(code **)(*(long *)(lVar20 + 0x48) + 0x18))((long *)(lVar20 + 0x48));
      }
      (**(code **)(*(long *)(lVar18 + 0x48) + 0x18))((long *)(lVar18 + 0x48));
      if (lVar12 != 0) {
        (**(code **)(*(long *)(lVar12 + 0x48) + 0x18))((long *)(lVar12 + 0x48));
      }
      uVar13 = 0xcbf29ce484222645;
      local_138 = 0;
      local_198[10] = 0;
      local_198[0xb] = 0;
      local_198[8] = 0;
      local_198[9] = 0;
      local_198[6] = 0;
      local_198[7] = 0;
      local_198[4] = 0;
      local_198[5] = 0;
      local_198[2] = 0;
      local_198[3] = 0;
      local_198[0] = 0;
      local_198[1] = 0;
      snprintf((char *)local_198,100,"L_netbtl_standby_team_%02d_T_btlteam_00",local_2a8);
      local_90 = 0;
      local_a0 = 0;
      uStack_98 = 0;
      local_b0 = 0;
      uStack_a8 = 0;
      local_c0 = 0;
      uStack_b8 = 0;
      local_d0 = 0;
      uStack_c8 = 0;
      local_e0 = 0;
      uStack_d8 = 0;
      local_f0 = 0;
      local_e8 = (code *)0x0;
      if ((char)local_198[0] != '\0') {
        snprintf((char *)&local_f0,100,"pane_%s",(char *)local_198);
        if ((byte)local_f0 != 0) {
          pbVar10 = (byte *)((ulong)&local_f0 | 1);
          do {
            uVar13 = (uVar13 ^ (byte)local_f0) * 0x100000001b3;
            local_f0._0_1_ = *pbVar10;
            pbVar10 = pbVar10 + 1;
          } while ((byte)local_f0 != 0);
        }
      }
      lVar12 = *(long *)(param_1 + 0x2b0);
      local_f0 = uVar13;
      if (lVar12 != 0) {
        (**(code **)(*(long *)(lVar12 + 0x48) + 0x10))();
      }
      lVar19 = *(long *)(lVar12 + 0x2f0);
      if (lVar19 == 0) {
        uVar8 = FUN_0077d470(0);
        FUN_00ffd700(param_1 + 0x100,&local_f0,uVar8,10);
      }
      else {
        plVar7 = (long *)(lVar19 + 0x48);
        (**(code **)(*plVar7 + 0x10))(plVar7);
        uVar8 = FUN_0077d470(lVar19);
        FUN_00ffd700(param_1 + 0x100,&local_f0,uVar8,10);
        (**(code **)(*plVar7 + 0x18))(plVar7);
      }
      (**(code **)(*(long *)(lVar12 + 0x48) + 0x18))((long *)(lVar12 + 0x48));
      uVar2 = uVar2 + 6;
      if ((local_2a8 * 6 & 0xfe) < uVar2) {
        lVar12 = *(long *)(param_1 + 0x4c8);
        if ((param_5 & 1) == 0) {
          do {
            uVar8 = (**(code **)(*(long *)*param_4 + 0x50))
                              ((long *)*param_4,((uint)uVar14 & 0xff) % 6);
            local_1b0 = 0;
            uStack_1a8 = 0;
            local_1c0 = 0;
            uStack_1b8 = 0;
            local_1d0 = 0;
            uStack_1c8 = 0;
            local_1e0 = 0;
            uStack_1d8 = 0;
            local_1f0 = 0;
            uStack_1e8 = 0;
            local_200 = 0;
            uStack_1f8 = 0;
            local_210 = 0;
            uStack_208 = 0;
            local_220 = 0;
            local_218 = (code *)0x0;
            local_e0 = 0;
            uStack_d8 = 0;
            local_f0 = 0;
            local_e8 = (code *)0x0;
            FUN_0168c890(lVar12 + (uVar14 & 0xff) * 0x3e0,uVar8,0,0,&local_f0);
            pcVar3 = local_e8;
            if (local_e8 != (code *)0x0) {
              local_e0 = 0;
              uStack_d8 = 0;
              local_f0 = 0;
              local_e8 = (code *)0x0;
              (*pcVar3)(&local_d0);
            }
            pcVar3 = local_218;
            if (local_218 != (code *)0x0) {
              local_210 = 0;
              uStack_208 = 0;
              local_220 = 0;
              local_218 = (code *)0x0;
              (*pcVar3)(&local_200);
            }
            uVar1 = (uint)uVar14 + 1;
            uVar14 = (ulong)uVar1;
          } while ((uVar1 & 0xff) < uVar2);
        }
        else {
          lVar19 = *(long *)(param_1 + 0x4e8);
          do {
            uVar8 = (**(code **)(*(long *)*param_4 + 0x50))
                              ((long *)*param_4,((uint)uVar14 & 0xff) % 6);
            uVar14 = uVar14 & 0xff;
            local_1b0 = 0;
            uStack_1a8 = 0;
            local_1c0 = 0;
            uStack_1b8 = 0;
            local_1d0 = 0;
            uStack_1c8 = 0;
            local_1e0 = 0;
            uStack_1d8 = 0;
            local_1f0 = 0;
            uStack_1e8 = 0;
            local_200 = 0;
            uStack_1f8 = 0;
            local_210 = 0;
            uStack_208 = 0;
            local_220 = 0;
            local_218 = (code *)0x0;
            local_e0 = 0;
            uStack_d8 = 0;
            local_f0 = 0;
            local_e8 = (code *)0x0;
            FUN_0168c890(lVar12 + uVar14 * 0x3e0,uVar8,0,0,&local_f0);
            pcVar3 = local_e8;
            if (local_e8 != (code *)0x0) {
              local_e0 = 0;
              uStack_d8 = 0;
              local_f0 = 0;
              local_e8 = (code *)0x0;
              (*pcVar3)(&local_d0);
            }
            pcVar3 = local_218;
            if (local_218 != (code *)0x0) {
              local_210 = 0;
              uStack_208 = 0;
              local_220 = 0;
              local_218 = (code *)0x0;
              (*pcVar3)(&local_200);
            }
            sVar4 = FUN_008787f0(uVar8);
            if (sVar4 != 0) {
              uVar5 = FUN_008787f0(uVar8);
              local_230 = 0;
              uStack_228 = 0;
              local_240 = 0;
              uStack_238 = 0;
              local_250 = 0;
              uStack_248 = 0;
              local_260 = 0;
              uStack_258 = 0;
              local_270 = 0;
              uStack_268 = 0;
              local_280 = 0;
              uStack_278 = 0;
              local_290 = 0;
              uStack_288 = 0;
              local_2a0 = 0;
              local_298 = (code *)0x0;
              FUN_0168c190(lVar19 + uVar14 * 0x3d0,uVar5,0,&local_2a0);
              pcVar3 = local_298;
              if (local_298 != (code *)0x0) {
                local_290 = 0;
                uStack_288 = 0;
                local_2a0 = 0;
                local_298 = (code *)0x0;
                (*pcVar3)(&local_280);
              }
            }
            uVar1 = (int)uVar14 + 1;
            uVar14 = (ulong)uVar1;
          } while ((uVar1 & 0xff) < uVar2);
        }
      }
      if (lVar11 != 0) {
        (**(code **)(*(long *)(lVar11 + 0x48) + 0x18))();
      }
      if (local_110 != 0) {
        (**(code **)(*(long *)(local_110 + 0x48) + 0x18))();
        local_110 = 0;
      }
      if (local_118 != 0) {
        (**(code **)(*(long *)(local_118 + 0x48) + 0x18))();
        local_118 = 0;
      }
      if (local_120 != 0) {
        (**(code **)(*(long *)(local_120 + 0x48) + 0x18))();
        local_120 = 0;
      }
      if (local_128 != 0) {
        (**(code **)(*(long *)(local_128 + 0x48) + 0x18))();
        local_128 = 0;
      }
      if (local_130 != 0) {
        (**(code **)(*(long *)(local_130 + 0x48) + 0x18))();
      }
      return;
    }
  } while( true );
}


