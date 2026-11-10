/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00fec3b0; name: FUN_00fec3b0
 */


void FUN_00fec3b0(long param_1)

{
  undefined4 uVar1;
  int iVar2;
  bool bVar3;
  long lVar4;
  undefined8 uVar5;
  code *pcVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  undefined8 local_180;
  code *local_178;
  undefined8 local_170;
  undefined8 uStack_168;
  undefined8 local_160;
  undefined8 uStack_158;
  undefined8 local_150;
  undefined8 uStack_148;
  undefined8 local_140;
  undefined8 uStack_138;
  undefined8 local_130;
  undefined8 uStack_128;
  undefined8 local_120;
  undefined8 uStack_118;
  undefined8 local_110;
  undefined8 uStack_108;
  long local_f8;
  undefined4 local_f0 [6];
  long local_d8;
  int local_d0;
  undefined4 local_cc;
  undefined1 auStack_c8 [28];
  undefined1 auStack_ac [28];
  undefined1 auStack_90 [32];
  long local_70 [2];
  
  lVar4 = FUN_016b7950(*(undefined8 *)(param_1 + 0x670));
  local_f0[0] = 0;
  if (lVar4 < -0x15e627e0dc20e2e3) {
    if (lVar4 < -0x15e62be0dc20e9af) {
      if (lVar4 < -0x15e62de0dc20ed15) {
        if (lVar4 == -0x15e636e0dc20fc60) {
          local_f0[0] = 8;
          pcVar6 = *(code **)(param_1 + 0x5d0);
          goto joined_r0x00fec600;
        }
        if (lVar4 == -0x15e635e0dc20faad) {
          local_f0[0] = 9;
          pcVar6 = *(code **)(param_1 + 0x5d0);
          goto joined_r0x00fec600;
        }
      }
      else {
        if (lVar4 == -0x15e62de0dc20ed15) {
          local_f0[0] = 1;
          pcVar6 = *(code **)(param_1 + 0x5d0);
          goto joined_r0x00fec600;
        }
        if (lVar4 == -0x15e62ce0dc20eb62) {
          local_f0[0] = 2;
          pcVar6 = *(code **)(param_1 + 0x5d0);
          goto joined_r0x00fec600;
        }
      }
    }
    else if (lVar4 < -0x15e629e0dc20e649) {
      if (lVar4 == -0x15e62be0dc20e9af) {
        local_f0[0] = 3;
        pcVar6 = *(code **)(param_1 + 0x5d0);
        goto joined_r0x00fec600;
      }
      if (lVar4 == -0x15e62ae0dc20e7fc) {
        local_f0[0] = 4;
        pcVar6 = *(code **)(param_1 + 0x5d0);
        goto joined_r0x00fec600;
      }
    }
    else {
      if (lVar4 == -0x15e629e0dc20e649) {
        local_f0[0] = 5;
        pcVar6 = *(code **)(param_1 + 0x5d0);
        goto joined_r0x00fec600;
      }
      if (lVar4 == -0x15e628e0dc20e496) {
        local_f0[0] = 6;
        pcVar6 = *(code **)(param_1 + 0x5d0);
        goto joined_r0x00fec600;
      }
    }
  }
  else if (lVar4 < -0x15e2a8e0dc1dd53f) {
    if (lVar4 < -0x15e2aae0dc1dd8a5) {
      if (lVar4 == -0x15e627e0dc20e2e3) {
        local_f0[0] = 7;
        pcVar6 = *(code **)(param_1 + 0x5d0);
        goto joined_r0x00fec600;
      }
      if (lVar4 == -0x15e2abe0dc1dda58) {
        local_f0[0] = 0xd;
        pcVar6 = *(code **)(param_1 + 0x5d0);
        goto joined_r0x00fec600;
      }
    }
    else {
      if (lVar4 == -0x15e2aae0dc1dd8a5) {
        local_f0[0] = 0xc;
        pcVar6 = *(code **)(param_1 + 0x5d0);
        goto joined_r0x00fec600;
      }
      if (lVar4 == -0x15e2a9e0dc1dd6f2) {
        local_f0[0] = 0xb;
        pcVar6 = *(code **)(param_1 + 0x5d0);
        goto joined_r0x00fec600;
      }
    }
  }
  else if (lVar4 < -0x15e2a5e0dc1dd026) {
    if (lVar4 == -0x15e2a8e0dc1dd53f) {
      local_f0[0] = 10;
      pcVar6 = *(code **)(param_1 + 0x5d0);
      goto joined_r0x00fec600;
    }
    if (lVar4 == -0x15e2a6e0dc1dd1d9) {
      local_f0[0] = 0x10;
      pcVar6 = *(code **)(param_1 + 0x5d0);
      goto joined_r0x00fec600;
    }
  }
  else {
    if (lVar4 == -0x15e2a5e0dc1dd026) {
      local_f0[0] = 0xf;
      pcVar6 = *(code **)(param_1 + 0x5d0);
      goto joined_r0x00fec600;
    }
    if (lVar4 == -0x15e2a4e0dc1dce73) {
      local_f0[0] = 0xe;
    }
  }
  pcVar6 = *(code **)(param_1 + 0x5d0);
joined_r0x00fec600:
  if (pcVar6 != (code *)0x0) {
    (*pcVar6)(&local_d0,param_1 + 0x5f0,local_f0);
    lVar4 = *(long *)(param_1 + 0x2b0);
    if (lVar4 != 0) {
      (**(code **)(*(long *)(lVar4 + 0x48) + 0x10))();
    }
    lVar7 = *(long *)(lVar4 + 0x2e8);
    if (lVar7 != 0) {
      (**(code **)(*(long *)(lVar7 + 0x48) + 0x10))();
    }
    lVar8 = *(long *)(lVar4 + 0x2e0);
    if (lVar8 != 0) {
      (**(code **)(*(long *)(lVar8 + 0x48) + 0x10))();
    }
    FUN_006cf0a0(local_f0,&DAT_02667c80);
    uVar5 = FUN_00ff93c0(param_1);
    FUN_00ff8620(local_70,uVar5,local_f0,10);
    lVar9 = *(long *)(local_70[0] + 0x60);
    if (lVar9 != 0) {
      (**(code **)(*(long *)(lVar9 + 0x48) + 0x10))();
    }
    if (local_70[0] != 0) {
      (**(code **)(*(long *)(local_70[0] + 0x48) + 0x18))();
      local_70[0] = 0;
    }
    if (local_d8 != 0) {
      (**(code **)(*(long *)(local_d8 + 0x48) + 0x18))();
      local_d8 = 0;
    }
    iVar2 = local_d0;
    if (local_d0 == 0) {
      local_f8 = lVar9;
      if (lVar9 != 0) {
        (**(code **)(*(long *)(lVar9 + 0x48) + 0x10))();
      }
      FUN_008c4e70(param_1 + 0x100,&DAT_021625f0,&local_f8,&DAT_021625f8,10);
      if (local_f8 != 0) {
        (**(code **)(*(long *)(local_f8 + 0x48) + 0x18))();
        local_f8 = 0;
      }
    }
    else {
      FUN_0077eb10(lVar9,&DAT_021625e8,lVar7);
      FUN_014c8930(lVar8,0,local_d0);
      FUN_0167cce0(lVar4,&DAT_021625f0,10);
    }
    bVar3 = iVar2 != 0;
    uVar1 = local_cc;
    if (!bVar3) {
      uVar1 = 0;
    }
    FUN_0077eb10(local_cc,lVar9,&DAT_02162600,lVar7);
    FUN_014ca220(lVar8,0,uVar1,3,0,1);
    FUN_0167cce0(lVar4,&DAT_02162608,10);
    lVar10 = *(long *)(param_1 + 0x4c8);
    *(byte *)(*(long *)(param_1 + 0x658) + 0x58) =
         *(byte *)(*(long *)(param_1 + 0x658) + 0x58) & 0xfe | bVar3;
    if (iVar2 == 0) {
      *(byte *)(*(long *)(param_1 + 0x660) + 0x58) =
           *(byte *)(*(long *)(param_1 + 0x660) + 0x58) & 0xfe;
      *(byte *)(*(long *)(param_1 + 0x668) + 0x58) =
           *(byte *)(*(long *)(param_1 + 0x668) + 0x58) & 0xfe;
    }
    else {
      local_110 = 0;
      uStack_108 = 0;
      local_120 = 0;
      uStack_118 = 0;
      local_130 = 0;
      uStack_128 = 0;
      local_140 = 0;
      uStack_138 = 0;
      local_150 = 0;
      uStack_148 = 0;
      local_160 = 0;
      uStack_158 = 0;
      local_170 = 0;
      uStack_168 = 0;
      local_180 = 0;
      local_178 = (code *)0x0;
      FUN_0168c9c0(lVar10,auStack_c8,0,&local_180);
      pcVar6 = local_178;
      if (local_178 != (code *)0x0) {
        local_170 = 0;
        uStack_168 = 0;
        local_180 = 0;
        local_178 = (code *)0x0;
        (*pcVar6)(&local_160);
      }
      *(byte *)(*(long *)(param_1 + 0x660) + 0x58) =
           *(byte *)(*(long *)(param_1 + 0x660) + 0x58) & 0xfe | bVar3;
      local_110 = 0;
      uStack_108 = 0;
      local_120 = 0;
      uStack_118 = 0;
      local_130 = 0;
      uStack_128 = 0;
      local_140 = 0;
      uStack_138 = 0;
      local_150 = 0;
      uStack_148 = 0;
      local_160 = 0;
      uStack_158 = 0;
      local_170 = 0;
      uStack_168 = 0;
      local_180 = 0;
      local_178 = (code *)0x0;
      FUN_0168c9c0(lVar10 + 0x3e0,auStack_ac,0,&local_180);
      pcVar6 = local_178;
      if (local_178 != (code *)0x0) {
        local_170 = 0;
        uStack_168 = 0;
        local_180 = 0;
        local_178 = (code *)0x0;
        (*pcVar6)(&local_160);
      }
      *(byte *)(*(long *)(param_1 + 0x668) + 0x58) =
           *(byte *)(*(long *)(param_1 + 0x668) + 0x58) & 0xfe | bVar3;
      local_110 = 0;
      uStack_108 = 0;
      local_120 = 0;
      uStack_118 = 0;
      local_130 = 0;
      uStack_128 = 0;
      local_140 = 0;
      uStack_138 = 0;
      local_150 = 0;
      uStack_148 = 0;
      local_160 = 0;
      uStack_158 = 0;
      local_170 = 0;
      uStack_168 = 0;
      local_180 = 0;
      local_178 = (code *)0x0;
      FUN_0168c9c0(lVar10 + 0x7c0,auStack_90,0,&local_180);
      pcVar6 = local_178;
      if (local_178 != (code *)0x0) {
        local_170 = 0;
        uStack_168 = 0;
        local_180 = 0;
        local_178 = (code *)0x0;
        (*pcVar6)(&local_160);
      }
    }
    FUN_016b2d70(*(undefined8 *)(param_1 + 0x678),local_d0 == 0);
    if (lVar9 != 0) {
      (**(code **)(*(long *)(lVar9 + 0x48) + 0x18))((long *)(lVar9 + 0x48));
    }
    if (lVar8 != 0) {
      (**(code **)(*(long *)(lVar8 + 0x48) + 0x18))((long *)(lVar8 + 0x48));
    }
    if (lVar7 != 0) {
      (**(code **)(*(long *)(lVar7 + 0x48) + 0x18))((long *)(lVar7 + 0x48));
    }
    (**(code **)(*(long *)(lVar4 + 0x48) + 0x18))((long *)(lVar4 + 0x48));
  }
  return;
}


