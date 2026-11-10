/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00a02740; name: FUN_00a02740
 */


void FUN_00a02740(long param_1)

{
  code *pcVar1;
  long *plVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  long lVar6;
  undefined8 uVar7;
  long local_100;
  long local_f8 [3];
  undefined1 *local_e0;
  code *local_d8;
  undefined1 *local_d0;
  undefined1 *local_c8;
  long alStack_c0 [12];
  long local_58;
  
  uVar7 = *(undefined8 *)(param_1 + 0xb8);
  uVar5 = *(undefined8 *)(param_1 + 0x548);
  FUN_006cf0a0(local_f8 + 3,PTR_DAT_02718d08);
  uVar5 = FUN_00a02eb0(uVar5,local_f8 + 3);
  if (local_c8 != (undefined1 *)0x0) {
    (**(code **)(*(long *)((long)local_c8 + 0x48) + 0x18))();
    local_c8 = (undefined1 *)0x0;
  }
  FUN_00ff86a0(local_f8 + 3,uVar7,*(undefined4 *)(param_1 + 0x708));
  lVar6 = *(long *)((long)local_e0 + 0x60);
  if (lVar6 != 0) {
    (**(code **)(*(long *)(lVar6 + 0x48) + 0x10))();
  }
  if (local_e0 != (undefined1 *)0x0) {
    (**(code **)(*(long *)((long)local_e0 + 0x48) + 0x18))();
    local_e0 = (undefined1 *)0x0;
  }
  plVar2 = (long *)FUN_00ff5cf0(param_1);
  lVar3 = nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_02710860);
  if (0xf < *(ulong *)(lVar3 + 0x80)) {
                    /* WARNING: Subroutine does not return */
    abort();
  }
  *(long **)(lVar3 + *(ulong *)(lVar3 + 0x80) * 8) = plVar2;
  *(long *)(lVar3 + 0x80) = *(long *)(lVar3 + 0x80) + 1;
  lVar4 = (**(code **)(*plVar2 + 0x10))(plVar2,0x80,8);
  if (lVar4 == 0) {
    (**(code **)(*plVar2 + 0xb8))(plVar2);
  }
  FUN_0077d050(lVar4,0x80);
  *(long **)(lVar4 + 8) = plVar2;
  *(long *)(lVar4 + 0x10) = lVar4;
  *(undefined8 *)(lVar4 + 0x18) = 0x80;
  *(undefined8 *)(lVar4 + 0x20) = 8;
  *(long *)(lVar3 + 0x80) = *(long *)(lVar3 + 0x80) + -1;
  if (lVar4 != 0) {
    (**(code **)(*(long *)(lVar4 + 0x48) + 0x10))();
  }
  FUN_0077eb10(lVar6,&DAT_02153728,lVar4);
  if (lVar6 != 0) {
    (**(code **)(*(long *)(lVar6 + 0x48) + 0x10))();
  }
  local_e0 = &LAB_00a04dc0;
  local_d8 = FUN_00a04e00;
  local_d0 = &LAB_00a04e40;
  local_c8 = &LAB_00a04e60;
  alStack_c0[0] = lVar6;
  local_58 = lVar4;
  if (lVar4 != 0) {
    (**(code **)(*(long *)(lVar4 + 0x48) + 0x10))();
  }
  FUN_0103b440(uVar5,local_f8 + 3,&local_58,1,0);
  if (local_58 != 0) {
    (**(code **)(*(long *)(local_58 + 0x48) + 0x18))();
    local_58 = 0;
  }
  FUN_00ff86a0(&local_100,uVar7,*(undefined4 *)(param_1 + 0x70c));
  local_f8[0] = *(long *)(local_100 + 0x60);
  if (local_f8[0] != 0) {
    (**(code **)(*(long *)(local_f8[0] + 0x48) + 0x10))();
  }
  local_f8[1] = 0x7eb69bb1cbd2dcba;
  local_f8[2] = 0;
  FUN_0103bb60(uVar5,local_f8);
  if (local_f8[0] != 0) {
    (**(code **)(*(long *)(local_f8[0] + 0x48) + 0x18))();
    local_f8[0] = 0;
  }
  if (local_100 != 0) {
    (**(code **)(*(long *)(local_100 + 0x48) + 0x18))();
    local_100 = 0;
  }
  pcVar1 = local_d8;
  if (local_d8 != (code *)0x0) {
    local_d0 = (undefined1 *)0x0;
    local_c8 = (undefined1 *)0x0;
    local_e0 = (undefined1 *)0x0;
    local_d8 = (code *)0x0;
    (*pcVar1)(alStack_c0);
  }
  if (lVar4 != 0) {
    (**(code **)(*(long *)(lVar4 + 0x48) + 0x18))((long *)(lVar4 + 0x48));
  }
  if (lVar6 != 0) {
    (**(code **)(*(long *)(lVar6 + 0x48) + 0x18))((long *)(lVar6 + 0x48));
  }
  return;
}


