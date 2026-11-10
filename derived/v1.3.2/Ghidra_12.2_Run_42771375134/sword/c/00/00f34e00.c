/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00f34e00; name: FUN_00f34e00
 */


void FUN_00f34e00(long *param_1,long *param_2)

{
  long *plVar1;
  long *plVar2;
  long lVar3;
  long *plVar4;
  long lVar5;
  
  plVar2 = (long *)(**(code **)(*(long *)param_1[3] + 0x10))((long *)param_1[3],0x40,8);
  if (plVar2 == (long *)0x0) {
    (**(code **)(*(long *)param_1[3] + 0xb8))();
  }
  plVar4 = plVar2 + 2;
  *plVar2 = 0;
  lVar5 = param_1[3];
  lVar3 = nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_02710860);
  if (0xf < *(ulong *)(lVar3 + 0x80)) {
                    /* WARNING: Subroutine does not return */
    abort();
  }
  *(long *)(lVar3 + *(ulong *)(lVar3 + 0x80) * 8) = lVar5;
  *(long *)(lVar3 + 0x80) = *(long *)(lVar3 + 0x80) + 1;
  plVar2[4] = 0;
  plVar2[2] = (long)plVar4;
  plVar2[3] = (long)plVar4;
  plVar2[5] = param_2[3];
  plVar2[6] = 0;
  *(undefined4 *)(plVar2 + 7) = 0;
  if (param_2[2] != 0) {
    lVar5 = *param_2;
    plVar1 = (long *)param_2[1];
    *(undefined8 *)(*plVar1 + 8) = *(undefined8 *)(lVar5 + 8);
    **(long **)(lVar5 + 8) = *plVar1;
    *(long **)(plVar2[2] + 8) = plVar1;
    *plVar1 = plVar2[2];
    plVar2[2] = lVar5;
    *(long **)(lVar5 + 8) = plVar4;
    plVar2[4] = plVar2[4] + param_2[2];
    param_2[2] = 0;
  }
  *(long *)(lVar3 + 0x80) = *(long *)(lVar3 + 0x80) + -1;
  plVar2[1] = (long)param_1;
  lVar3 = *param_1;
  *plVar2 = lVar3;
  *(long **)(lVar3 + 8) = plVar2;
  *param_1 = (long)plVar2;
  param_1[2] = param_1[2] + 1;
  return;
}


