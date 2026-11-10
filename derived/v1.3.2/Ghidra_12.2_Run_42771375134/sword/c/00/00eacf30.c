/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00eacf30; name: FUN_00eacf30
 */


undefined8
FUN_00eacf30(long param_1,undefined8 param_2,long *param_3,long *param_4,long *param_5,
            undefined8 param_6,undefined8 param_7)

{
  undefined *puVar1;
  undefined1 *puVar2;
  code *pcVar3;
  uint uVar4;
  int iVar5;
  ulong uVar6;
  long lVar7;
  undefined8 uVar8;
  long lVar9;
  float fVar10;
  undefined1 *local_150;
  code *local_148;
  undefined1 *local_140;
  undefined1 *local_138;
  long local_130;
  long lStack_128;
  long local_d0;
  char *local_c8;
  undefined8 local_c0;
  long local_b8;
  long local_b0;
  long local_a8;
  long local_a0;
  long local_98;
  long local_90;
  long local_88;
  long local_80;
  long local_78;
  long local_70;
  long local_68;
  long local_60;
  long local_58;
  
  local_58 = *param_3;
  if (local_58 != 0) {
    (**(code **)(*(long *)(local_58 + 0x48) + 0x10))();
  }
  local_60 = *param_4;
  if (local_60 != 0) {
    (**(code **)(*(long *)(local_60 + 0x48) + 0x10))();
  }
  local_68 = *param_5;
  if (local_68 != 0) {
    (**(code **)(*(long *)(local_68 + 0x48) + 0x10))();
  }
  uVar6 = FUN_00dd80f0(param_1,param_2,&local_58,&local_60,&local_68,param_6,param_7);
  if (local_68 != 0) {
    (**(code **)(*(long *)(local_68 + 0x48) + 0x18))();
    local_68 = 0;
  }
  if (local_60 != 0) {
    (**(code **)(*(long *)(local_60 + 0x48) + 0x18))();
    local_60 = 0;
  }
  if (local_58 != 0) {
    (**(code **)(*(long *)(local_58 + 0x48) + 0x18))();
    local_58 = 0;
  }
  if ((uVar6 & 1) == 0) {
    return 0;
  }
  lVar7 = FUN_0105e8d0(param_1,&local_150);
  if (lVar7 != 0) {
    FUN_006a0e40(lVar7 + 0x80);
    uVar4 = FUN_0069a910();
    if (uVar4 != 0) {
      fVar10 = (float)uVar4 * DAT_01d4c6b8;
      FUN_006a0e30(lVar7 + 0x80);
      FUN_0069a850((float)uVar4 / fVar10);
    }
  }
  if (((*(long *)(param_1 + 0x410) == 0) ||
      (lVar7 = *(long *)(*(long *)(param_1 + 0x410) + 0x60), lVar7 == 0)) ||
     (uVar6 = FUN_00a8cbe0(lVar7), (uVar6 & 1) == 0)) goto LAB_00ead0d8;
  lVar7 = lVar7 + -0x50;
  local_70 = lVar7;
  FUN_00727800(lVar7,0);
  lVar9 = *(long *)(*(long *)PTR_DAT_027194d8 + 0x110);
  if (lVar9 == 0) {
    local_78 = lVar7;
LAB_00ead108:
    (**(code **)(*(long *)(local_78 + 0x48) + 0x10))((long *)(local_78 + 0x48));
    if (lVar9 != 0) goto LAB_00ead11c;
    local_80 = 0;
  }
  else {
    (**(code **)(*(long *)(lVar9 + 0x48) + 0x10))();
    local_78 = local_70;
    if (local_70 != 0) goto LAB_00ead108;
LAB_00ead11c:
    FUN_00d78d40(&local_d0,lVar9);
    local_80 = local_d0;
  }
  local_d0 = 0;
  FUN_00da16f0(&local_150,&local_78,&local_80,3);
  if (*(long *)(param_1 + 0x578) != 0) {
    (**(code **)(*(long *)(*(long *)(param_1 + 0x578) + 0x48) + 0x18))();
    *(undefined8 *)(param_1 + 0x578) = 0;
  }
  puVar2 = local_150;
  local_150 = (undefined1 *)0x0;
  *(undefined1 **)(param_1 + 0x578) = puVar2;
  if (local_80 != 0) {
    (**(code **)(*(long *)(local_80 + 0x48) + 0x18))();
    local_80 = 0;
  }
  if (local_d0 != 0) {
    (**(code **)(*(long *)(local_d0 + 0x48) + 0x18))();
    local_d0 = 0;
  }
  if (local_78 != 0) {
    (**(code **)(*(long *)(local_78 + 0x48) + 0x18))();
    local_78 = 0;
  }
  local_88 = local_70;
  if (local_70 != 0) {
    (**(code **)(*(long *)(local_70 + 0x48) + 0x10))();
  }
  if (lVar9 == 0) {
    local_90 = 0;
  }
  else {
    FUN_00d78d40(&local_d0,lVar9);
    local_90 = local_d0;
  }
  local_d0 = 0;
  FUN_00da16f0(&local_150,&local_88,&local_90,5);
  if (*(long *)(param_1 + 0x580) != 0) {
    (**(code **)(*(long *)(*(long *)(param_1 + 0x580) + 0x48) + 0x18))();
    *(undefined8 *)(param_1 + 0x580) = 0;
  }
  puVar2 = local_150;
  local_150 = (undefined1 *)0x0;
  *(undefined1 **)(param_1 + 0x580) = puVar2;
  if (local_90 != 0) {
    (**(code **)(*(long *)(local_90 + 0x48) + 0x18))();
    local_90 = 0;
  }
  if (local_d0 != 0) {
    (**(code **)(*(long *)(local_d0 + 0x48) + 0x18))();
    local_d0 = 0;
  }
  if (local_88 != 0) {
    (**(code **)(*(long *)(local_88 + 0x48) + 0x18))();
    local_88 = 0;
  }
  local_98 = local_70;
  if (local_70 != 0) {
    (**(code **)(*(long *)(local_70 + 0x48) + 0x10))();
  }
  if (lVar9 == 0) {
    local_a0 = 0;
  }
  else {
    FUN_00d78d40(&local_d0,lVar9);
    local_a0 = local_d0;
  }
  local_d0 = 0;
  FUN_00da16f0(&local_150,&local_98,&local_a0,4);
  if (*(long *)(param_1 + 0x588) != 0) {
    (**(code **)(*(long *)(*(long *)(param_1 + 0x588) + 0x48) + 0x18))();
    *(undefined8 *)(param_1 + 0x588) = 0;
  }
  puVar2 = local_150;
  local_150 = (undefined1 *)0x0;
  *(undefined1 **)(param_1 + 0x588) = puVar2;
  if (local_a0 != 0) {
    (**(code **)(*(long *)(local_a0 + 0x48) + 0x18))();
    local_a0 = 0;
  }
  if (local_d0 != 0) {
    (**(code **)(*(long *)(local_d0 + 0x48) + 0x18))();
    local_d0 = 0;
  }
  if (local_98 != 0) {
    (**(code **)(*(long *)(local_98 + 0x48) + 0x18))();
    local_98 = 0;
  }
  local_a8 = local_70;
  if (local_70 != 0) {
    (**(code **)(*(long *)(local_70 + 0x48) + 0x10))();
  }
  if (lVar9 == 0) {
    local_b0 = 0;
  }
  else {
    FUN_00d78d40(&local_d0,lVar9);
    local_b0 = local_d0;
  }
  local_d0 = 0;
  FUN_00da16f0(&local_150,&local_a8,&local_b0,6);
  if (*(long *)(param_1 + 0x590) != 0) {
    (**(code **)(*(long *)(*(long *)(param_1 + 0x590) + 0x48) + 0x18))();
    *(undefined8 *)(param_1 + 0x590) = 0;
  }
  puVar2 = local_150;
  local_150 = (undefined1 *)0x0;
  *(undefined1 **)(param_1 + 0x590) = puVar2;
  if (local_b0 != 0) {
    (**(code **)(*(long *)(local_b0 + 0x48) + 0x18))();
    local_b0 = 0;
  }
  if (local_d0 != 0) {
    (**(code **)(*(long *)(local_d0 + 0x48) + 0x18))();
    local_d0 = 0;
  }
  if (local_a8 != 0) {
    (**(code **)(*(long *)(local_a8 + 0x48) + 0x18))();
    local_a8 = 0;
  }
  lVar7 = local_70;
  puVar1 = PTR_DAT_027201b0;
  FUN_006cf0a0(&local_150,PTR_DAT_027201b0);
  iVar5 = FUN_0072c700(lVar7 + 0x210,&local_150);
  if (local_138 != (undefined1 *)0x0) {
    (**(code **)(*(long *)((long)local_138 + 0x48) + 0x18))();
    local_138 = (undefined1 *)0x0;
  }
  lVar7 = local_70;
  if (-1 < iVar5) {
    *(int *)(param_1 + 0x56c) = iVar5;
  }
  FUN_006cf0a0(&local_150,puVar1 + 0x18);
  iVar5 = FUN_0072c700(lVar7 + 0x210,&local_150);
  if (local_138 != (undefined1 *)0x0) {
    (**(code **)(*(long *)((long)local_138 + 0x48) + 0x18))();
    local_138 = (undefined1 *)0x0;
  }
  lVar7 = local_70;
  if (-1 < iVar5) {
    *(int *)(param_1 + 0x570) = iVar5;
  }
  FUN_006cf0a0(&local_150,puVar1 + 0x30);
  iVar5 = FUN_0072c700(lVar7 + 0x210,&local_150);
  if (local_138 != (undefined1 *)0x0) {
    (**(code **)(*(long *)((long)local_138 + 0x48) + 0x18))();
    local_138 = (undefined1 *)0x0;
  }
  if (-1 < iVar5) {
    *(int *)(param_1 + 0x574) = iVar5;
  }
  uVar8 = FUN_00ad9400(param_1,param_2,&local_70);
  local_d0 = -0x430c1ea084c8c51c;
  local_c8 = "OpacityScale";
  local_c0 = 0xc;
  local_b8 = 0;
  lStack_128 = local_70;
  local_150 = &LAB_00eadef0;
  local_148 = FUN_00eae050;
  local_140 = &LAB_00eae060;
  local_138 = &LAB_00eae070;
  local_130 = param_1;
  FUN_0105dbc0(uVar8,&local_d0,&local_150);
  pcVar3 = local_148;
  if (local_148 != (code *)0x0) {
    local_140 = (undefined1 *)0x0;
    local_138 = (undefined1 *)0x0;
    local_150 = (undefined1 *)0x0;
    local_148 = (code *)0x0;
    (*pcVar3)(&local_130);
  }
  if (local_b8 != 0) {
    (**(code **)(*(long *)(local_b8 + 0x48) + 0x18))();
    local_b8 = 0;
  }
  if (lVar9 != 0) {
    (**(code **)(*(long *)(lVar9 + 0x48) + 0x18))((long *)(lVar9 + 0x48));
  }
LAB_00ead0d8:
  *(undefined4 *)(param_1 + 900) = 8;
  return 1;
}


