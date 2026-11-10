/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 009b6980; name: FUN_009b6980
 */


void FUN_009b6980(undefined8 *param_1,undefined8 *param_2,undefined8 param_3,undefined8 *param_4,
                 long param_5,undefined8 *param_6)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  code *pcVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  
  puVar1 = PTR_DAT_02710860;
  puVar9 = (undefined8 *)param_1[8];
  puVar7 = param_2;
  if (puVar9 != param_4 && puVar9 != (undefined8 *)0x0) {
    puVar8 = puVar9;
    do {
      uVar6 = *param_1;
      lVar2 = nn::os::GetTlsValue(*(undefined4 *)puVar1);
      if (0xf < *(ulong *)(lVar2 + 0x80)) goto LAB_009b6be4;
      *(undefined8 *)(lVar2 + *(ulong *)(lVar2 + 0x80) * 8) = uVar6;
      *(long *)(lVar2 + 0x80) = *(long *)(lVar2 + 0x80) + 1;
      uVar6 = *puVar8;
      *puVar8 = 0;
      *puVar7 = uVar6;
      uVar5 = puVar8[3];
      uVar6 = puVar8[2];
      puVar7[1] = puVar8[1];
      puVar7[2] = uVar6;
      puVar7[3] = uVar5;
      puVar8 = puVar8 + 4;
      puVar7 = puVar7 + 4;
      *(long *)(lVar2 + 0x80) = *(long *)(lVar2 + 0x80) + -1;
    } while (puVar8 != param_4);
  }
  puVar1 = PTR_DAT_02710860;
  if (param_5 != 0) {
    puVar8 = puVar7;
    lVar2 = param_5;
    do {
      uVar6 = *param_1;
      lVar3 = nn::os::GetTlsValue(*(undefined4 *)puVar1);
      if (0xf < *(ulong *)(lVar3 + 0x80)) goto LAB_009b6be4;
      *(undefined8 *)(lVar3 + *(ulong *)(lVar3 + 0x80) * 8) = uVar6;
      *(long *)(lVar3 + 0x80) = *(long *)(lVar3 + 0x80) + 1;
      uVar6 = *param_6;
      *param_6 = 0;
      *puVar8 = uVar6;
      uVar5 = param_6[3];
      uVar6 = param_6[2];
      puVar8[1] = param_6[1];
      puVar8[2] = uVar6;
      puVar8[3] = uVar5;
      lVar2 = lVar2 + -1;
      param_6 = param_6 + 4;
      puVar8 = puVar8 + 4;
      *(long *)(lVar3 + 0x80) = *(long *)(lVar3 + 0x80) + -1;
    } while (lVar2 != 0);
  }
  puVar1 = PTR_DAT_02710860;
  puVar7 = puVar7 + param_5 * 4;
  if (puVar9 != (undefined8 *)0x0) {
    lVar2 = param_1[9];
    if (puVar9 + lVar2 * 4 != param_4) {
      do {
        uVar6 = *param_1;
        lVar3 = nn::os::GetTlsValue(*(undefined4 *)puVar1);
        if (0xf < *(ulong *)(lVar3 + 0x80)) {
LAB_009b6be4:
                    /* WARNING: Subroutine does not return */
          abort();
        }
        *(undefined8 *)(lVar3 + *(ulong *)(lVar3 + 0x80) * 8) = uVar6;
        *(long *)(lVar3 + 0x80) = *(long *)(lVar3 + 0x80) + 1;
        uVar6 = *param_4;
        *param_4 = 0;
        *puVar7 = uVar6;
        uVar5 = param_4[3];
        uVar6 = param_4[2];
        puVar7[1] = param_4[1];
        puVar7[2] = uVar6;
        puVar7[3] = uVar5;
        param_4 = param_4 + 4;
        puVar7 = puVar7 + 4;
        *(long *)(lVar3 + 0x80) = *(long *)(lVar3 + 0x80) + -1;
      } while (param_4 != puVar9 + lVar2 * 4);
      lVar2 = param_1[9];
    }
    while (lVar2 != 0) {
      puVar8 = (undefined8 *)*puVar9;
      lVar2 = lVar2 + -1;
      *puVar9 = 0;
      if (puVar8 != (undefined8 *)0x0) {
        pcVar4 = (code *)puVar8[1];
        if (pcVar4 != (code *)0x0) {
          puVar8[2] = 0;
          puVar8[3] = 0;
          *puVar8 = 0;
          puVar8[1] = 0;
          (*pcVar4)(puVar8 + 4);
        }
        (**(code **)(*(long *)puVar9[1] + 0x18))((long *)puVar9[1],puVar8,puVar9[2],puVar9[3]);
      }
      puVar9 = puVar9 + 4;
    }
    (**(code **)(*(long *)*param_1 + 0x18))((long *)*param_1,param_1[8],param_1[10] << 5,8);
  }
  param_1[8] = param_2;
  param_1[9] = (long)puVar7 - (long)param_2 >> 5;
  param_1[10] = param_3;
  return;
}


