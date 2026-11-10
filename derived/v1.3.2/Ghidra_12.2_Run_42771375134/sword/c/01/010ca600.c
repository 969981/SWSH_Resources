/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 010ca600; name: FUN_010ca600
 */


long * FUN_010ca600(undefined8 param_1,long *param_2,long *param_3,long *param_4)

{
  undefined *puVar1;
  long lVar2;
  long *plVar3;
  long local_48;
  long local_38;
  
  lVar2 = nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_02710860);
  if (0xf < *(ulong *)(lVar2 + 0x80)) {
                    /* WARNING: Subroutine does not return */
    abort();
  }
  *(long **)(lVar2 + *(ulong *)(lVar2 + 0x80) * 8) = param_2;
  *(long *)(lVar2 + 0x80) = *(long *)(lVar2 + 0x80) + 1;
  plVar3 = (long *)(**(code **)(*param_2 + 0x10))(param_2,0x118,8);
  if (plVar3 == (long *)0x0) {
    (**(code **)(*param_2 + 0xb8))(param_2);
  }
  local_38 = *param_3;
  *param_3 = 0;
  local_48 = *param_4;
  *param_4 = 0;
  FUN_00ff5fc0(plVar3,&local_38,&local_48);
  puVar1 = PTR_DAT_02724488;
  *(undefined8 *)((long)plVar3 + 0xdc) = 0;
  plVar3[0x22] = 0;
  *(undefined4 *)(plVar3 + 0x15) = 0;
  plVar3[0x13] = 0;
  plVar3[0x14] = 0;
  *plVar3 = (long)(puVar1 + 0x10);
  *(undefined1 *)(plVar3 + 0x1b) = 0;
  plVar3[0x19] = 0;
  plVar3[0x1a] = 0;
  plVar3[0x16] = 0;
  *(undefined1 *)(plVar3 + 0x1f) = 0;
  plVar3[0x1d] = 0;
  plVar3[0x1e] = 0;
  plVar3[9] = (long)(puVar1 + 0xb0);
  plVar3[10] = (long)(puVar1 + 0xf0);
  plVar3[0xf] = (long)(puVar1 + 0x118);
  plVar3[0x10] = (long)(puVar1 + 0x178);
  plVar3[0x11] = (long)(puVar1 + 0x1c8);
  plVar3[0x12] = (long)(puVar1 + 0x1e8);
  plVar3[0x17] = 0;
  plVar3[0x18] = 0;
  *(undefined8 *)((long)plVar3 + 0x103) = 0;
  *(undefined8 *)((long)plVar3 + 0xfc) = 0;
  if (local_48 != 0) {
    (**(code **)(*(long *)(local_48 + 0x48) + 0x18))();
    local_48 = 0;
  }
  if (local_38 != 0) {
    (**(code **)(*(long *)(local_38 + 0x48) + 0x18))();
  }
  plVar3[1] = (long)param_2;
  plVar3[2] = (long)plVar3;
  plVar3[3] = 0x118;
  plVar3[4] = 8;
  *(long *)(lVar2 + 0x80) = *(long *)(lVar2 + 0x80) + -1;
  return plVar3;
}


