/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0133dc90; name: FUN_0133dc90
 */


long * FUN_0133dc90(undefined8 param_1,long *param_2,undefined8 param_3,undefined8 param_4,
                   undefined8 *param_5,undefined8 param_6)

{
  undefined *puVar1;
  long lVar2;
  long *plVar3;
  long *local_58;
  
  lVar2 = nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_02710860);
  if (0xf < *(ulong *)(lVar2 + 0x80)) {
                    /* WARNING: Subroutine does not return */
    abort();
  }
  *(long **)(lVar2 + *(ulong *)(lVar2 + 0x80) * 8) = param_2;
  *(long *)(lVar2 + 0x80) = *(long *)(lVar2 + 0x80) + 1;
  plVar3 = (long *)(**(code **)(*param_2 + 0x10))(param_2,0x4c0,0x10);
  if (plVar3 == (long *)0x0) {
    (**(code **)(*param_2 + 0xb8))(param_2);
  }
  FUN_012ddac0(plVar3,param_3,param_4,*param_5,param_6);
  puVar1 = PTR_DAT_02728128;
  *plVar3 = (long)(PTR_DAT_02728128 + 0x10);
  plVar3[1] = (long)param_2;
  plVar3[9] = (long)(puVar1 + 0xe0);
  plVar3[10] = (long)(puVar1 + 0x150);
  plVar3[0x92] = 0;
  plVar3[0x97] = 0;
  plVar3[0x96] = 0;
  plVar3[0x95] = 0;
  plVar3[0x94] = 0;
  plVar3[4] = 0x10;
  plVar3[2] = (long)plVar3;
  plVar3[3] = 0x4c0;
  *(long *)(lVar2 + 0x80) = *(long *)(lVar2 + 0x80) + -1;
  if (plVar3 != (long *)0x0) {
    (**(code **)(plVar3[9] + 0x10))();
  }
  local_58 = plVar3;
  FUN_006d9640(param_1,&local_58);
  if (local_58 != (long *)0x0) {
    (**(code **)(local_58[9] + 0x18))();
  }
  return plVar3;
}


