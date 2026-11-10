/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00e38b50; name: FUN_00e38b50
 */


undefined8
FUN_00e38b50(long param_1,long *param_2,long *param_3,long *param_4,long *param_5,undefined8 param_6
            ,undefined8 param_7)

{
  long *plVar1;
  code *pcVar2;
  ulong uVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  long local_2a8;
  long local_2a0;
  long local_298;
  long local_290;
  long local_288;
  long local_280;
  long local_278;
  long local_270;
  undefined1 *puStack_268;
  undefined8 local_260;
  undefined5 uStack_258;
  undefined3 local_253;
  undefined5 uStack_250;
  undefined8 local_240;
  undefined8 uStack_238;
  undefined8 local_230;
  undefined8 uStack_228;
  undefined8 local_220;
  undefined8 uStack_218;
  undefined8 local_210;
  undefined1 *puStack_208;
  undefined8 local_200;
  long local_1f8;
  undefined *local_1f0;
  long local_1e8;
  undefined8 local_1e0;
  code *local_1d8;
  undefined8 local_1d0;
  undefined8 uStack_1c8;
  undefined1 auStack_1c0 [96];
  undefined8 local_160;
  code *local_158;
  undefined8 local_150;
  undefined8 uStack_148;
  undefined1 auStack_140 [96];
  undefined1 local_e0;
  undefined8 local_dc;
  undefined8 local_d4;
  undefined8 local_c0;
  undefined8 uStack_b8;
  undefined4 local_b0;
  undefined1 local_a0;
  undefined8 local_9c;
  undefined8 local_94;
  undefined8 local_80;
  undefined8 uStack_78;
  long local_70;
  long local_68;
  long local_60;
  undefined1 auStack_58 [8];
  
  local_60 = *param_3;
  if (local_60 != 0) {
    (**(code **)(*(long *)(local_60 + 0x48) + 0x10))();
  }
  local_68 = *param_4;
  if (local_68 != 0) {
    (**(code **)(*(long *)(local_68 + 0x48) + 0x10))();
  }
  local_70 = *param_5;
  if (local_70 != 0) {
    (**(code **)(*(long *)(local_70 + 0x48) + 0x10))();
  }
  uVar3 = FUN_00db5ea0(param_1,param_2,&local_60,&local_68,&local_70,param_6,param_7);
  if (local_70 != 0) {
    (**(code **)(*(long *)(local_70 + 0x48) + 0x18))();
    local_70 = 0;
  }
  if (local_68 != 0) {
    (**(code **)(*(long *)(local_68 + 0x48) + 0x18))();
    local_68 = 0;
  }
  if (local_60 != 0) {
    (**(code **)(*(long *)(local_60 + 0x48) + 0x18))();
    local_60 = 0;
  }
  if ((uVar3 & 1) == 0) {
    uVar6 = 0;
  }
  else {
    lVar4 = nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_02710860);
    if (0xf < *(ulong *)(lVar4 + 0x80)) {
                    /* WARNING: Subroutine does not return */
      abort();
    }
    *(long **)(lVar4 + *(ulong *)(lVar4 + 0x80) * 8) = param_2;
    *(long *)(lVar4 + 0x80) = *(long *)(lVar4 + 0x80) + 1;
    lVar5 = (**(code **)(*param_2 + 0x10))(param_2,0x7b0,0x10);
    if (lVar5 == 0) {
      (**(code **)(*param_2 + 0xb8))(param_2);
    }
    FUN_0074bce0(lVar5,param_2);
    *(long **)(lVar5 + 8) = param_2;
    *(long *)(lVar5 + 0x10) = lVar5;
    *(undefined8 *)(lVar5 + 0x18) = 0x7b0;
    *(undefined8 *)(lVar5 + 0x20) = 0x10;
    *(long *)(lVar4 + 0x80) = *(long *)(lVar4 + 0x80) + -1;
    if (lVar5 != 0) {
      (**(code **)(*(long *)(lVar5 + 0x48) + 0x10))();
    }
    plVar1 = (long *)(param_1 + 0x3b8);
    if (*(long *)(param_1 + 0x3b8) != 0) {
      (**(code **)(*(long *)(*(long *)(param_1 + 0x3b8) + 0x48) + 0x18))();
      *plVar1 = 0;
    }
    *plVar1 = lVar5;
    local_270 = -0x340d631b7bddd9bb;
    puStack_268 = &DAT_01d38550;
    uStack_250 = 0;
    local_260 = 0;
    uStack_258 = 0;
    local_253 = 0;
    local_220 = 0;
    uStack_218 = 0;
    local_1e8 = 0;
    local_230 = 0;
    uStack_228 = 0;
    local_240 = 0;
    uStack_238 = 0;
    local_210 = 0xcbf29ce484222645;
    puStack_208 = &DAT_01d38550;
    local_200 = 0;
    local_1f8 = 0;
    local_150 = 0;
    uStack_148 = 0;
    local_160 = 0;
    local_158 = (code *)0x0;
    local_1d0 = 0;
    uStack_1c8 = 0;
    local_1e0 = 0;
    local_1d8 = (code *)0x0;
    local_1f0 = PTR_DAT_02710818 + 0x10;
    local_e0 = 0;
    local_dc = 2;
    local_d4 = 0;
    uStack_b8 = 0;
    local_c0 = 0;
    local_b0 = 0x3f800000;
    local_a0 = 0;
    uStack_78 = 0;
    local_80 = 0;
    local_94 = 0;
    local_9c = 0;
    FUN_0074be30(lVar5,&local_270,param_2);
    lVar4 = *(long *)(*(long *)PTR_DAT_02710848 + 0x88);
    if (lVar4 != 0) {
      (**(code **)(*(long *)(lVar4 + 0x48) + 0x10))();
    }
    FUN_010672e0(&local_278,lVar4,0);
    FUN_010672e0(&local_280,lVar4,1);
    uVar6 = *(undefined8 *)(param_1 + 0x400);
    local_288 = *(long *)(param_1 + 0x3b8);
    if (local_288 != 0) {
      (**(code **)(*(long *)(local_288 + 0x48) + 0x10))();
    }
    local_290 = local_278;
    if (local_278 != 0) {
      (**(code **)(*(long *)(local_278 + 0x48) + 0x10))();
    }
    local_298 = local_280;
    if (local_280 != 0) {
      (**(code **)(*(long *)(local_280 + 0x48) + 0x10))();
    }
    FUN_00da60e0(uVar6,0,&local_288,&local_290,&local_298,*(undefined8 *)PTR_DAT_027194e0,param_2);
    if (local_298 != 0) {
      (**(code **)(*(long *)(local_298 + 0x48) + 0x18))();
      local_298 = 0;
    }
    if (local_290 != 0) {
      (**(code **)(*(long *)(local_290 + 0x48) + 0x18))();
      local_290 = 0;
    }
    if (local_288 != 0) {
      (**(code **)(*(long *)(local_288 + 0x48) + 0x18))();
      local_288 = 0;
    }
    lVar5 = local_278;
    local_2a0 = *plVar1;
    if (local_2a0 != 0) {
      (**(code **)(*(long *)(local_2a0 + 0x48) + 0x10))();
    }
    FUN_00702940(lVar5,&local_2a0);
    if (local_2a0 != 0) {
      (**(code **)(*(long *)(local_2a0 + 0x48) + 0x18))();
      local_2a0 = 0;
    }
    lVar5 = local_280;
    local_2a8 = *plVar1;
    if (local_2a8 != 0) {
      (**(code **)(*(long *)(local_2a8 + 0x48) + 0x10))();
    }
    FUN_00702940(lVar5,&local_2a8);
    if (local_2a8 != 0) {
      (**(code **)(*(long *)(local_2a8 + 0x48) + 0x18))();
      local_2a8 = 0;
    }
    lVar5 = FUN_00e3a4e0(auStack_58,param_2,plVar1,param_3);
    if (lVar5 != 0) {
      (**(code **)(*(long *)(lVar5 + 0x48) + 0x10))();
    }
    if (*(long *)(param_1 + 0x4b0) != 0) {
      (**(code **)(*(long *)(*(long *)(param_1 + 0x4b0) + 0x48) + 0x18))();
      *(undefined8 *)(param_1 + 0x4b0) = 0;
    }
    *(long *)(param_1 + 0x4b0) = lVar5;
    if (local_280 != 0) {
      (**(code **)(*(long *)(local_280 + 0x48) + 0x18))();
      local_280 = 0;
    }
    if (local_278 != 0) {
      (**(code **)(*(long *)(local_278 + 0x48) + 0x18))();
      local_278 = 0;
    }
    if (lVar4 != 0) {
      (**(code **)(*(long *)(lVar4 + 0x48) + 0x18))((long *)(lVar4 + 0x48));
    }
    local_1f0 = PTR_DAT_02710808 + 0x10;
    if (local_1e8 == 0) {
      local_1e8 = 0;
      pcVar2 = local_158;
    }
    else {
      FUN_006e2100(local_1e8,&local_1f0);
      lVar4 = local_1e8;
      local_1e8 = 0;
      pcVar2 = local_158;
      if (lVar4 != 0) {
        (**(code **)(*(long *)(lVar4 + 0x48) + 0x18))();
        pcVar2 = local_158;
      }
    }
    local_158 = pcVar2;
    if (pcVar2 != (code *)0x0) {
      local_150 = 0;
      uStack_148 = 0;
      local_160 = 0;
      local_158 = (code *)0x0;
      (*pcVar2)(auStack_140);
    }
    pcVar2 = local_1d8;
    if (local_1d8 != (code *)0x0) {
      local_1d0 = 0;
      uStack_1c8 = 0;
      local_1e0 = 0;
      local_1d8 = (code *)0x0;
      (*pcVar2)(auStack_1c0);
    }
    if (local_1e8 != 0) {
      (**(code **)(*(long *)(local_1e8 + 0x48) + 0x18))();
      local_1e8 = 0;
    }
    if (local_1f8 != 0) {
      (**(code **)(*(long *)(local_1f8 + 0x48) + 0x18))();
      local_1f8 = 0;
    }
    if (CONCAT35(local_253,uStack_258) != 0) {
      (**(code **)(*(long *)(CONCAT35(local_253,uStack_258) + 0x48) + 0x18))();
    }
    uVar6 = 1;
  }
  return uVar6;
}


