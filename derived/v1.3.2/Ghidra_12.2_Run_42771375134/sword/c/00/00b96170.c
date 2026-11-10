/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00b96170; name: FUN_00b96170
 */


void FUN_00b96170(long *param_1,undefined8 param_2,long *param_3,undefined8 *param_4)

{
  long lVar1;
  long *plVar2;
  long *plVar3;
  long lVar4;
  long *local_58;
  long local_50;
  long lStack_48;
  
  lVar1 = nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_02710860);
  if (0xf < *(ulong *)(lVar1 + 0x80)) {
                    /* WARNING: Subroutine does not return */
    abort();
  }
  *(long **)(lVar1 + *(ulong *)(lVar1 + 0x80) * 8) = param_3;
  *(long *)(lVar1 + 0x80) = *(long *)(lVar1 + 0x80) + 1;
  plVar2 = (long *)(**(code **)(*param_3 + 0x10))(param_3,0x870,0x10);
  if (plVar2 == (long *)0x0) {
    (**(code **)(*param_3 + 0xb8))(param_3);
  }
  FUN_0147e190(plVar2,*param_4);
  plVar2[1] = (long)param_3;
  plVar2[2] = (long)plVar2;
  plVar2[3] = 0x870;
  plVar2[4] = 0x10;
  *(long *)(lVar1 + 0x80) = *(long *)(lVar1 + 0x80) + -1;
  if (plVar2 != (long *)0x0) {
    (**(code **)(plVar2[9] + 0x10))();
  }
  lVar1 = plVar2[0xe];
  if (lVar1 != 0) {
    (**(code **)(*(long *)(lVar1 + 0x48) + 0x10))();
  }
  lVar4 = plVar2[0xf];
  if (lVar4 != 0) {
    plVar3 = (long *)(lVar4 + 0x48);
    (**(code **)(*plVar3 + 0x10))(plVar3);
    (**(code **)(*plVar3 + 0x18))(plVar3);
  }
  if (lVar1 != 0) {
    (**(code **)(*(long *)(lVar1 + 0x48) + 0x18))();
  }
  local_50 = lVar1;
  lStack_48 = lVar4;
  FUN_00d88990(param_2,&local_50);
  (**(code **)(*plVar2 + 0x10))(&local_50,plVar2);
  local_58 = plVar2;
  FUN_007742d0(param_2,&local_58);
  if (local_58 != (long *)0x0) {
    (**(code **)(local_58[9] + 0x18))();
  }
  *param_1 = local_50;
  return;
}


