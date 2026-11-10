/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 01456c00; name: FUN_01456c00
 */


long * FUN_01456c00(undefined8 param_1,long *param_2,long *param_3,long *param_4)

{
  undefined *puVar1;
  long lVar2;
  long *plVar3;
  long lVar4;
  long lVar5;
  long local_50;
  long local_48;
  
  lVar2 = nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_02710860);
  if (0xf < *(ulong *)(lVar2 + 0x80)) {
                    /* WARNING: Subroutine does not return */
    abort();
  }
  *(long **)(lVar2 + *(ulong *)(lVar2 + 0x80) * 8) = param_2;
  *(long *)(lVar2 + 0x80) = *(long *)(lVar2 + 0x80) + 1;
  plVar3 = (long *)(**(code **)(*param_2 + 0x10))(param_2,0x1d0,0x10);
  if (plVar3 == (long *)0x0) {
    (**(code **)(*param_2 + 0xb8))(param_2);
  }
  lVar4 = *param_3;
  *param_3 = 0;
  lVar5 = *param_4;
  *param_4 = 0;
  local_48 = lVar4;
  if (lVar4 != 0) {
    (**(code **)(*(long *)(lVar4 + 0x48) + 0x10))();
  }
  local_50 = lVar5;
  if (lVar5 != 0) {
    (**(code **)(*(long *)(lVar5 + 0x48) + 0x10))();
  }
  FUN_00ff5fc0(plVar3,&local_48,&local_50);
  puVar1 = PTR_DAT_02729e20;
  *(undefined4 *)((long)plVar3 + 0xac) = 0;
  plVar3[0x24] = 0;
  plVar3[0x25] = 0;
  plVar3[0x22] = 0;
  plVar3[0x23] = 0;
  *plVar3 = (long)(puVar1 + 0x10);
  *(undefined8 *)((long)plVar3 + 0xa4) = 0;
  plVar3[9] = (long)(puVar1 + 0x78);
  plVar3[10] = (long)(puVar1 + 0xb8);
  *(undefined4 *)(plVar3 + 0xf) = 6;
  *(undefined8 *)((long)plVar3 + 0x9c) = 0;
  *(undefined8 *)((long)plVar3 + 0x94) = 0;
  *(undefined8 *)((long)plVar3 + 0x8c) = 0;
  *(undefined8 *)((long)plVar3 + 0x84) = 0;
  *(undefined8 *)((long)plVar3 + 0x7c) = 0;
  if (local_50 != 0) {
    (**(code **)(*(long *)(local_50 + 0x48) + 0x18))();
    local_50 = 0;
  }
  if (local_48 != 0) {
    (**(code **)(*(long *)(local_48 + 0x48) + 0x18))();
    local_48 = 0;
  }
  *(undefined4 *)(plVar3 + 0x38) = 0;
  puVar1 = PTR_DAT_02729e28;
  *(undefined1 *)((long)plVar3 + 0x1c4) = 0;
  *(undefined1 *)(plVar3 + 0x36) = 0;
  plVar3[0x32] = 0;
  plVar3[0x33] = 0;
  *plVar3 = (long)(puVar1 + 0x10);
  plVar3[0x34] = 0;
  plVar3[0x35] = 0;
  *(undefined2 *)((long)plVar3 + 0x1bc) = 0;
  plVar3[9] = (long)(puVar1 + 0x78);
  plVar3[10] = (long)(puVar1 + 0xb8);
  *(undefined8 *)((long)plVar3 + 0x1b4) = 0;
  if (lVar5 != 0) {
    (**(code **)(*(long *)(lVar5 + 0x48) + 0x18))((long *)(lVar5 + 0x48));
  }
  if (lVar4 != 0) {
    (**(code **)(*(long *)(lVar4 + 0x48) + 0x18))((long *)(lVar4 + 0x48));
  }
  plVar3[1] = (long)param_2;
  plVar3[2] = (long)plVar3;
  plVar3[3] = 0x1d0;
  plVar3[4] = 0x10;
  *(long *)(lVar2 + 0x80) = *(long *)(lVar2 + 0x80) + -1;
  return plVar3;
}


