/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0125b8d0; name: FUN_0125b8d0
 */


/* WARNING: Removing unreachable block (ram,0x0125bd00) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_0125b8d0(ulong param_1,undefined8 param_2,undefined8 param_3)

{
  bool bVar1;
  long lVar2;
  int iVar3;
  long lVar4;
  code *pcVar5;
  long lVar6;
  char *pcVar7;
  undefined8 uVar8;
  long *plVar9;
  long lVar10;
  long alStack_220 [12];
  undefined1 *local_1c0;
  code *local_1b8;
  code *local_1b0;
  undefined1 *local_1a8;
  undefined1 local_1a0 [96];
  undefined1 *local_140;
  code *local_138;
  code *local_130;
  undefined1 *local_128;
  long local_120 [12];
  long local_c0;
  long local_b8;
  long local_b0;
  undefined4 local_a4;
  long local_a0;
  long local_98;
  long local_90;
  long local_88;
  long local_80;
  long local_78;
  undefined *puStack_70;
  long local_68;
  long local_60;
  char *local_58;
  undefined8 local_48;
  
  lVar6 = *(long *)(*(long *)(*(long *)PTR_DAT_02710880 + 0xb8) + 0x58);
  if (lVar6 == 0) {
    if (_DAT_00000060 != 0) {
      return 0;
    }
  }
  else {
    (**(code **)(*(long *)(lVar6 + 0x48) + 0x10))();
    FUN_01127680(&local_78,lVar6);
    lVar10 = *(long *)(local_78 + 0x60);
    if (local_78 != 0) {
      (**(code **)(*(long *)(local_78 + 0x48) + 0x18))();
    }
    if (lVar10 != 0) {
      uVar8 = 0;
      goto LAB_0125c010;
    }
  }
  nn::nifm::Initialize();
  nn::nifm::SetLocalNetworkMode(true);
  lVar10 = *(long *)(*(long *)PTR_DAT_02710540 + 200);
  FUN_0122b4d0(&local_60,lVar10,param_2);
  FUN_0122b4d0(&local_68,lVar10,param_3);
  local_78 = DAT_02688118;
  puStack_70 = PTR_DAT_02688120;
  local_58 = "RequestLanConnection";
  local_48 = lVar10;
  lVar10 = FUN_01203310(&local_80,lVar10,&local_48,&local_58);
  if (lVar10 != 0) {
    (**(code **)(*(long *)(lVar10 + 0x48) + 0x10))();
  }
  local_a4 = 0;
  FUN_011fe920(&local_a0,lVar10,&local_a4);
  FUN_011ffd30(&local_98,local_a0);
  FUN_01258770(&local_90,local_98);
  FUN_012588f0(&local_88,local_90);
  FUN_01258a70(&local_80,local_88);
  FUN_0125aa90(&local_48,local_80,&local_78);
  FUN_012599c0(&local_58,local_48,&local_78);
  if (local_48 != 0) {
    (**(code **)(*(long *)(local_48 + 0x48) + 0x18))();
    local_48 = 0;
  }
  if (local_80 != 0) {
    (**(code **)(*(long *)(local_80 + 0x48) + 0x18))();
    local_80 = 0;
  }
  if (local_88 != 0) {
    (**(code **)(*(long *)(local_88 + 0x48) + 0x18))();
    local_88 = 0;
  }
  if (local_90 != 0) {
    (**(code **)(*(long *)(local_90 + 0x48) + 0x18))();
    local_90 = 0;
  }
  if (local_98 != 0) {
    (**(code **)(*(long *)(local_98 + 0x48) + 0x18))();
    local_98 = 0;
  }
  if (local_a0 != 0) {
    (**(code **)(*(long *)(local_a0 + 0x48) + 0x18))();
    local_a0 = 0;
  }
  if (lVar10 != 0) {
    (**(code **)(*(long *)(lVar10 + 0x48) + 0x18))((long *)(lVar10 + 0x48));
  }
  if ((param_1 & 1) == 0) {
    local_48 = (ulong)local_48._4_4_ << 0x20;
    FUN_011fe920(&local_c0,local_58,&local_48);
    if (local_c0 != 0) {
      (**(code **)(*(long *)(local_c0 + 0x48) + 0x18))();
      local_c0 = 0;
    }
LAB_0125bb8c:
    if (lVar6 == 0) goto LAB_0125bb58;
LAB_0125bb94:
    pcVar7 = local_58;
    FUN_01127680(&local_88,lVar6);
  }
  else {
    local_48 = (ulong)local_48._4_4_ << 0x20;
    FUN_01259cc0(&local_b0,local_58,&local_48);
    if (local_b0 != 0) {
      (**(code **)(*(long *)(local_b0 + 0x48) + 0x18))();
      local_b0 = 0;
    }
    FUN_01259b40(&local_b8,local_58);
    if (local_b8 == 0) goto LAB_0125bb8c;
    (**(code **)(*(long *)(local_b8 + 0x48) + 0x18))();
    local_b8 = 0;
    if (lVar6 != 0) goto LAB_0125bb94;
LAB_0125bb58:
    local_88 = 0;
    pcVar7 = local_58;
  }
  (**(code **)(**(long **)(local_88 + 0x80) + 0x10))(&local_48);
  local_80 = local_48;
  FUN_0122c210(&local_48,pcVar7,&local_80);
  lVar10 = local_48;
  local_120[0] = local_60;
  if (local_60 != 0) {
    (**(code **)(*(long *)(local_60 + 0x48) + 0x10))();
  }
  local_130 = FUN_01266250;
  local_140 = &LAB_01266200;
  local_138 = FUN_01266210;
  local_128 = &LAB_01266270;
  iVar3 = FUN_007dc9a0(lVar10);
  if (iVar3 == 0) {
    pcVar5 = *(code **)(lVar10 + 0x128);
    if (pcVar5 != (code *)0x0) {
      *(undefined8 *)(lVar10 + 0x130) = 0;
      *(undefined8 *)(lVar10 + 0x138) = 0;
      *(undefined8 *)(lVar10 + 0x120) = 0;
      *(undefined8 *)(lVar10 + 0x128) = 0;
      (*pcVar5)(lVar10 + 0x140);
    }
    if (local_130 != (code *)0x0) {
      (*local_130)(local_120,lVar10 + 0x140);
      *(undefined1 **)(lVar10 + 0x138) = local_128;
      *(code **)(lVar10 + 0x128) = local_138;
      *(code **)(lVar10 + 0x130) = local_130;
      *(undefined8 *)(lVar10 + 0x120) = local_140;
    }
LAB_0125bd54:
    (**(code **)(*(long *)(lVar10 + 0x48) + 0x10))();
  }
  else if (lVar10 != 0) goto LAB_0125bd54;
  if (local_68 != 0) {
    (**(code **)(*(long *)(local_68 + 0x48) + 0x10))();
  }
  local_1b0 = FUN_012662d0;
  local_1c0 = &LAB_01266280;
  local_1b8 = FUN_01266290;
  local_1a8 = &LAB_012662f0;
  iVar3 = FUN_007dc9a0(lVar10);
  if (iVar3 == 0) {
    pcVar5 = *(code **)(lVar10 + 0x228);
    if (pcVar5 != (code *)0x0) {
      *(undefined8 *)(lVar10 + 0x230) = 0;
      *(undefined8 *)(lVar10 + 0x238) = 0;
      *(undefined8 *)(lVar10 + 0x220) = 0;
      *(undefined8 *)(lVar10 + 0x228) = 0;
      (*pcVar5)(lVar10 + 0x240);
    }
    if (local_1b0 != (code *)0x0) {
      (*local_1b0)(local_1a0,lVar10 + 0x240);
      *(undefined1 **)(lVar10 + 0x238) = local_1a8;
      *(code **)(lVar10 + 0x228) = local_1b8;
      *(code **)(lVar10 + 0x230) = local_1b0;
      *(undefined8 *)(lVar10 + 0x220) = local_1c0;
    }
LAB_0125bdc0:
    (**(code **)(*(long *)(lVar10 + 0x48) + 0x10))();
  }
  else if (lVar10 != 0) goto LAB_0125bdc0;
  if (lVar6 != 0) {
    (**(code **)(*(long *)(lVar6 + 0x48) + 0x10))();
  }
  alStack_220[0] = lVar6;
  iVar3 = FUN_007dc9a0(lVar10);
  if (iVar3 == 0) {
    pcVar5 = *(code **)(lVar10 + 0x1a8);
    if (pcVar5 != (code *)0x0) {
      *(undefined8 *)(lVar10 + 0x1b0) = 0;
      *(undefined8 *)(lVar10 + 0x1b8) = 0;
      *(undefined8 *)(lVar10 + 0x1a0) = 0;
      *(undefined8 *)(lVar10 + 0x1a8) = 0;
      (*pcVar5)(lVar10 + 0x1c0);
    }
    FUN_012663a0(alStack_220,lVar10 + 0x1c0);
    *(undefined1 **)(lVar10 + 0x1b8) = &LAB_012663c0;
    *(code **)(lVar10 + 0x1a8) = FUN_01266360;
    *(code **)(lVar10 + 0x1b0) = FUN_012663a0;
    *(undefined8 *)(lVar10 + 0x1a0) = &LAB_01266300;
LAB_0125be28:
    plVar9 = (long *)(lVar10 + 0x48);
    (**(code **)(*plVar9 + 0x10))(plVar9);
    FUN_007dcc80(lVar10);
    (**(code **)(*(long *)(lVar10 + 0x48) + 0x10))(plVar9);
    (**(code **)(*(long *)(lVar10 + 0x48) + 0x18))(plVar9);
    bVar1 = false;
  }
  else {
    if (lVar10 != 0) goto LAB_0125be28;
    FUN_007dcc80(0);
    bVar1 = true;
  }
  FUN_01266360(alStack_220);
  if (!bVar1) {
    (**(code **)(*(long *)(lVar10 + 0x48) + 0x18))();
  }
  pcVar5 = local_1b8;
  if (local_1b8 != (code *)0x0) {
    local_1b0 = (code *)0x0;
    local_1a8 = (undefined1 *)0x0;
    local_1c0 = (undefined1 *)0x0;
    local_1b8 = (code *)0x0;
    (*pcVar5)(local_1a0);
  }
  if (!bVar1) {
    (**(code **)(*(long *)(lVar10 + 0x48) + 0x18))();
  }
  pcVar5 = local_138;
  if (local_138 != (code *)0x0) {
    local_130 = (code *)0x0;
    local_128 = (undefined1 *)0x0;
    local_140 = (undefined1 *)0x0;
    local_138 = (code *)0x0;
    (*pcVar5)(local_120);
  }
  if (local_48 != 0) {
    (**(code **)(*(long *)(local_48 + 0x48) + 0x18))();
    local_48 = 0;
  }
  if (local_80 != 0) {
    (**(code **)(*(long *)(local_80 + 0x48) + 0x18))();
    local_80 = 0;
  }
  if (local_88 != 0) {
    (**(code **)(*(long *)(local_88 + 0x48) + 0x18))();
    local_88 = 0;
  }
  if (lVar6 == 0) {
    lVar2 = 0;
  }
  else {
    FUN_01127680(&local_48,lVar6);
    lVar2 = local_48;
  }
  local_48 = lVar2;
  if (lVar10 != 0) {
    plVar9 = (long *)(lVar10 + 0x48);
    (**(code **)(*plVar9 + 0x10))(plVar9);
    (**(code **)(*plVar9 + 0x10))(plVar9);
  }
  lVar4 = *(long *)(lVar2 + 0x60);
  *(long *)(lVar2 + 0x60) = lVar10;
  if (lVar4 != 0) {
    (**(code **)(*(long *)(lVar4 + 0x48) + 0x18))();
  }
  FUN_012ae6d0(*(undefined8 *)(lVar2 + 0x80),0);
  if (lVar10 != 0) {
    (**(code **)(*(long *)(lVar10 + 0x48) + 0x18))();
  }
  if (local_48 != 0) {
    (**(code **)(*(long *)(local_48 + 0x48) + 0x18))();
    local_48 = 0;
  }
  if (lVar10 != 0) {
    (**(code **)(*(long *)(lVar10 + 0x48) + 0x18))((long *)(lVar10 + 0x48));
  }
  if (local_58 != (char *)0x0) {
    (**(code **)(*(long *)(local_58 + 0x48) + 0x18))();
    local_58 = (char *)0x0;
  }
  if (local_68 != 0) {
    (**(code **)(*(long *)(local_68 + 0x48) + 0x18))();
    local_68 = 0;
  }
  if (local_60 != 0) {
    (**(code **)(*(long *)(local_60 + 0x48) + 0x18))();
    local_60 = 0;
  }
  uVar8 = 1;
  if (lVar6 == 0) {
    return 1;
  }
LAB_0125c010:
  (**(code **)(*(long *)(lVar6 + 0x48) + 0x18))((long *)(lVar6 + 0x48));
  return uVar8;
}


