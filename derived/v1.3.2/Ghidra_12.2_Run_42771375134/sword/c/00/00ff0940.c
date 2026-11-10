/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00ff0940; name: FUN_00ff0940
 */


undefined8 FUN_00ff0940(int *param_1,undefined8 *param_2)

{
  uint uVar1;
  int iVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  ulong uVar6;
  long *plVar7;
  undefined8 local_e8;
  undefined8 local_e0;
  undefined4 local_d0;
  undefined4 uStack_cc;
  undefined4 local_c8;
  undefined1 *local_a0;
  undefined4 *local_98;
  undefined8 uStack_90;
  undefined4 local_78 [2];
  long local_70;
  undefined8 local_68;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 local_50;
  undefined8 local_48;
  long local_38;
  
  if ((param_1 != (int *)0x0) && (*param_1 != 0x736b6264)) {
    param_1 = (int *)0x0;
  }
  plVar7 = *(long **)(param_1 + 4);
  lVar3 = nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_02710860);
  if (0xf < *(ulong *)(lVar3 + 0x80)) {
                    /* WARNING: Subroutine does not return */
    abort();
  }
  *(long **)(lVar3 + *(ulong *)(lVar3 + 0x80) * 8) = plVar7;
  *(long *)(lVar3 + 0x80) = *(long *)(lVar3 + 0x80) + 1;
  lVar4 = (**(code **)(*plVar7 + 0x10))(plVar7,0x80,8);
  if (lVar4 == 0) {
    (**(code **)(*plVar7 + 0xb8))(plVar7);
  }
  FUN_0077d050(lVar4,0x40);
  *(long **)(lVar4 + 8) = plVar7;
  *(long *)(lVar4 + 0x10) = lVar4;
  *(undefined8 *)(lVar4 + 0x18) = 0x80;
  *(undefined8 *)(lVar4 + 0x20) = 8;
  *(long *)(lVar3 + 0x80) = *(long *)(lVar3 + 0x80) + -1;
  if (lVar4 != 0) {
    (**(code **)(*(long *)(lVar4 + 0x48) + 0x10))();
  }
  lVar3 = *(long *)(*(long *)(param_1 + 2) + 0x60);
  if (lVar3 != 0) {
    (**(code **)(*(long *)(lVar3 + 0x48) + 0x10))();
  }
  local_e8 = 0xb9e4e16c5c7aa083;
  FUN_0077eb10(lVar3,&local_e8,lVar4);
  local_78[0] = 0x3e;
  local_70 = lVar3;
  if (lVar3 != 0) {
    (**(code **)(*(long *)(lVar3 + 0x48) + 0x10))();
  }
  local_68 = *(undefined8 *)(param_1 + 4);
  local_60 = 0xb9e4e56c5c7aa74f;
  uStack_58 = 0xb9e4e36c5c7aa3e9;
  local_50 = 0xcbf29ce484222645;
  local_48 = 2;
  FUN_00ff4df0(&local_e8);
  local_e8._4_4_ = 4;
  local_c8 = 0;
  iVar2 = FUN_008d3750();
  uVar1 = iVar2 - 1;
  if (((uVar1 & 0xff) < 10) && ((0x3dfU >> (ulong)(uVar1 & 0x1f) & 1) != 0)) {
    uVar6 = -((ulong)(uVar1 >> 7) & 1) & 0xfffffffffffffc00 | ((ulong)uVar1 & 0xff) << 2;
    local_e8._0_4_ = *(undefined4 *)(&DAT_021626c0 + uVar6);
    local_d0 = *(undefined4 *)(&DAT_02162630 + uVar6);
    uStack_cc = 1;
  }
  local_e0 = FUN_0077d470(lVar4);
  uStack_90 = FUN_0077d470(*param_2);
  local_a0 = &LAB_00ff0c20;
  local_98 = local_78;
  FUN_00ff04b0(&local_38,*(undefined8 *)(param_1 + 4));
  uVar5 = FUN_00ff4e20(*param_2,*(undefined8 *)(param_1 + 4),&local_e8);
  if (local_38 == 0) {
    FUN_006d0420(0);
  }
  else {
    plVar7 = (long *)(local_38 + 0x48);
    (**(code **)(*plVar7 + 0x10))(plVar7);
    FUN_006d0420(local_38);
    (**(code **)(*plVar7 + 0x18))(plVar7);
    (**(code **)(*plVar7 + 0x18))(plVar7);
    local_38 = 0;
  }
  if (local_70 != 0) {
    (**(code **)(*(long *)(local_70 + 0x48) + 0x18))();
    local_70 = 0;
  }
  if (lVar3 != 0) {
    (**(code **)(*(long *)(lVar3 + 0x48) + 0x18))((long *)(lVar3 + 0x48));
  }
  if (lVar4 != 0) {
    (**(code **)(*(long *)(lVar4 + 0x48) + 0x18))((long *)(lVar4 + 0x48));
  }
  return uVar5;
}


