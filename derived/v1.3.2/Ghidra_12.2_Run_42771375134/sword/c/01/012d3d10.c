/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 012d3d10; name: FUN_012d3d10
 */


long * FUN_012d3d10(undefined8 param_1,long *param_2,long *param_3,long *param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  long *plVar4;
  long local_48;
  long local_38;
  
  lVar3 = nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_02710860);
  if (0xf < *(ulong *)(lVar3 + 0x80)) {
                    /* WARNING: Subroutine does not return */
    abort();
  }
  *(long **)(lVar3 + *(ulong *)(lVar3 + 0x80) * 8) = param_2;
  *(long *)(lVar3 + 0x80) = *(long *)(lVar3 + 0x80) + 1;
  plVar4 = (long *)(**(code **)(*param_2 + 0x10))(param_2,0x580,0x10);
  if (plVar4 == (long *)0x0) {
    (**(code **)(*param_2 + 0xb8))(param_2);
  }
  local_38 = *param_3;
  *param_3 = 0;
  local_48 = *param_4;
  *param_4 = 0;
  FUN_00ff5fc0(plVar4,&local_38,&local_48);
  puVar1 = PTR_DAT_02727948 + 0xd8;
  puVar2 = PTR_DAT_02727948 + 0x118;
  *plVar4 = (long)(PTR_DAT_02727948 + 0x10);
  plVar4[9] = (long)puVar1;
  plVar4[10] = (long)puVar2;
  FUN_01565c40(plVar4 + 0xf);
  *(undefined2 *)((long)plVar4 + 0x4bc) = 0x100;
  plVar4[0x96] = 0;
  *(undefined4 *)(plVar4 + 0x97) = 0;
  *(undefined1 *)((long)plVar4 + 0x4be) = 0;
  plVar4[0x98] = 0;
  plVar4[0x9d] = 0;
  plVar4[0x9c] = 0;
  plVar4[0x9b] = 0;
  plVar4[0x9a] = 0;
  *(undefined8 *)((long)plVar4 + 0x56e) = 0;
  plVar4[0xad] = 0;
  plVar4[0xac] = 0;
  plVar4[0xab] = 0;
  plVar4[0xaa] = 0;
  *(undefined4 *)(plVar4 + 0xaf) = 1;
  *(undefined2 *)((long)plVar4 + 0x57c) = 0;
  if (local_48 != 0) {
    (**(code **)(*(long *)(local_48 + 0x48) + 0x18))();
    local_48 = 0;
  }
  if (local_38 != 0) {
    (**(code **)(*(long *)(local_38 + 0x48) + 0x18))();
  }
  plVar4[1] = (long)param_2;
  plVar4[2] = (long)plVar4;
  plVar4[3] = 0x580;
  plVar4[4] = 0x10;
  *(long *)(lVar3 + 0x80) = *(long *)(lVar3 + 0x80) + -1;
  return plVar4;
}


