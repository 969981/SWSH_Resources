/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 01486b20; name: FUN_01486b20
 */


void FUN_01486b20(long param_1)

{
  code *pcVar1;
  bool bVar2;
  byte bVar3;
  uint uVar4;
  uint uVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  ulong uVar9;
  int *piVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  long lVar14;
  undefined8 uVar15;
  undefined4 uVar16;
  undefined4 uVar17;
  undefined8 local_110;
  code *local_108;
  undefined8 local_100;
  undefined8 uStack_f8;
  undefined8 local_f0;
  undefined8 uStack_e8;
  undefined8 local_e0;
  undefined8 uStack_d8;
  undefined8 local_d0;
  undefined8 uStack_c8;
  undefined8 local_c0;
  undefined8 uStack_b8;
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined8 local_a0;
  undefined8 uStack_98;
  long local_90;
  long local_88;
  undefined8 local_80;
  undefined8 local_78;
  undefined8 local_70 [2];
  
  lVar6 = FUN_01485a70(*(undefined8 *)(param_1 + 0x5e8));
  lVar11 = *(long *)(param_1 + 0x2b0);
  if (lVar11 != 0) {
    (**(code **)(*(long *)(lVar11 + 0x48) + 0x10))();
  }
  lVar14 = *(long *)(lVar11 + 0x2e0);
  if (lVar14 != 0) {
    (**(code **)(*(long *)(lVar14 + 0x48) + 0x10))();
  }
  (**(code **)(*(long *)(lVar11 + 0x48) + 0x18))((long *)(lVar11 + 0x48));
  FUN_00ff86a0(&local_88,*(undefined8 *)(*(long *)(param_1 + 0x60) + 0xb0),0);
  lVar11 = *(long *)(local_88 + 0x60);
  if (lVar11 != 0) {
    (**(code **)(*(long *)(lVar11 + 0x48) + 0x10))();
  }
  if (local_88 != 0) {
    (**(code **)(*(long *)(local_88 + 0x48) + 0x18))();
    local_88 = 0;
  }
  bVar3 = FUN_0087d610(lVar6,2);
  local_80 = 0;
  local_78 = 0;
  local_88 = 0;
  lVar12 = *(long *)(param_1 + 0x2b0);
  if (lVar12 != 0) {
    (**(code **)(*(long *)(lVar12 + 0x48) + 0x10))();
  }
  if (lVar11 != 0) {
    (**(code **)(*(long *)(lVar11 + 0x48) + 0x10))();
  }
  lVar13 = *(long *)(param_1 + 0x530);
  if (lVar13 != 0) {
    (**(code **)(*(long *)(lVar13 + 0x48) + 0x10))();
  }
  local_70[0] = 0x79cbfa17715041a8;
  lVar7 = FUN_0167b6b0(*(undefined8 *)(param_1 + 0x2b0),local_70);
  *(byte *)(lVar7 + 0x58) = *(byte *)(lVar7 + 0x58) & 0xfe | ~bVar3 & 1;
  lVar7 = *(long *)(param_1 + 0x5f0);
  if (lVar12 != 0) {
    (**(code **)(*(long *)(lVar12 + 0x48) + 0x10))();
  }
  lVar8 = *(long *)(lVar7 + 8);
  *(long *)(lVar7 + 8) = lVar12;
  if (lVar8 != 0) {
    (**(code **)(*(long *)(lVar8 + 0x48) + 0x18))();
  }
  if (lVar13 != 0) {
    (**(code **)(*(long *)(lVar13 + 0x48) + 0x10))();
  }
  lVar8 = *(long *)(lVar7 + 0x10);
  *(long *)(lVar7 + 0x10) = lVar13;
  if (lVar8 != 0) {
    (**(code **)(*(long *)(lVar8 + 0x48) + 0x18))();
  }
  if (lVar11 != 0) {
    (**(code **)(*(long *)(lVar11 + 0x48) + 0x10))();
  }
  lVar8 = *(long *)(lVar7 + 0x18);
  *(long *)(lVar7 + 0x18) = lVar11;
  if (lVar8 != 0) {
    (**(code **)(*(long *)(lVar8 + 0x48) + 0x18))();
  }
  *(undefined8 *)(lVar7 + 0x20) = 0xcbf29ce484222645;
  *(undefined8 *)(lVar7 + 0x28) = 0xff039afb286eecf3;
  *(undefined8 *)(lVar7 + 0x30) = 0xc77c4521e0f51831;
  *(undefined8 *)(lVar7 + 0x38) = 0xcbf29ce484222645;
  *(undefined8 *)(lVar7 + 0x40) = 0;
  *(undefined8 *)(lVar7 + 0x48) = 0x79cbfa17715041a8;
  *(undefined8 *)(lVar7 + 0x50) = 0xe763699eea42321b;
  *(undefined8 *)(lVar7 + 0x58) = 0xe763699eea42321b;
  *(undefined8 *)(lVar7 + 0x60) = 0x619e282ac53d2e8d;
  *(undefined8 *)(lVar7 + 0x68) = 0xed70587939e65374;
  *(long *)(lVar7 + 0x70) = local_88;
  *(undefined8 *)(lVar7 + 0x78) = local_80;
  *(undefined8 *)(lVar7 + 0x80) = local_78;
  piVar10 = *(int **)(param_1 + 0x5e8);
  if (*piVar10 == 1) {
    bVar2 = *(char *)((long)piVar10 + (ulong)(uint)piVar10[1] + 0x32) != '\0';
    uVar15 = *(undefined8 *)(param_1 + 0x5f0);
  }
  else {
    bVar2 = false;
    uVar15 = *(undefined8 *)(param_1 + 0x5f0);
  }
  local_90 = lVar6;
  if (lVar6 != 0) {
    (**(code **)(*(long *)(lVar6 + 0x48) + 0x10))();
  }
  FUN_016a8fb0(uVar15,&local_90,bVar2);
  if (local_90 != 0) {
    (**(code **)(*(long *)(local_90 + 0x48) + 0x18))();
    local_90 = 0;
  }
  if ((bVar3 & 1) != 0) {
    local_70[0] = 0xe763699eea42321b;
    lVar7 = FUN_0167b6b0(*(undefined8 *)(param_1 + 0x2b0),local_70);
    *(byte *)(lVar7 + 0x58) = *(byte *)(lVar7 + 0x58) & 0xfe;
  }
  uVar4 = FUN_00878a60(lVar6);
  uVar9 = FUN_00879860(lVar6);
  uVar16 = 0x3f800000;
  if ((uVar4 | 1) != 0x2d) {
    uVar16 = 0;
  }
  uVar17 = 0x40000000;
  if ((uVar9 & 1) == 0) {
    uVar17 = uVar16;
  }
  uVar16 = 0;
  if ((bVar3 & 1) == 0) {
    uVar16 = uVar17;
  }
  FUN_00ffd450(uVar16,param_1 + 0x100,"anime_L_poke_name_00_g_ptn");
  uVar15 = *(undefined8 *)(param_1 + 0x4e8);
  uVar16 = FUN_00878a80(lVar6);
  local_a0 = 0;
  uStack_98 = 0;
  local_b0 = 0;
  uStack_a8 = 0;
  local_c0 = 0;
  uStack_b8 = 0;
  local_d0 = 0;
  uStack_c8 = 0;
  local_e0 = 0;
  uStack_d8 = 0;
  local_f0 = 0;
  uStack_e8 = 0;
  local_100 = 0;
  uStack_f8 = 0;
  local_110 = 0;
  local_108 = (code *)0x0;
  FUN_0168c2c0(uVar15,uVar16,0,&local_110);
  pcVar1 = local_108;
  if (local_108 != (code *)0x0) {
    local_100 = 0;
    uStack_f8 = 0;
    local_110 = 0;
    local_108 = (code *)0x0;
    (*pcVar1)(&local_f0);
  }
  local_70[0] = 0xfabe3d0a9bbe9a34;
  lVar7 = FUN_0103bd80(*(undefined8 *)(param_1 + 0x2b0),local_70);
  lVar8 = *(long *)(param_1 + 0x540);
  if (lVar8 != 0) {
    (**(code **)(*(long *)(lVar8 + 0x48) + 0x10))();
  }
  uVar4 = FUN_008d3770(*(undefined8 *)PTR_DAT_02710828);
  uVar5 = FUN_00878a50(lVar6);
  bVar2 = uVar5 != (uVar4 & 0xff);
  *(byte *)(lVar7 + 0x58) = *(byte *)(lVar7 + 0x58) & 0xfe | bVar2;
  if (bVar2) {
    uVar16 = FUN_00878a50(lVar6);
    FUN_0167a660(lVar8,uVar16,lVar7,0,0);
  }
  local_70[0] = 0xeabd53e3194008b7;
  lVar6 = FUN_0103bd80(*(undefined8 *)(param_1 + 0x2b0),local_70);
  bVar3 = FUN_01487040(*(undefined8 *)(param_1 + 0x5e8));
  *(byte *)(lVar6 + 0x58) = *(byte *)(lVar6 + 0x58) & 0xfe | bVar3 & 1;
  if (lVar8 != 0) {
    (**(code **)(*(long *)(lVar8 + 0x48) + 0x18))((long *)(lVar8 + 0x48));
  }
  if (lVar11 != 0) {
    (**(code **)(*(long *)(lVar11 + 0x48) + 0x18))();
  }
  if (lVar13 != 0) {
    (**(code **)(*(long *)(lVar13 + 0x48) + 0x18))((long *)(lVar13 + 0x48));
  }
  if (lVar12 != 0) {
    (**(code **)(*(long *)(lVar12 + 0x48) + 0x18))((long *)(lVar12 + 0x48));
  }
  if (lVar11 != 0) {
    (**(code **)(*(long *)(lVar11 + 0x48) + 0x18))((long *)(lVar11 + 0x48));
  }
  if (lVar14 != 0) {
    (**(code **)(*(long *)(lVar14 + 0x48) + 0x18))((long *)(lVar14 + 0x48));
  }
  return;
}


