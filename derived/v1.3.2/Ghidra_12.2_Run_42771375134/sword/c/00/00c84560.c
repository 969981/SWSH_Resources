/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00c84560; name: FUN_00c84560
 */


void FUN_00c84560(undefined8 *param_1,long *param_2,undefined8 param_3,long *param_4,long param_5,
                 long *param_6)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  long *plVar7;
  long *plVar8;
  long *plVar9;
  
  puVar1 = PTR_DAT_02710860;
  plVar8 = (long *)param_1[8];
  plVar7 = param_2;
  if (plVar8 != param_4 && plVar8 != (long *)0x0) {
    plVar9 = plVar8;
    do {
      uVar6 = *param_1;
      lVar2 = nn::os::GetTlsValue(*(undefined4 *)puVar1);
      if (0xf < *(ulong *)(lVar2 + 0x80)) goto LAB_00c847b4;
      *(undefined8 *)(lVar2 + *(ulong *)(lVar2 + 0x80) * 8) = uVar6;
      *(long *)(lVar2 + 0x80) = *(long *)(lVar2 + 0x80) + 1;
      lVar3 = *plVar9;
      *plVar9 = 0;
      *plVar7 = lVar3;
      lVar4 = plVar9[3];
      lVar3 = plVar9[2];
      plVar7[1] = plVar9[1];
      plVar7[2] = lVar3;
      plVar7[3] = lVar4;
      plVar9 = plVar9 + 4;
      plVar7 = plVar7 + 4;
      *(long *)(lVar2 + 0x80) = *(long *)(lVar2 + 0x80) + -1;
    } while (plVar9 != param_4);
  }
  puVar1 = PTR_DAT_02710860;
  if (param_5 != 0) {
    plVar9 = plVar7;
    lVar2 = param_5;
    do {
      uVar6 = *param_1;
      lVar3 = nn::os::GetTlsValue(*(undefined4 *)puVar1);
      if (0xf < *(ulong *)(lVar3 + 0x80)) goto LAB_00c847b4;
      *(undefined8 *)(lVar3 + *(ulong *)(lVar3 + 0x80) * 8) = uVar6;
      *(long *)(lVar3 + 0x80) = *(long *)(lVar3 + 0x80) + 1;
      lVar4 = *param_6;
      *param_6 = 0;
      *plVar9 = lVar4;
      lVar5 = param_6[3];
      lVar4 = param_6[2];
      plVar9[1] = param_6[1];
      plVar9[2] = lVar4;
      plVar9[3] = lVar5;
      lVar2 = lVar2 + -1;
      param_6 = param_6 + 4;
      plVar9 = plVar9 + 4;
      *(long *)(lVar3 + 0x80) = *(long *)(lVar3 + 0x80) + -1;
    } while (lVar2 != 0);
  }
  puVar1 = PTR_DAT_02710860;
  plVar7 = plVar7 + param_5 * 4;
  if (plVar8 != (long *)0x0) {
    lVar2 = param_1[9];
    if (plVar8 + lVar2 * 4 != param_4) {
      do {
        uVar6 = *param_1;
        lVar3 = nn::os::GetTlsValue(*(undefined4 *)puVar1);
        if (0xf < *(ulong *)(lVar3 + 0x80)) {
LAB_00c847b4:
                    /* WARNING: Subroutine does not return */
          abort();
        }
        *(undefined8 *)(lVar3 + *(ulong *)(lVar3 + 0x80) * 8) = uVar6;
        *(long *)(lVar3 + 0x80) = *(long *)(lVar3 + 0x80) + 1;
        lVar4 = *param_4;
        *param_4 = 0;
        *plVar7 = lVar4;
        lVar5 = param_4[3];
        lVar4 = param_4[2];
        plVar7[1] = param_4[1];
        plVar7[2] = lVar4;
        plVar7[3] = lVar5;
        param_4 = param_4 + 4;
        plVar7 = plVar7 + 4;
        *(long *)(lVar3 + 0x80) = *(long *)(lVar3 + 0x80) + -1;
      } while (param_4 != plVar8 + lVar2 * 4);
      lVar2 = param_1[9];
    }
    while (lVar2 != 0) {
      lVar3 = *plVar8;
      lVar2 = lVar2 + -1;
      *plVar8 = 0;
      if (lVar3 != 0) {
        FUN_00c84b40(lVar3);
        (**(code **)(*(long *)plVar8[1] + 0x18))((long *)plVar8[1],lVar3,plVar8[2],plVar8[3]);
      }
      plVar8 = plVar8 + 4;
    }
    (**(code **)(*(long *)*param_1 + 0x18))((long *)*param_1,param_1[8],param_1[10] << 5,8);
  }
  param_1[8] = param_2;
  param_1[9] = (long)plVar7 - (long)param_2 >> 5;
  param_1[10] = param_3;
  return;
}


