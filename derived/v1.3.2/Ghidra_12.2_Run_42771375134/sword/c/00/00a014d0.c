/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00a014d0; name: FUN_00a014d0
 */


void FUN_00a014d0(long param_1,long *param_2,long *param_3)

{
  undefined8 *puVar1;
  long lVar2;
  long *plVar3;
  long local_50;
  long local_48;
  long local_38;
  
  plVar3 = *(long **)(param_1 + 8);
  puVar1 = (undefined8 *)(**(code **)(*plVar3 + 0x10))(plVar3,0x18,8);
  lVar2 = nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_02710860);
  if (0xf < *(ulong *)(lVar2 + 0x80)) {
                    /* WARNING: Subroutine does not return */
    abort();
  }
  *(long **)(lVar2 + *(ulong *)(lVar2 + 0x80) * 8) = plVar3;
  *(long *)(lVar2 + 0x80) = *(long *)(lVar2 + 0x80) + 1;
  FUN_009fc1c0(puVar1,plVar3);
  *(long *)(lVar2 + 0x80) = *(long *)(lVar2 + 0x80) + -1;
  local_38 = *param_3;
  if (local_38 != 0) {
    (**(code **)(*(long *)(local_38 + 0x48) + 0x10))();
  }
  FUN_009fc400(puVar1,&local_38);
  if (local_38 != 0) {
    (**(code **)(*(long *)(local_38 + 0x48) + 0x18))();
    local_38 = 0;
  }
  local_48 = *param_2;
  if (local_48 != 0) {
    (**(code **)(*(long *)(local_48 + 0x48) + 0x10))();
  }
  FUN_009fd2e0(puVar1,&local_48);
  if (local_48 != 0) {
    (**(code **)(*(long *)(local_48 + 0x48) + 0x18))();
    local_48 = 0;
  }
  local_50 = *param_2;
  if (local_50 != 0) {
    (**(code **)(*(long *)(local_50 + 0x48) + 0x10))();
  }
  FUN_009fd4a0(puVar1,&local_50);
  if (local_50 != 0) {
    (**(code **)(*(long *)(local_50 + 0x48) + 0x18))();
    local_50 = 0;
  }
  FUN_008859b0(*param_2);
  if (puVar1 != (undefined8 *)0x0) {
    (**(code **)*puVar1)(puVar1);
    (**(code **)(*plVar3 + 0x18))(plVar3,puVar1,0x18,8);
  }
  return;
}


