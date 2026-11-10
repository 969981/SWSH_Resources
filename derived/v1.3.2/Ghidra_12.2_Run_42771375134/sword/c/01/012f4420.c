/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 012f4420; name: FUN_012f4420
 */


void FUN_012f4420(long *param_1,long *param_2)

{
  long *plVar1;
  long *plVar2;
  long *plVar3;
  long lVar4;
  long lVar5;
  
  plVar3 = (long *)(**(code **)(*(long *)param_1[3] + 0x10))((long *)param_1[3],0x48,8);
  if (plVar3 == (long *)0x0) {
    (**(code **)(*(long *)param_1[3] + 0xb8))();
  }
  *plVar3 = 0;
  lVar5 = param_1[3];
  lVar4 = nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_02710860);
  if (0xf < *(ulong *)(lVar4 + 0x80)) {
                    /* WARNING: Subroutine does not return */
    abort();
  }
  *(long *)(lVar4 + *(ulong *)(lVar4 + 0x80) * 8) = lVar5;
  *(long *)(lVar4 + 0x80) = *(long *)(lVar4 + 0x80) + 1;
  plVar1 = plVar3 + 3;
  plVar3[2] = *param_2;
  plVar3[3] = (long)plVar1;
  plVar3[4] = (long)plVar1;
  plVar3[5] = 0;
  plVar3[6] = param_2[4];
  plVar3[7] = 0;
  *(undefined4 *)(plVar3 + 8) = 0;
  if (param_2[3] != 0) {
    lVar5 = param_2[1];
    plVar2 = (long *)param_2[2];
    *(undefined8 *)(*plVar2 + 8) = *(undefined8 *)(lVar5 + 8);
    **(long **)(lVar5 + 8) = *plVar2;
    *(long **)(plVar3[3] + 8) = plVar2;
    *plVar2 = plVar3[3];
    plVar3[3] = lVar5;
    *(long **)(lVar5 + 8) = plVar1;
    plVar3[5] = plVar3[5] + param_2[3];
    param_2[3] = 0;
  }
  *(long *)(lVar4 + 0x80) = *(long *)(lVar4 + 0x80) + -1;
  plVar3[1] = (long)param_1;
  lVar4 = *param_1;
  *plVar3 = lVar4;
  *(long **)(lVar4 + 8) = plVar3;
  *param_1 = (long)plVar3;
  param_1[2] = param_1[2] + 1;
  return;
}


