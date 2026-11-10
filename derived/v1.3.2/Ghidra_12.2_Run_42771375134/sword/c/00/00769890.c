/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00769890; name: FUN_00769890
 */


void FUN_00769890(long param_1)

{
  code *pcVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  long *plVar5;
  long *plVar6;
  long local_178;
  undefined *local_170;
  long local_168;
  undefined1 *local_160;
  code *local_158;
  long local_150;
  undefined8 uStack_148;
  undefined1 auStack_140 [96];
  undefined8 local_e0;
  code *local_d8;
  undefined8 local_d0;
  undefined8 uStack_c8;
  undefined1 auStack_c0 [112];
  long local_48;
  
  plVar5 = *(long **)(param_1 + 8);
  FUN_0010fb90(&local_170,PTR_DAT_02710908,"shader/movie.bnsh",&DAT_01d38550);
  lVar3 = *(long *)PTR_DAT_02710788;
  lVar4 = *(long *)(lVar3 + 0x1e8);
  if (lVar4 == 0) {
    lVar4 = *(long *)(lVar3 + 8);
  }
  FUN_0010d7b0(&local_48,lVar3,0,&local_170,0,lVar4,0);
  if (*(long *)(param_1 + 0xb8) != 0) {
    (**(code **)(*(long *)(*(long *)(param_1 + 0xb8) + 0x48) + 0x18))();
    *(undefined8 *)(param_1 + 0xb8) = 0;
  }
  *(long *)(param_1 + 0xb8) = local_48;
  if (local_48 != 0) {
    plVar6 = (long *)(local_48 + 0x48);
    (**(code **)(*plVar6 + 0x10))(plVar6);
    if ((*(long *)(param_1 + 0xc0) != 0) || (*(long *)(param_1 + 0x140) != 0)) {
      FUN_006e1e70(local_48,param_1 + 0xb0,1);
    }
    FUN_006e1be0(local_48);
    (**(code **)(*plVar6 + 0x18))(plVar6);
  }
  if ((local_158 != (code *)0x0) && (local_170 != (undefined *)0x0)) {
    (**(code **)(*(long *)(local_170 + 0x48) + 0x18))();
  }
  local_170 = (undefined *)0x0;
  local_168 = -0x340d631b7bddd9bb;
  local_160 = &DAT_01d38550;
  local_158 = (code *)0x0;
  if (local_150 != 0) {
    (**(code **)(*(long *)(local_150 + 0x48) + 0x18))();
    local_150 = 0;
  }
  lVar3 = FUN_006faa30(*(undefined8 *)(param_1 + 0xb8),0);
  *(undefined8 *)(param_1 + 0xa0) = *(undefined8 *)(lVar3 + 0x68);
  FUN_00729ec0(&local_170,param_1 + 0xb0,0,0x3f);
  puVar2 = PTR_DAT_02710860;
  lVar3 = nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_02710860);
  if (*(ulong *)(lVar3 + 0x80) < 0x10) {
    *(long **)(lVar3 + *(ulong *)(lVar3 + 0x80) * 8) = plVar5;
    *(long *)(lVar3 + 0x80) = *(long *)(lVar3 + 0x80) + 1;
    lVar4 = (**(code **)(*plVar5 + 0x10))(plVar5,0x8f0,0x10);
    if (lVar4 == 0) {
      (**(code **)(*plVar5 + 0xb8))(plVar5);
    }
    FUN_0072a630(lVar4,&local_170);
    *(long **)(lVar4 + 8) = plVar5;
    *(long *)(lVar4 + 0x10) = lVar4;
    *(undefined8 *)(lVar4 + 0x18) = 0x8f0;
    *(undefined8 *)(lVar4 + 0x20) = 0x10;
    *(long *)(lVar3 + 0x80) = *(long *)(lVar3 + 0x80) + -1;
    if (lVar4 != 0) {
      (**(code **)(*(long *)(lVar4 + 0x48) + 0x10))();
    }
    if (*(long *)(param_1 + 0x1c0) != 0) {
      (**(code **)(*(long *)(*(long *)(param_1 + 0x1c0) + 0x48) + 0x18))();
      *(undefined8 *)(param_1 + 0x1c0) = 0;
    }
    *(long *)(param_1 + 0x1c0) = lVar4;
    local_170 = PTR_DAT_02710800 + 0x10;
    if (local_168 == 0) {
      local_168 = 0;
      pcVar1 = local_d8;
    }
    else {
      FUN_006e2100(local_168,&local_170);
      lVar3 = local_168;
      local_168 = 0;
      pcVar1 = local_d8;
      if (lVar3 != 0) {
        (**(code **)(*(long *)(lVar3 + 0x48) + 0x18))();
        pcVar1 = local_d8;
      }
    }
    local_d8 = pcVar1;
    if (pcVar1 != (code *)0x0) {
      local_d0 = 0;
      uStack_c8 = 0;
      local_e0 = 0;
      local_d8 = (code *)0x0;
      (*pcVar1)(auStack_c0);
    }
    pcVar1 = local_158;
    if (local_158 != (code *)0x0) {
      local_150 = 0;
      uStack_148 = 0;
      local_160 = (undefined1 *)0x0;
      local_158 = (code *)0x0;
      (*pcVar1)(auStack_140);
    }
    if (local_168 != 0) {
      (**(code **)(*(long *)(local_168 + 0x48) + 0x18))();
      local_168 = 0;
    }
    lVar3 = nn::os::GetTlsValue(*(undefined4 *)puVar2);
    if (*(ulong *)(lVar3 + 0x80) < 0x10) {
      *(long **)(lVar3 + *(ulong *)(lVar3 + 0x80) * 8) = plVar5;
      *(long *)(lVar3 + 0x80) = *(long *)(lVar3 + 0x80) + 1;
      lVar4 = (**(code **)(*plVar5 + 0x10))(plVar5,0x118,8);
      if (lVar4 == 0) {
        (**(code **)(*plVar5 + 0xb8))(plVar5);
      }
      FUN_007340f0(lVar4,1);
      *(long **)(lVar4 + 8) = plVar5;
      *(long *)(lVar4 + 0x10) = lVar4;
      *(undefined8 *)(lVar4 + 0x18) = 0x118;
      *(undefined8 *)(lVar4 + 0x20) = 8;
      *(long *)(lVar3 + 0x80) = *(long *)(lVar3 + 0x80) + -1;
      if (lVar4 != 0) {
        (**(code **)(*(long *)(lVar4 + 0x48) + 0x10))();
      }
      if (*(long *)(param_1 + 0x1c8) != 0) {
        (**(code **)(*(long *)(*(long *)(param_1 + 0x1c8) + 0x48) + 0x18))();
        *(undefined8 *)(param_1 + 0x1c8) = 0;
      }
      local_178 = *(long *)(param_1 + 0x1c0);
      *(long *)(param_1 + 0x1c8) = lVar4;
      if (local_178 != 0) {
        (**(code **)(*(long *)(local_178 + 0x48) + 0x10))();
      }
      FUN_00734610(lVar4,0,&local_178);
      if (local_178 != 0) {
        (**(code **)(*(long *)(local_178 + 0x48) + 0x18))();
        local_178 = 0;
      }
      FUN_007299a0(&local_170,plVar5,1);
      local_170 = PTR_DAT_02716090 + 0x10;
      FUN_00734980(*(undefined8 *)(param_1 + 0x1c8),&local_170);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  abort();
}


