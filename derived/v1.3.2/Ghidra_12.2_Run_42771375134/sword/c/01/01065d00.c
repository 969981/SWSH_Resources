/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 01065d00; name: FUN_01065d00
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01065d00(long param_1,long *param_2)

{
  int *piVar1;
  int iVar2;
  char cVar3;
  bool bVar4;
  undefined *puVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  long *plVar12;
  undefined8 uVar13;
  long local_2b0 [3];
  long local_298;
  undefined8 local_290;
  undefined8 uStack_288;
  undefined8 local_280;
  undefined8 local_278;
  undefined8 uStack_270;
  undefined8 local_268;
  undefined4 local_260;
  undefined1 local_25c;
  undefined4 local_258;
  undefined8 local_250;
  undefined8 uStack_248;
  undefined8 local_240;
  undefined8 local_238;
  undefined8 local_230;
  undefined8 uStack_228;
  undefined4 local_220;
  undefined1 local_21c;
  undefined4 local_218;
  undefined8 local_210;
  undefined8 local_208;
  undefined4 local_200;
  undefined4 uStack_1fc;
  undefined4 local_1f8;
  undefined4 uStack_1f4;
  undefined8 local_1f0;
  undefined8 local_1e8;
  undefined8 local_1e0;
  undefined8 local_1d8;
  undefined8 local_1d0;
  undefined8 local_1c8;
  undefined8 local_1c0;
  undefined8 local_1b8;
  undefined8 local_1b0;
  undefined8 local_1a8;
  undefined8 local_1a0;
  long local_198;
  undefined8 local_190;
  undefined8 local_188;
  undefined8 local_180;
  undefined8 local_178;
  undefined8 local_170;
  undefined8 local_168;
  undefined8 local_160;
  long local_158;
  undefined8 local_150;
  undefined8 local_148;
  undefined8 local_140;
  undefined8 local_138;
  undefined8 local_130;
  undefined8 local_128;
  undefined4 local_120;
  uint uStack_11c;
  undefined4 local_118;
  uint uStack_114;
  undefined8 local_110;
  undefined8 uStack_108;
  undefined8 local_100;
  undefined8 local_f8;
  undefined8 uStack_f0;
  undefined8 local_e8;
  undefined4 local_e0;
  undefined1 local_dc;
  undefined4 local_d8;
  undefined8 local_d0;
  undefined8 uStack_c8;
  undefined4 local_c0;
  undefined8 local_bc;
  undefined4 local_b4;
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined4 local_a0;
  undefined1 local_9c;
  undefined4 local_98;
  long local_90;
  long local_88 [3];
  long *local_70 [2];
  
  lVar6 = *(long *)(param_1 + 0x58);
  if (lVar6 == 0) {
    return;
  }
  lVar10 = *(long *)PTR_DAT_02710848;
  local_88[1] = 0;
  local_88[2] = 0;
  lVar11 = *(long *)(lVar10 + 0x60);
  local_70[0] = param_2;
  if (lVar11 == 0) {
    FUN_0101cb00(0,local_88 + 1);
  }
  else {
    plVar12 = (long *)(lVar11 + 0x48);
    (**(code **)(*plVar12 + 0x10))(plVar12);
    FUN_0101cb00(lVar11,local_88 + 1);
    (**(code **)(*plVar12 + 0x18))(plVar12);
  }
  lVar11 = FUN_01067710(&local_d0,local_70[0],local_70,lVar6 + 0x10,lVar6 + 0x18);
  if (lVar11 != 0) {
    (**(code **)(*(long *)(lVar11 + 0x48) + 0x10))();
  }
  if (*(long *)(lVar6 + 0x150) != 0) {
    (**(code **)(*(long *)(*(long *)(lVar6 + 0x150) + 0x48) + 0x18))();
    *(undefined8 *)(lVar6 + 0x150) = 0;
  }
  *(long *)(lVar6 + 0x150) = lVar11;
  local_88[0] = lVar11;
  if (lVar11 != 0) {
    (**(code **)(*(long *)(lVar11 + 0x48) + 0x10))((long *)(lVar11 + 0x48));
  }
  FUN_0101b530(lVar10,local_88);
  if (local_88[0] != 0) {
    (**(code **)(*(long *)(local_88[0] + 0x48) + 0x18))();
    local_88[0] = 0;
  }
  *(undefined4 *)(*(long *)(lVar6 + 0x150) + 0x140) = 0xffffffec;
  lVar11 = FUN_01067850(&local_d0,local_70[0],local_70,lVar6 + 0x10,lVar6 + 0x18,lVar6 + 0x30);
  if (lVar11 != 0) {
    (**(code **)(*(long *)(lVar11 + 0x48) + 0x10))();
  }
  if (*(long *)(lVar6 + 0x158) != 0) {
    (**(code **)(*(long *)(*(long *)(lVar6 + 0x158) + 0x48) + 0x18))();
    *(undefined8 *)(lVar6 + 0x158) = 0;
  }
  *(long *)(lVar6 + 0x158) = lVar11;
  local_90 = lVar11;
  if (lVar11 != 0) {
    (**(code **)(*(long *)(lVar11 + 0x48) + 0x10))((long *)(lVar11 + 0x48));
  }
  FUN_010674e0(lVar10,&local_90);
  if (local_90 != 0) {
    (**(code **)(*(long *)(local_90 + 0x48) + 0x18))();
    local_90 = 0;
  }
  plVar12 = local_70[0];
  *(undefined4 *)(*(long *)(lVar6 + 0x158) + 0x140) = 0x100;
  puVar5 = PTR_DAT_02710860;
  local_9c = 0;
  local_d0 = 0;
  uStack_c8 = 0x43800000780;
  local_98 = 0;
  local_bc = 0x2d000000500;
  local_b0 = 0x800000008;
  uStack_a8 = 0x100000b01;
  local_a0 = 1;
  local_e8 = 0x100000b01;
  local_e0 = 1;
  local_dc = 0;
  local_d8 = 0;
  local_110 = 0;
  uStack_108 = 0x43800000780;
  local_f8 = 0x1307000002d0;
  uStack_f0 = 0x800000008;
  local_c0 = 0xf05;
  local_100 = 0x50000001307;
  local_b4 = 0xf05;
  lVar10 = nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_02710860);
  if (*(ulong *)(lVar10 + 0x80) < 0x10) {
    *(long **)(lVar10 + *(ulong *)(lVar10 + 0x80) * 8) = plVar12;
    *(long *)(lVar10 + 0x80) = *(long *)(lVar10 + 0x80) + 1;
    lVar11 = (**(code **)(*plVar12 + 0x10))(plVar12,0x4a8,8);
    if (lVar11 == 0) {
      (**(code **)(*plVar12 + 0xb8))(plVar12);
    }
    FUN_006fdd90(lVar11,&local_d0);
    *(long **)(lVar11 + 8) = plVar12;
    *(long *)(lVar11 + 0x10) = lVar11;
    *(undefined8 *)(lVar11 + 0x18) = 0x4a8;
    *(undefined8 *)(lVar11 + 0x20) = 8;
    *(long *)(lVar10 + 0x80) = *(long *)(lVar10 + 0x80) + -1;
    if (lVar11 != 0) {
      (**(code **)(*(long *)(lVar11 + 0x48) + 0x10))();
    }
    if (*(long *)(lVar6 + 0x1a0) != 0) {
      (**(code **)(*(long *)(*(long *)(lVar6 + 0x1a0) + 0x48) + 0x18))();
      *(undefined8 *)(lVar6 + 0x1a0) = 0;
    }
    plVar12 = local_70[0];
    *(long *)(lVar6 + 0x1a0) = lVar11;
    lVar10 = nn::os::GetTlsValue(*(undefined4 *)puVar5);
    if (*(ulong *)(lVar10 + 0x80) < 0x10) {
      *(long **)(lVar10 + *(ulong *)(lVar10 + 0x80) * 8) = plVar12;
      *(long *)(lVar10 + 0x80) = *(long *)(lVar10 + 0x80) + 1;
      lVar11 = (**(code **)(*plVar12 + 0x10))(plVar12,0x590,8);
      if (lVar11 == 0) {
        (**(code **)(*plVar12 + 0xb8))(plVar12);
      }
      FUN_006f1ba0(lVar11,&local_110);
      *(long **)(lVar11 + 8) = plVar12;
      *(long *)(lVar11 + 0x10) = lVar11;
      *(undefined8 *)(lVar11 + 0x18) = 0x590;
      *(undefined8 *)(lVar11 + 0x20) = 8;
      *(long *)(lVar10 + 0x80) = *(long *)(lVar10 + 0x80) + -1;
      if (lVar11 != 0) {
        (**(code **)(*(long *)(lVar11 + 0x48) + 0x10))();
      }
      if (*(long *)(lVar6 + 0x1a8) != 0) {
        (**(code **)(*(long *)(*(long *)(lVar6 + 0x1a8) + 0x48) + 0x18))();
        *(undefined8 *)(lVar6 + 0x1a8) = 0;
      }
      plVar12 = local_70[0];
      *(long *)(lVar6 + 0x1a8) = lVar11;
      *(undefined1 *)(lVar6 + 0x201) = 1;
      local_120 = 1;
      local_138 = 0xb01000002d0;
      local_140 = 0x50000000b01;
      local_130 = 0x800000008;
      local_128 = 0x100000b01;
      local_150 = 0;
      local_148 = 0x43800000780;
      local_118 = 0;
      uStack_11c = uStack_11c & 0xffffff00;
      local_180 = 0x50000000f05;
      local_188 = 0x43800000780;
      local_190 = 0;
      local_158 = (ulong)uStack_114 << 0x20;
      local_160 = CONCAT44(uStack_11c,1);
      local_168 = 0x100000b01;
      local_170 = 0x800000008;
      local_1c8 = 0x43800000780;
      local_1d0 = 0;
      local_198 = (ulong)uStack_114 << 0x20;
      local_1a0 = CONCAT44(uStack_11c,1);
      local_1a8 = 0x100000b01;
      local_1b0 = 0x800000008;
      local_178 = 0xf05000002d0;
      local_1b8 = 0x1503000002d0;
      local_1c0 = 0x50000001503;
      lVar10 = nn::os::GetTlsValue(*(undefined4 *)puVar5);
      if (*(ulong *)(lVar10 + 0x80) < 0x10) {
        *(long **)(lVar10 + *(ulong *)(lVar10 + 0x80) * 8) = plVar12;
        *(long *)(lVar10 + 0x80) = *(long *)(lVar10 + 0x80) + 1;
        lVar11 = (**(code **)(*plVar12 + 0x10))(plVar12,0x4a8,8);
        if (lVar11 == 0) {
          (**(code **)(*plVar12 + 0xb8))(plVar12);
        }
        FUN_006fdd90(lVar11,&local_190);
        *(long **)(lVar11 + 8) = plVar12;
        *(long *)(lVar11 + 0x10) = lVar11;
        *(undefined8 *)(lVar11 + 0x18) = 0x4a8;
        *(undefined8 *)(lVar11 + 0x20) = 8;
        *(long *)(lVar10 + 0x80) = *(long *)(lVar10 + 0x80) + -1;
        if (lVar11 != 0) {
          (**(code **)(*(long *)(lVar11 + 0x48) + 0x10))();
        }
        if (*(long *)(lVar6 + 0x1e0) != 0) {
          (**(code **)(*(long *)(*(long *)(lVar6 + 0x1e0) + 0x48) + 0x18))();
          *(undefined8 *)(lVar6 + 0x1e0) = 0;
        }
        *(long *)(lVar6 + 0x1e0) = lVar11;
        if (lVar11 != 0) {
          (**(code **)(*(long *)(lVar11 + 0x48) + 0x10))();
        }
        plVar12 = local_70[0];
        lVar10 = nn::os::GetTlsValue(*(undefined4 *)puVar5);
        if (*(ulong *)(lVar10 + 0x80) < 0x10) {
          *(long **)(lVar10 + *(ulong *)(lVar10 + 0x80) * 8) = plVar12;
          *(long *)(lVar10 + 0x80) = *(long *)(lVar10 + 0x80) + 1;
          lVar7 = (**(code **)(*plVar12 + 0x10))(plVar12,0x4a8,8);
          if (lVar7 == 0) {
            (**(code **)(*plVar12 + 0xb8))(plVar12);
          }
          FUN_006fdd90(lVar7,&local_1d0);
          *(long **)(lVar7 + 8) = plVar12;
          *(long *)(lVar7 + 0x10) = lVar7;
          *(undefined8 *)(lVar7 + 0x18) = 0x4a8;
          *(undefined8 *)(lVar7 + 0x20) = 8;
          *(long *)(lVar10 + 0x80) = *(long *)(lVar10 + 0x80) + -1;
          if (lVar7 != 0) {
            (**(code **)(*(long *)(lVar7 + 0x48) + 0x10))();
          }
          if (*(long *)(lVar6 + 0x1f0) != 0) {
            (**(code **)(*(long *)(*(long *)(lVar6 + 0x1f0) + 0x48) + 0x18))();
            *(undefined8 *)(lVar6 + 0x1f0) = 0;
          }
          *(long *)(lVar6 + 0x1f0) = lVar7;
          if (lVar7 != 0) {
            (**(code **)(*(long *)(lVar7 + 0x48) + 0x10))();
          }
          plVar12 = local_70[0];
          lVar10 = nn::os::GetTlsValue(*(undefined4 *)puVar5);
          if (*(ulong *)(lVar10 + 0x80) < 0x10) {
            *(long **)(lVar10 + *(ulong *)(lVar10 + 0x80) * 8) = plVar12;
            *(long *)(lVar10 + 0x80) = *(long *)(lVar10 + 0x80) + 1;
            lVar8 = (**(code **)(*plVar12 + 0x10))(plVar12,0x4a8,8);
            if (lVar8 == 0) {
              (**(code **)(*plVar12 + 0xb8))(plVar12);
            }
            FUN_006fdd90(lVar8,&local_150);
            *(long **)(lVar8 + 8) = plVar12;
            *(long *)(lVar8 + 0x10) = lVar8;
            *(undefined8 *)(lVar8 + 0x18) = 0x4a8;
            *(undefined8 *)(lVar8 + 0x20) = 8;
            *(long *)(lVar10 + 0x80) = *(long *)(lVar10 + 0x80) + -1;
            if (lVar8 != 0) {
              (**(code **)(*(long *)(lVar8 + 0x48) + 0x10))();
            }
            if (*(long *)(lVar6 + 0x1f8) != 0) {
              (**(code **)(*(long *)(*(long *)(lVar6 + 0x1f8) + 0x48) + 0x18))();
              *(undefined8 *)(lVar6 + 0x1f8) = 0;
            }
            *(long *)(lVar6 + 0x1f8) = lVar8;
            if (lVar8 != 0) {
              (**(code **)(*(long *)(lVar8 + 0x48) + 0x10))();
            }
            plVar12 = local_70[0];
            local_208 = local_148;
            local_210 = local_150;
            local_1d8 = CONCAT44(uStack_114,local_118);
            local_1e0 = CONCAT44(uStack_11c,local_120);
            local_1e8 = local_128;
            local_1f0 = local_130;
            _local_1f8 = CONCAT44(0x1307,(int)local_138);
            _local_200 = CONCAT44((int)((ulong)local_140 >> 0x20),0x1307);
            lVar10 = nn::os::GetTlsValue(*(undefined4 *)puVar5);
            if (*(ulong *)(lVar10 + 0x80) < 0x10) {
              *(long **)(lVar10 + *(ulong *)(lVar10 + 0x80) * 8) = plVar12;
              *(long *)(lVar10 + 0x80) = *(long *)(lVar10 + 0x80) + 1;
              lVar9 = (**(code **)(*plVar12 + 0x10))(plVar12,0x590,8);
              if (lVar9 == 0) {
                (**(code **)(*plVar12 + 0xb8))(plVar12);
              }
              FUN_006f1ba0(lVar9,&local_210);
              *(long **)(lVar9 + 8) = plVar12;
              *(long *)(lVar9 + 0x10) = lVar9;
              *(undefined8 *)(lVar9 + 0x18) = 0x590;
              *(undefined8 *)(lVar9 + 0x20) = 8;
              *(long *)(lVar10 + 0x80) = *(long *)(lVar10 + 0x80) + -1;
              if (lVar9 != 0) {
                (**(code **)(*(long *)(lVar9 + 0x48) + 0x10))();
              }
              if (*(long *)(lVar6 + 0x1e8) != 0) {
                (**(code **)(*(long *)(*(long *)(lVar6 + 0x1e8) + 0x48) + 0x18))();
                *(undefined8 *)(lVar6 + 0x1e8) = 0;
              }
              plVar12 = local_70[0];
              *(long *)(lVar6 + 0x1e8) = lVar9;
              local_238 = 0xb06000002d0;
              local_250 = 0;
              uStack_248 = 0x43800000780;
              local_230 = 0x800000008;
              uStack_228 = 0x100000b01;
              local_220 = 1;
              local_21c = 0;
              local_218 = 0;
              local_240 = 0x50000000b06;
              lVar10 = nn::os::GetTlsValue(*(undefined4 *)puVar5);
              if (*(ulong *)(lVar10 + 0x80) < 0x10) {
                *(long **)(lVar10 + *(ulong *)(lVar10 + 0x80) * 8) = plVar12;
                *(long *)(lVar10 + 0x80) = *(long *)(lVar10 + 0x80) + 1;
                lVar9 = (**(code **)(*plVar12 + 0x10))(plVar12,0x4a8,8);
                if (lVar9 == 0) {
                  (**(code **)(*plVar12 + 0xb8))(plVar12);
                }
                FUN_006fdd90(lVar9,&local_250);
                *(long **)(lVar9 + 8) = plVar12;
                *(long *)(lVar9 + 0x10) = lVar9;
                *(undefined8 *)(lVar9 + 0x18) = 0x4a8;
                *(undefined8 *)(lVar9 + 0x20) = 8;
                *(long *)(lVar10 + 0x80) = *(long *)(lVar10 + 0x80) + -1;
                if (lVar9 != 0) {
                  (**(code **)(*(long *)(lVar9 + 0x48) + 0x10))();
                }
                if (*(long *)(lVar6 + 0x1b0) != 0) {
                  (**(code **)(*(long *)(*(long *)(lVar6 + 0x1b0) + 0x48) + 0x18))();
                  *(undefined8 *)(lVar6 + 0x1b0) = 0;
                }
                plVar12 = local_70[0];
                *(long *)(lVar6 + 0x1b0) = lVar9;
                lVar10 = nn::os::GetTlsValue(*(undefined4 *)puVar5);
                if (*(ulong *)(lVar10 + 0x80) < 0x10) {
                  *(long **)(lVar10 + *(ulong *)(lVar10 + 0x80) * 8) = plVar12;
                  *(long *)(lVar10 + 0x80) = *(long *)(lVar10 + 0x80) + 1;
                  lVar9 = (**(code **)(*plVar12 + 0x10))(plVar12,0x590,8);
                  if (lVar9 == 0) {
                    (**(code **)(*plVar12 + 0xb8))(plVar12);
                  }
                  FUN_006f1ba0(lVar9,&local_210);
                  *(long **)(lVar9 + 8) = plVar12;
                  *(long *)(lVar9 + 0x10) = lVar9;
                  *(undefined8 *)(lVar9 + 0x18) = 0x590;
                  *(undefined8 *)(lVar9 + 0x20) = 8;
                  *(long *)(lVar10 + 0x80) = *(long *)(lVar10 + 0x80) + -1;
                  if (lVar9 != 0) {
                    (**(code **)(*(long *)(lVar9 + 0x48) + 0x10))();
                  }
                  if (*(long *)(lVar6 + 0x1c8) != 0) {
                    (**(code **)(*(long *)(*(long *)(lVar6 + 0x1c8) + 0x48) + 0x18))();
                    *(undefined8 *)(lVar6 + 0x1c8) = 0;
                  }
                  plVar12 = local_70[0];
                  *(long *)(lVar6 + 0x1c8) = lVar9;
                  local_278 = 0xb01000002d0;
                  uStack_270 = 0x800000008;
                  local_260 = 1;
                  local_290 = 0;
                  uStack_288 = 0x43800000780;
                  local_268 = 0x100000b01;
                  local_25c = 0;
                  local_258 = 0;
                  local_280 = 0x50000000b01;
                  lVar10 = nn::os::GetTlsValue(*(undefined4 *)puVar5);
                  if (*(ulong *)(lVar10 + 0x80) < 0x10) {
                    *(long **)(lVar10 + *(ulong *)(lVar10 + 0x80) * 8) = plVar12;
                    *(long *)(lVar10 + 0x80) = *(long *)(lVar10 + 0x80) + 1;
                    lVar9 = (**(code **)(*plVar12 + 0x10))(plVar12,0x4a8,8);
                    if (lVar9 == 0) {
                      (**(code **)(*plVar12 + 0xb8))(plVar12);
                    }
                    FUN_006fdd90(lVar9,&local_290);
                    *(long **)(lVar9 + 8) = plVar12;
                    *(long *)(lVar9 + 0x10) = lVar9;
                    *(undefined8 *)(lVar9 + 0x18) = 0x4a8;
                    *(undefined8 *)(lVar9 + 0x20) = 8;
                    *(long *)(lVar10 + 0x80) = *(long *)(lVar10 + 0x80) + -1;
                    if (lVar9 != 0) {
                      (**(code **)(*(long *)(lVar9 + 0x48) + 0x10))();
                    }
                    if (*(long *)(lVar6 + 0x1b8) != 0) {
                      (**(code **)(*(long *)(*(long *)(lVar6 + 0x1b8) + 0x48) + 0x18))();
                      *(undefined8 *)(lVar6 + 0x1b8) = 0;
                    }
                    plVar12 = local_70[0];
                    *(long *)(lVar6 + 0x1b8) = lVar9;
                    lVar10 = nn::os::GetTlsValue(*(undefined4 *)puVar5);
                    if (*(ulong *)(lVar10 + 0x80) < 0x10) {
                      *(long **)(lVar10 + *(ulong *)(lVar10 + 0x80) * 8) = plVar12;
                      *(long *)(lVar10 + 0x80) = *(long *)(lVar10 + 0x80) + 1;
                      lVar9 = (**(code **)(*plVar12 + 0x10))(plVar12,0x4a8,8);
                      if (lVar9 == 0) {
                        (**(code **)(*plVar12 + 0xb8))(plVar12);
                      }
                      FUN_006fdd90(lVar9,&local_290);
                      *(long **)(lVar9 + 8) = plVar12;
                      *(long *)(lVar9 + 0x10) = lVar9;
                      *(undefined8 *)(lVar9 + 0x18) = 0x4a8;
                      *(undefined8 *)(lVar9 + 0x20) = 8;
                      *(long *)(lVar10 + 0x80) = *(long *)(lVar10 + 0x80) + -1;
                      if (lVar9 != 0) {
                        (**(code **)(*(long *)(lVar9 + 0x48) + 0x10))();
                      }
                      if (*(long *)(lVar6 + 0x1c0) != 0) {
                        (**(code **)(*(long *)(*(long *)(lVar6 + 0x1c0) + 0x48) + 0x18))();
                        *(undefined8 *)(lVar6 + 0x1c0) = 0;
                      }
                      *(long *)(lVar6 + 0x1c0) = lVar9;
                      *(undefined8 *)(lVar11 + 0x98) = 0x3f0000003f000000;
                      *(undefined8 *)(lVar11 + 0xa0) = 0x3f8000003f000000;
                      *(undefined8 *)(lVar7 + 0x98) = 0xff00008080;
                      *(undefined8 *)(lVar7 + 0xa0) = 0xffff00000000;
                      *(undefined8 *)(lVar8 + 0x98) = 0;
                      *(undefined8 *)(lVar8 + 0xa0) = 0;
                      lVar10 = *(long *)(lVar6 + 0x28);
                      if (lVar10 != 0) {
                        (**(code **)(*(long *)(lVar10 + 0x48) + 0x10))();
                      }
                      if (*(long *)(lVar6 + 0x208) != 0) {
                        (**(code **)(*(long *)(*(long *)(lVar6 + 0x208) + 0x48) + 0x18))();
                        *(undefined8 *)(lVar6 + 0x208) = 0;
                      }
                      *(long *)(lVar6 + 0x208) = lVar10;
                      lVar10 = *(long *)(lVar6 + 0x140);
                      *(undefined4 *)(lVar6 + 0x210) = 2;
                      if (lVar10 != 0) {
                        (**(code **)(*(long *)(lVar10 + 0x48) + 0x10))();
                      }
                      lVar9 = *(long *)(lVar6 + 0x1d0);
                      *(long *)(lVar6 + 0x1d0) = lVar10;
                      if (lVar9 != 0) {
                        (**(code **)(*(long *)(lVar9 + 0x48) + 0x18))();
                      }
                      lVar10 = *(long *)(lVar6 + 0x148);
                      if (lVar10 != 0) {
                        (**(code **)(*(long *)(lVar10 + 0x48) + 0x10))();
                      }
                      lVar9 = *(long *)(lVar6 + 0x1d8);
                      *(long *)(lVar6 + 0x1d8) = lVar10;
                      if (lVar9 != 0) {
                        (**(code **)(*(long *)(lVar9 + 0x48) + 0x18))();
                      }
                      FUN_010647a0(local_2b0,local_88 + 1,local_70[0],lVar6 + 0x198);
                      if (*(long *)(lVar6 + 0x160) != 0) {
                        (**(code **)(*(long *)(*(long *)(lVar6 + 0x160) + 0x48) + 0x18))();
                        *(undefined8 *)(lVar6 + 0x160) = 0;
                      }
                      *(long *)(lVar6 + 0x160) = local_2b0[0];
                      *(undefined4 *)(local_2b0[0] + 0x140) = 0xfffffff7;
                      (**(code **)(**(long **)(lVar6 + 0x160) + 0x70))
                                (*(long **)(lVar6 + 0x160),1,0);
                      FUN_01052900(*(undefined8 *)(lVar6 + 0x160),1);
                      FUN_01052970(*(undefined8 *)(lVar6 + 0x160));
                      lVar10 = *(long *)(lVar6 + 0x140);
                      *(undefined4 *)(lVar6 + 0x210) = 2;
                      if (lVar10 != 0) {
                        (**(code **)(*(long *)(lVar10 + 0x48) + 0x10))();
                      }
                      lVar9 = *(long *)(lVar6 + 0x1d0);
                      *(long *)(lVar6 + 0x1d0) = lVar10;
                      if (lVar9 != 0) {
                        (**(code **)(*(long *)(lVar9 + 0x48) + 0x18))();
                      }
                      lVar10 = *(long *)(lVar6 + 0x148);
                      if (lVar10 != 0) {
                        (**(code **)(*(long *)(lVar10 + 0x48) + 0x10))();
                      }
                      lVar9 = *(long *)(lVar6 + 0x1d8);
                      *(long *)(lVar6 + 0x1d8) = lVar10;
                      if (lVar9 != 0) {
                        (**(code **)(*(long *)(lVar9 + 0x48) + 0x18))();
                      }
                      FUN_010647a0(local_2b0,local_88 + 1,local_70[0],lVar6 + 0x198);
                      if (*(long *)(lVar6 + 0x168) != 0) {
                        (**(code **)(*(long *)(*(long *)(lVar6 + 0x168) + 0x48) + 0x18))();
                        *(undefined8 *)(lVar6 + 0x168) = 0;
                      }
                      *(long *)(lVar6 + 0x168) = local_2b0[0];
                      *(undefined4 *)(local_2b0[0] + 0x140) = 0xfffffff8;
                      (**(code **)(**(long **)(lVar6 + 0x168) + 0x70))
                                (*(long **)(lVar6 + 0x168),1,0);
                      FUN_01052900(*(undefined8 *)(lVar6 + 0x168),1);
                      FUN_01052970(*(undefined8 *)(lVar6 + 0x168));
                      lVar10 = *(long *)(lVar6 + 0x208);
                      *(undefined4 *)(lVar6 + 0x210) = 1;
                      *(undefined8 *)(lVar6 + 0x208) = 0;
                      if (lVar10 != 0) {
                        (**(code **)(*(long *)(lVar10 + 0x48) + 0x18))();
                      }
                      FUN_01052de0(*(undefined8 *)(lVar6 + 0x160),0);
                      FUN_01052de0(*(undefined8 *)(lVar6 + 0x168),1);
                      (**(code **)(**(long **)(lVar6 + 0x168) + 0x70))
                                (*(long **)(lVar6 + 0x168),0,0);
                      FUN_01064460(local_2b0,local_70[0],0);
                      if (*(long *)(lVar6 + 0x170) != 0) {
                        (**(code **)(*(long *)(*(long *)(lVar6 + 0x170) + 0x48) + 0x18))();
                        *(undefined8 *)(lVar6 + 0x170) = 0;
                      }
                      *(long *)(lVar6 + 0x170) = local_2b0[0];
                      *(undefined4 *)(local_2b0[0] + 0x140) = 0x40;
                      (**(code **)(**(long **)(lVar6 + 0x170) + 0x68))(*(long **)(lVar6 + 0x170),1);
                      FUN_01064460(local_2b0,local_70[0],0);
                      if (*(long *)(lVar6 + 0x178) != 0) {
                        (**(code **)(*(long *)(*(long *)(lVar6 + 0x178) + 0x48) + 0x18))();
                        *(undefined8 *)(lVar6 + 0x178) = 0;
                      }
                      *(long *)(lVar6 + 0x178) = local_2b0[0];
                      *(undefined4 *)(local_2b0[0] + 0x140) = 0x50;
                      (**(code **)(**(long **)(lVar6 + 0x178) + 0x68))(*(long **)(lVar6 + 0x178),1);
                      FUN_01064460(local_2b0,local_70[0],1);
                      if (*(long *)(lVar6 + 0x180) != 0) {
                        (**(code **)(*(long *)(*(long *)(lVar6 + 0x180) + 0x48) + 0x18))();
                        *(undefined8 *)(lVar6 + 0x180) = 0;
                      }
                      *(long *)(lVar6 + 0x180) = local_2b0[0];
                      *(undefined4 *)(local_2b0[0] + 0x140) = 0x60;
                      (**(code **)(**(long **)(lVar6 + 0x180) + 0x68))(*(long **)(lVar6 + 0x180),1);
                      uVar13 = *(undefined8 *)(lVar6 + 0x180);
                      FUN_006cf0a0(local_2b0,PTR_DAT_02715928);
                      lVar10 = FUN_007029e0(uVar13,local_2b0);
                      if (local_298 != 0) {
                        (**(code **)(*(long *)(local_298 + 0x48) + 0x18))();
                        local_298 = 0;
                      }
                      if (lVar10 != 0) {
                        *(undefined1 *)(lVar10 + 0x1ac) = 1;
                        FUN_01064460(local_2b0,local_70[0],0);
                        if (*(long *)(lVar6 + 0x188) != 0) {
                          (**(code **)(*(long *)(*(long *)(lVar6 + 0x188) + 0x48) + 0x18))();
                          *(undefined8 *)(lVar6 + 0x188) = 0;
                        }
                        *(long *)(lVar6 + 0x188) = local_2b0[0];
                        *(undefined4 *)(local_2b0[0] + 0x140) = 0x46;
                        (**(code **)(**(long **)(lVar6 + 0x188) + 0x68))
                                  (*(long **)(lVar6 + 0x188),1);
                        uVar13 = *(undefined8 *)(lVar6 + 0x188);
                        FUN_006cf0a0(local_2b0,PTR_DAT_02715928);
                        lVar10 = FUN_007029e0(uVar13,local_2b0);
                        if (local_298 != 0) {
                          (**(code **)(*(long *)(local_298 + 0x48) + 0x18))();
                          local_298 = 0;
                        }
                        if (lVar10 != 0) {
                          *(undefined1 *)(lVar10 + 0x1ac) = 1;
                          FUN_01051350(local_2b0,local_88 + 1,local_70[0],PTR_DAT_02719520);
                          plVar12 = *(long **)(lVar6 + 400);
                          if (plVar12 != (long *)0x0) {
                            lVar10 = plVar12[0xb];
                            piVar1 = (int *)(lVar10 + 0x54);
                            do {
                              iVar2 = *piVar1;
                              cVar3 = '\x01';
                              bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
                              if (bVar4) {
                                *piVar1 = iVar2 + -1;
                                cVar3 = ExclusiveMonitorsStatus();
                              }
                            } while (cVar3 != '\0');
                            if (iVar2 + -1 == 0) {
                              *(undefined8 *)(lVar10 + 0x60) = 0;
                              (**(code **)(*plVar12 + 0x18))();
                            }
                            *(undefined8 *)(lVar6 + 400) = 0;
                          }
                          *(long *)(lVar6 + 400) = local_2b0[0];
                          lVar10 = *(long *)(local_2b0[0] + 0x1a8);
                          *(undefined8 *)(lVar10 + 0xf0) = 0;
                          *(undefined8 *)(lVar10 + 0xf8) = 0;
                          uVar13 = _DAT_01d4a310;
                          lVar10 = *(long *)(*(long *)(lVar6 + 400) + 0x1a8);
                          *(undefined8 *)(lVar10 + 0xe8) = _UNK_01d4a318;
                          *(undefined8 *)(lVar10 + 0xe0) = uVar13;
                          *(undefined4 *)
                           (*(long *)(*(long *)(*(long *)(lVar6 + 400) + 0x1a8) + 0xa0) + 200) =
                               0x41800000;
                          *(undefined4 *)
                           (*(long *)(*(long *)(*(long *)(lVar6 + 400) + 0x1a8) + 0xa0) + 0xcc) =
                               0x48435000;
                          *(float *)(*(long *)(*(long *)(*(long *)(lVar6 + 400) + 0x1a8) + 0xa0) +
                                    0xd0) =
                               (*(float *)PTR_FloatPi_02715160 /
                               *(float *)PTR_FloatDegree180_027194f0) * 30.0;
                          FUN_0070cf00(*(undefined8 *)(lVar6 + 400),*(undefined8 *)(lVar6 + 0x188));
                          (**(code **)(*(long *)(lVar8 + 0x48) + 0x18))((long *)(lVar8 + 0x48));
                          (**(code **)(*(long *)(lVar7 + 0x48) + 0x18))((long *)(lVar7 + 0x48));
                          (**(code **)(*(long *)(lVar11 + 0x48) + 0x18))((long *)(lVar11 + 0x48));
                          return;
                        }
                      }
                    /* WARNING: Subroutine does not return */
                      nn::diag::detail::AbortImpl("","","",0);
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


