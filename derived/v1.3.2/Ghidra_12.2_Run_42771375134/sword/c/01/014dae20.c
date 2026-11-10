/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 014dae20; name: FUN_014dae20
 */


void FUN_014dae20(long *param_1,undefined8 param_2,long *param_3,undefined8 *param_4,
                 undefined8 param_5)

{
  long lVar1;
  long lVar2;
  long *plVar3;
  long lVar4;
  long local_60;
  long lStack_58;
  long local_48;
  
  lVar1 = nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_02710860);
  if (0xf < *(ulong *)(lVar1 + 0x80)) {
                    /* WARNING: Subroutine does not return */
    abort();
  }
  *(long **)(lVar1 + *(ulong *)(lVar1 + 0x80) * 8) = param_3;
  *(long *)(lVar1 + 0x80) = *(long *)(lVar1 + 0x80) + 1;
  lVar2 = (**(code **)(*param_3 + 0x10))(param_3,0x730,0x10);
  if (lVar2 == 0) {
    (**(code **)(*param_3 + 0xb8))(param_3);
  }
  FUN_014db780(lVar2,*param_4,param_5);
  *(long **)(lVar2 + 8) = param_3;
  *(long *)(lVar2 + 0x10) = lVar2;
  *(undefined8 *)(lVar2 + 0x18) = 0x730;
  *(undefined8 *)(lVar2 + 0x20) = 0x10;
  *(long *)(lVar1 + 0x80) = *(long *)(lVar1 + 0x80) + -1;
  if (lVar2 != 0) {
    (**(code **)(*(long *)(lVar2 + 0x48) + 0x10))();
  }
  lVar1 = *(long *)(lVar2 + 0x70);
  if (lVar1 != 0) {
    (**(code **)(*(long *)(lVar1 + 0x48) + 0x10))();
  }
  lVar4 = *(long *)(lVar2 + 0x78);
  if (lVar4 != 0) {
    plVar3 = (long *)(lVar4 + 0x48);
    (**(code **)(*plVar3 + 0x10))(plVar3);
    (**(code **)(*plVar3 + 0x18))(plVar3);
  }
  if (lVar1 != 0) {
    (**(code **)(*(long *)(lVar1 + 0x48) + 0x18))();
  }
  local_60 = lVar1;
  lStack_58 = lVar4;
  FUN_00d88990(param_2,&local_60);
  lVar1 = *(long *)(lVar2 + 0x58);
  if (lVar1 != 0) {
    (**(code **)(*(long *)(lVar1 + 0x48) + 0x10))();
  }
  local_48 = lVar2;
  FUN_007742d0(param_2,&local_48);
  if (local_48 != 0) {
    (**(code **)(*(long *)(local_48 + 0x48) + 0x18))();
  }
  *param_1 = lVar1;
  return;
}


