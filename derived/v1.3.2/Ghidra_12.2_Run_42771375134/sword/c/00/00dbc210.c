/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00dbc210; name: FUN_00dbc210
 */


long FUN_00dbc210(long *param_1,undefined8 *param_2,long *param_3)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long *plVar4;
  long lVar5;
  long *plVar6;
  long lVar7;
  
  puVar1 = PTR_DAT_02710860;
  lVar3 = param_2[1];
  plVar4 = (long *)*param_1;
  lVar5 = lVar3;
  if (plVar4 != param_3) {
    plVar6 = param_3;
    do {
      lVar7 = param_1[3];
      lVar2 = nn::os::GetTlsValue(*(undefined4 *)puVar1);
      if (0xf < *(ulong *)(lVar2 + 0x80)) goto LAB_00dbc3a0;
      *(long *)(lVar2 + *(ulong *)(lVar2 + 0x80) * 8) = lVar7;
      *(long *)(lVar2 + 0x80) = *(long *)(lVar2 + 0x80) + 1;
      lVar7 = plVar6[-1];
      plVar6 = plVar6 + -1;
      *(long *)(lVar5 + -8) = lVar7;
      if (lVar7 != 0) {
        (**(code **)(*(long *)(lVar7 + 0x48) + 0x10))();
      }
      *(long *)(lVar2 + 0x80) = *(long *)(lVar2 + 0x80) + -1;
      lVar5 = param_2[1] + -8;
      param_2[1] = lVar5;
    } while (plVar4 != plVar6);
  }
  puVar1 = PTR_DAT_02710860;
  plVar4 = (long *)param_1[1];
  if (plVar4 != param_3) {
    plVar6 = (long *)param_2[2];
    do {
      lVar2 = param_1[3];
      lVar5 = nn::os::GetTlsValue(*(undefined4 *)puVar1);
      if (0xf < *(ulong *)(lVar5 + 0x80)) {
LAB_00dbc3a0:
                    /* WARNING: Subroutine does not return */
        abort();
      }
      *(long *)(lVar5 + *(ulong *)(lVar5 + 0x80) * 8) = lVar2;
      *(long *)(lVar5 + 0x80) = *(long *)(lVar5 + 0x80) + 1;
      lVar2 = *param_3;
      *plVar6 = lVar2;
      if (lVar2 != 0) {
        (**(code **)(*(long *)(lVar2 + 0x48) + 0x10))();
      }
      *(long *)(lVar5 + 0x80) = *(long *)(lVar5 + 0x80) + -1;
      param_3 = param_3 + 1;
      plVar6 = (long *)(param_2[2] + 8);
      param_2[2] = plVar6;
    } while (plVar4 != param_3);
    lVar5 = param_2[1];
  }
  lVar2 = *param_1;
  *param_1 = lVar5;
  param_2[1] = lVar2;
  lVar5 = param_1[1];
  param_1[1] = param_2[2];
  param_2[2] = lVar5;
  lVar5 = param_1[2];
  param_1[2] = param_2[3];
  param_2[3] = lVar5;
  *param_2 = param_2[1];
  return lVar3;
}


