/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 006d4520; name: FUN_006d4520
 */


long FUN_006d4520(long *param_1,undefined8 *param_2,undefined8 *param_3)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  undefined8 *puVar4;
  long lVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  long lVar8;
  
  puVar1 = PTR_DAT_02710860;
  lVar3 = param_2[1];
  puVar6 = (undefined8 *)*param_1;
  lVar5 = lVar3;
  if (puVar6 != param_3) {
    puVar7 = param_3;
    do {
      lVar8 = param_1[3];
      lVar2 = nn::os::GetTlsValue(*(undefined4 *)puVar1);
      if (0xf < *(ulong *)(lVar2 + 0x80)) goto LAB_006d4680;
      *(long *)(lVar2 + *(ulong *)(lVar2 + 0x80) * 8) = lVar8;
      *(long *)(lVar2 + 0x80) = *(long *)(lVar2 + 0x80) + 1;
      *(undefined8 *)(lVar5 + -8) = puVar7[-1];
      *(long *)(lVar2 + 0x80) = *(long *)(lVar2 + 0x80) + -1;
      puVar7 = puVar7 + -1;
      lVar5 = param_2[1] + -8;
      param_2[1] = lVar5;
    } while (puVar6 != puVar7);
  }
  puVar1 = PTR_DAT_02710860;
  puVar6 = (undefined8 *)param_1[1];
  if (puVar6 != param_3) {
    puVar7 = (undefined8 *)param_2[2];
    do {
      lVar2 = param_1[3];
      lVar5 = nn::os::GetTlsValue(*(undefined4 *)puVar1);
      if (0xf < *(ulong *)(lVar5 + 0x80)) {
LAB_006d4680:
                    /* WARNING: Subroutine does not return */
        abort();
      }
      *(long *)(lVar5 + *(ulong *)(lVar5 + 0x80) * 8) = lVar2;
      *(long *)(lVar5 + 0x80) = *(long *)(lVar5 + 0x80) + 1;
      puVar4 = param_3 + 1;
      *puVar7 = *param_3;
      *(long *)(lVar5 + 0x80) = *(long *)(lVar5 + 0x80) + -1;
      puVar7 = (undefined8 *)(param_2[2] + 8);
      param_2[2] = puVar7;
      param_3 = puVar4;
    } while (puVar6 != puVar4);
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


