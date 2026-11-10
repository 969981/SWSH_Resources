/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 010ac950; name: FUN_010ac950
 */


long * FUN_010ac950(undefined8 param_1,long *param_2,long *param_3,long *param_4)

{
  long lVar1;
  long lVar2;
  undefined4 uVar3;
  undefined *puVar4;
  long lVar5;
  long *plVar6;
  long local_48;
  long local_38;
  
  lVar5 = nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_02710860);
  if (0xf < *(ulong *)(lVar5 + 0x80)) {
                    /* WARNING: Subroutine does not return */
    abort();
  }
  *(long **)(lVar5 + *(ulong *)(lVar5 + 0x80) * 8) = param_2;
  *(long *)(lVar5 + 0x80) = *(long *)(lVar5 + 0x80) + 1;
  plVar6 = (long *)(**(code **)(*param_2 + 0x10))(param_2,0x128,8);
  if (plVar6 == (long *)0x0) {
    (**(code **)(*param_2 + 0xb8))(param_2);
  }
  local_38 = *param_3;
  *param_3 = 0;
  local_48 = *param_4;
  *param_4 = 0;
  FUN_00ff5fc0(plVar6,&local_38,&local_48);
  *(undefined1 *)(plVar6 + 0xf) = 0;
  puVar4 = PTR_DAT_02724328;
  *(undefined4 *)((long)plVar6 + 0x84) = 6;
  *(undefined8 *)((long)plVar6 + 0x7c) = 0;
  plVar6[0x17] = 0;
  plVar6[0x18] = 0;
  *plVar6 = (long)(puVar4 + 0x10);
  plVar6[9] = (long)(puVar4 + 0x78);
  plVar6[10] = (long)(puVar4 + 0xb8);
  plVar6[0x19] = 0x9600000000;
  plVar6[0x15] = 0;
  plVar6[0x16] = 0;
  plVar6[0x13] = 0;
  plVar6[0x14] = 0;
  plVar6[0x11] = 0;
  plVar6[0x12] = 0;
  uVar3 = DAT_02163920;
  lVar2 = DAT_02163918;
  lVar1 = DAT_02163910;
  plVar6[0x1a] = DAT_02163908;
  *(undefined2 *)(plVar6 + 0x20) = 0;
  *(undefined4 *)(plVar6 + 0x1d) = uVar3;
  *(undefined4 *)((long)plVar6 + 0xec) = 5;
  plVar6[0x1b] = lVar1;
  plVar6[0x1c] = lVar2;
  plVar6[0x23] = 0;
  plVar6[0x24] = 0;
  plVar6[0x21] = 0;
  plVar6[0x22] = 0;
  plVar6[0x1e] = 0;
  plVar6[0x1f] = 0;
  if (local_48 != 0) {
    (**(code **)(*(long *)(local_48 + 0x48) + 0x18))();
    local_48 = 0;
  }
  if (local_38 != 0) {
    (**(code **)(*(long *)(local_38 + 0x48) + 0x18))();
  }
  plVar6[1] = (long)param_2;
  plVar6[2] = (long)plVar6;
  plVar6[3] = 0x128;
  plVar6[4] = 8;
  *(long *)(lVar5 + 0x80) = *(long *)(lVar5 + 0x80) + -1;
  return plVar6;
}


