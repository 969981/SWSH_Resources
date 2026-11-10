/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00d1aa50; name: FUN_00d1aa50
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long * FUN_00d1aa50(undefined8 param_1,long *param_2,long *param_3,undefined8 param_4)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  long lVar4;
  long *plVar5;
  long local_38;
  
  lVar4 = nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_02710860);
  if (0xf < *(ulong *)(lVar4 + 0x80)) {
                    /* WARNING: Subroutine does not return */
    abort();
  }
  *(long **)(lVar4 + *(ulong *)(lVar4 + 0x80) * 8) = param_2;
  *(long *)(lVar4 + 0x80) = *(long *)(lVar4 + 0x80) + 1;
  plVar5 = (long *)(**(code **)(*param_2 + 0x10))(param_2,0x380,0x10);
  if (plVar5 == (long *)0x0) {
    (**(code **)(*param_2 + 0xb8))(param_2);
  }
  local_38 = *param_3;
  *param_3 = 0;
  FUN_00d34820(plVar5,&local_38,param_4);
  puVar3 = PTR_DAT_0271cfc8;
  lVar2 = _UNK_01d4a138;
  lVar1 = _DAT_01d4a130;
  plVar5[0x6d] = 0;
  plVar5[0x6c] = 0;
  *plVar5 = (long)(puVar3 + 0x10);
  plVar5[9] = (long)(puVar3 + 0x68);
  plVar5[10] = (long)(puVar3 + 0xa8);
  plVar5[0x6b] = lVar2;
  plVar5[0x6a] = lVar1;
  *(undefined1 *)(plVar5 + 0x6e) = 0;
  if (local_38 != 0) {
    (**(code **)(*(long *)(local_38 + 0x48) + 0x18))();
  }
  plVar5[1] = (long)param_2;
  plVar5[2] = (long)plVar5;
  plVar5[3] = 0x380;
  plVar5[4] = 0x10;
  *(long *)(lVar4 + 0x80) = *(long *)(lVar4 + 0x80) + -1;
  return plVar5;
}


