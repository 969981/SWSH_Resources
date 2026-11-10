/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 007dbc10; name: FUN_007dbc10
 */


void FUN_007dbc10(undefined8 *param_1,long *param_2,undefined8 param_3,long *param_4,long param_5,
                 long *param_6)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  long *plVar6;
  long *plVar7;
  long *plVar8;
  
  puVar1 = PTR_DAT_02710860;
  plVar7 = (long *)param_1[8];
  plVar6 = param_2;
  if (plVar7 != param_4 && plVar7 != (long *)0x0) {
    plVar8 = plVar7;
    do {
      uVar5 = *param_1;
      lVar2 = nn::os::GetTlsValue(*(undefined4 *)puVar1);
      if (0xf < *(ulong *)(lVar2 + 0x80)) goto LAB_007dbe38;
      *(undefined8 *)(lVar2 + *(ulong *)(lVar2 + 0x80) * 8) = uVar5;
      *(long *)(lVar2 + 0x80) = *(long *)(lVar2 + 0x80) + 1;
      lVar3 = *plVar8;
      *plVar8 = 0;
      *plVar6 = lVar3;
      *(short *)(plVar6 + 1) = (short)plVar8[1];
      plVar8 = plVar8 + 2;
      plVar6 = plVar6 + 2;
      *(long *)(lVar2 + 0x80) = *(long *)(lVar2 + 0x80) + -1;
    } while (plVar8 != param_4);
  }
  puVar1 = PTR_DAT_02710860;
  if (param_5 != 0) {
    plVar8 = plVar6;
    lVar2 = param_5;
    do {
      uVar5 = *param_1;
      lVar3 = nn::os::GetTlsValue(*(undefined4 *)puVar1);
      if (0xf < *(ulong *)(lVar3 + 0x80)) goto LAB_007dbe38;
      *(undefined8 *)(lVar3 + *(ulong *)(lVar3 + 0x80) * 8) = uVar5;
      *(long *)(lVar3 + 0x80) = *(long *)(lVar3 + 0x80) + 1;
      lVar4 = *param_6;
      *param_6 = 0;
      *plVar8 = lVar4;
      *(short *)(plVar8 + 1) = (short)param_6[1];
      lVar2 = lVar2 + -1;
      param_6 = param_6 + 2;
      plVar8 = plVar8 + 2;
      *(long *)(lVar3 + 0x80) = *(long *)(lVar3 + 0x80) + -1;
    } while (lVar2 != 0);
  }
  puVar1 = PTR_DAT_02710860;
  plVar6 = plVar6 + param_5 * 2;
  if (plVar7 != (long *)0x0) {
    lVar2 = param_1[9];
    if (plVar7 + lVar2 * 2 != param_4) {
      do {
        uVar5 = *param_1;
        lVar3 = nn::os::GetTlsValue(*(undefined4 *)puVar1);
        if (0xf < *(ulong *)(lVar3 + 0x80)) {
LAB_007dbe38:
                    /* WARNING: Subroutine does not return */
          abort();
        }
        *(undefined8 *)(lVar3 + *(ulong *)(lVar3 + 0x80) * 8) = uVar5;
        *(long *)(lVar3 + 0x80) = *(long *)(lVar3 + 0x80) + 1;
        lVar4 = *param_4;
        *param_4 = 0;
        *plVar6 = lVar4;
        *(short *)(plVar6 + 1) = (short)param_4[1];
        param_4 = param_4 + 2;
        plVar6 = plVar6 + 2;
        *(long *)(lVar3 + 0x80) = *(long *)(lVar3 + 0x80) + -1;
      } while (param_4 != plVar7 + lVar2 * 2);
      lVar2 = param_1[9];
    }
    while (lVar2 != 0) {
      lVar2 = lVar2 + -1;
      if (*plVar7 != 0) {
        (**(code **)(*(long *)(*plVar7 + 0x48) + 0x18))();
        *plVar7 = 0;
      }
      plVar7 = plVar7 + 2;
    }
    (**(code **)(*(long *)*param_1 + 0x18))((long *)*param_1,param_1[8],param_1[10] << 4,8);
  }
  param_1[8] = param_2;
  param_1[9] = (long)plVar6 - (long)param_2 >> 4;
  param_1[10] = param_3;
  return;
}


