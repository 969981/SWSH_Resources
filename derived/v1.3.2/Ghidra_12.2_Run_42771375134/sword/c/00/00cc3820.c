/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00cc3820; name: FUN_00cc3820
 */


void FUN_00cc3820(undefined1 *param_1,ulong *param_2)

{
  undefined1 uVar1;
  int iVar2;
  byte bVar3;
  long lVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  undefined8 uVar7;
  uint uVar8;
  ulong uVar9;
  uint uVar10;
  long lVar11;
  ulong local_300;
  uint local_2f4;
  uint local_2f0 [4];
  uint uStack_2e0;
  uint local_2dc;
  uint local_2d8;
  uint local_2d4;
  uint local_2d0;
  uint local_2cc;
  uint local_2c8;
  uint uStack_2c4;
  uint local_2c0;
  uint uStack_2bc;
  byte local_2b8;
  undefined2 local_2b7;
  undefined1 local_2b5;
  undefined2 local_2b4;
  undefined1 local_2b2;
  undefined1 local_2b1;
  undefined8 local_2b0;
  undefined8 uStack_2a8;
  undefined8 local_2a0;
  undefined8 uStack_298;
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
  undefined8 local_228;
  undefined8 uStack_220;
  undefined8 local_218;
  undefined8 uStack_210;
  undefined8 local_208;
  undefined8 local_200;
  undefined8 uStack_1f8;
  undefined4 local_1f0;
  undefined8 local_1e8;
  undefined8 uStack_1e0;
  undefined8 local_1d8;
  undefined8 uStack_1d0;
  undefined8 local_1c8;
  undefined8 local_1c0;
  undefined8 uStack_1b8;
  undefined4 local_1b0;
  uint local_1a8;
  undefined4 uStack_1a4;
  undefined4 uStack_1a0;
  undefined8 local_198;
  undefined8 local_190;
  undefined8 uStack_188;
  undefined8 local_180;
  undefined8 uStack_178;
  undefined4 local_170;
  
  local_1b0 = DAT_0215da9c;
  local_1c8 = DAT_0215da84;
  local_1d8 = DAT_0215da74;
  uStack_1d0 = DAT_0215da7c;
  local_1f0 = DAT_0215da9c;
  local_1e8 = DAT_0215da64;
  uStack_1e0 = DAT_0215da6c;
  local_208 = DAT_0215da84;
  local_1c0 = DAT_0215da8c;
  uStack_1b8 = DAT_0215da94;
  local_218 = DAT_0215da74;
  uStack_210 = DAT_0215da7c;
  local_228 = DAT_0215da64;
  uStack_220 = DAT_0215da6c;
  local_200 = DAT_0215da8c;
  uStack_1f8 = DAT_0215da94;
  if (param_1 != (undefined1 *)0x0) {
    local_2b8 = 0;
    local_2b1 = 0;
    puVar5 = (undefined8 *)FUN_00cbd3c0();
    local_2b0 = *puVar5;
    local_2b2 = 0;
    local_2b4 = 0;
    bVar3 = (byte)((uint)*param_2 >> 2);
    local_2b8 = bVar3 & 1;
    local_230 = 0xe2245280da0995c0;
    if ((*param_2 & 4) != 0) {
      local_230 = 0xeccce1e75b698c;
    }
    local_2f4 = CONCAT31(local_2f4._1_3_,bVar3) & 0xffffff01;
    local_1a8 = (uint)local_230;
    uStack_1a4 = (undefined4)((ulong)local_230 >> 0x20);
    local_300 = local_300 & 0xffffffffffffff00;
    uStack_2a8 = local_2b0;
    local_2a0 = local_2b0;
    uStack_298 = local_2b0;
    local_290 = local_2b0;
    uStack_288 = local_2b0;
    local_280 = local_2b0;
    uStack_278 = local_2b0;
    local_270 = local_2b0;
    uStack_268 = local_2b0;
    local_260 = local_2b0;
    uStack_258 = local_2b0;
    local_250 = local_2b0;
    uStack_248 = local_2b0;
    local_240 = local_2b0;
    uStack_238 = local_2b0;
    FUN_00cc1c90(&local_2b8,&local_1a8,&local_2f4,&local_300);
    local_2b5 = 0x30;
    local_2b7 = 0x3030;
    local_1a8 = local_1a8 & 0xffffff00;
    FUN_00cc1c90(&local_2b8,&local_230,&local_2b8,&local_1a8);
    puVar5 = &local_1e8;
    if (local_2b8 != 0) {
      puVar5 = &local_228;
    }
    memcpy(param_1,&local_2b8,0x90);
    if ((*param_2 & 3) == 0) {
      uVar8 = (uint)*param_2 >> 3 & 0x1f;
      if (uVar8 != 0x1f) {
        uVar9 = param_2[2];
        param_1[4] = (char)uVar8;
        uVar8 = (uint)(uVar9 >> 0x20);
        uVar10 = uVar8 >> 10 & 0x1f;
        if (uVar10 != 0x1f) {
          uVar8 = uVar8 >> 0xf & 0x1f;
          param_1[5] = (char)uVar10;
          if (uVar8 != 0x1f) {
            param_1[6] = (char)uVar8;
            uVar8 = (uint)*param_2 >> 0x14 & 0x3ff;
            uVar10 = (uint)(*param_2 >> 0x20);
            local_2f0[0] = uVar10 & 0x3ff;
            uStack_2bc = (uint)param_2[2];
            local_2f0[1] = uVar10 >> 10 & 0x3ff;
            local_2f0[2] = uVar10 >> 0x14 & 0x3ff;
            uVar10 = (uint)param_2[1];
            local_2f0[3] = uVar10 & 0x3ff;
            uStack_2e0 = uVar10 >> 10 & 0x3ff;
            local_2dc = uVar10 >> 0x14 & 0x3ff;
            uVar10 = (uint)(param_2[1] >> 0x20);
            local_2d8 = uVar10 & 0x3ff;
            local_2d4 = uVar10 >> 10 & 0x3ff;
            local_2d0 = uVar10 >> 0x14 & 0x3ff;
            uStack_2c4 = uStack_2bc >> 0x14 & 0x3ff;
            local_2cc = uStack_2bc & 0x3ff;
            local_2c8 = uStack_2bc >> 10 & 0x3ff;
            uStack_2bc = uStack_2bc >> 0x1e;
            local_2c0 = *(uint *)((long)param_2 + 0x14) & 0x3ff;
            lVar11 = *(long *)(*(long *)PTR_DAT_02710848 + 0x78);
            local_2f4 = uVar8;
            if (lVar11 != 0) {
              (**(code **)(*(long *)(lVar11 + 0x48) + 0x10))();
            }
            FUN_00c58c10(&local_1a8,lVar11);
            lVar4 = CONCAT44(uStack_1a4,local_1a8);
            if (lVar4 != 0) {
              (**(code **)(*(long *)(lVar4 + 0x48) + 0x18))();
              local_1a8 = 0;
              uStack_1a4 = 0;
            }
            if (lVar11 != 0) {
              (**(code **)(*(long *)(lVar11 + 0x48) + 0x18))((long *)(lVar11 + 0x48));
            }
            lVar11 = 0;
            while( true ) {
              iVar2 = (&DAT_0215da28)[lVar11];
              uVar1 = *param_1;
              uVar10 = *(uint *)((long)puVar5 + lVar11 * 4);
              puVar6 = (undefined8 *)FUN_00cbd3c0();
              if (uVar8 == 0) {
                *(undefined8 *)(param_1 + (long)iVar2 * 8 + 8) = *puVar6;
              }
              else {
                if (uVar10 <= uVar8 - 1) goto LAB_00cc3c58;
                local_1a8 = local_1a8 & 0xffffff00;
                uStack_1a4 = 0;
                uStack_1a0 = 0x3ff;
                local_170 = 0;
                local_180 = 0;
                uStack_178 = 0;
                local_198 = 0;
                local_190 = 0;
                uStack_188 = 0;
                uVar9 = FUN_00cc41e0(lVar4,uVar1,iVar2,uVar8 - 1,&local_1a8);
                if ((uVar9 & 1) == 0) goto LAB_00cc3c58;
                *(undefined8 *)(param_1 + (long)iVar2 * 8 + 8) = local_198;
              }
              if (0xe < lVar11 + 1U) break;
              uVar8 = local_2f0[lVar11];
              lVar11 = lVar11 + 1;
            }
            lVar11 = *(long *)(*(long *)PTR_DAT_02710848 + 0x78);
            if (lVar11 != 0) {
              (**(code **)(*(long *)(lVar11 + 0x48) + 0x10))();
            }
            FUN_00c58c20(&local_300,lVar11);
            FUN_00c62ba0(&local_1a8,local_300);
            uVar7 = FUN_00cbf670(*(undefined8 *)(&DAT_00001588 + CONCAT44(uStack_1a4,local_1a8)));
            uVar7 = FUN_00cbd310(uVar7,param_1[4]);
            *(undefined8 *)(param_1 + 8) = uVar7;
            if (CONCAT44(uStack_1a4,local_1a8) != 0) {
              (**(code **)(*(long *)(CONCAT44(uStack_1a4,local_1a8) + 0x48) + 0x18))();
              local_1a8 = 0;
              uStack_1a4 = 0;
            }
            if (local_300 != 0) {
              (**(code **)(*(long *)(local_300 + 0x48) + 0x18))();
              local_300 = 0;
            }
            if (lVar11 != 0) {
              (**(code **)(*(long *)(lVar11 + 0x48) + 0x18))((long *)(lVar11 + 0x48));
            }
            uVar9 = FUN_00c969b0(param_1);
            if ((uVar9 & 1) != 0) {
              bVar3 = 0;
              if (((uint)*param_2 >> 8 & 0xf) != 0xf) {
                bVar3 = (byte)(*param_2 >> 8) & 0xf | 0x30;
              }
              param_1[1] = bVar3;
              bVar3 = 0;
              if (((uint)*param_2 >> 0xc & 0xf) != 0xf) {
                bVar3 = (byte)((uint)*param_2 >> 0xc) & 0xf | 0x30;
              }
              param_1[2] = bVar3;
              bVar3 = 0;
              if ((*(ushort *)((long)param_2 + 2) & 0xf) != 0xf) {
                bVar3 = (byte)*(ushort *)((long)param_2 + 2) & 0xf | 0x30;
              }
              param_1[3] = bVar3;
              return;
            }
          }
        }
      }
LAB_00cc3c58:
      memcpy(param_1,&local_2b8,0x90);
    }
  }
  return;
}


