/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00c850b0; name: FUN_00c850b0
 */


void FUN_00c850b0(undefined8 *param_1,undefined8 *param_2,undefined8 param_3,undefined8 *param_4,
                 long param_5,undefined8 *param_6)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  long *plVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  
  puVar1 = PTR_DAT_02710860;
  puVar7 = (undefined8 *)param_1[8];
  puVar5 = param_2;
  if (puVar7 != param_4 && puVar7 != (undefined8 *)0x0) {
    puVar8 = puVar7;
    do {
      uVar4 = *param_1;
      lVar2 = nn::os::GetTlsValue(*(undefined4 *)puVar1);
      if (0xf < *(ulong *)(lVar2 + 0x80)) goto LAB_00c85324;
      *(undefined8 *)(lVar2 + *(ulong *)(lVar2 + 0x80) * 8) = uVar4;
      *(long *)(lVar2 + 0x80) = *(long *)(lVar2 + 0x80) + 1;
      uVar4 = puVar8[1];
      *puVar5 = *puVar8;
      puVar5[1] = uVar4;
      uVar4 = puVar8[2];
      puVar8[2] = 0;
      puVar5[2] = uVar4;
      uVar4 = puVar8[3];
      *(undefined4 *)(puVar5 + 4) = *(undefined4 *)(puVar8 + 4);
      puVar5[3] = uVar4;
      puVar8 = puVar8 + 5;
      puVar5 = puVar5 + 5;
      *(long *)(lVar2 + 0x80) = *(long *)(lVar2 + 0x80) + -1;
    } while (puVar8 != param_4);
  }
  puVar1 = PTR_DAT_02710860;
  if (param_5 != 0) {
    puVar8 = puVar5;
    lVar2 = param_5;
    do {
      uVar4 = *param_1;
      lVar3 = nn::os::GetTlsValue(*(undefined4 *)puVar1);
      if (0xf < *(ulong *)(lVar3 + 0x80)) goto LAB_00c85324;
      *(undefined8 *)(lVar3 + *(ulong *)(lVar3 + 0x80) * 8) = uVar4;
      *(long *)(lVar3 + 0x80) = *(long *)(lVar3 + 0x80) + 1;
      lVar2 = lVar2 + -1;
      uVar4 = param_6[1];
      *puVar8 = *param_6;
      puVar8[1] = uVar4;
      uVar4 = param_6[2];
      param_6[2] = 0;
      puVar8[2] = uVar4;
      uVar4 = param_6[3];
      *(undefined4 *)(puVar8 + 4) = *(undefined4 *)(param_6 + 4);
      puVar8[3] = uVar4;
      param_6 = param_6 + 5;
      puVar8 = puVar8 + 5;
      *(long *)(lVar3 + 0x80) = *(long *)(lVar3 + 0x80) + -1;
    } while (lVar2 != 0);
  }
  puVar1 = PTR_DAT_02710860;
  puVar5 = puVar5 + param_5 * 5;
  if (puVar7 != (undefined8 *)0x0) {
    lVar2 = param_1[9];
    if (puVar7 + lVar2 * 5 != param_4) {
      do {
        uVar4 = *param_1;
        lVar3 = nn::os::GetTlsValue(*(undefined4 *)puVar1);
        if (0xf < *(ulong *)(lVar3 + 0x80)) {
LAB_00c85324:
                    /* WARNING: Subroutine does not return */
          abort();
        }
        *(undefined8 *)(lVar3 + *(ulong *)(lVar3 + 0x80) * 8) = uVar4;
        *(long *)(lVar3 + 0x80) = *(long *)(lVar3 + 0x80) + 1;
        uVar4 = param_4[1];
        *puVar5 = *param_4;
        puVar5[1] = uVar4;
        uVar4 = param_4[2];
        param_4[2] = 0;
        puVar5[2] = uVar4;
        uVar4 = param_4[3];
        *(undefined4 *)(puVar5 + 4) = *(undefined4 *)(param_4 + 4);
        puVar5[3] = uVar4;
        param_4 = param_4 + 5;
        puVar5 = puVar5 + 5;
        *(long *)(lVar3 + 0x80) = *(long *)(lVar3 + 0x80) + -1;
      } while (param_4 != puVar7 + lVar2 * 5);
      lVar2 = param_1[9];
    }
    if (lVar2 != 0) {
      plVar6 = puVar7 + 2;
      do {
        lVar2 = lVar2 + -1;
        if (*plVar6 != 0) {
          (**(code **)(*(long *)(*plVar6 + 0x48) + 0x18))();
          *plVar6 = 0;
        }
        plVar6 = plVar6 + 5;
      } while (lVar2 != 0);
    }
    (**(code **)(*(long *)*param_1 + 0x18))((long *)*param_1,param_1[8],param_1[10] * 0x28,8);
  }
  param_1[8] = param_2;
  param_1[9] = ((long)puVar5 - (long)param_2 >> 3) * -0x3333333333333333;
  param_1[10] = param_3;
  return;
}


