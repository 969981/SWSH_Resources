/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00a4c390; name: FUN_00a4c390
 */


void FUN_00a4c390(long param_1,long *param_2,long param_3,undefined4 param_4,undefined4 param_5,
                 undefined4 param_6,uint param_7,uint param_8,byte param_9)

{
  ulong *puVar1;
  undefined4 uVar2;
  char cVar3;
  int iVar4;
  bool bVar5;
  undefined1 uVar6;
  int iVar7;
  undefined8 uVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  int iVar12;
  int iVar13;
  int iVar14;
  uint uVar15;
  uint uVar16;
  ulong uVar17;
  uint *puVar18;
  int iVar19;
  int iVar20;
  long lVar21;
  char *pcVar22;
  uint local_2b8;
  int local_2b4;
  int local_2b0;
  uint local_2ac;
  undefined8 local_2a0;
  undefined8 local_298;
  ulong local_290;
  undefined8 local_288;
  undefined4 local_280;
  undefined4 uStack_27c;
  byte local_278;
  undefined4 local_274;
  undefined8 local_270;
  undefined1 local_268 [8];
  undefined *local_260;
  long local_258 [3];
  undefined8 local_240;
  undefined4 local_238;
  undefined1 local_234 [4];
  undefined8 local_230;
  undefined2 local_228 [4];
  undefined8 local_220;
  undefined1 local_218;
  undefined *local_210;
  undefined8 uStack_208;
  undefined8 local_200;
  undefined8 uStack_1f8;
  undefined8 local_1f0;
  undefined4 local_1e8;
  undefined1 local_1e4;
  undefined8 local_1e0;
  undefined2 local_1d8;
  undefined8 local_1d0;
  undefined1 local_1c8;
  undefined *local_1c0;
  undefined8 uStack_1b8;
  undefined8 local_1b0;
  undefined8 uStack_1a8;
  undefined8 local_1a0;
  undefined4 local_198;
  undefined1 local_194;
  undefined4 local_190;
  undefined4 local_18c;
  undefined2 local_188;
  undefined8 local_180;
  undefined1 local_178;
  undefined *local_170;
  undefined8 uStack_168;
  undefined8 local_160;
  undefined8 uStack_158;
  undefined4 local_150;
  undefined4 local_14c;
  undefined4 local_148;
  undefined1 local_144;
  undefined4 local_140;
  undefined4 local_13c;
  undefined2 local_138;
  undefined8 local_130;
  undefined1 local_128;
  undefined *local_120;
  undefined8 uStack_118;
  undefined8 local_110;
  undefined8 uStack_108;
  undefined4 local_100;
  undefined4 local_fc;
  undefined4 local_f8;
  undefined1 local_f4;
  undefined4 local_f0;
  undefined4 local_ec;
  undefined2 local_e8;
  undefined8 local_e0;
  undefined1 local_d8;
  undefined *local_d0;
  undefined8 local_c8;
  undefined8 local_c0;
  undefined8 local_b8;
  undefined4 local_b0;
  undefined4 local_ac;
  undefined4 local_a8;
  undefined1 local_a4;
  undefined4 local_a0;
  undefined4 local_9c;
  undefined2 local_98;
  undefined8 local_90;
  undefined8 local_88;
  undefined8 local_80;
  undefined8 local_78;
  undefined8 local_70;
  
  local_80 = DAT_02154a3c;
  local_270 = 0;
  local_268[0] = 0;
  local_88 = DAT_02154a34;
  local_90 = DAT_02154a2c;
  local_238 = 0;
  local_258[1] = 0;
  local_258[2] = 0;
  local_234[0] = 0;
  local_260 = PTR_DAT_02718ea0 + 0x10;
  local_240 = 0xff000000ff;
  local_1f0 = 0xff000000ff;
  local_1a0 = 0xff000000ff;
  local_230 = 1;
  local_228[0] = 0;
  local_220 = 0;
  local_218 = 0;
  local_1e8 = 0;
  local_1e4 = 0;
  local_1e0 = 1;
  local_1d8 = 0;
  local_1d0 = 0;
  local_1c8 = 0;
  local_198 = 0;
  local_194 = 0;
  local_190 = 1;
  local_188 = 0;
  local_18c = 0;
  local_180 = 0;
  local_178 = 0;
  local_150 = 0xff;
  local_14c = 0xff;
  local_148 = 0;
  local_144 = 0;
  local_140 = 1;
  local_138 = 0;
  local_13c = 0;
  local_130 = 0;
  local_128 = 0;
  local_100 = 0xff;
  local_fc = 0xff;
  local_f8 = 0;
  local_f4 = 0;
  local_f0 = 1;
  local_e8 = 0;
  local_ec = 0;
  local_e0 = 0;
  local_d8 = 0;
  local_b8 = 0;
  local_c0 = 0;
  local_c8 = 0;
  local_b0 = 0xff;
  local_ac = 0xff;
  local_a8 = 0;
  local_a4 = 0;
  local_a0 = 1;
  local_98 = 0;
  local_9c = 0;
  local_258[0] = 0;
  uStack_208 = 0;
  local_200 = 0;
  uStack_1f8 = 0;
  uStack_1b8 = 0;
  local_1b0 = 0;
  uStack_1a8 = 0;
  uStack_168 = 0;
  local_160 = 0;
  uStack_158 = 0;
  uStack_118 = 0;
  local_110 = 0;
  uStack_108 = 0;
  *(long **)(param_1 + 0x628) = param_2;
  local_210 = local_260;
  local_1c0 = local_260;
  local_170 = local_260;
  local_120 = local_260;
  local_d0 = local_260;
  uVar8 = FUN_016b8190(*(undefined8 *)(param_1 + 0x5d8));
  *(undefined8 *)(param_1 + 0x6f8) = uVar8;
  uVar16 = (uint)local_90;
  uVar17 = (ulong)(int)(uint)local_90;
  lVar21 = param_1 + 0x5e0;
  FUN_016b76f0(*(undefined8 *)(param_1 + 0x5d8),*(long *)(lVar21 + uVar17 * 8) + 0x60);
  FUN_016b76f0(*(undefined8 *)(param_1 + 0x5d8),*(long *)(lVar21 + (long)local_90._4_4_ * 8) + 0x60)
  ;
  FUN_016b76f0(*(undefined8 *)(param_1 + 0x5d8),*(long *)(lVar21 + (long)(int)local_88 * 8) + 0x60);
  FUN_016b76f0(*(undefined8 *)(param_1 + 0x5d8),*(long *)(lVar21 + (long)local_88._4_4_ * 8) + 0x60)
  ;
  FUN_016b76f0(*(undefined8 *)(param_1 + 0x5d8),*(long *)(lVar21 + (long)(int)local_80 * 8) + 0x60);
  FUN_016b76f0(*(undefined8 *)(param_1 + 0x5d8),*(long *)(lVar21 + (long)local_80._4_4_ * 8) + 0x60)
  ;
  if ((param_8 & 1) == 0) {
    lVar21 = 0;
    local_2b4 = 0;
    local_2b0 = 0;
    puVar18 = (uint *)((ulong)&local_90 | 4);
    while (uVar16 < 6) {
      uVar16 = (uint)uVar17;
      uVar2 = *(undefined4 *)(&DAT_02154a60 + (long)(int)uVar16 * 4);
      uVar6 = (**(code **)(*param_2 + 0x8e8))(param_2,uVar2);
      *(long **)(local_268 + lVar21 + -8) = param_2;
      local_268[lVar21] = uVar6;
      *(undefined4 *)((long)local_258 + lVar21 + 0x18) = param_4;
      *(undefined4 *)((long)local_258 + lVar21 + 0x1c) = uVar2;
      lVar9 = (**(code **)(*param_2 + 0x7f8))(param_2,uVar2);
      if (lVar9 == 0) {
        lVar11 = 0;
      }
      else {
        lVar10 = FUN_00a0a7b0(param_2,lVar9);
        lVar11 = lVar9;
        if (lVar10 != 0) {
          lVar11 = lVar10;
        }
      }
      *(long *)((long)local_258 + lVar21) = lVar9;
      *(long *)((long)local_258 + lVar21 + 8) = lVar11;
      *(long *)((long)local_258 + lVar21 + 0x10) = lVar9;
      *(undefined4 *)(local_234 + lVar21 + -4) = param_5;
      local_234[lVar21] = 0;
      if ((param_7 & 1) != 0) {
        local_274 = 1;
        local_278 = 0;
        local_288 = param_2;
        local_280 = param_6;
        uStack_27c = param_5;
        local_278 = FUN_00a0a290(uVar2);
        local_278 = local_278 & 1;
        uVar17 = FUN_00a395a0(&local_288,uVar2);
        if ((uVar17 & 1) != 0) {
          *(undefined1 *)((long)local_228 + lVar21 + -4) = 1;
          *(undefined4 *)(local_234 + lVar21 + 4) = local_274;
        }
      }
      FUN_00a4e280(*(undefined8 *)(param_1 + (long)(int)uVar16 * 0x20 + 0x638),
                   local_268 + lVar21 + -8);
      if (*(long *)((long)local_258 + lVar21) != 0) {
        if ((uVar16 | 1) == 5) {
          local_2b0 = local_2b0 + 1;
        }
        else {
          local_2b4 = local_2b4 + 1;
        }
      }
      if (lVar21 == 400) goto LAB_00a4c838;
      uVar16 = *puVar18;
      uVar17 = (ulong)uVar16;
      lVar21 = lVar21 + 0x50;
      puVar18 = puVar18 + 1;
    }
  }
  else {
    lVar21 = 0;
    local_2b4 = 0;
    local_2b0 = 0;
    puVar18 = (uint *)((ulong)&local_90 | 4);
    while (uVar16 < 6) {
      uVar15 = (uint)uVar17;
      uVar16 = *(uint *)(&DAT_02154a60 + (long)(int)uVar15 * 4);
      uVar17 = (ulong)uVar16;
      uVar6 = (**(code **)(*param_2 + 0x8e8))(param_2,uVar17);
      *(long **)(local_268 + lVar21 + -8) = param_2;
      local_268[lVar21] = uVar6;
      *(undefined4 *)((long)local_258 + lVar21 + 0x18) = param_4;
      *(uint *)((long)local_258 + lVar21 + 0x1c) = uVar16;
      lVar9 = (**(code **)(*param_2 + 0x7f8))(param_2,uVar17);
      if (lVar9 == 0) {
        lVar11 = 0;
      }
      else {
        lVar10 = FUN_00a0a7b0(param_2,lVar9);
        lVar11 = lVar9;
        if (lVar10 != 0) {
          lVar11 = lVar10;
        }
      }
      *(long *)((long)local_258 + lVar21) = lVar9;
      *(long *)((long)local_258 + lVar21 + 8) = lVar11;
      *(long *)((long)local_258 + lVar21 + 0x10) = lVar9;
      *(undefined4 *)(local_234 + lVar21 + -4) = param_5;
      local_234[lVar21] = *(undefined1 *)(param_3 + uVar17 + 0x78);
      if ((param_7 & 1) != 0) {
        local_274 = 1;
        local_278 = 0;
        local_288 = param_2;
        local_280 = param_6;
        uStack_27c = param_5;
        local_278 = FUN_00a0a290(uVar16);
        local_278 = local_278 & 1;
        uVar17 = FUN_00a395a0(&local_288,uVar17);
        if ((uVar17 & 1) != 0) {
          *(undefined1 *)((long)local_228 + lVar21 + -4) = 1;
          *(undefined4 *)(local_234 + lVar21 + 4) = local_274;
        }
      }
      FUN_00a4e280(*(undefined8 *)(param_1 + (long)(int)uVar15 * 0x20 + 0x638),
                   local_268 + lVar21 + -8);
      if (*(long *)((long)local_258 + lVar21) != 0) {
        if ((uVar15 | 1) == 5) {
          local_2b0 = local_2b0 + 1;
        }
        else {
          local_2b4 = local_2b4 + 1;
        }
      }
      if (lVar21 == 400) goto LAB_00a4c838;
      uVar16 = *puVar18;
      uVar17 = (ulong)uVar16;
      lVar21 = lVar21 + 0x50;
      puVar18 = puVar18 + 1;
    }
  }
  goto LAB_00a4cca0;
LAB_00a4c838:
  if ((local_2b0 != 0) && (local_2b4 != 0)) {
    puVar1 = (ulong *)(param_1 + 0x6f8);
    iVar7 = FUN_016b7980(*(undefined8 *)(param_1 + 0x5d8));
    iVar14 = 0;
    if (local_2b4 != 0) {
      iVar14 = iVar7 / local_2b4;
    }
    iVar4 = 0;
    if (local_2b0 != 0) {
      iVar4 = iVar7 / local_2b0;
    }
    if ((param_9 & 1) == 0) {
      bVar5 = false;
      puVar18 = (uint *)&local_90;
      local_2ac = 0;
      local_2b8 = 0;
      lVar21 = 0;
      do {
        if (*(char *)((long)local_228 + lVar21 * 0x50 + -3) != '\0') {
          local_290 = *(ulong *)(*(long *)(param_1 + (long)(int)*puVar18 * 8 + 0x5e0) + 0x60);
          if ((*puVar18 | 1) == 5) {
            local_298 = (ulong)local_2ac;
            local_2ac = local_2ac + iVar4;
            iVar7 = iVar4;
          }
          else {
            local_298 = CONCAT44(1,local_2b8);
            local_2b8 = local_2b8 + iVar14;
            iVar7 = iVar14;
          }
          local_2a0 = CONCAT44(1,iVar7);
          FUN_016b7620(*(undefined8 *)(param_1 + 0x5d8),&local_290,&local_298,&local_2a0);
          uVar8 = *(undefined8 *)(param_1 + 0x5d8);
          pcVar22 = (char *)((long)local_228 + lVar21 * 0x50 + -1);
          cVar3 = *pcVar22;
          local_288 = (long *)0x0;
          local_70 = 0;
          FUN_016b7700(uVar8,&local_290,&local_288,&local_70);
          if (0 < local_70._4_4_) {
            uVar17 = local_70 & 0xffffffff;
            iVar20 = local_70._4_4_;
            iVar7 = (int)local_288;
            iVar13 = local_288._4_4_;
            iVar19 = local_288._4_4_;
            do {
              if (0 < (int)uVar17) {
                do {
                  local_78 = CONCAT44(iVar19,iVar7);
                  FUN_016b81d0(uVar8,&local_78,cVar3 != '\0');
                  uVar17 = local_70 & 0xffffffff;
                  iVar7 = iVar7 + 1;
                } while (iVar7 < (int)local_70 + (int)local_288);
                iVar20 = local_70._4_4_;
                iVar7 = (int)local_288;
                iVar13 = local_288._4_4_;
              }
              iVar19 = iVar19 + 1;
            } while (iVar19 < iVar13 + iVar20);
          }
          bVar5 = *pcVar22 != '\0' || bVar5;
        }
        puVar18 = puVar18 + 1;
        lVar21 = lVar21 + 1;
      } while (puVar18 != (uint *)&local_78);
    }
    else {
      bVar5 = false;
      puVar18 = (uint *)&local_90;
      local_2b8 = 0;
      iVar7 = 0;
      lVar21 = 0;
      do {
        if (*(char *)((long)local_228 + lVar21 * 0x50 + -3) != '\0') {
          local_290 = *(ulong *)(*(long *)(param_1 + (long)(int)*puVar18 * 8 + 0x5e0) + 0x60);
          if ((*puVar18 | 1) == 5) {
            local_298 = (ulong)local_2b8;
            local_2b8 = local_2b8 + iVar4;
            iVar19 = iVar4;
          }
          else {
            local_298 = CONCAT44(1,iVar7);
            iVar7 = iVar7 + iVar14;
            iVar19 = iVar14;
          }
          local_2a0 = CONCAT44(1,iVar19);
          FUN_016b7620(*(undefined8 *)(param_1 + 0x5d8),&local_290,&local_298,&local_2a0);
          uVar8 = *(undefined8 *)(param_1 + 0x5d8);
          pcVar22 = (char *)((long)local_228 + lVar21 * 0x50 + -1);
          cVar3 = *pcVar22;
          local_288 = (long *)0x0;
          local_70 = 0;
          FUN_016b7700(uVar8,&local_290,&local_288,&local_70);
          if (0 < local_70._4_4_) {
            uVar17 = local_70 & 0xffffffff;
            iVar13 = local_70._4_4_;
            iVar19 = (int)local_288;
            iVar12 = local_288._4_4_;
            iVar20 = local_288._4_4_;
            do {
              if (0 < (int)uVar17) {
                do {
                  local_78 = CONCAT44(iVar20,iVar19);
                  FUN_016b81d0(uVar8,&local_78,cVar3 != '\0');
                  uVar17 = local_70 & 0xffffffff;
                  iVar19 = iVar19 + 1;
                } while (iVar19 < (int)local_70 + (int)local_288);
                iVar13 = local_70._4_4_;
                iVar19 = (int)local_288;
                iVar12 = local_288._4_4_;
              }
              iVar20 = iVar20 + 1;
            } while (iVar20 < iVar12 + iVar13);
          }
          cVar3 = *pcVar22;
          if ((cVar3 != '\0' || bVar5) && (*(char *)(local_228 + lVar21 * 0x28) != '\0')) {
            *puVar1 = local_298;
          }
          bVar5 = cVar3 != '\0' || bVar5;
        }
        puVar18 = puVar18 + 1;
        lVar21 = lVar21 + 1;
      } while (puVar18 != (uint *)&local_78);
    }
    local_288 = (long *)0x0;
    local_70 = 0;
    if ((bVar5) && ((param_9 & 1) != 0)) {
      local_78 = FUN_016b7950(*(undefined8 *)(param_1 + 0x5d8),puVar1);
      FUN_016b7700(*(undefined8 *)(param_1 + 0x5d8),&local_78,&local_288,&local_70);
      if (1 < (int)local_70) {
        iVar14 = 0;
        local_290 = (ulong)CONCAT14(local_288._4_4_ == 0,*(undefined4 *)puVar1);
        do {
          uVar17 = FUN_016b8210(*(undefined8 *)(param_1 + 0x5d8),&local_290);
          if ((uVar17 & 1) != 0) {
            *(int *)puVar1 = (int)local_290;
            uVar8 = *(undefined8 *)(param_1 + 0x5d8);
            goto joined_r0x00a4cc44;
          }
          local_290 = CONCAT44(local_290._4_4_,(int)local_290 + 1);
          iVar14 = iVar14 + 1;
        } while (iVar14 < (int)local_70);
      }
    }
    uVar8 = *(undefined8 *)(param_1 + 0x5d8);
joined_r0x00a4cc44:
    if (bVar5) {
      FUN_016b2d70(uVar8,1);
      FUN_016b2d70(*(undefined8 *)(param_1 + 0x618),0);
      *(undefined1 *)(param_1 + 0x630) = 1;
    }
    else {
      FUN_016b2d70(uVar8,0);
      FUN_016b2d70(*(undefined8 *)(param_1 + 0x618),1);
      *(undefined1 *)(param_1 + 0x630) = 0;
      *(byte *)(*(long *)(param_1 + 0x620) + 0x58) =
           *(byte *)(*(long *)(param_1 + 0x620) + 0x58) & 0xfe;
    }
    FUN_019a65b0(*(undefined8 *)(param_1 + 0x700));
    FUN_019a65b0(*(undefined8 *)(param_1 + 0x708));
    return;
  }
LAB_00a4cca0:
                    /* WARNING: Subroutine does not return */
  nn::diag::detail::AbortImpl("","","",0);
}


