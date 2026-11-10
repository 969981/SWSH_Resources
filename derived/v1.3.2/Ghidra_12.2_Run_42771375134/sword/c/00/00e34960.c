/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00e34960; name: FUN_00e34960
 */


void FUN_00e34960(long param_1,long *param_2)

{
  undefined4 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  long *plVar6;
  undefined8 uVar7;
  ulong uVar8;
  long local_c8;
  uint local_c0;
  undefined4 uStack_bc;
  undefined4 uStack_b8;
  undefined4 local_b4;
  undefined4 uStack_b0;
  undefined4 uStack_ac;
  undefined8 local_a8;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined4 local_90;
  undefined8 local_80;
  undefined8 local_78;
  undefined8 local_70;
  undefined8 local_68;
  undefined8 local_60;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 local_48;
  undefined1 auStack_38 [8];
  
  uStack_bc = 2;
  uStack_b8 = 0;
  local_c0 = local_c0 & 0xffffff00;
  local_b4 = 0;
  uStack_b0 = 0;
  local_a0 = 0;
  uStack_98 = 0;
  local_90 = 0x3f800000;
  local_c8 = 0;
  lVar5 = *(long *)(*(long *)PTR_DAT_02710798 + 0x2b8);
  if (lVar5 == 0) {
    FUN_01516e60(0,&local_c0,&local_c8);
  }
  else {
    plVar6 = (long *)(lVar5 + 0x48);
    (**(code **)(*plVar6 + 0x10))(plVar6);
    FUN_01516e60(lVar5,&local_c0,&local_c8);
    (**(code **)(*plVar6 + 0x18))(plVar6);
  }
  if (((char)local_c0 != '\0') && (local_c8 == *param_2)) {
    lVar5 = FUN_00706c40(*(undefined8 *)(param_1 + 0x2c0),&local_60);
    lVar5 = *(long *)(lVar5 + 0x78);
    local_48 = *(undefined8 *)(lVar5 + 0x2b8);
    local_58 = *(undefined8 *)(lVar5 + 0x2a8);
    local_60 = *(undefined8 *)(lVar5 + 0x2a0);
    local_50 = *(undefined8 *)(lVar5 + 0x2b0);
    uVar8 = *(ulong *)(lVar5 + 0x2c8);
    uVar7 = *(undefined8 *)(lVar5 + 0x2c0);
    uVar1 = *(undefined4 *)(lVar5 + 0x2d0);
    local_68 = local_a8;
    local_70 = CONCAT44(uStack_ac,uStack_b0);
    local_78 = CONCAT44(local_b4,uStack_b8);
    local_80 = CONCAT44(uStack_bc,local_c0);
    if (*(char *)(param_1 + 0x60) == '\0') {
      lVar5 = FUN_00706c40(*(undefined8 *)(param_1 + 0x2c0),auStack_38);
      lVar5 = *(long *)(lVar5 + 0x78);
      uVar2 = *(undefined8 *)(lVar5 + 0x2b8);
      uVar3 = *(undefined8 *)(lVar5 + 0x2c8);
      uVar4 = *(undefined8 *)(lVar5 + 0x2c0);
      *(undefined4 *)(param_1 + 0x170) = *(undefined4 *)(lVar5 + 0x2d0);
      *(undefined8 *)(param_1 + 0x158) = uVar2;
      *(undefined8 *)(param_1 + 0x160) = uVar4;
      *(undefined8 *)(param_1 + 0x168) = uVar3;
      uVar3 = *(undefined8 *)(lVar5 + 0x2a0);
      uVar2 = *(undefined8 *)(lVar5 + 0x2b0);
      *(undefined8 *)(param_1 + 0x148) = *(undefined8 *)(lVar5 + 0x2a8);
      *(undefined8 *)(param_1 + 0x150) = uVar2;
      *(undefined8 *)(param_1 + 0x140) = uVar3;
    }
    *(undefined8 *)(param_1 + 0x7c) = 0;
    *(undefined2 *)(param_1 + 0x60) = 0x101;
    *(undefined1 *)(param_1 + 0x70) = 0;
    *(undefined8 *)(param_1 + 0x74) = 2;
    *(undefined4 *)(param_1 + 0xa0) = 0x3f800000;
    *(undefined8 *)(param_1 + 0x90) = 0;
    *(undefined8 *)(param_1 + 0x98) = 0;
    *(undefined4 *)(param_1 + 0xe0) = uVar1;
    *(undefined8 *)(param_1 + 0xc0) = local_50;
    *(undefined8 *)(param_1 + 200) = local_48;
    *(undefined8 *)(param_1 + 0xb0) = local_60;
    *(undefined8 *)(param_1 + 0xb8) = local_58;
    *(ulong *)(param_1 + 0xd8) = uVar8;
    *(undefined8 *)(param_1 + 0xd0) = uVar7;
    *(undefined4 *)(param_1 + 0x120) = uVar1;
    *(undefined8 *)(param_1 + 0x130) = 0;
    *(undefined4 *)(param_1 + 0x138) = 0;
    *(undefined8 *)(param_1 + 0x100) = local_70;
    *(undefined8 *)(param_1 + 0x108) = local_68;
    *(undefined8 *)(param_1 + 0xf0) = local_80;
    *(undefined8 *)(param_1 + 0xf8) = local_78;
    *(ulong *)(param_1 + 0x118) = uVar8 & 0xffffffff;
    *(undefined8 *)(param_1 + 0x110) = uVar7;
    FUN_00e34b40(param_1);
  }
  return;
}


