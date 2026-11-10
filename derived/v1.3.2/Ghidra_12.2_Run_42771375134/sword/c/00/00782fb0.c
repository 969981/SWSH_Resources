/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00782fb0; name: FUN_00782fb0
 */


long * FUN_00782fb0(undefined8 param_1,long *param_2,long *param_3,long *param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  long *plVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long *plVar8;
  long lVar9;
  
  puVar1 = PTR_DAT_02710860;
  lVar3 = nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_02710860);
  if (0xf < *(ulong *)(lVar3 + 0x80)) {
                    /* WARNING: Subroutine does not return */
    abort();
  }
  *(long **)(lVar3 + *(ulong *)(lVar3 + 0x80) * 8) = param_2;
  *(long *)(lVar3 + 0x80) = *(long *)(lVar3 + 0x80) + 1;
  plVar4 = (long *)(**(code **)(*param_2 + 0x10))(param_2,0x68,8);
  if (plVar4 == (long *)0x0) {
    (**(code **)(*param_2 + 0xb8))(param_2);
  }
  lVar9 = *param_3;
  lVar7 = *param_4;
  *param_4 = 0;
  puVar2 = PTR_DAT_02710a18;
  plVar4[7] = 0;
  *(undefined4 *)(plVar4 + 8) = 0;
  *(undefined4 *)(plVar4 + 6) = 0;
  plVar4[4] = 0;
  plVar4[5] = 0;
  *plVar4 = (long)(puVar2 + 0x10);
  plVar4[2] = 0;
  plVar4[3] = 0;
  lVar5 = nn::os::GetTlsValue(*(undefined4 *)puVar1);
  if (lVar5 == 0) {
    lVar6 = 0;
  }
  else {
    lVar6 = 0;
    if (*(long *)(lVar5 + 0x80) != 0) {
      lVar6 = *(long *)(lVar5 + *(long *)(lVar5 + 0x80) * 8 + -8);
    }
  }
  *(undefined4 *)(plVar4 + 10) = 0;
  puVar1 = PTR_DAT_02716248;
  plVar4[0xb] = lVar9;
  plVar4[0xc] = lVar7;
  *plVar4 = (long)(puVar1 + 0x10);
  plVar4[1] = lVar6;
  plVar4[9] = (long)(puVar1 + 0x48);
  if (lVar7 != 0) {
    plVar8 = (long *)(lVar7 + 0x48);
    (**(code **)(*plVar8 + 0x10))(plVar8);
    (**(code **)(*plVar8 + 0x18))(plVar8);
  }
  plVar4[1] = (long)param_2;
  plVar4[2] = (long)plVar4;
  plVar4[3] = 0x68;
  plVar4[4] = 8;
  *(long *)(lVar3 + 0x80) = *(long *)(lVar3 + 0x80) + -1;
  return plVar4;
}


