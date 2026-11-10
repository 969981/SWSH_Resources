/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 007ddd80; name: FUN_007ddd80
 */


void FUN_007ddd80(undefined8 *param_1,undefined8 *param_2,undefined8 param_3,undefined8 *param_4,
                 long param_5,undefined8 *param_6)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  
  puVar1 = PTR_DAT_02710860;
  puVar8 = (undefined8 *)param_1[8];
  puVar6 = param_2;
  if (puVar8 != param_4 && puVar8 != (undefined8 *)0x0) {
    puVar7 = puVar8;
    do {
      uVar5 = *param_1;
      lVar2 = nn::os::GetTlsValue(*(undefined4 *)puVar1);
      if (0xf < *(ulong *)(lVar2 + 0x80)) goto LAB_007ddfdc;
      *(undefined8 *)(lVar2 + *(ulong *)(lVar2 + 0x80) * 8) = uVar5;
      *(long *)(lVar2 + 0x80) = *(long *)(lVar2 + 0x80) + 1;
      uVar5 = *puVar7;
      *puVar7 = 0;
      *puVar6 = uVar5;
      uVar4 = puVar7[3];
      uVar5 = puVar7[2];
      puVar6[1] = puVar7[1];
      puVar6[2] = uVar5;
      puVar6[3] = uVar4;
      puVar7 = puVar7 + 4;
      puVar6 = puVar6 + 4;
      *(long *)(lVar2 + 0x80) = *(long *)(lVar2 + 0x80) + -1;
    } while (puVar7 != param_4);
  }
  puVar1 = PTR_DAT_02710860;
  if (param_5 != 0) {
    puVar7 = puVar6;
    lVar2 = param_5;
    do {
      uVar5 = *param_1;
      lVar3 = nn::os::GetTlsValue(*(undefined4 *)puVar1);
      if (0xf < *(ulong *)(lVar3 + 0x80)) goto LAB_007ddfdc;
      *(undefined8 *)(lVar3 + *(ulong *)(lVar3 + 0x80) * 8) = uVar5;
      *(long *)(lVar3 + 0x80) = *(long *)(lVar3 + 0x80) + 1;
      uVar5 = *param_6;
      *param_6 = 0;
      *puVar7 = uVar5;
      uVar4 = param_6[3];
      uVar5 = param_6[2];
      puVar7[1] = param_6[1];
      puVar7[2] = uVar5;
      puVar7[3] = uVar4;
      lVar2 = lVar2 + -1;
      param_6 = param_6 + 4;
      puVar7 = puVar7 + 4;
      *(long *)(lVar3 + 0x80) = *(long *)(lVar3 + 0x80) + -1;
    } while (lVar2 != 0);
  }
  puVar1 = PTR_DAT_02710860;
  puVar6 = puVar6 + param_5 * 4;
  if (puVar8 != (undefined8 *)0x0) {
    lVar2 = param_1[9];
    if (puVar8 + lVar2 * 4 != param_4) {
      do {
        uVar5 = *param_1;
        lVar3 = nn::os::GetTlsValue(*(undefined4 *)puVar1);
        if (0xf < *(ulong *)(lVar3 + 0x80)) {
LAB_007ddfdc:
                    /* WARNING: Subroutine does not return */
          abort();
        }
        *(undefined8 *)(lVar3 + *(ulong *)(lVar3 + 0x80) * 8) = uVar5;
        *(long *)(lVar3 + 0x80) = *(long *)(lVar3 + 0x80) + 1;
        uVar5 = *param_4;
        *param_4 = 0;
        *puVar6 = uVar5;
        uVar4 = param_4[3];
        uVar5 = param_4[2];
        puVar6[1] = param_4[1];
        puVar6[2] = uVar5;
        puVar6[3] = uVar4;
        param_4 = param_4 + 4;
        puVar6 = puVar6 + 4;
        *(long *)(lVar3 + 0x80) = *(long *)(lVar3 + 0x80) + -1;
      } while (param_4 != puVar8 + lVar2 * 4);
      lVar2 = param_1[9];
    }
    while (lVar2 != 0) {
      puVar7 = (undefined8 *)*puVar8;
      lVar2 = lVar2 + -1;
      *puVar8 = 0;
      if (puVar7 != (undefined8 *)0x0) {
        (**(code **)*puVar7)(puVar7);
        (**(code **)(*(long *)puVar8[1] + 0x18))((long *)puVar8[1],puVar7,puVar8[2],puVar8[3]);
      }
      puVar8 = puVar8 + 4;
    }
    (**(code **)(*(long *)*param_1 + 0x18))((long *)*param_1,param_1[8],param_1[10] << 5,8);
  }
  param_1[8] = param_2;
  param_1[9] = (long)puVar6 - (long)param_2 >> 5;
  param_1[10] = param_3;
  return;
}


