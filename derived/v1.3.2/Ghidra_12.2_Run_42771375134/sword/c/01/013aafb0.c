/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 013aafb0; name: FUN_013aafb0
 */


void FUN_013aafb0(long *param_1,long *param_2,long *param_3)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long *plVar4;
  long *plVar5;
  long local_40;
  long local_38;
  
  local_38 = *param_2;
  if (local_38 != 0) {
    (**(code **)(*(long *)(local_38 + 0x48) + 0x10))();
  }
  local_40 = *param_3;
  if (local_40 != 0) {
    (**(code **)(*(long *)(local_40 + 0x48) + 0x10))();
  }
  FUN_00ff5fc0(param_1,&local_38,&local_40);
  if (local_40 != 0) {
    (**(code **)(*(long *)(local_40 + 0x48) + 0x18))();
    local_40 = 0;
  }
  if (local_38 != 0) {
    (**(code **)(*(long *)(local_38 + 0x48) + 0x18))();
    local_38 = 0;
  }
  puVar1 = PTR_DAT_02728f18;
  *(undefined1 *)(param_1 + 0x11) = 0;
  param_1[0x10] = 0;
  *param_1 = (long)(puVar1 + 0x10);
  param_1[9] = (long)(puVar1 + 0x78);
  param_1[10] = (long)(puVar1 + 0xb8);
  plVar5 = param_1 + 0xf;
  *plVar5 = 0;
  param_1[0x14] = 0;
  param_1[0x15] = 0;
  param_1[0x12] = 0;
  param_1[0x13] = 0;
  FUN_00796e80(param_1 + 0x16);
  FUN_00796e80(param_1 + 0x6e);
  *(undefined4 *)(param_1 + 0xc6) = 0;
  *(undefined4 *)(param_1 + 199) = 0;
  param_1[200] = 0;
  *(undefined2 *)(param_1 + 0xc9) = 0;
  *(undefined4 *)((long)param_1 + 0x64c) = 6;
  *(undefined2 *)(param_1 + 0xca) = 0;
  *(undefined8 *)((long)param_1 + 0x654) = 0;
  plVar4 = (long *)param_1[1];
  lVar2 = nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_02710860);
  if (0xf < *(ulong *)(lVar2 + 0x80)) {
                    /* WARNING: Subroutine does not return */
    abort();
  }
  *(long **)(lVar2 + *(ulong *)(lVar2 + 0x80) * 8) = plVar4;
  *(long *)(lVar2 + 0x80) = *(long *)(lVar2 + 0x80) + 1;
  lVar3 = (**(code **)(*plVar4 + 0x10))(plVar4,0x90,8);
  if (lVar3 == 0) {
    (**(code **)(*plVar4 + 0xb8))(plVar4);
  }
  FUN_00883c20(lVar3,plVar4);
  *(long **)(lVar3 + 8) = plVar4;
  *(long *)(lVar3 + 0x10) = lVar3;
  *(undefined8 *)(lVar3 + 0x18) = 0x90;
  *(undefined8 *)(lVar3 + 0x20) = 8;
  *(long *)(lVar2 + 0x80) = *(long *)(lVar2 + 0x80) + -1;
  if (lVar3 != 0) {
    (**(code **)(*(long *)(lVar3 + 0x48) + 0x10))();
  }
  if (*plVar5 != 0) {
    (**(code **)(*(long *)(*plVar5 + 0x48) + 0x18))();
    *plVar5 = 0;
  }
  *plVar5 = lVar3;
  return;
}


