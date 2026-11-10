/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 013b24d0; name: FUN_013b24d0
 */


void FUN_013b24d0(long *param_1,long *param_2)

{
  long lVar1;
  long lVar2;
  long *plVar3;
  long lVar4;
  code *pcVar5;
  long lVar6;
  
  plVar3 = (long *)(**(code **)(*(long *)param_1[3] + 0x10))((long *)param_1[3],0xa0,0x10);
  if (plVar3 == (long *)0x0) {
    (**(code **)(*(long *)param_1[3] + 0xb8))();
  }
  *plVar3 = 0;
  lVar6 = param_1[3];
  lVar4 = nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_02710860);
  if (0xf < *(ulong *)(lVar4 + 0x80)) {
                    /* WARNING: Subroutine does not return */
    abort();
  }
  *(long *)(lVar4 + *(ulong *)(lVar4 + 0x80) * 8) = lVar6;
  *(long *)(lVar4 + 0x80) = *(long *)(lVar4 + 0x80) + 1;
  plVar3[4] = 0;
  plVar3[5] = 0;
  plVar3[2] = 0;
  plVar3[3] = 0;
  if ((code *)param_2[3] != (code *)0x0) {
    (*(code *)param_2[3])(param_2 + 4,plVar3 + 6);
    lVar6 = *param_2;
    lVar1 = param_2[1];
    lVar2 = param_2[3];
    plVar3[4] = param_2[2];
    plVar3[5] = lVar2;
    plVar3[2] = lVar6;
    plVar3[3] = lVar1;
    pcVar5 = (code *)param_2[1];
    if (pcVar5 != (code *)0x0) {
      param_2[2] = 0;
      param_2[3] = 0;
      *param_2 = 0;
      param_2[1] = 0;
      (*pcVar5)(param_2 + 4);
    }
  }
  *(int *)(plVar3 + 0x12) = (int)param_2[0x10];
  *(long *)(lVar4 + 0x80) = *(long *)(lVar4 + 0x80) + -1;
  plVar3[1] = (long)param_1;
  lVar4 = *param_1;
  *plVar3 = lVar4;
  *(long **)(lVar4 + 8) = plVar3;
  *param_1 = (long)plVar3;
  param_1[2] = param_1[2] + 1;
  return;
}


