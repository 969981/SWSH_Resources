/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00f065a0; name: FUN_00f065a0
 */


void FUN_00f065a0(long *param_1,undefined8 param_2,undefined8 *param_3,undefined8 *param_4,
                 undefined8 *param_5,undefined8 param_6)

{
  long lVar1;
  long *plVar2;
  long *plVar3;
  long lVar4;
  long local_70;
  long lStack_68;
  long *local_58;
  
  plVar3 = *(long **)(*(long *)PTR_DAT_02710540 + 0x68);
  lVar1 = nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_02710860);
  if (0xf < *(ulong *)(lVar1 + 0x80)) {
                    /* WARNING: Subroutine does not return */
    abort();
  }
  *(long **)(lVar1 + *(ulong *)(lVar1 + 0x80) * 8) = plVar3;
  *(long *)(lVar1 + 0x80) = *(long *)(lVar1 + 0x80) + 1;
  plVar2 = (long *)(**(code **)(*plVar3 + 0x10))(plVar3,0x308,8);
  if (plVar2 == (long *)0x0) {
    (**(code **)(*plVar3 + 0xb8))(plVar3);
  }
  FUN_00f06760(plVar2,*param_3,*param_4,*param_5,param_6);
  plVar2[1] = (long)plVar3;
  plVar2[2] = (long)plVar2;
  plVar2[3] = 0x308;
  plVar2[4] = 8;
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
  local_70 = lVar1;
  lStack_68 = lVar4;
  FUN_00d885f0(param_2,&local_70);
  (**(code **)(*plVar2 + 0x10))(&local_70,plVar2);
  local_58 = plVar2;
  FUN_01019670(param_2,&local_58);
  if (local_58 != (long *)0x0) {
    (**(code **)(local_58[9] + 0x18))();
  }
  *param_1 = local_70;
  return;
}


