/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00c0a550; name: FUN_00c0a550
 */


/* WARNING: Type propagation algorithm not settling */

void FUN_00c0a550(long param_1,long param_2)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  long *plVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long *plVar8;
  undefined8 local_178;
  undefined8 local_170;
  undefined8 uStack_168;
  undefined8 local_160;
  undefined8 uStack_158;
  undefined8 local_150;
  undefined8 uStack_148;
  undefined8 local_140;
  undefined8 local_138;
  undefined8 uStack_130;
  undefined8 local_128;
  undefined8 uStack_120;
  undefined8 local_118;
  undefined8 uStack_110;
  undefined8 local_108;
  undefined8 local_100;
  undefined8 local_f8;
  undefined8 local_f0;
  undefined8 local_e8;
  undefined8 local_e0;
  undefined8 local_d8;
  undefined8 uStack_d0;
  undefined8 local_c8;
  undefined8 uStack_c0;
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined8 local_a8;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 local_70 [2];
  
  plVar4 = *(long **)(param_1 + 8);
  lVar1 = nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_02710860);
  if (0xf < *(ulong *)(lVar1 + 0x80)) {
                    /* WARNING: Subroutine does not return */
    abort();
  }
  *(long **)(lVar1 + *(ulong *)(lVar1 + 0x80) * 8) = plVar4;
  *(long *)(lVar1 + 0x80) = *(long *)(lVar1 + 0x80) + 1;
  lVar2 = (**(code **)(*plVar4 + 0x10))(plVar4,0x80,8);
  if (lVar2 == 0) {
    (**(code **)(*plVar4 + 0xb8))(plVar4);
  }
  FUN_0077d050(lVar2,0x200);
  *(long **)(lVar2 + 8) = plVar4;
  *(long *)(lVar2 + 0x10) = lVar2;
  *(undefined8 *)(lVar2 + 0x18) = 0x80;
  *(undefined8 *)(lVar2 + 0x20) = 8;
  *(long *)(lVar1 + 0x80) = *(long *)(lVar1 + 0x80) + -1;
  if (lVar2 != 0) {
    (**(code **)(*(long *)(lVar2 + 0x48) + 0x10))();
  }
  uVar3 = *(undefined8 *)(param_1 + 0x5e0);
  local_70[0] = 0xb61ed9bd84380415;
  lVar1 = *(long *)(*(long *)(param_1 + 0x5f8) + 0x2e8);
  if (lVar1 == 0) {
    FUN_0077eb10(uVar3,local_70,0);
    lVar1 = *(long *)(*(long *)(param_1 + 0x5f8) + 0x2e8);
  }
  else {
    plVar4 = (long *)(lVar1 + 0x48);
    (**(code **)(*plVar4 + 0x10))(plVar4);
    FUN_0077eb10(uVar3,local_70,lVar1);
    (**(code **)(*plVar4 + 0x18))(plVar4);
    lVar1 = *(long *)(*(long *)(param_1 + 0x5f8) + 0x2e8);
  }
  if (lVar1 == 0) {
    uVar3 = FUN_0077d470(0);
    FUN_00ffd6a0(param_1 + 0x100,"pane_T_detail_f_00",uVar3,10);
  }
  else {
    plVar4 = (long *)(lVar1 + 0x48);
    (**(code **)(*plVar4 + 0x10))(plVar4);
    uVar3 = FUN_0077d470(lVar1);
    FUN_00ffd6a0(param_1 + 0x100,"pane_T_detail_f_00",uVar3,10);
    (**(code **)(*plVar4 + 0x18))(plVar4);
  }
  lVar1 = param_1 + 0x100;
  uVar3 = *(undefined8 *)(param_1 + 0x5e0);
  local_70[0] = 0x7fda360bb79cd71f;
  lVar6 = *(long *)(*(long *)(param_1 + 0x5f8) + 0x2e8);
  plVar4 = (long *)(param_1 + 0x5f8);
  if (lVar6 == 0) {
    FUN_0077eb10(uVar3,local_70,0);
  }
  else {
    plVar8 = (long *)(lVar6 + 0x48);
    (**(code **)(*plVar8 + 0x10))(plVar8);
    FUN_0077eb10(uVar3,local_70,lVar6);
    (**(code **)(*plVar8 + 0x18))(plVar8);
  }
  FUN_0077d520(lVar2,param_2);
  lVar6 = *(long *)(*plVar4 + 0x2e0);
  if (lVar6 == 0) {
    FUN_014c7aa0(0,0,lVar2,*(undefined4 *)(param_2 + 0x124),0,0);
    lVar6 = *plVar4;
    lVar5 = *(long *)(lVar6 + 0x2e0);
  }
  else {
    plVar8 = (long *)(lVar6 + 0x48);
    (**(code **)(*plVar8 + 0x10))(plVar8);
    FUN_014c7aa0(lVar6,0,lVar2,*(undefined4 *)(param_2 + 0x124),0,0);
    (**(code **)(*plVar8 + 0x18))(plVar8);
    lVar6 = *plVar4;
    lVar5 = *(long *)(lVar6 + 0x2e0);
  }
  if (lVar5 != 0) {
    (**(code **)(*(long *)(lVar5 + 0x48) + 0x10))();
    lVar6 = *plVar4;
  }
  lVar7 = *(long *)(lVar6 + 0x2f0);
  if (lVar7 != 0) {
    (**(code **)(*(long *)(lVar7 + 0x48) + 0x10))();
    lVar6 = *plVar4;
  }
  lVar6 = *(long *)(lVar6 + 0x2e8);
  plVar8 = (long *)(lVar6 + 0x48);
  if (lVar6 != 0) {
    (**(code **)(*plVar8 + 0x10))(plVar8);
  }
  FUN_014c62d0(lVar5,lVar7,lVar6);
  (**(code **)(*(long *)(lVar6 + 0x48) + 0x18))(plVar8);
  if (lVar7 != 0) {
    (**(code **)(*(long *)(lVar7 + 0x48) + 0x18))((long *)(lVar7 + 0x48));
  }
  if (lVar5 != 0) {
    (**(code **)(*(long *)(lVar5 + 0x48) + 0x18))((long *)(lVar5 + 0x48));
  }
  lVar6 = *(long *)(*plVar4 + 0x2f0);
  if (lVar6 == 0) {
    uVar3 = FUN_0077d470(0);
    FUN_00ffd6a0(lVar1,"pane_T_detail_f_01",uVar3,10);
  }
  else {
    plVar8 = (long *)(lVar6 + 0x48);
    (**(code **)(*plVar8 + 0x10))(plVar8);
    uVar3 = FUN_0077d470(lVar6);
    FUN_00ffd6a0(lVar1,"pane_T_detail_f_01",uVar3,10);
    (**(code **)(*plVar8 + 0x18))(plVar8);
  }
  uVar3 = *(undefined8 *)(param_1 + 0x5e0);
  local_70[0] = 0xcfb0de7f00da5eba;
  lVar6 = *(long *)(*(long *)(param_1 + 0x5f8) + 0x2e8);
  if (lVar6 == 0) {
    FUN_0077eb10(uVar3,local_70,0);
  }
  else {
    plVar8 = (long *)(lVar6 + 0x48);
    (**(code **)(*plVar8 + 0x10))(plVar8);
    FUN_0077eb10(uVar3,local_70,lVar6);
    (**(code **)(*plVar8 + 0x18))(plVar8);
  }
  FUN_0077d520(lVar2,param_2 + 0x92);
  lVar6 = *(long *)(*plVar4 + 0x2e0);
  if (lVar6 == 0) {
    FUN_014c7aa0(0,0,lVar2,*(undefined4 *)(param_2 + 0x124),0,0);
    lVar6 = *plVar4;
    lVar5 = *(long *)(lVar6 + 0x2e0);
  }
  else {
    plVar8 = (long *)(lVar6 + 0x48);
    (**(code **)(*plVar8 + 0x10))(plVar8);
    FUN_014c7aa0(lVar6,0,lVar2,*(undefined4 *)(param_2 + 0x124),0,0);
    (**(code **)(*plVar8 + 0x18))(plVar8);
    lVar6 = *plVar4;
    lVar5 = *(long *)(lVar6 + 0x2e0);
  }
  if (lVar5 != 0) {
    (**(code **)(*(long *)(lVar5 + 0x48) + 0x10))();
    lVar6 = *plVar4;
  }
  lVar7 = *(long *)(lVar6 + 0x2f0);
  if (lVar7 != 0) {
    (**(code **)(*(long *)(lVar7 + 0x48) + 0x10))();
    lVar6 = *plVar4;
  }
  lVar6 = *(long *)(lVar6 + 0x2e8);
  plVar8 = (long *)(lVar6 + 0x48);
  if (lVar6 != 0) {
    (**(code **)(*plVar8 + 0x10))(plVar8);
  }
  FUN_014c62d0(lVar5,lVar7,lVar6);
  (**(code **)(*(long *)(lVar6 + 0x48) + 0x18))(plVar8);
  if (lVar7 != 0) {
    (**(code **)(*(long *)(lVar7 + 0x48) + 0x18))((long *)(lVar7 + 0x48));
  }
  if (lVar5 != 0) {
    (**(code **)(*(long *)(lVar5 + 0x48) + 0x18))((long *)(lVar5 + 0x48));
  }
  lVar6 = *(long *)(*plVar4 + 0x2f0);
  if (lVar6 == 0) {
    uVar3 = FUN_0077d470(0);
    FUN_00ffd6a0(lVar1,"pane_T_detail_f_02",uVar3,10);
  }
  else {
    plVar8 = (long *)(lVar6 + 0x48);
    (**(code **)(*plVar8 + 0x10))(plVar8);
    uVar3 = FUN_0077d470(lVar6);
    FUN_00ffd6a0(lVar1,"pane_T_detail_f_02",uVar3,10);
    (**(code **)(*plVar8 + 0x18))(plVar8);
  }
  uVar3 = *(undefined8 *)(param_1 + 0x5e0);
  local_70[0] = 0xb688db3752bbca0;
  lVar6 = *(long *)(*(long *)(param_1 + 0x5f8) + 0x2e8);
  if (lVar6 == 0) {
    FUN_0077eb10(uVar3,local_70,0);
    lVar6 = *(long *)(*plVar4 + 0x2e8);
  }
  else {
    plVar8 = (long *)(lVar6 + 0x48);
    (**(code **)(*plVar8 + 0x10))(plVar8);
    FUN_0077eb10(uVar3,local_70,lVar6);
    (**(code **)(*plVar8 + 0x18))(plVar8);
    lVar6 = *(long *)(*plVar4 + 0x2e8);
  }
  if (lVar6 == 0) {
    uVar3 = FUN_0077d470(0);
    FUN_00ffd6a0(lVar1,"pane_T_detail_f_03",uVar3,10);
    lVar6 = *(long *)(*plVar4 + 0x2f0);
  }
  else {
    plVar8 = (long *)(lVar6 + 0x48);
    (**(code **)(*plVar8 + 0x10))(plVar8);
    uVar3 = FUN_0077d470(lVar6);
    FUN_00ffd6a0(lVar1,"pane_T_detail_f_03",uVar3,10);
    (**(code **)(*plVar8 + 0x18))(plVar8);
    lVar6 = *(long *)(*plVar4 + 0x2f0);
  }
  if (lVar6 == 0) {
    FUN_0077d520(0,param_2 + 0x294);
    lVar6 = *(long *)(*plVar4 + 0x2f0);
  }
  else {
    plVar8 = (long *)(lVar6 + 0x48);
    (**(code **)(*plVar8 + 0x10))(plVar8);
    FUN_0077d520(lVar6,param_2 + 0x294);
    (**(code **)(*plVar8 + 0x18))(plVar8);
    lVar6 = *(long *)(*plVar4 + 0x2f0);
  }
  if (lVar6 == 0) {
    uVar3 = FUN_0077d470(0);
    FUN_00ffd6a0(lVar1,"pane_T_detail_f_04",uVar3,10);
  }
  else {
    plVar8 = (long *)(lVar6 + 0x48);
    (**(code **)(*plVar8 + 0x10))(plVar8);
    uVar3 = FUN_0077d470(lVar6);
    FUN_00ffd6a0(lVar1,"pane_T_detail_f_04",uVar3,10);
    (**(code **)(*plVar8 + 0x18))(plVar8);
  }
  uVar3 = *(undefined8 *)(param_1 + 0x5e0);
  local_70[0] = 0xcfad4e7f00d73433;
  lVar6 = *(long *)(*(long *)(param_1 + 0x5f8) + 0x2e8);
  if (lVar6 == 0) {
    FUN_0077eb10(uVar3,local_70,0);
    lVar6 = *(long *)(*plVar4 + 0x2e8);
  }
  else {
    plVar8 = (long *)(lVar6 + 0x48);
    (**(code **)(*plVar8 + 0x10))(plVar8);
    FUN_0077eb10(uVar3,local_70,lVar6);
    (**(code **)(*plVar8 + 0x18))(plVar8);
    lVar6 = *(long *)(*plVar4 + 0x2e8);
  }
  if (lVar6 == 0) {
    uVar3 = FUN_0077d470(0);
    FUN_00ffd6a0(lVar1,"pane_T_detail_f_05",uVar3,10);
  }
  else {
    plVar8 = (long *)(lVar6 + 0x48);
    (**(code **)(*plVar8 + 0x10))(plVar8);
    uVar3 = FUN_0077d470(lVar6);
    FUN_00ffd6a0(lVar1,"pane_T_detail_f_05",uVar3,10);
    (**(code **)(*plVar8 + 0x18))(plVar8);
  }
  FUN_0168e240(*(undefined8 *)(param_1 + 0x848),0,*(undefined4 *)(param_2 + 0x2b8));
  uVar3 = *(undefined8 *)(param_1 + 0x5e0);
  local_70[0] = 0xcfb0d27f00da4a56;
  lVar6 = *(long *)(*(long *)(param_1 + 0x5f8) + 0x2e8);
  if (lVar6 == 0) {
    FUN_0077eb10(uVar3,local_70,0);
  }
  else {
    plVar8 = (long *)(lVar6 + 0x48);
    (**(code **)(*plVar8 + 0x10))(plVar8);
    FUN_0077eb10(uVar3,local_70,lVar6);
    (**(code **)(*plVar8 + 0x18))(plVar8);
  }
  FUN_0077d520(lVar2,param_2 + 700);
  lVar6 = *(long *)(*plVar4 + 0x2e0);
  if (lVar6 == 0) {
    FUN_014c9110(0,0,lVar2,*(undefined1 *)(param_2 + 0x2ee),*(undefined1 *)(param_2 + 0x2ef));
    lVar6 = *plVar4;
    lVar5 = *(long *)(lVar6 + 0x2e0);
  }
  else {
    plVar8 = (long *)(lVar6 + 0x48);
    (**(code **)(*plVar8 + 0x10))(plVar8);
    FUN_014c9110(lVar6,0,lVar2,*(undefined1 *)(param_2 + 0x2ee),*(undefined1 *)(param_2 + 0x2ef));
    (**(code **)(*plVar8 + 0x18))(plVar8);
    lVar6 = *plVar4;
    lVar5 = *(long *)(lVar6 + 0x2e0);
  }
  if (lVar5 != 0) {
    (**(code **)(*(long *)(lVar5 + 0x48) + 0x10))();
    lVar6 = *plVar4;
  }
  lVar7 = *(long *)(lVar6 + 0x2f0);
  if (lVar7 != 0) {
    (**(code **)(*(long *)(lVar7 + 0x48) + 0x10))();
    lVar6 = *plVar4;
  }
  lVar6 = *(long *)(lVar6 + 0x2e8);
  plVar8 = (long *)(lVar6 + 0x48);
  if (lVar6 != 0) {
    (**(code **)(*plVar8 + 0x10))(plVar8);
  }
  FUN_014c62d0(lVar5,lVar7,lVar6);
  (**(code **)(*(long *)(lVar6 + 0x48) + 0x18))(plVar8);
  if (lVar7 != 0) {
    (**(code **)(*(long *)(lVar7 + 0x48) + 0x18))((long *)(lVar7 + 0x48));
  }
  if (lVar5 != 0) {
    (**(code **)(*(long *)(lVar5 + 0x48) + 0x18))((long *)(lVar5 + 0x48));
  }
  lVar6 = *(long *)(*plVar4 + 0x2f0);
  if (lVar6 == 0) {
    uVar3 = FUN_0077d470(0);
    FUN_00ffd6a0(lVar1,"pane_T_detail_f_06",uVar3,10);
  }
  else {
    plVar8 = (long *)(lVar6 + 0x48);
    (**(code **)(*plVar8 + 0x10))(plVar8);
    uVar3 = FUN_0077d470(lVar6);
    FUN_00ffd6a0(lVar1,"pane_T_detail_f_06",uVar3,10);
    (**(code **)(*plVar8 + 0x18))(plVar8);
  }
  uVar3 = *(undefined8 *)(param_1 + 0x5e0);
  local_70[0] = 0xcfad4d7f00d73280;
  lVar6 = *(long *)(*(long *)(param_1 + 0x5f8) + 0x2e8);
  if (lVar6 == 0) {
    FUN_0077eb10(uVar3,local_70,0);
    lVar6 = *(long *)(*plVar4 + 0x2e8);
  }
  else {
    plVar8 = (long *)(lVar6 + 0x48);
    (**(code **)(*plVar8 + 0x10))(plVar8);
    FUN_0077eb10(uVar3,local_70,lVar6);
    (**(code **)(*plVar8 + 0x18))(plVar8);
    lVar6 = *(long *)(*plVar4 + 0x2e8);
  }
  if (lVar6 == 0) {
    uVar3 = FUN_0077d470(0);
    FUN_00ffd6a0(lVar1,"pane_T_detail_f_07",uVar3,10);
  }
  else {
    plVar8 = (long *)(lVar6 + 0x48);
    (**(code **)(*plVar8 + 0x10))(plVar8);
    uVar3 = FUN_0077d470(lVar6);
    FUN_00ffd6a0(lVar1,"pane_T_detail_f_07",uVar3,10);
    (**(code **)(*plVar8 + 0x18))(plVar8);
  }
  FUN_00bf08e0(param_1,*(undefined4 *)(param_2 + 0x208),*(undefined1 *)(param_2 + 0x20c),
               *(undefined1 *)(param_2 + 0x20d),"pane_T_detail_f_10","pane_T_detail_f_10",
               "pane_T_detail_f_09","pane_T_detail_f_08");
  uVar3 = *(undefined8 *)(param_1 + 0x5e0);
  local_70[0] = 0xcfb0d37f00da4c09;
  lVar6 = *(long *)(*(long *)(param_1 + 0x5f8) + 0x2e8);
  if (lVar6 == 0) {
    FUN_0077eb10(uVar3,local_70,0);
    lVar6 = *(long *)(*plVar4 + 0x2e8);
  }
  else {
    plVar8 = (long *)(lVar6 + 0x48);
    (**(code **)(*plVar8 + 0x10))(plVar8);
    FUN_0077eb10(uVar3,local_70,lVar6);
    (**(code **)(*plVar8 + 0x18))(plVar8);
    lVar6 = *(long *)(*plVar4 + 0x2e8);
  }
  if (lVar6 == 0) {
    uVar3 = FUN_0077d470(0);
    FUN_00ffd6a0(lVar1,"pane_T_detail_f_11",uVar3,10);
  }
  else {
    plVar8 = (long *)(lVar6 + 0x48);
    (**(code **)(*plVar8 + 0x10))(plVar8);
    uVar3 = FUN_0077d470(lVar6);
    FUN_00ffd6a0(lVar1,"pane_T_detail_f_11",uVar3,10);
    (**(code **)(*plVar8 + 0x18))(plVar8);
  }
  local_a8 = *(undefined8 *)(param_2 + 0x128);
  local_a0 = *(undefined8 *)(param_2 + 0x130);
  uStack_98 = *(undefined8 *)(param_2 + 0x138);
  local_90 = *(undefined8 *)(param_2 + 0x140);
  uStack_88 = *(undefined8 *)(param_2 + 0x148);
  local_80 = *(undefined8 *)(param_2 + 0x150);
  uStack_78 = *(undefined8 *)(param_2 + 0x158);
  local_e0 = *(undefined8 *)(param_2 + 0x160);
  local_d8 = *(undefined8 *)(param_2 + 0x168);
  uStack_d0 = *(undefined8 *)(param_2 + 0x170);
  local_c8 = *(undefined8 *)(param_2 + 0x178);
  uStack_c0 = *(undefined8 *)(param_2 + 0x180);
  local_b8 = *(undefined8 *)(param_2 + 0x188);
  uStack_b0 = *(undefined8 *)(param_2 + 400);
  local_70[0] = 0xd37c12ca39c412dd;
  local_f0 = 0xd37c11ca39c4112a;
  local_e8 = 0xcfb0df7f00da606d;
  local_108 = 0xcfb0dd7f00da5d07;
  local_100 = 0xd37c0cca39c408ab;
  local_f8 = 0xcfb0dc7f00da5b54;
  FUN_00beff30(param_1,&local_a8,&local_e0,local_70,&local_e8,&local_f0,&local_f8,&local_100,
               &local_108);
  local_140 = *(undefined8 *)(param_2 + 0x198);
  local_138 = *(undefined8 *)(param_2 + 0x1a0);
  uStack_130 = *(undefined8 *)(param_2 + 0x1a8);
  local_128 = *(undefined8 *)(param_2 + 0x1b0);
  uStack_120 = *(undefined8 *)(param_2 + 0x1b8);
  local_118 = *(undefined8 *)(param_2 + 0x1c0);
  uStack_110 = *(undefined8 *)(param_2 + 0x1c8);
  uStack_168 = *(undefined8 *)(param_2 + 0x1e0);
  local_178 = *(undefined8 *)(param_2 + 0x1d0);
  local_170 = *(undefined8 *)(param_2 + 0x1d8);
  local_160 = *(undefined8 *)(param_2 + 0x1e8);
  uStack_158 = *(undefined8 *)(param_2 + 0x1f0);
  local_150 = *(undefined8 *)(param_2 + 0x1f8);
  uStack_148 = *(undefined8 *)(param_2 + 0x200);
  local_70[0] = 0xd37c0bca39c406f8;
  local_f0 = 0xd37c0eca39c40c11;
  local_e8 = 0xcfb0df7f00da606d;
  local_108 = 0xcfb0dd7f00da5d07;
  local_100 = 0xd37c0dca39c40a5e;
  local_f8 = 0xcfb0dc7f00da5b54;
  FUN_00beff30(param_1,&local_140,&local_178,local_70,&local_e8,&local_f0,&local_f8,&local_100,
               &local_108);
  uVar3 = *(undefined8 *)(param_1 + 0x5e0);
  local_70[0] = 0xcfaa4e7f00d4fe5c;
  lVar6 = *(long *)(*(long *)(param_1 + 0x5f8) + 0x2e8);
  if (lVar6 == 0) {
    FUN_0077eb10(uVar3,local_70,0);
    lVar6 = *(long *)(*plVar4 + 0x2e8);
  }
  else {
    plVar8 = (long *)(lVar6 + 0x48);
    (**(code **)(*plVar8 + 0x10))(plVar8);
    FUN_0077eb10(uVar3,local_70,lVar6);
    (**(code **)(*plVar8 + 0x18))(plVar8);
    lVar6 = *(long *)(*plVar4 + 0x2e8);
  }
  if (lVar6 == 0) {
    uVar3 = FUN_0077d470(0);
    FUN_00ffd6a0(lVar1,"pane_T_detail_f_18",uVar3,10);
  }
  else {
    plVar8 = (long *)(lVar6 + 0x48);
    (**(code **)(*plVar8 + 0x10))(plVar8);
    uVar3 = FUN_0077d470(lVar6);
    FUN_00ffd6a0(lVar1,"pane_T_detail_f_18",uVar3,10);
    (**(code **)(*plVar8 + 0x18))(plVar8);
  }
  uVar3 = *(undefined8 *)(param_1 + 0x5e0);
  local_70[0] = 0xcfa6c97f00d1e686;
  lVar6 = *(long *)(*(long *)(param_1 + 0x5f8) + 0x2e8);
  if (lVar6 == 0) {
    FUN_0077eb10(uVar3,local_70,0);
    lVar6 = *(long *)(*plVar4 + 0x2e0);
  }
  else {
    plVar8 = (long *)(lVar6 + 0x48);
    (**(code **)(*plVar8 + 0x10))(plVar8);
    FUN_0077eb10(uVar3,local_70,lVar6);
    (**(code **)(*plVar8 + 0x18))(plVar8);
    lVar6 = *(long *)(*plVar4 + 0x2e0);
  }
  if (lVar6 == 0) {
    FUN_014ca220(0,0,*(undefined1 *)(param_2 + 0x20e),2,0,1);
    lVar6 = *plVar4;
    lVar5 = *(long *)(lVar6 + 0x2e0);
  }
  else {
    plVar8 = (long *)(lVar6 + 0x48);
    (**(code **)(*plVar8 + 0x10))(plVar8);
    FUN_014ca220(lVar6,0,*(undefined1 *)(param_2 + 0x20e),2,0,1);
    (**(code **)(*plVar8 + 0x18))(plVar8);
    lVar6 = *plVar4;
    lVar5 = *(long *)(lVar6 + 0x2e0);
  }
  if (lVar5 != 0) {
    (**(code **)(*(long *)(lVar5 + 0x48) + 0x10))();
    lVar6 = *plVar4;
  }
  lVar7 = *(long *)(lVar6 + 0x2f0);
  if (lVar7 != 0) {
    (**(code **)(*(long *)(lVar7 + 0x48) + 0x10))();
    lVar6 = *plVar4;
  }
  lVar6 = *(long *)(lVar6 + 0x2e8);
  plVar8 = (long *)(lVar6 + 0x48);
  if (lVar6 != 0) {
    (**(code **)(*plVar8 + 0x10))(plVar8);
  }
  FUN_014c62d0(lVar5,lVar7,lVar6);
  (**(code **)(*(long *)(lVar6 + 0x48) + 0x18))(plVar8);
  if (lVar7 != 0) {
    (**(code **)(*(long *)(lVar7 + 0x48) + 0x18))((long *)(lVar7 + 0x48));
  }
  if (lVar5 != 0) {
    (**(code **)(*(long *)(lVar5 + 0x48) + 0x18))((long *)(lVar5 + 0x48));
  }
  lVar6 = *(long *)(*plVar4 + 0x2f0);
  if (lVar6 == 0) {
    uVar3 = FUN_0077d470(0);
    FUN_00ffd6a0(lVar1,"pane_T_detail_f_19",uVar3,10);
  }
  else {
    plVar8 = (long *)(lVar6 + 0x48);
    (**(code **)(*plVar8 + 0x10))(plVar8);
    uVar3 = FUN_0077d470(lVar6);
    FUN_00ffd6a0(lVar1,"pane_T_detail_f_19",uVar3,10);
    (**(code **)(*plVar8 + 0x18))(plVar8);
  }
  uVar3 = *(undefined8 *)(param_1 + 0x5e0);
  local_70[0] = 0xcfaa567f00d50bf4;
  lVar6 = *(long *)(*(long *)(param_1 + 0x5f8) + 0x2e8);
  if (lVar6 == 0) {
    FUN_0077eb10(uVar3,local_70,0);
    lVar6 = *(long *)(*plVar4 + 0x2e8);
  }
  else {
    plVar8 = (long *)(lVar6 + 0x48);
    (**(code **)(*plVar8 + 0x10))(plVar8);
    FUN_0077eb10(uVar3,local_70,lVar6);
    (**(code **)(*plVar8 + 0x18))(plVar8);
    lVar6 = *(long *)(*plVar4 + 0x2e8);
  }
  if (lVar6 == 0) {
    uVar3 = FUN_0077d470(0);
    FUN_00ffd6a0(lVar1,"pane_T_detail_f_20",uVar3,10);
  }
  else {
    plVar8 = (long *)(lVar6 + 0x48);
    (**(code **)(*plVar8 + 0x10))(plVar8);
    uVar3 = FUN_0077d470(lVar6);
    FUN_00ffd6a0(lVar1,"pane_T_detail_f_20",uVar3,10);
    (**(code **)(*plVar8 + 0x18))(plVar8);
  }
  uVar3 = *(undefined8 *)(param_1 + 0x5e0);
  local_70[0] = 0xcf9fdc7f00cbe821;
  lVar6 = *(long *)(*(long *)(param_1 + 0x5f8) + 0x2e8);
  if (lVar6 == 0) {
    FUN_0077eb10(uVar3,local_70,0);
    lVar6 = *(long *)(*plVar4 + 0x2e0);
  }
  else {
    plVar8 = (long *)(lVar6 + 0x48);
    (**(code **)(*plVar8 + 0x10))(plVar8);
    FUN_0077eb10(uVar3,local_70,lVar6);
    (**(code **)(*plVar8 + 0x18))(plVar8);
    lVar6 = *(long *)(*plVar4 + 0x2e0);
  }
  if (lVar6 == 0) {
    FUN_014ca220(0,0,*(undefined2 *)(param_2 + 0x2f0),3,0,1);
    lVar6 = *plVar4;
    lVar5 = *(long *)(lVar6 + 0x2e0);
  }
  else {
    plVar8 = (long *)(lVar6 + 0x48);
    (**(code **)(*plVar8 + 0x10))(plVar8);
    FUN_014ca220(lVar6,0,*(undefined2 *)(param_2 + 0x2f0),3,0,1);
    (**(code **)(*plVar8 + 0x18))(plVar8);
    lVar6 = *plVar4;
    lVar5 = *(long *)(lVar6 + 0x2e0);
  }
  if (lVar5 != 0) {
    (**(code **)(*(long *)(lVar5 + 0x48) + 0x10))();
    lVar6 = *plVar4;
  }
  lVar7 = *(long *)(lVar6 + 0x2f0);
  if (lVar7 != 0) {
    (**(code **)(*(long *)(lVar7 + 0x48) + 0x10))();
    lVar6 = *plVar4;
  }
  lVar6 = *(long *)(lVar6 + 0x2e8);
  plVar8 = (long *)(lVar6 + 0x48);
  if (lVar6 != 0) {
    (**(code **)(*plVar8 + 0x10))(plVar8);
  }
  FUN_014c62d0(lVar5,lVar7,lVar6);
  (**(code **)(*(long *)(lVar6 + 0x48) + 0x18))(plVar8);
  if (lVar7 != 0) {
    (**(code **)(*(long *)(lVar7 + 0x48) + 0x18))((long *)(lVar7 + 0x48));
  }
  if (lVar5 != 0) {
    (**(code **)(*(long *)(lVar5 + 0x48) + 0x18))((long *)(lVar5 + 0x48));
  }
  lVar6 = *(long *)(*plVar4 + 0x2f0);
  if (lVar6 == 0) {
    uVar3 = FUN_0077d470(0);
    FUN_00ffd6a0(lVar1,"pane_T_detail_f_21",uVar3,10);
  }
  else {
    plVar4 = (long *)(lVar6 + 0x48);
    (**(code **)(*plVar4 + 0x10))(plVar4);
    uVar3 = FUN_0077d470(lVar6);
    FUN_00ffd6a0(lVar1,"pane_T_detail_f_21",uVar3,10);
    (**(code **)(*plVar4 + 0x18))(plVar4);
  }
  local_70[0] = 0x373ec0e46975f49e;
  local_f0 = 0x373ec1e46975f651;
  local_e8 = 0xcfad547f00d73e65;
  local_f8 = 0xcfad537f00d73cb2;
  local_100 = 0x373ebee46975f138;
  local_108 = 0xcfad527f00d73aff;
  FUN_00bf1160(param_1,1,2,local_70,&local_e8,&local_f0,&local_f8,&local_100,&local_108);
  (**(code **)(*(long *)(lVar2 + 0x48) + 0x18))((long *)(lVar2 + 0x48));
  return;
}


