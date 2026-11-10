/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00ed7140; name: FUN_00ed7140
 */


long FUN_00ed7140(long *param_1,undefined8 *param_2,undefined8 *param_3)

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
      if (0xf < *(ulong *)(lVar2 + 0x80)) goto LAB_00ed72ec;
      *(long *)(lVar2 + *(ulong *)(lVar2 + 0x80) * 8) = lVar9;
      *(long *)(lVar2 + 0x80) = *(long *)(lVar2 + 0x80) + 1;
      *(undefined8 *)(lVar6 + -0x28) = puVar8[-5];
      *(undefined8 *)(lVar6 + -0x30) = puVar8[-6];
      uVar3 = puVar8[-3];
      *(undefined8 *)(lVar6 + -8) = puVar8[-1];
      uVar4 = puVar8[-2];
      *(undefined8 *)(lVar6 + -0x20) = puVar8[-4];
      *(undefined8 *)(lVar6 + -0x18) = uVar3;
      *(undefined8 *)(lVar6 + -0x10) = uVar4;
      *(long *)(lVar2 + 0x80) = *(long *)(lVar2 + 0x80) + -1;
      puVar8 = puVar8 + -6;
      lVar6 = param_2[1] + -0x30;
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
LAB_00ed72ec:
                    /* WARNING: Subroutine does not return */
        abort();
      }
      *(long *)(lVar6 + *(ulong *)(lVar6 + 0x80) * 8) = lVar2;
      *(long *)(lVar6 + 0x80) = *(long *)(lVar6 + 0x80) + 1;
      puVar8[1] = param_3[1];
      *puVar8 = *param_3;
      uVar3 = param_3[3];
      puVar8[5] = param_3[5];
      uVar4 = param_3[4];
      puVar8[2] = param_3[2];
      puVar8[3] = uVar3;
      puVar8[4] = uVar4;
      *(long *)(lVar6 + 0x80) = *(long *)(lVar6 + 0x80) + -1;
      param_3 = param_3 + 6;
      puVar8 = (undefined8 *)(param_2[2] + 0x30);
      param_2[2] = puVar8;
    } while (puVar7 != param_3);
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


