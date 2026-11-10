/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00fd2710; name: FUN_00fd2710
 */


void FUN_00fd2710(long param_1)

{
  undefined4 uVar1;
  byte bVar2;
  int iVar3;
  undefined8 uVar4;
  ulong uVar5;
  long lVar6;
  long lVar7;
  code *pcVar8;
  code *pcVar9;
  long lVar10;
  int iVar11;
  undefined1 *puVar12;
  long *plVar13;
  undefined8 local_c0;
  code *local_b8;
  code *local_b0;
  undefined1 *local_a8;
  long alStack_a0 [12];
  
  local_c0 = (undefined1 *)0x77deb19384bc5fc4;
  local_b8 = (code *)0x1d2d390;
  local_b0 = (code *)0x12;
  local_a8 = (undefined1 *)0x0;
  uVar4 = FUN_00fd0d40(*(undefined8 *)(param_1 + 0x60),&local_c0);
  if (local_a8 != (undefined1 *)0x0) {
    (**(code **)(*(long *)((long)local_a8 + 0x48) + 0x18))();
    local_a8 = (undefined1 *)0x0;
  }
  *(undefined8 *)(param_1 + 0x7c8) = uVar4;
  FUN_00fd2eb0(param_1);
  uVar1 = *(undefined4 *)PTR_DAT_02722f90;
  lVar7 = param_1 + 0x100;
  *(undefined1 *)(param_1 + 0x5d8) = 0;
  *(undefined4 *)(param_1 + 0x628) = uVar1;
  *(undefined1 *)(param_1 + 0x5cb) = 0;
  uVar4 = FUN_00ffdc80(lVar7,"grid_00");
  *(undefined8 *)(param_1 + 0x5f0) = uVar4;
  FUN_00ff86a0(&local_c0,*(undefined8 *)(*(long *)(param_1 + 0x60) + 0xb0),0);
  lVar10 = *(long *)((long)local_c0 + 0x60);
  if (lVar10 != 0) {
    (**(code **)(*(long *)(lVar10 + 0x48) + 0x10))();
  }
  if (*(long *)(param_1 + 0x5e8) != 0) {
    (**(code **)(*(long *)(*(long *)(param_1 + 0x5e8) + 0x48) + 0x18))();
    *(undefined8 *)(param_1 + 0x5e8) = 0;
  }
  *(long *)(param_1 + 0x5e8) = lVar10;
  if (local_c0 != (undefined1 *)0x0) {
    (**(code **)(*(long *)((long)local_c0 + 0x48) + 0x18))();
  }
  local_c0 = (undefined1 *)0xc0b802cc3afa6c58;
  lVar10 = FUN_0167b6b0(*(undefined8 *)(param_1 + 0x2b0),&local_c0);
  *(undefined8 *)(lVar10 + 0x30) = 0;
  *(undefined4 *)(lVar10 + 0x38) = 0;
  *(byte *)(lVar10 + 0x58) = *(byte *)(lVar10 + 0x58) | 0x10;
  local_c0 = (undefined1 *)0xc0b802cc3afa6c58;
  lVar10 = FUN_0167b6b0(*(undefined8 *)(param_1 + 0x2b0),&local_c0);
  *(byte *)(lVar10 + 0x58) = *(byte *)(lVar10 + 0x58) & 0xfe;
  FUN_00fd34d0(param_1);
  local_c0 = &LAB_00fd5320;
  local_b8 = FUN_00fd53e0;
  local_b0 = FUN_00fd53f0;
  local_a8 = &LAB_00fd5400;
  alStack_a0[0] = param_1;
  lVar10 = FUN_00ffd950(lVar7,"cancel_button");
  *(long *)(param_1 + 0x5f8) = lVar10;
  *(undefined8 *)(lVar10 + 0xf8) = 0x2000000000000;
  lVar10 = *(long *)(param_1 + 0x5f8);
  pcVar8 = *(code **)(lVar10 + 0x158);
  if (pcVar8 != (code *)0x0) {
    *(undefined8 *)(lVar10 + 0x160) = 0;
    *(undefined8 *)(lVar10 + 0x168) = 0;
    *(undefined8 *)(lVar10 + 0x150) = 0;
    *(undefined8 *)(lVar10 + 0x158) = 0;
    (*pcVar8)(lVar10 + 0x170);
  }
  if (local_b0 != (code *)0x0) {
    (*local_b0)(alStack_a0,lVar10 + 0x170);
    *(undefined1 **)(lVar10 + 0x168) = local_a8;
    *(code **)(lVar10 + 0x158) = local_b8;
    *(code **)(lVar10 + 0x160) = local_b0;
    *(undefined8 *)(lVar10 + 0x150) = local_c0;
  }
  pcVar8 = local_b8;
  *(undefined1 *)(*(long *)(param_1 + 0x5f8) + 0x141) = 1;
  if (local_b8 != (code *)0x0) {
    local_b0 = (code *)0x0;
    local_a8 = (undefined1 *)0x0;
    local_c0 = (undefined1 *)0x0;
    local_b8 = (code *)0x0;
    (*pcVar8)(alStack_a0);
  }
  local_b0 = FUN_00fd5570;
  local_c0 = &LAB_00fd5410;
  local_b8 = FUN_00fd5560;
  local_a8 = &LAB_00fd5580;
  alStack_a0[0] = param_1;
  lVar10 = FUN_00ffd950(lVar7,"swap_button");
  *(long *)(param_1 + 0x600) = lVar10;
  *(undefined8 *)(lVar10 + 0xf8) = 0x800000000;
  lVar10 = *(long *)(param_1 + 0x600);
  pcVar8 = *(code **)(lVar10 + 0x158);
  if (pcVar8 != (code *)0x0) {
    *(undefined8 *)(lVar10 + 0x160) = 0;
    *(undefined8 *)(lVar10 + 0x168) = 0;
    *(undefined8 *)(lVar10 + 0x150) = 0;
    *(undefined8 *)(lVar10 + 0x158) = 0;
    (*pcVar8)(lVar10 + 0x170);
  }
  if (local_b0 != (code *)0x0) {
    (*local_b0)(alStack_a0,lVar10 + 0x170);
    *(undefined1 **)(lVar10 + 0x168) = local_a8;
    *(code **)(lVar10 + 0x158) = local_b8;
    *(code **)(lVar10 + 0x160) = local_b0;
    *(undefined8 *)(lVar10 + 0x150) = local_c0;
  }
  pcVar8 = local_b8;
  *(undefined1 *)(*(long *)(param_1 + 0x600) + 0x141) = 1;
  if (local_b8 != (code *)0x0) {
    local_b0 = (code *)0x0;
    local_a8 = (undefined1 *)0x0;
    local_c0 = (undefined1 *)0x0;
    local_b8 = (code *)0x0;
    (*pcVar8)(alStack_a0);
  }
  local_b0 = FUN_00fd5620;
  local_c0 = &LAB_00fd5590;
  local_b8 = FUN_00fd5610;
  local_a8 = &LAB_00fd5630;
  alStack_a0[0] = param_1;
  lVar10 = FUN_00ffd950(lVar7,"close_button");
  *(long *)(param_1 + 0x608) = lVar10;
  *(undefined8 *)(lVar10 + 0xf8) = 0x400000000;
  lVar10 = *(long *)(param_1 + 0x608);
  pcVar9 = *(code **)(lVar10 + 0x158);
  pcVar8 = FUN_00fd5620;
  if (pcVar9 != (code *)0x0) {
    *(undefined8 *)(lVar10 + 0x160) = 0;
    *(undefined8 *)(lVar10 + 0x168) = 0;
    *(undefined8 *)(lVar10 + 0x150) = 0;
    *(undefined8 *)(lVar10 + 0x158) = 0;
    (*pcVar9)(lVar10 + 0x170);
    pcVar8 = local_b0;
    if (local_b0 == (code *)0x0) goto LAB_00fd2aa8;
  }
  (*pcVar8)(alStack_a0,lVar10 + 0x170);
  *(undefined1 **)(lVar10 + 0x168) = local_a8;
  *(code **)(lVar10 + 0x158) = local_b8;
  *(code **)(lVar10 + 0x160) = local_b0;
  *(undefined8 *)(lVar10 + 0x150) = local_c0;
LAB_00fd2aa8:
  pcVar8 = local_b8;
  *(undefined1 *)(*(long *)(param_1 + 0x608) + 0x141) = 1;
  if (local_b8 != (code *)0x0) {
    local_b0 = (code *)0x0;
    local_a8 = (undefined1 *)0x0;
    local_c0 = (undefined1 *)0x0;
    local_b8 = (code *)0x0;
    (*pcVar8)(alStack_a0);
  }
  lVar10 = FUN_00ffd950(lVar7,"map_button");
  *(long *)(param_1 + 0x618) = lVar10;
  *(undefined8 *)(lVar10 + 0xf8) = 0x8000000000;
  *(undefined1 *)(*(long *)(param_1 + 0x618) + 0x141) = 1;
  lVar10 = FUN_00ffd950(lVar7,"save_button");
  *(long *)(param_1 + 0x610) = lVar10;
  *(undefined8 *)(lVar10 + 0xf8) = 0x1000000000;
  lVar10 = *(long *)(param_1 + 0x610);
  uVar5 = FUN_00ecee70();
  if ((uVar5 & 1) == 0) {
    puVar12 = (undefined1 *)0x0;
    local_c0 = (undefined1 *)0xd9c1a5e83c91de23;
    local_b8 = (code *)0x1d21c29;
    local_b0 = (code *)0x12;
    local_a8 = (undefined1 *)0x0;
    *(undefined8 *)(lVar10 + 0x120) = 0xd9c1a5e83c91de23;
    *(char **)(lVar10 + 0x128) = "Play_UI_pbox_error";
    *(undefined8 *)(lVar10 + 0x130) = 0x12;
  }
  else {
    FUN_006cf0a0(&local_c0,&DAT_026662f0);
    puVar12 = local_a8;
    *(undefined1 **)(lVar10 + 0x120) = local_c0;
    *(code **)(lVar10 + 0x128) = local_b8;
    *(code **)(lVar10 + 0x130) = local_b0;
    if (local_a8 != (undefined1 *)0x0) {
      (**(code **)(*(long *)(local_a8 + 0x48) + 0x10))();
    }
  }
  lVar6 = *(long *)(lVar10 + 0x138);
  *(undefined1 **)(lVar10 + 0x138) = puVar12;
  if (lVar6 != 0) {
    (**(code **)(*(long *)(lVar6 + 0x48) + 0x18))();
  }
  if (local_a8 != (undefined1 *)0x0) {
    (**(code **)(*(long *)(local_a8 + 0x48) + 0x18))();
    local_a8 = (undefined1 *)0x0;
  }
  lVar10 = *(long *)(*(long *)PTR_DAT_02710848 + 0x90);
  if (lVar10 == 0) {
    uVar5 = FUN_0100c3f0(0,1);
  }
  else {
    plVar13 = (long *)(lVar10 + 0x48);
    (**(code **)(*plVar13 + 0x10))(plVar13);
    uVar5 = FUN_0100c3f0(lVar10,1);
    (**(code **)(*plVar13 + 0x18))(plVar13);
  }
  lVar7 = FUN_00ffd950(lVar7,"ps_hide_button");
  *(undefined8 *)(lVar7 + 0xf8) = 0x20;
  *(undefined1 *)(lVar7 + 0x141) = 1;
  FUN_00fd3760(param_1,0,0);
  FUN_00fd3760(param_1,1,1);
  FUN_00fd3760(param_1,2,2);
  FUN_00fd3760(param_1,3,3);
  FUN_00fd3760(param_1,4,4);
  FUN_00fd3760(param_1,5,5);
  FUN_00fd3760(param_1,6,6);
  FUN_00fd3760(param_1,7,7);
  FUN_00fd3760(param_1,8,8);
  FUN_00fd3760(param_1,9,9);
  local_c0 = &DAT_80a8e808288e407;
  lVar7 = FUN_0167b6b0(*(undefined8 *)(param_1 + 0x2b0),&local_c0);
  *(byte *)(lVar7 + 0x58) = *(byte *)(lVar7 + 0x58) & 0xfe;
  lVar7 = FUN_0167b6b0(*(undefined8 *)(param_1 + 0x2b0),PTR_DAT_02722f98 + 0x208);
  bVar2 = 0;
  *(byte *)(lVar7 + 0x58) = *(byte *)(lVar7 + 0x58) & 0xfe;
  if (((uVar5 & 1) == 0) && (*PTR_DAT_02722fa0 != '\0')) {
    bVar2 = FUN_00ecee70();
  }
  lVar7 = FUN_0167b6b0(*(undefined8 *)(param_1 + 0x2b0),PTR_DAT_02722fa8);
  *(byte *)(lVar7 + 0x58) = *(byte *)(lVar7 + 0x58) & 0xfe | bVar2 & 1;
  iVar3 = FUN_016b7980(*(undefined8 *)(param_1 + 0x5f0));
  if (0 < iVar3) {
    iVar11 = 0;
    do {
      local_c0 = (undefined1 *)CONCAT44(2,iVar11);
      FUN_016b81d0(*(undefined8 *)(param_1 + 0x5f0),&local_c0,bVar2 & 1);
      iVar11 = iVar11 + 1;
    } while (iVar3 != iVar11);
  }
  uVar4 = *(undefined8 *)(param_1 + 0x5e8);
  local_c0 = (undefined1 *)0xc141df5b11067281;
  lVar7 = *(long *)(param_1 + 0x2b0);
  if (lVar7 != 0) {
    (**(code **)(*(long *)(lVar7 + 0x48) + 0x10))();
  }
  lVar10 = *(long *)(lVar7 + 0x2e8);
  if (lVar10 == 0) {
    FUN_0077eb10(uVar4,&local_c0,0);
  }
  else {
    plVar13 = (long *)(lVar10 + 0x48);
    (**(code **)(*plVar13 + 0x10))(plVar13);
    FUN_0077eb10(uVar4,&local_c0,lVar10);
    (**(code **)(*plVar13 + 0x18))(plVar13);
  }
  (**(code **)(*(long *)(lVar7 + 0x48) + 0x18))((long *)(lVar7 + 0x48));
  lVar7 = *(long *)(param_1 + 0x2b0);
  if (lVar7 == 0) {
    local_c0 = (undefined1 *)0x5af53e867f15a250;
    FUN_0167cce0(0,&local_c0,10);
  }
  else {
    plVar13 = (long *)(lVar7 + 0x48);
    (**(code **)(*plVar13 + 0x10))(plVar13);
    local_c0 = (undefined1 *)0x5af53e867f15a250;
    FUN_0167cce0(lVar7,&local_c0,10);
    (**(code **)(*plVar13 + 0x18))(plVar13);
  }
  return;
}


