/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00ff13c0; name: FUN_00ff13c0
 */


undefined8 FUN_00ff13c0(int *param_1,undefined8 *param_2,int param_3,int param_4)

{
  uint uVar1;
  undefined *puVar2;
  int iVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  undefined8 uVar9;
  ulong uVar10;
  long *plVar11;
  long local_118;
  undefined8 local_110;
  undefined8 local_108;
  undefined4 local_f8;
  undefined4 uStack_f4;
  undefined4 local_f0;
  undefined1 *local_c8;
  undefined4 *local_c0;
  undefined8 uStack_b8;
  undefined4 local_a0 [2];
  long local_98;
  undefined8 local_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 local_70;
  
  puVar2 = PTR_DAT_02710860;
  if ((param_1 != (int *)0x0) && (*param_1 != 0x736b6264)) {
    param_1 = (int *)0x0;
  }
  plVar11 = *(long **)(param_1 + 4);
  lVar4 = nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_02710860);
  if (0xf < *(ulong *)(lVar4 + 0x80)) {
LAB_00ff1868:
                    /* WARNING: Subroutine does not return */
    abort();
  }
  *(long **)(lVar4 + *(ulong *)(lVar4 + 0x80) * 8) = plVar11;
  *(long *)(lVar4 + 0x80) = *(long *)(lVar4 + 0x80) + 1;
  lVar5 = (**(code **)(*plVar11 + 0x10))(plVar11,0x80,8);
  if (lVar5 == 0) {
    (**(code **)(*plVar11 + 0xb8))(plVar11);
  }
  FUN_0077d050(lVar5,0x40);
  *(long **)(lVar5 + 8) = plVar11;
  *(long *)(lVar5 + 0x10) = lVar5;
  *(undefined8 *)(lVar5 + 0x18) = 0x80;
  *(undefined8 *)(lVar5 + 0x20) = 8;
  *(long *)(lVar4 + 0x80) = *(long *)(lVar4 + 0x80) + -1;
  if (lVar5 != 0) {
    (**(code **)(*(long *)(lVar5 + 0x48) + 0x10))();
  }
  lVar4 = *(long *)(*(long *)(param_1 + 2) + 0x60);
  if (lVar4 != 0) {
    (**(code **)(*(long *)(lVar4 + 0x48) + 0x10))();
  }
  plVar11 = *(long **)(param_1 + 4);
  lVar6 = nn::os::GetTlsValue(*(undefined4 *)puVar2);
  if (0xf < *(ulong *)(lVar6 + 0x80)) goto LAB_00ff1868;
  *(long **)(lVar6 + *(ulong *)(lVar6 + 0x80) * 8) = plVar11;
  *(long *)(lVar6 + 0x80) = *(long *)(lVar6 + 0x80) + 1;
  lVar7 = (**(code **)(*plVar11 + 0x10))(plVar11,0x250,0x10);
  if (lVar7 == 0) {
    (**(code **)(*plVar11 + 0xb8))(plVar11);
  }
  FUN_014c5570(lVar7,*(undefined8 *)(param_1 + 4));
  *(long **)(lVar7 + 8) = plVar11;
  *(long *)(lVar7 + 0x10) = lVar7;
  *(undefined8 *)(lVar7 + 0x18) = 0x250;
  *(undefined8 *)(lVar7 + 0x20) = 0x10;
  *(long *)(lVar6 + 0x80) = *(long *)(lVar6 + 0x80) + -1;
  if (lVar7 != 0) {
    (**(code **)(*(long *)(lVar7 + 0x48) + 0x10))();
  }
  plVar11 = *(long **)(param_1 + 4);
  lVar6 = nn::os::GetTlsValue(*(undefined4 *)puVar2);
  if (0xf < *(ulong *)(lVar6 + 0x80)) goto LAB_00ff1868;
  *(long **)(lVar6 + *(ulong *)(lVar6 + 0x80) * 8) = plVar11;
  *(long *)(lVar6 + 0x80) = *(long *)(lVar6 + 0x80) + 1;
  lVar8 = (**(code **)(*plVar11 + 0x10))(plVar11,0x80,8);
  if (lVar8 == 0) {
    (**(code **)(*plVar11 + 0xb8))(plVar11);
  }
  FUN_0077d050(lVar8,0x40);
  *(long **)(lVar8 + 8) = plVar11;
  *(long *)(lVar8 + 0x10) = lVar8;
  *(undefined8 *)(lVar8 + 0x18) = 0x80;
  *(undefined8 *)(lVar8 + 0x20) = 8;
  *(long *)(lVar6 + 0x80) = *(long *)(lVar6 + 0x80) + -1;
  if (lVar8 != 0) {
    (**(code **)(*(long *)(lVar8 + 0x48) + 0x10))();
  }
  FUN_014c8280(lVar7,0,param_3);
  if ((param_3 != 0x1d) && (param_3 != 0x20)) {
    if (param_4 == 1) {
      local_110 = 0x9cac2aed84ee;
      goto LAB_00ff1640;
    }
    if (param_4 == 0) {
      local_110 = 0x9fac2aed8a07;
      goto LAB_00ff1640;
    }
  }
  local_110 = 0xa0ac2aed8bba;
LAB_00ff1640:
  local_110 = local_110 | 0x395000000000000;
  FUN_0077eb10(lVar4,&local_110,lVar8);
  FUN_014c62d0(lVar7,lVar5,lVar8);
  local_a0[0] = 0x3e;
  local_98 = lVar4;
  if (lVar4 != 0) {
    (**(code **)(*(long *)(lVar4 + 0x48) + 0x10))();
  }
  local_90 = *(undefined8 *)(param_1 + 4);
  local_88 = 0xb9e4e56c5c7aa74f;
  uStack_80 = 0xb9e4e36c5c7aa3e9;
  local_78 = 0x3959eac2aed8854;
  local_70 = 8;
  FUN_00ff4df0(&local_110);
  local_110._4_4_ = 4;
  local_f0 = 0;
  iVar3 = FUN_008d3750();
  uVar1 = iVar3 - 1;
  if (((uVar1 & 0xff) < 10) && ((0x3dfU >> (ulong)(uVar1 & 0x1f) & 1) != 0)) {
    uVar10 = -((ulong)(uVar1 >> 7) & 1) & 0xfffffffffffffc00 | ((ulong)uVar1 & 0xff) << 2;
    local_110._0_4_ = *(undefined4 *)(&DAT_021626c0 + uVar10);
    local_f8 = *(undefined4 *)(&DAT_02162630 + uVar10);
    uStack_f4 = 1;
  }
  local_108 = FUN_0077d470(lVar5);
  uStack_b8 = FUN_0077d470(*param_2);
  local_c8 = &LAB_00ff0c20;
  local_c0 = local_a0;
  FUN_00ff04b0(&local_118,*(undefined8 *)(param_1 + 4));
  uVar9 = FUN_00ff4e20(*param_2,*(undefined8 *)(param_1 + 4),&local_110);
  if (local_118 == 0) {
    FUN_006d0420(0);
  }
  else {
    plVar11 = (long *)(local_118 + 0x48);
    (**(code **)(*plVar11 + 0x10))(plVar11);
    FUN_006d0420(local_118);
    (**(code **)(*plVar11 + 0x18))(plVar11);
    (**(code **)(*plVar11 + 0x18))(plVar11);
    local_118 = 0;
  }
  if (local_98 != 0) {
    (**(code **)(*(long *)(local_98 + 0x48) + 0x18))();
    local_98 = 0;
  }
  (**(code **)(*(long *)(lVar8 + 0x48) + 0x18))((long *)(lVar8 + 0x48));
  if (lVar7 != 0) {
    (**(code **)(*(long *)(lVar7 + 0x48) + 0x18))((long *)(lVar7 + 0x48));
  }
  if (lVar4 != 0) {
    (**(code **)(*(long *)(lVar4 + 0x48) + 0x18))((long *)(lVar4 + 0x48));
  }
  if (lVar5 != 0) {
    (**(code **)(*(long *)(lVar5 + 0x48) + 0x18))((long *)(lVar5 + 0x48));
  }
  return uVar9;
}


