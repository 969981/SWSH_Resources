/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00d2cda0; name: FUN_00d2cda0
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long * FUN_00d2cda0(undefined8 param_1,long *param_2,long *param_3,undefined8 param_4)

{
  long lVar1;
  undefined *puVar2;
  long lVar3;
  long *plVar4;
  long local_38;
  
  lVar3 = nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_02710860);
  if (0xf < *(ulong *)(lVar3 + 0x80)) {
                    /* WARNING: Subroutine does not return */
    abort();
  }
  *(long **)(lVar3 + *(ulong *)(lVar3 + 0x80) * 8) = param_2;
  *(long *)(lVar3 + 0x80) = *(long *)(lVar3 + 0x80) + 1;
  plVar4 = (long *)(**(code **)(*param_2 + 0x10))(param_2,0x3a0,0x10);
  if (plVar4 == (long *)0x0) {
    (**(code **)(*param_2 + 0xb8))(param_2);
  }
  local_38 = *param_3;
  *param_3 = 0;
  FUN_00d34820(plVar4,&local_38,param_4);
  lVar1 = _DAT_01d4a130;
  plVar4[0x6b] = _UNK_01d4a138;
  plVar4[0x6a] = lVar1;
  puVar2 = PTR_DAT_0271d948;
  *(undefined2 *)(plVar4 + 0x72) = 0;
  plVar4[0x71] = 0;
  plVar4[0x70] = 0;
  plVar4[0x6f] = 0;
  plVar4[0x6e] = 0;
  plVar4[0x6d] = 0;
  plVar4[0x6c] = 0;
  *plVar4 = (long)(puVar2 + 0x10);
  plVar4[9] = (long)(puVar2 + 0x68);
  plVar4[10] = (long)(puVar2 + 0xa8);
  if (local_38 != 0) {
    (**(code **)(*(long *)(local_38 + 0x48) + 0x18))();
  }
  plVar4[1] = (long)param_2;
  plVar4[2] = (long)plVar4;
  plVar4[3] = 0x3a0;
  plVar4[4] = 0x10;
  *(long *)(lVar3 + 0x80) = *(long *)(lVar3 + 0x80) + -1;
  return plVar4;
}


