/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 014f7850; name: FUN_014f7850
 */


void FUN_014f7850(long param_1)

{
  undefined1 uVar1;
  undefined2 uVar2;
  long lVar3;
  long lVar4;
  long *plVar5;
  undefined8 uVar6;
  long lVar7;
  undefined8 local_48;
  
  plVar5 = *(long **)(param_1 + 8);
  lVar3 = nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_02710860);
  if (0xf < *(ulong *)(lVar3 + 0x80)) {
                    /* WARNING: Subroutine does not return */
    abort();
  }
  *(long **)(lVar3 + *(ulong *)(lVar3 + 0x80) * 8) = plVar5;
  *(long *)(lVar3 + 0x80) = *(long *)(lVar3 + 0x80) + 1;
  lVar4 = (**(code **)(*plVar5 + 0x10))(plVar5,0x80,8);
  if (lVar4 == 0) {
    (**(code **)(*plVar5 + 0xb8))(plVar5);
  }
  FUN_0077d050(lVar4,0x28);
  *(long **)(lVar4 + 8) = plVar5;
  *(long *)(lVar4 + 0x10) = lVar4;
  *(undefined8 *)(lVar4 + 0x18) = 0x80;
  *(undefined8 *)(lVar4 + 0x20) = 8;
  *(long *)(lVar3 + 0x80) = *(long *)(lVar3 + 0x80) + -1;
  if (lVar4 != 0) {
    (**(code **)(*(long *)(lVar4 + 0x48) + 0x10))();
  }
  lVar3 = *(long *)(*(long *)PTR_DAT_02710798 + 0x298);
  if (lVar3 != 0) {
    (**(code **)(*(long *)(lVar3 + 0x48) + 0x10))();
  }
  FUN_014c75c0(*(undefined8 *)(param_1 + 0x608));
  uVar6 = *(undefined8 *)(param_1 + 0x608);
  uVar2 = FUN_015297c0(lVar3);
  FUN_014ca220(uVar6,0,uVar2,3,0,1);
  uVar6 = *(undefined8 *)(param_1 + 0x608);
  uVar1 = FUN_015297d0(lVar3);
  FUN_014ca220(uVar6,1,uVar1,2,2,1);
  uVar6 = *(undefined8 *)(param_1 + 0x618);
  local_48 = 0x3d0ca6a8fc1def8a;
  lVar7 = *(long *)(*(long *)(param_1 + 0x610) + 0x2e8);
  if (lVar7 == 0) {
    FUN_0077eb10(uVar6,&local_48,0);
  }
  else {
    plVar5 = (long *)(lVar7 + 0x48);
    (**(code **)(*plVar5 + 0x10))(plVar5);
    FUN_0077eb10(uVar6,&local_48,lVar7);
    (**(code **)(*plVar5 + 0x18))(plVar5);
  }
  lVar7 = *(long *)(*(long *)(param_1 + 0x610) + 0x2e8);
  uVar6 = *(undefined8 *)(param_1 + 0x608);
  plVar5 = (long *)(lVar7 + 0x48);
  if (lVar7 != 0) {
    (**(code **)(*plVar5 + 0x10))(plVar5);
  }
  FUN_014c62d0(uVar6,lVar4,lVar7);
  (**(code **)(*(long *)(lVar7 + 0x48) + 0x18))(plVar5);
  uVar6 = FUN_0077d470(lVar4);
  FUN_00ffd6a0(param_1 + 0x100,"pane_T_param_06",uVar6,10);
  if (lVar3 != 0) {
    (**(code **)(*(long *)(lVar3 + 0x48) + 0x18))((long *)(lVar3 + 0x48));
  }
  if (lVar4 != 0) {
    (**(code **)(*(long *)(lVar4 + 0x48) + 0x18))((long *)(lVar4 + 0x48));
  }
  return;
}


