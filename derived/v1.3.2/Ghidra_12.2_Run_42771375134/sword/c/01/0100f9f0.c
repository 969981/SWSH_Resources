/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0100f9f0; name: FUN_0100f9f0
 */


long FUN_0100f9f0(long *param_1,undefined8 *param_2,undefined8 *param_3)

{
  undefined *puVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  long lVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  long lVar9;
  
  puVar1 = PTR_DAT_02710860;
  lVar5 = param_2[1];
  puVar7 = (undefined8 *)*param_1;
  lVar6 = lVar5;
  if (puVar7 != param_3) {
    puVar8 = param_3;
    do {
      lVar9 = param_1[3];
      lVar2 = nn::os::GetTlsValue(*(undefined4 *)puVar1);
      if (0xf < *(ulong *)(lVar2 + 0x80)) goto LAB_0100fb7c;
      *(long *)(lVar2 + *(ulong *)(lVar2 + 0x80) * 8) = lVar9;
      *(long *)(lVar2 + 0x80) = *(long *)(lVar2 + 0x80) + 1;
      uVar3 = puVar8[-4];
      puVar8[-4] = 0;
      *(undefined8 *)(lVar6 + -0x20) = uVar3;
      uVar4 = puVar8[-1];
      uVar3 = puVar8[-2];
      *(undefined8 *)(lVar6 + -0x18) = puVar8[-3];
      *(undefined8 *)(lVar6 + -0x10) = uVar3;
      *(undefined8 *)(lVar6 + -8) = uVar4;
      *(long *)(lVar2 + 0x80) = *(long *)(lVar2 + 0x80) + -1;
      puVar8 = puVar8 + -4;
      lVar6 = param_2[1] + -0x20;
      param_2[1] = lVar6;
    } while (puVar7 != puVar8);
  }
  puVar1 = PTR_DAT_02710860;
  puVar7 = (undefined8 *)param_1[1];
  if (puVar7 != param_3) {
    puVar8 = (undefined8 *)param_2[2];
    do {
      lVar2 = param_1[3];
      lVar6 = nn::os::GetTlsValue(*(undefined4 *)puVar1);
      if (0xf < *(ulong *)(lVar6 + 0x80)) {
LAB_0100fb7c:
                    /* WARNING: Subroutine does not return */
        abort();
      }
      *(long *)(lVar6 + *(ulong *)(lVar6 + 0x80) * 8) = lVar2;
      *(long *)(lVar6 + 0x80) = *(long *)(lVar6 + 0x80) + 1;
      uVar3 = *param_3;
      *param_3 = 0;
      *puVar8 = uVar3;
      uVar4 = param_3[3];
      uVar3 = param_3[2];
      puVar8[1] = param_3[1];
      puVar8[2] = uVar3;
      puVar8[3] = uVar4;
      *(long *)(lVar6 + 0x80) = *(long *)(lVar6 + 0x80) + -1;
      param_3 = param_3 + 4;
      puVar8 = (undefined8 *)(param_2[2] + 0x20);
      param_2[2] = puVar8;
    } while (param_3 != puVar7);
    lVar6 = param_2[1];
  }
  lVar2 = *param_1;
  *param_1 = lVar6;
  param_2[1] = lVar2;
  lVar6 = param_1[1];
  param_1[1] = param_2[2];
  param_2[2] = lVar6;
  lVar6 = param_1[2];
  param_1[2] = param_2[3];
  param_2[3] = lVar6;
  *param_2 = param_2[1];
  return lVar5;
}


