/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00f20690; name: FUN_00f20690
 */


long * FUN_00f20690(long param_1,long *param_2,long param_3,undefined8 param_4)

{
  long lVar1;
  long *plVar2;
  undefined8 uVar3;
  long *local_48;
  
  lVar1 = nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_02710860);
  if (0xf < *(ulong *)(lVar1 + 0x80)) {
                    /* WARNING: Subroutine does not return */
    abort();
  }
  *(long **)(lVar1 + *(ulong *)(lVar1 + 0x80) * 8) = param_2;
  *(long *)(lVar1 + 0x80) = *(long *)(lVar1 + 0x80) + 1;
  plVar2 = (long *)(**(code **)(*param_2 + 0x10))(param_2,0x2c0,0x10);
  if (plVar2 == (long *)0x0) {
    (**(code **)(*param_2 + 0xb8))(param_2);
  }
  FUN_00f26140(plVar2,param_4);
  plVar2[1] = (long)param_2;
  plVar2[2] = (long)plVar2;
  plVar2[3] = 0x2c0;
  plVar2[4] = 0x10;
  *(long *)(lVar1 + 0x80) = *(long *)(lVar1 + 0x80) + -1;
  if (plVar2 != (long *)0x0) {
    (**(code **)(plVar2[9] + 0x10))();
  }
  plVar2[0xe] = param_3;
  (**(code **)(*plVar2 + 0x38))(plVar2);
  uVar3 = *(undefined8 *)(param_1 + 8);
  local_48 = plVar2;
  if (plVar2 != (long *)0x0) {
    (**(code **)(plVar2[9] + 0x10))();
  }
  FUN_01591030((undefined8 *)(param_1 + 8),uVar3,&local_48);
  if (local_48 != (long *)0x0) {
    (**(code **)(local_48[9] + 0x18))();
    local_48 = (long *)0x0;
  }
  (**(code **)(plVar2[9] + 0x18))();
  return plVar2;
}


