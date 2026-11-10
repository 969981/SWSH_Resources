/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00fd3760; name: FUN_00fd3760
 */


void FUN_00fd3760(long param_1,uint param_2,uint param_3)

{
  bool bVar1;
  byte bVar2;
  long lVar3;
  ulong uVar4;
  long lVar5;
  undefined8 *puVar6;
  long lVar7;
  undefined8 uVar8;
  long lVar9;
  long *plVar10;
  undefined8 local_d8;
  char *pcStack_d0;
  undefined8 local_c8;
  long local_c0;
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  undefined8 local_68;
  
  lVar5 = param_1 + (ulong)param_2 * 0x28;
  local_88 = *(undefined8 *)(lVar5 + 0x630);
  puVar6 = (undefined8 *)(PTR_DAT_02722f98 + (ulong)param_3 * 0x30);
  local_80 = *(undefined8 *)(lVar5 + 0x638);
  local_b8 = *puVar6;
  uStack_b0 = puVar6[1];
  uStack_78 = *(undefined8 *)(lVar5 + 0x640);
  local_70 = *(undefined8 *)(lVar5 + 0x648);
  local_68 = *(undefined8 *)(lVar5 + 0x650);
  lVar5 = param_1 + 0x100;
  local_98 = puVar6[4];
  uStack_90 = puVar6[5];
  local_a8 = puVar6[2];
  uStack_a0 = puVar6[3];
  lVar3 = FUN_00ffda40(lVar5,&local_98);
  uVar8 = *(undefined8 *)(param_1 + 0x5e8);
  lVar7 = *(long *)(param_1 + 0x2b0);
  if (lVar7 != 0) {
    (**(code **)(*(long *)(lVar7 + 0x48) + 0x10))();
  }
  lVar9 = *(long *)(lVar7 + 0x2e8);
  if (lVar9 == 0) {
    FUN_0077eb10(uVar8,&local_80,0);
  }
  else {
    plVar10 = (long *)(lVar9 + 0x48);
    (**(code **)(*plVar10 + 0x10))(plVar10);
    FUN_0077eb10(uVar8,&local_80,lVar9);
    (**(code **)(*plVar10 + 0x18))(plVar10);
  }
  (**(code **)(*(long *)(lVar7 + 0x48) + 0x18))((long *)(lVar7 + 0x48));
  lVar7 = *(long *)(param_1 + 0x2b0);
  if (lVar7 == 0) {
    FUN_0167cce0(0,&uStack_b0,10);
  }
  else {
    plVar10 = (long *)(lVar7 + 0x48);
    (**(code **)(*plVar10 + 0x10))(plVar10);
    FUN_0167cce0(lVar7,&uStack_b0,10);
    (**(code **)(*plVar10 + 0x18))(plVar10);
  }
  FUN_00ffd510(local_88._4_4_,lVar5,&local_b8);
  lVar7 = *(long *)(*(long *)PTR_DAT_02710848 + 0x90);
  if (lVar7 != 0) {
    (**(code **)(*(long *)(lVar7 + 0x48) + 0x10))();
  }
  lVar9 = *(long *)(*(long *)PTR_DAT_02710798 + 0x1b8);
  if (lVar9 != 0) {
    (**(code **)(*(long *)(lVar9 + 0x48) + 0x10))();
  }
  if (lVar7 != 0) {
    (**(code **)(*(long *)(lVar7 + 0x48) + 0x18))((long *)(lVar7 + 0x48));
  }
  uVar4 = FUN_00ecee70();
  if ((((uVar4 & 1) == 0) && ((uint)local_88 < 9)) &&
     ((1 << (ulong)((uint)local_88 & 0x1f) & 0x198U) != 0)) {
    bVar1 = false;
  }
  else {
    uVar4 = FUN_00ecef00();
    if ((uVar4 & 1) == 0) {
      bVar1 = (uint)local_88 != 6;
    }
    else {
      bVar1 = true;
    }
  }
  bVar2 = FUN_01510f00(lVar9,0xf3e80e69b65b81fe);
  bVar2 = bVar2 ^ 1 | (uint)local_88 != 8;
  puVar6 = &local_a8;
  if ((bVar1 & bVar2) == 0) {
    puVar6 = &uStack_a0;
  }
  FUN_00ffd010(lVar5,puVar6);
  lVar7 = FUN_0167b6b0(*(undefined8 *)(param_1 + 0x2b0),&uStack_b0);
  *(byte *)(lVar7 + 0x58) =
       *(byte *)(lVar7 + 0x58) & 0xfe | (param_3 != 10 && local_68._1_1_ != '\0');
  if (param_3 == 10) {
    local_d8 = 0xc99fb8afb4911ceb;
    FUN_00ffd510(0x40000000,lVar5,&local_d8);
    lVar5 = FUN_0167b6b0(*(undefined8 *)(param_1 + 0x2b0),&uStack_90);
    bVar2 = *(byte *)(lVar5 + 0x58) & 0xfe;
  }
  else {
    if ((bVar1 & bVar2) == 0) {
      lVar5 = 0;
      local_d8 = 0xd9c1a5e83c91de23;
      pcStack_d0 = "Play_UI_pbox_error";
      local_c8 = 0x12;
      local_c0 = 0;
      *(undefined8 *)(lVar3 + 0x100) = 0xd9c1a5e83c91de23;
      *(char **)(lVar3 + 0x108) = "Play_UI_pbox_error";
      *(undefined8 *)(lVar3 + 0x110) = 0x12;
    }
    else {
      FUN_006cf0a0(&local_d8,&DAT_026662f0);
      lVar5 = local_c0;
      *(undefined8 *)(lVar3 + 0x100) = local_d8;
      *(char **)(lVar3 + 0x108) = pcStack_d0;
      *(undefined8 *)(lVar3 + 0x110) = local_c8;
      if (local_c0 != 0) {
        (**(code **)(*(long *)(local_c0 + 0x48) + 0x10))();
      }
    }
    lVar7 = *(long *)(lVar3 + 0x118);
    *(long *)(lVar3 + 0x118) = lVar5;
    if (lVar7 != 0) {
      (**(code **)(*(long *)(lVar7 + 0x48) + 0x18))();
    }
    if (local_c0 != 0) {
      (**(code **)(*(long *)(local_c0 + 0x48) + 0x18))();
      local_c0 = 0;
    }
    FUN_016b2da0(lVar3,local_68._1_1_);
    *(byte *)(lVar3 + 0x141) = local_68._1_1_ ^ 1;
    lVar5 = FUN_0167b6b0(*(undefined8 *)(param_1 + 0x2b0),&uStack_90);
    bVar2 = *(byte *)(lVar5 + 0x58) & 0xfe | (byte)local_68;
  }
  *(byte *)(lVar5 + 0x58) = bVar2;
  local_d8 = CONCAT44(param_2 / 5,param_2 % 5);
  FUN_016b81d0(*(undefined8 *)(param_1 + 0x5f0),&local_d8,local_68._1_1_);
  if (lVar9 != 0) {
    (**(code **)(*(long *)(lVar9 + 0x48) + 0x18))((long *)(lVar9 + 0x48));
  }
  return;
}


