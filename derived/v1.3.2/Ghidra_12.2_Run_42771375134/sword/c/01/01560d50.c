/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 01560d50; name: FUN_01560d50
 */


long * FUN_01560d50(undefined8 param_1,long *param_2,undefined4 *param_3,long *param_4)

{
  undefined4 uVar1;
  undefined *puVar2;
  long lVar3;
  long *plVar4;
  long lVar5;
  long lVar6;
  
  lVar3 = nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_02710860);
  if (0xf < *(ulong *)(lVar3 + 0x80)) {
                    /* WARNING: Subroutine does not return */
    abort();
  }
  *(long **)(lVar3 + *(ulong *)(lVar3 + 0x80) * 8) = param_2;
  *(long *)(lVar3 + 0x80) = *(long *)(lVar3 + 0x80) + 1;
  plVar4 = (long *)(**(code **)(*param_2 + 0x10))(param_2,0x380,8);
  if (plVar4 == (long *)0x0) {
    (**(code **)(*param_2 + 0xb8))(param_2);
  }
  uVar1 = *param_3;
  FUN_006d00e0(plVar4,0x10000);
  puVar2 = PTR_DAT_0272aeb0;
  *(undefined4 *)((long)plVar4 + 0x2fc) = uVar1;
  *plVar4 = (long)(puVar2 + 0x10);
  plVar4[9] = (long)(puVar2 + 0x70);
  plVar4[0xb] = (long)(puVar2 + 0xa0);
  lVar5 = *param_4;
  lVar6 = param_4[1];
  *(int *)(plVar4 + 0x62) = (int)param_4[2];
  plVar4[0x61] = lVar6;
  plVar4[0x60] = lVar5;
  plVar4[99] = param_4[3];
  plVar4[100] = param_4[4];
  plVar4[0x65] = param_4[5];
  lVar5 = param_4[6];
  plVar4[0x66] = lVar5;
  if (lVar5 != 0) {
    (**(code **)(*(long *)(lVar5 + 0x48) + 0x10))();
  }
  lVar5 = param_4[8];
  lVar6 = param_4[9];
  plVar4[0x67] = param_4[7];
  plVar4[0x69] = lVar6;
  plVar4[0x68] = lVar5;
  *(undefined4 *)(plVar4 + 0x6a) = 1;
  nn::os::InitializeMutex((MutexType *)(plVar4 + 0x6b),false,0);
  *(undefined4 *)(plVar4 + 0x6f) = 0;
  plVar4[1] = (long)param_2;
  plVar4[2] = (long)plVar4;
  plVar4[3] = 0x380;
  plVar4[4] = 8;
  *(long *)(lVar3 + 0x80) = *(long *)(lVar3 + 0x80) + -1;
  return plVar4;
}


