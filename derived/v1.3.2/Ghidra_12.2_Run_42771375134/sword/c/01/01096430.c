/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 01096430; name: FUN_01096430
 */


void FUN_01096430(long param_1)

{
  int iVar1;
  char cVar2;
  undefined8 *puVar3;
  code *pcVar4;
  undefined8 uVar5;
  long lVar6;
  undefined1 *local_150;
  code *local_148;
  code *local_140;
  undefined1 *puStack_138;
  undefined1 auStack_130 [96];
  undefined1 *local_d0;
  code *local_c8;
  code *local_c0;
  undefined1 *local_b8;
  long local_b0 [13];
  long local_48;
  long local_40;
  long local_38;
  long local_28;
  
  FUN_00ff5c80(param_1,param_1 + 0x558,0x2000000);
  FUN_00891380(&local_28,param_1);
  if (local_28 != 0) {
    (**(code **)(*(long *)(local_28 + 0x48) + 0x18))();
    local_28 = 0;
  }
  FUN_00891470(param_1);
  FUN_0089b740(param_1);
  FUN_010967c0(param_1);
  FUN_008d4da0(&local_d0,&PTR_s_bin_font_bmp_font_fs_42_00_bffnt_0266fcb8);
  if (*(long *)(param_1 + 0x98) != 0) {
    FUN_00ff7f90(*(long *)(param_1 + 0x98),&local_d0,"font_fs_42_00.bffnt");
  }
  if ((local_b8 != (undefined1 *)0x0) && (local_d0 != (undefined1 *)0x0)) {
    (**(code **)(*(long *)(local_d0 + 0x48) + 0x18))();
  }
  local_d0 = (undefined1 *)0x0;
  local_c8 = (code *)0xcbf29ce484222645;
  local_c0 = (code *)&DAT_01d38550;
  local_b8 = (undefined1 *)0x0;
  if (local_b0[0] != 0) {
    (**(code **)(*(long *)(local_b0[0] + 0x48) + 0x18))();
    local_b0[0] = 0;
  }
  local_d0 = (undefined1 *)0xb03ef2faceab6aa8;
  local_c8 = (code *)0x1d3042c;
  local_c0 = (code *)0x13;
  local_b8 = (undefined1 *)0x0;
  if ((*(long *)(param_1 + 0xb8) != 0) &&
     (FUN_00ff8420(*(long *)(param_1 + 0xb8),&local_d0,10), local_b8 != (undefined1 *)0x0)) {
    (**(code **)(*(long *)((long)local_b8 + 0x48) + 0x18))();
    local_b8 = (undefined1 *)0x0;
  }
  lVar6 = *(long *)(param_1 + 0x548);
  local_d0 = *(undefined1 **)(lVar6 + 0x58);
  if (local_d0 != (undefined1 *)0x0) {
    (**(code **)(*(long *)(local_d0 + 0x48) + 0x10))();
  }
  FUN_01097440(&local_38,lVar6,&local_d0,0,"View_Top");
  if (local_d0 != (undefined1 *)0x0) {
    (**(code **)(*(long *)(local_d0 + 0x48) + 0x18))();
    local_d0 = (undefined1 *)0x0;
  }
  if (local_38 != 0) {
    (**(code **)(*(long *)(local_38 + 0x48) + 0x18))();
    local_38 = 0;
  }
  iVar1 = *(int *)(*(long *)(param_1 + 0x710) + 0x48);
  if (iVar1 == 0) {
    lVar6 = *(long *)(param_1 + 0x548);
    local_d0 = *(undefined1 **)(lVar6 + 0x58);
    if (local_d0 != (undefined1 *)0x0) {
      (**(code **)(*(long *)(local_d0 + 0x48) + 0x10))();
    }
    FUN_01097860(&local_48,lVar6,&local_d0,0,"MessageView");
    if (local_d0 != (undefined1 *)0x0) {
      (**(code **)(*(long *)(local_d0 + 0x48) + 0x18))();
      local_d0 = (undefined1 *)0x0;
    }
    if (local_48 != 0) {
      (**(code **)(*(long *)(local_48 + 0x48) + 0x18))();
      local_48 = 0;
    }
  }
  else if (iVar1 == 1) {
    lVar6 = *(long *)(param_1 + 0x548);
    local_d0 = *(undefined1 **)(lVar6 + 0x58);
    if (local_d0 != (undefined1 *)0x0) {
      (**(code **)(*(long *)(local_d0 + 0x48) + 0x10))();
    }
    FUN_008a2880(&local_40,lVar6,&local_d0,0,"MessageView");
    if (local_d0 != (undefined1 *)0x0) {
      (**(code **)(*(long *)(local_d0 + 0x48) + 0x18))();
      local_d0 = (undefined1 *)0x0;
    }
    if (local_40 != 0) {
      (**(code **)(*(long *)(local_40 + 0x48) + 0x18))();
      local_40 = 0;
      cVar2 = *(char *)(*(long *)(param_1 + 0x710) + 0x50);
      puVar3 = (undefined8 *)PTR_DAT_02710840;
      goto joined_r0x010966c4;
    }
  }
  cVar2 = *(char *)(*(long *)(param_1 + 0x710) + 0x50);
  puVar3 = (undefined8 *)PTR_DAT_02710840;
joined_r0x010966c4:
  PTR_DAT_02710840 = (undefined *)puVar3;
  if ((cVar2 != '\0') && (*(char *)(*(long *)(param_1 + 0x708) + 0x169) == '\0')) {
    *(undefined1 *)(param_1 + 0x720) = 1;
    local_d0 = &LAB_01097c30;
    local_c8 = FUN_01097c60;
    local_c0 = FUN_01097c70;
    local_b8 = &LAB_01097c80;
    local_b0[0] = param_1;
    uVar5 = FUN_0101f850(*puVar3);
    local_140 = (code *)0x0;
    puStack_138 = (undefined1 *)0x0;
    local_150 = (undefined1 *)0x0;
    local_148 = (code *)0x0;
    if (local_c0 != (code *)0x0) {
      (*local_c0)(local_b0,auStack_130);
      local_140 = local_c0;
      puStack_138 = local_b8;
      local_150 = local_d0;
      local_148 = local_c8;
    }
    FUN_01021920(uVar5,3,&local_150);
    pcVar4 = local_148;
    if (local_148 != (code *)0x0) {
      local_140 = (code *)0x0;
      puStack_138 = (undefined1 *)0x0;
      local_150 = (undefined1 *)0x0;
      local_148 = (code *)0x0;
      (*pcVar4)(auStack_130);
    }
    FUN_01021900(uVar5,3);
    pcVar4 = local_c8;
    if (local_c8 != (code *)0x0) {
      local_c0 = (code *)0x0;
      local_b8 = (undefined1 *)0x0;
      local_d0 = (undefined1 *)0x0;
      local_c8 = (code *)0x0;
      (*pcVar4)(local_b0);
    }
  }
  return;
}


