/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00ff3720; name: FUN_00ff3720
 */


undefined8 FUN_00ff3720(int *param_1,undefined8 *param_2)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  long *plVar4;
  undefined8 local_e8;
  undefined8 local_e0;
  undefined8 local_d0;
  undefined8 uStack_c8;
  undefined8 local_c0;
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
  plVar4 = *(long **)(param_1 + 4);
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
  FUN_0077d050(lVar2,0x40);
  *(long **)(lVar2 + 8) = plVar4;
  *(long *)(lVar2 + 0x10) = lVar2;
  *(undefined8 *)(lVar2 + 0x18) = 0x80;
  *(undefined8 *)(lVar2 + 0x20) = 8;
  *(long *)(lVar1 + 0x80) = *(long *)(lVar1 + 0x80) + -1;
  if (lVar2 != 0) {
    (**(code **)(*(long *)(lVar2 + 0x48) + 0x10))();
  }
  lVar1 = *(long *)(*(long *)(param_1 + 2) + 0x60);
  if (lVar1 != 0) {
    (**(code **)(*(long *)(lVar1 + 0x48) + 0x10))();
  }
  local_e8 = 0x94db5b5ca08c24c6;
  FUN_0077eb10(lVar1,&local_e8,lVar2);
  local_78[0] = 1;
  local_70 = lVar1;
  if (lVar1 != 0) {
    (**(code **)(*(long *)(lVar1 + 0x48) + 0x10))();
  }
  local_68 = *(undefined8 *)(param_1 + 4);
  local_60 = 0xcbf29ce484222645;
  uStack_58 = 0x7d4ba5dcb10b220e;
  local_50 = 0xcbf29ce484222645;
  local_48 = 1;
  FUN_00ff4df0(&local_e8);
  local_e8 = 0x8000000001;
  local_d0 = 0xe0000000e;
  uStack_c8 = 0x300000002;
  local_c0 = 0xb00000007;
  local_e0 = FUN_0077d470(lVar2);
  uStack_90 = FUN_0077d470(*param_2);
  local_a0 = &LAB_00ff2260;
  local_98 = local_78;
  FUN_00ff04b0(&local_38,*(undefined8 *)(param_1 + 4));
  uVar3 = FUN_00ff4e20(*param_2,*(undefined8 *)(param_1 + 4),&local_e8);
  if (local_38 == 0) {
    FUN_006d0420(0);
  }
  else {
    plVar4 = (long *)(local_38 + 0x48);
    (**(code **)(*plVar4 + 0x10))(plVar4);
    FUN_006d0420(local_38);
    (**(code **)(*plVar4 + 0x18))(plVar4);
    (**(code **)(*plVar4 + 0x18))(plVar4);
    local_38 = 0;
  }
  if (local_70 != 0) {
    (**(code **)(*(long *)(local_70 + 0x48) + 0x18))();
    local_70 = 0;
  }
  if (lVar1 != 0) {
    (**(code **)(*(long *)(lVar1 + 0x48) + 0x18))((long *)(lVar1 + 0x48));
  }
  if (lVar2 != 0) {
    (**(code **)(*(long *)(lVar2 + 0x48) + 0x18))((long *)(lVar2 + 0x48));
  }
  return uVar3;
}


