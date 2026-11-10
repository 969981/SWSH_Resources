/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00bf7490; name: FUN_00bf7490
 */


void FUN_00bf7490(long param_1,int param_2)

{
  long lVar1;
  code *pcVar2;
  long lVar3;
  long *local_150;
  code *local_148;
  code *local_140;
  undefined1 *local_138;
  long alStack_130 [12];
  undefined **local_d0;
  long lStack_c8;
  undefined ***local_b0;
  undefined **local_a0;
  long lStack_98;
  undefined ***local_80;
  undefined **local_70;
  long lStack_68;
  undefined ***local_50;
  long local_38;
  
  if (param_2 != 0) {
    return;
  }
  FUN_00beefb0(param_1,"msg_ui_btlspot_help_00");
  local_70 = &PTR_LAB_026391c0;
  lStack_68 = param_1;
  local_50 = &local_70;
  FUN_00bef0c0(param_1,3,&local_70);
  if (&local_70 == local_50) {
    pcVar2 = (code *)(*local_50)[4];
LAB_00bf7504:
    (*pcVar2)();
  }
  else if (local_50 != (undefined ***)0x0) {
    pcVar2 = (code *)(*local_50)[5];
    goto LAB_00bf7504;
  }
  local_a0 = &PTR_LAB_02639208;
  lStack_98 = param_1;
  local_80 = &local_a0;
  FUN_00bef0c0(param_1,0,&local_a0);
  if (&local_a0 == local_80) {
    pcVar2 = (code *)(*local_80)[4];
LAB_00bf7550:
    (*pcVar2)();
  }
  else if (local_80 != (undefined ***)0x0) {
    pcVar2 = (code *)(*local_80)[5];
    goto LAB_00bf7550;
  }
  local_d0 = &PTR_LAB_02639250;
  lStack_c8 = param_1;
  local_b0 = &local_d0;
  FUN_00bef0c0(param_1,1,&local_d0);
  if (&local_d0 == local_b0) {
    pcVar2 = (code *)(*local_b0)[4];
  }
  else {
    if (local_b0 == (undefined ***)0x0) goto LAB_00bf75a0;
    pcVar2 = (code *)(*local_b0)[5];
  }
  (*pcVar2)();
LAB_00bf75a0:
  FUN_00bef170(param_1);
  FUN_00bef3d0(param_1);
  lVar3 = *(long *)(*(long *)(param_1 + 0x4c0) + 0x58);
  if (lVar3 != 0) {
    (**(code **)(*(long *)(lVar3 + 0x48) + 0x10))();
  }
  local_150 = &local_38;
  local_38 = 0;
  local_148 = (code *)0xecf72d521d07fad7;
  FUN_0108c840(lVar3,&local_150,0);
  lVar1 = local_38;
  if (lVar3 != 0) {
    (**(code **)(*(long *)(lVar3 + 0x48) + 0x18))((long *)(lVar3 + 0x48));
  }
  if (lVar1 == 0) {
                    /* WARNING: Subroutine does not return */
    nn::diag::detail::AbortImpl("","","",0);
  }
  FUN_016b2d70(lVar1,0);
  local_140 = FUN_00bf7fb0;
  local_138 = &LAB_00bf7fc0;
  lVar3 = param_1 + 0x100;
  local_150 = (long *)&LAB_00bf7f90;
  local_148 = FUN_00bf7fa0;
  local_38 = 0x4e037850425419da;
  alStack_130[0] = param_1;
  lVar1 = FUN_00ffda40(lVar3,&local_38);
  pcVar2 = *(code **)(lVar1 + 0x158);
  if (pcVar2 != (code *)0x0) {
    *(undefined8 *)(lVar1 + 0x160) = 0;
    *(undefined8 *)(lVar1 + 0x168) = 0;
    *(undefined8 *)(lVar1 + 0x150) = 0;
    *(undefined8 *)(lVar1 + 0x158) = 0;
    (*pcVar2)(lVar1 + 0x170);
  }
  if (local_140 != (code *)0x0) {
    (*local_140)(alStack_130,lVar1 + 0x170);
    *(undefined1 **)(lVar1 + 0x168) = local_138;
    *(code **)(lVar1 + 0x158) = local_148;
    *(code **)(lVar1 + 0x160) = local_140;
    *(undefined8 *)(lVar1 + 0x150) = local_150;
  }
  local_38 = 0x4e03795042541b8d;
  lVar1 = FUN_00ffda40(lVar3,&local_38);
  pcVar2 = *(code **)(lVar1 + 0x158);
  if (pcVar2 != (code *)0x0) {
    *(undefined8 *)(lVar1 + 0x160) = 0;
    *(undefined8 *)(lVar1 + 0x168) = 0;
    *(undefined8 *)(lVar1 + 0x150) = 0;
    *(undefined8 *)(lVar1 + 0x158) = 0;
    (*pcVar2)(lVar1 + 0x170);
  }
  if (local_140 != (code *)0x0) {
    (*local_140)(alStack_130,lVar1 + 0x170);
    *(undefined1 **)(lVar1 + 0x168) = local_138;
    *(code **)(lVar1 + 0x158) = local_148;
    *(code **)(lVar1 + 0x160) = local_140;
    *(undefined8 *)(lVar1 + 0x150) = local_150;
  }
  local_38 = 0x4e03765042541674;
  lVar1 = FUN_00ffda40(lVar3,&local_38);
  pcVar2 = *(code **)(lVar1 + 0x158);
  if (pcVar2 != (code *)0x0) {
    *(undefined8 *)(lVar1 + 0x160) = 0;
    *(undefined8 *)(lVar1 + 0x168) = 0;
    *(undefined8 *)(lVar1 + 0x150) = 0;
    *(undefined8 *)(lVar1 + 0x158) = 0;
    (*pcVar2)(lVar1 + 0x170);
  }
  if (local_140 != (code *)0x0) {
    (*local_140)(alStack_130,lVar1 + 0x170);
    *(undefined1 **)(lVar1 + 0x168) = local_138;
    *(code **)(lVar1 + 0x158) = local_148;
    *(code **)(lVar1 + 0x160) = local_140;
    *(undefined8 *)(lVar1 + 0x150) = local_150;
  }
  local_38 = 0x4e03775042541827;
  lVar1 = FUN_00ffda40(lVar3,&local_38);
  pcVar2 = *(code **)(lVar1 + 0x158);
  if (pcVar2 != (code *)0x0) {
    *(undefined8 *)(lVar1 + 0x160) = 0;
    *(undefined8 *)(lVar1 + 0x168) = 0;
    *(undefined8 *)(lVar1 + 0x150) = 0;
    *(undefined8 *)(lVar1 + 0x158) = 0;
    (*pcVar2)(lVar1 + 0x170);
  }
  if (local_140 != (code *)0x0) {
    (*local_140)(alStack_130,lVar1 + 0x170);
    *(undefined1 **)(lVar1 + 0x168) = local_138;
    *(code **)(lVar1 + 0x158) = local_148;
    *(code **)(lVar1 + 0x160) = local_140;
    *(undefined8 *)(lVar1 + 0x150) = local_150;
  }
  local_38 = 0x4e0374504254130e;
  lVar3 = FUN_00ffda40(lVar3,&local_38);
  pcVar2 = *(code **)(lVar3 + 0x158);
  if (pcVar2 != (code *)0x0) {
    *(undefined8 *)(lVar3 + 0x160) = 0;
    *(undefined8 *)(lVar3 + 0x168) = 0;
    *(undefined8 *)(lVar3 + 0x150) = 0;
    *(undefined8 *)(lVar3 + 0x158) = 0;
    (*pcVar2)(lVar3 + 0x170);
  }
  if (local_140 != (code *)0x0) {
    (*local_140)(alStack_130,lVar3 + 0x170);
    *(undefined1 **)(lVar3 + 0x168) = local_138;
    *(code **)(lVar3 + 0x158) = local_148;
    *(code **)(lVar3 + 0x160) = local_140;
    *(undefined8 *)(lVar3 + 0x150) = local_150;
  }
  pcVar2 = local_148;
  if (local_148 != (code *)0x0) {
    local_140 = (code *)0x0;
    local_138 = (undefined1 *)0x0;
    local_150 = (long *)0x0;
    local_148 = (code *)0x0;
    (*pcVar2)(alStack_130);
  }
  return;
}


