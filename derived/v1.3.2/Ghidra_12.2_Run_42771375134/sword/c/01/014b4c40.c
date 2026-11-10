/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 014b4c40; name: FUN_014b4c40
 */


uint FUN_014b4c40(long *param_1,undefined4 param_2)

{
  code *pcVar1;
  undefined *puVar2;
  undefined *puVar3;
  uint uVar4;
  ulong uVar5;
  long lVar6;
  long *plVar7;
  undefined *local_1c0 [12];
  code *local_160;
  code *local_158;
  undefined *local_150;
  undefined *local_148;
  undefined *apuStack_140 [12];
  code *local_e0;
  code *local_d8;
  undefined *local_d0;
  undefined *local_c8;
  undefined *apuStack_c0 [13];
  long local_58;
  undefined4 local_44;
  
  puVar3 = PTR_FUN_0272a238;
  puVar2 = PTR_FUN_0272a230;
  local_1c0[0] = PTR_LAB_0272a228;
  local_150 = PTR_LAB_0272a240;
  local_148 = PTR_LAB_0272a248;
  apuStack_140[0] = PTR_LAB_0272a250;
  local_160 = (code *)PTR_FUN_0272a230;
  local_158 = (code *)PTR_FUN_0272a238;
  local_c8 = PTR_LAB_0272a248;
  apuStack_c0[0] = PTR_LAB_0272a258;
  local_d0 = PTR_LAB_0272a240;
  local_e0 = (code *)PTR_FUN_0272a230;
  local_d8 = (code *)PTR_FUN_0272a238;
  lVar6 = *param_1;
  if (lVar6 == 0) {
    local_58 = 0;
  }
  else {
    plVar7 = (long *)(lVar6 + 0x48);
    (**(code **)(*plVar7 + 0x10))(plVar7);
    local_58 = lVar6;
    (**(code **)(*plVar7 + 0x10))(plVar7);
  }
  local_44 = param_2;
  uVar5 = (*(code *)puVar2)(local_1c0,&local_58,&local_44);
  if (local_58 != 0) {
    (**(code **)(*(long *)(local_58 + 0x48) + 0x18))();
    local_58 = 0;
  }
  if (lVar6 != 0) {
    (**(code **)(*(long *)(lVar6 + 0x48) + 0x18))((long *)(lVar6 + 0x48));
  }
  if ((uVar5 & 1) == 0) {
    lVar6 = *param_1;
    if (lVar6 == 0) {
      local_58 = 0;
    }
    else {
      plVar7 = (long *)(lVar6 + 0x48);
      (**(code **)(*plVar7 + 0x10))(plVar7);
      local_58 = lVar6;
      (**(code **)(*plVar7 + 0x10))(plVar7);
    }
    local_44 = param_2;
    uVar5 = (*local_160)(apuStack_140,&local_58,&local_44);
    if (local_58 != 0) {
      (**(code **)(*(long *)(local_58 + 0x48) + 0x18))();
      local_58 = 0;
    }
    if (lVar6 != 0) {
      (**(code **)(*(long *)(lVar6 + 0x48) + 0x18))((long *)(lVar6 + 0x48));
    }
    if ((uVar5 & 1) == 0) {
      lVar6 = *param_1;
      if (lVar6 == 0) {
        local_58 = 0;
      }
      else {
        plVar7 = (long *)(lVar6 + 0x48);
        (**(code **)(*plVar7 + 0x10))(plVar7);
        local_58 = lVar6;
        (**(code **)(*plVar7 + 0x10))(plVar7);
      }
      local_44 = param_2;
      uVar4 = (*local_e0)(apuStack_c0,&local_58,&local_44);
      if (local_58 != 0) {
        (**(code **)(*(long *)(local_58 + 0x48) + 0x18))();
        local_58 = 0;
      }
      pcVar1 = local_d8;
      if (lVar6 != 0) {
        (**(code **)(*(long *)(lVar6 + 0x48) + 0x18))((long *)(lVar6 + 0x48));
        pcVar1 = local_d8;
      }
      goto joined_r0x014b4de8;
    }
  }
  uVar4 = 1;
  pcVar1 = local_d8;
joined_r0x014b4de8:
  local_d8 = pcVar1;
  if (pcVar1 != (code *)0x0) {
    local_d0 = (undefined *)0x0;
    local_c8 = (undefined *)0x0;
    local_e0 = (code *)0x0;
    local_d8 = (code *)0x0;
    (*pcVar1)(apuStack_c0);
  }
  pcVar1 = local_158;
  if (local_158 != (code *)0x0) {
    local_150 = (undefined *)0x0;
    local_148 = (undefined *)0x0;
    local_160 = (code *)0x0;
    local_158 = (code *)0x0;
    (*pcVar1)(apuStack_140);
  }
  if (puVar3 != (undefined *)0x0) {
    (*(code *)puVar3)(local_1c0);
  }
  return uVar4 & 1;
}


