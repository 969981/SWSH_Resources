/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 014d2d90; name: FUN_014d2d90
 */


void FUN_014d2d90(long param_1)

{
  long *plVar1;
  ulong uVar2;
  byte bVar3;
  undefined *puVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  code *pcVar8;
  byte *pbVar9;
  ulong uVar10;
  undefined *puVar11;
  long lVar12;
  long lVar13;
  undefined8 uVar14;
  ulong local_238;
  byte local_230 [64];
  undefined *local_1f0;
  code *local_1e8;
  code *local_1e0;
  undefined *local_1d8;
  long local_1d0;
  undefined *local_1c8;
  undefined8 uStack_1c0;
  undefined *local_170;
  code *local_168;
  code *local_160;
  undefined *local_158;
  long local_150;
  undefined *puStack_148;
  undefined8 local_140;
  undefined *local_f0;
  code *local_e8;
  code *local_e0;
  undefined *local_d8;
  long local_d0;
  undefined *local_c8;
  undefined8 local_c0;
  long local_70 [2];
  
  lVar7 = param_1 + 0x100;
  local_f0 = (undefined *)0x6aeb7356315d2e51;
  lVar5 = FUN_00ffde30(lVar7,&local_f0);
  FUN_016c2c80(lVar5,0,0);
  FUN_016c2c90(lVar5,0);
  puVar4 = PTR_DAT_02710860;
  if (*(int *)(param_1 + 0x1898) != 0) {
    uVar10 = 0;
    puVar11 = (undefined *)(param_1 + 0x5d8);
    do {
      lVar12 = *(long *)(param_1 + 0x18a0);
      local_e8 = (code *)((ulong)local_e8 & 0xffffffffffffff00);
      uVar2 = *(ulong *)(lVar12 + 0xe8);
      local_f0 = puVar11;
      if (uVar2 < *(ulong *)(lVar12 + 0xf0)) {
        lVar13 = *(long *)(lVar12 + 0xe0);
        uVar14 = *(undefined8 *)(lVar12 + 0xa0);
        lVar6 = nn::os::GetTlsValue(*(undefined4 *)puVar4);
        if (0xf < *(ulong *)(lVar6 + 0x80)) {
                    /* WARNING: Subroutine does not return */
          abort();
        }
        *(undefined8 *)(lVar6 + *(ulong *)(lVar6 + 0x80) * 8) = uVar14;
        *(long *)(lVar6 + 0x80) = *(long *)(lVar6 + 0x80) + 1;
        plVar1 = (long *)(lVar13 + uVar2 * 0x10);
        *plVar1 = (long)local_f0;
        plVar1[1] = (long)local_e8;
        *(long *)(lVar6 + 0x80) = *(long *)(lVar6 + 0x80) + -1;
        *(long *)(lVar12 + 0xe8) = *(long *)(lVar12 + 0xe8) + 1;
      }
      else {
        local_170 = (undefined *)(*(long *)(lVar12 + 0xe0) + uVar2 * 0x10);
        FUN_014d5d00(&local_1f0,lVar12 + 0xa0,&local_170,1,&local_f0);
      }
      uVar10 = uVar10 + 1;
      puVar11 = puVar11 + 0x30;
    } while (uVar10 < *(uint *)(param_1 + 0x1898));
  }
  local_70[0] = *(long *)(param_1 + 0x18a0);
  if (local_70[0] != 0) {
    (**(code **)(*(long *)(local_70[0] + 0x48) + 0x10))();
  }
  FUN_016c2cb0(lVar5,local_70);
  if (local_70[0] != 0) {
    (**(code **)(*(long *)(local_70[0] + 0x48) + 0x18))();
    local_70[0] = 0;
  }
  local_c8 = PTR_LAB_0272a428;
  local_c0 = 0;
  local_f0 = PTR_LAB_0272a430;
  local_e8 = (code *)PTR_FUN_0272a438;
  local_e0 = (code *)PTR_FUN_0272a440;
  local_d8 = PTR_LAB_0272a448;
  puStack_148 = PTR_LAB_0272a450;
  local_140 = 0;
  local_170 = PTR_LAB_0272a430;
  local_168 = (code *)PTR_FUN_0272a438;
  local_160 = (code *)PTR_FUN_0272a440;
  local_158 = PTR_LAB_0272a448;
  pcVar8 = *(code **)(lVar5 + 0x248);
  local_1c8 = PTR_LAB_0272a458;
  uStack_1c0 = 0;
  local_1f0 = PTR_LAB_0272a430;
  local_1e8 = (code *)PTR_FUN_0272a438;
  local_1e0 = (code *)PTR_FUN_0272a440;
  local_1d8 = PTR_LAB_0272a448;
  local_1d0 = param_1;
  local_150 = param_1;
  local_d0 = param_1;
  if (pcVar8 != (code *)0x0) {
    *(undefined8 *)(lVar5 + 0x250) = 0;
    *(undefined8 *)(lVar5 + 600) = 0;
    *(undefined8 *)(lVar5 + 0x240) = 0;
    *(undefined8 *)(lVar5 + 0x248) = 0;
    (*pcVar8)(lVar5 + 0x260);
    if (local_e0 == (code *)0x0) {
      pcVar8 = *(code **)(lVar5 + 200);
      goto joined_r0x014d3380;
    }
  }
  (*local_e0)(&local_d0,lVar5 + 0x260);
  *(undefined **)(lVar5 + 600) = local_d8;
  *(code **)(lVar5 + 0x248) = local_e8;
  *(code **)(lVar5 + 0x250) = local_e0;
  *(undefined8 *)(lVar5 + 0x240) = local_f0;
  pcVar8 = *(code **)(lVar5 + 200);
joined_r0x014d3380:
  if (pcVar8 != (code *)0x0) {
    *(undefined8 *)(lVar5 + 0xd0) = 0;
    *(undefined8 *)(lVar5 + 0xd8) = 0;
    *(undefined8 *)(lVar5 + 0xc0) = 0;
    *(undefined8 *)(lVar5 + 200) = 0;
    (*pcVar8)(lVar5 + 0xe0);
  }
  if (local_160 != (code *)0x0) {
    (*local_160)(&local_150,lVar5 + 0xe0);
    *(undefined **)(lVar5 + 0xd8) = local_158;
    *(code **)(lVar5 + 200) = local_168;
    *(code **)(lVar5 + 0xd0) = local_160;
    *(undefined **)(lVar5 + 0xc0) = local_170;
  }
  pcVar8 = *(code **)(lVar5 + 0x1c8);
  if (pcVar8 != (code *)0x0) {
    *(undefined8 *)(lVar5 + 0x1d0) = 0;
    *(undefined8 *)(lVar5 + 0x1d8) = 0;
    *(undefined8 *)(lVar5 + 0x1c0) = 0;
    *(undefined8 *)(lVar5 + 0x1c8) = 0;
    (*pcVar8)(lVar5 + 0x1e0);
  }
  if (local_1e0 != (code *)0x0) {
    (*local_1e0)(&local_1d0,lVar5 + 0x1e0);
    *(undefined **)(lVar5 + 0x1d8) = local_1d8;
    *(code **)(lVar5 + 0x1c8) = local_1e8;
    *(code **)(lVar5 + 0x1d0) = local_1e0;
    *(undefined8 *)(lVar5 + 0x1c0) = local_1f0;
  }
  *(undefined1 *)(lVar5 + 0x7a2) = 1;
  FUN_016bef00(lVar5);
  if (*(char *)(param_1 + 0x18c0) == '\0') {
    uVar10 = 0xcbf29ce484222645;
    snprintf((char *)local_230,0x40,"button_list_item_%02d",0);
    local_238 = 0xcbf29ce484222645;
    if (local_230[0] != 0) {
      local_238 = 0xcbf29ce484222645;
      pbVar9 = (byte *)((ulong)local_230 | 1);
      bVar3 = local_230[0];
      do {
        local_238 = (local_238 ^ bVar3) * 0x100000001b3;
        bVar3 = *pbVar9;
        pbVar9 = pbVar9 + 1;
      } while (bVar3 != 0);
    }
    lVar5 = FUN_00ffda40(lVar7,&local_238);
    *(undefined1 *)(lVar5 + 0x142) = 0;
    snprintf((char *)local_230,0x40,"button_list_item_%02d",1);
    local_238 = 0xcbf29ce484222645;
    if (local_230[0] != 0) {
      local_238 = 0xcbf29ce484222645;
      pbVar9 = (byte *)((ulong)local_230 | 1);
      bVar3 = local_230[0];
      do {
        local_238 = (local_238 ^ bVar3) * 0x100000001b3;
        bVar3 = *pbVar9;
        pbVar9 = pbVar9 + 1;
      } while (bVar3 != 0);
    }
    lVar5 = FUN_00ffda40(lVar7,&local_238);
    *(undefined1 *)(lVar5 + 0x142) = 0;
    snprintf((char *)local_230,0x40,"button_list_item_%02d",2);
    local_238 = 0xcbf29ce484222645;
    if (local_230[0] != 0) {
      local_238 = 0xcbf29ce484222645;
      pbVar9 = (byte *)((ulong)local_230 | 1);
      bVar3 = local_230[0];
      do {
        local_238 = (local_238 ^ bVar3) * 0x100000001b3;
        bVar3 = *pbVar9;
        pbVar9 = pbVar9 + 1;
      } while (bVar3 != 0);
    }
    lVar5 = FUN_00ffda40(lVar7,&local_238);
    *(undefined1 *)(lVar5 + 0x142) = 0;
    snprintf((char *)local_230,0x40,"button_list_item_%02d",3);
    local_238 = 0xcbf29ce484222645;
    if (local_230[0] != 0) {
      local_238 = 0xcbf29ce484222645;
      pbVar9 = (byte *)((ulong)local_230 | 1);
      bVar3 = local_230[0];
      do {
        local_238 = (local_238 ^ bVar3) * 0x100000001b3;
        bVar3 = *pbVar9;
        pbVar9 = pbVar9 + 1;
      } while (bVar3 != 0);
    }
    lVar5 = FUN_00ffda40(lVar7,&local_238);
    *(undefined1 *)(lVar5 + 0x142) = 0;
    snprintf((char *)local_230,0x40,"button_list_item_%02d",4);
    local_238 = 0xcbf29ce484222645;
    if (local_230[0] != 0) {
      local_238 = 0xcbf29ce484222645;
      pbVar9 = (byte *)((ulong)local_230 | 1);
      bVar3 = local_230[0];
      do {
        local_238 = (local_238 ^ bVar3) * 0x100000001b3;
        bVar3 = *pbVar9;
        pbVar9 = pbVar9 + 1;
      } while (bVar3 != 0);
    }
    lVar5 = FUN_00ffda40(lVar7,&local_238);
    *(undefined1 *)(lVar5 + 0x142) = 0;
    snprintf((char *)local_230,0x40,"button_list_item_%02d",5);
    local_238 = 0xcbf29ce484222645;
    if (local_230[0] != 0) {
      local_238 = 0xcbf29ce484222645;
      pbVar9 = (byte *)((ulong)local_230 | 1);
      bVar3 = local_230[0];
      do {
        local_238 = (local_238 ^ bVar3) * 0x100000001b3;
        bVar3 = *pbVar9;
        pbVar9 = pbVar9 + 1;
      } while (bVar3 != 0);
    }
    lVar5 = FUN_00ffda40(lVar7,&local_238);
    *(undefined1 *)(lVar5 + 0x142) = 0;
    snprintf((char *)local_230,0x40,"button_list_item_%02d",6);
    if (local_230[0] != 0) {
      pbVar9 = (byte *)((ulong)local_230 | 1);
      do {
        uVar10 = (uVar10 ^ local_230[0]) * 0x100000001b3;
        local_230[0] = *pbVar9;
        pbVar9 = pbVar9 + 1;
      } while (local_230[0] != 0);
    }
    local_238 = uVar10;
    lVar7 = FUN_00ffda40(lVar7,&local_238);
    *(undefined1 *)(lVar7 + 0x142) = 0;
  }
  pcVar8 = local_1e8;
  if (local_1e8 != (code *)0x0) {
    local_1e0 = (code *)0x0;
    local_1d8 = (undefined *)0x0;
    local_1f0 = (undefined *)0x0;
    local_1e8 = (code *)0x0;
    (*pcVar8)(&local_1d0);
  }
  pcVar8 = local_168;
  if (local_168 != (code *)0x0) {
    local_160 = (code *)0x0;
    local_158 = (undefined *)0x0;
    local_170 = (undefined *)0x0;
    local_168 = (code *)0x0;
    (*pcVar8)(&local_150);
  }
  pcVar8 = local_e8;
  if (local_e8 != (code *)0x0) {
    local_e0 = (code *)0x0;
    local_d8 = (undefined *)0x0;
    local_f0 = (undefined *)0x0;
    local_e8 = (code *)0x0;
    (*pcVar8)(&local_d0);
  }
  return;
}


