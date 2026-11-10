/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 006d2880; name: FUN_006d2880
 */


long FUN_006d2880(long *param_1,undefined8 *param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  undefined *puVar2;
  long lVar3;
  undefined8 uVar4;
  code *pcVar5;
  undefined8 uVar6;
  long lVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  long lVar10;
  long lVar11;
  undefined8 *puVar12;
  
  puVar9 = (undefined8 *)*param_1;
  lVar10 = param_2[1];
  lVar11 = lVar10;
  if (puVar9 != param_3) {
    puVar12 = param_3;
    do {
      lVar7 = param_1[3];
      lVar3 = nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_02710860);
      if (0xf < *(ulong *)(lVar3 + 0x80)) goto LAB_006d2a84;
      *(long *)(lVar3 + *(ulong *)(lVar3 + 0x80) * 8) = lVar7;
      puVar8 = puVar12 + -0x10;
      *(long *)(lVar3 + 0x80) = *(long *)(lVar3 + 0x80) + 1;
      *(undefined8 *)(lVar11 + -0x80) = 0;
      *(undefined8 *)(lVar11 + -0x70) = 0;
      *(undefined8 *)(lVar11 + -0x68) = 0;
      *(undefined8 *)(lVar11 + -0x78) = 0;
      if ((code *)puVar12[-0xd] != (code *)0x0) {
        (*(code *)puVar12[-0xd])(puVar12 + -0xc,lVar11 + -0x60);
        uVar4 = puVar12[-0x10];
        uVar6 = puVar12[-0xd];
        uVar1 = puVar12[-0xf];
        *(undefined8 *)(lVar11 + -0x70) = puVar12[-0xe];
        *(undefined8 *)(lVar11 + -0x68) = uVar6;
        *(undefined8 *)(lVar11 + -0x80) = uVar4;
        *(undefined8 *)(lVar11 + -0x78) = uVar1;
        pcVar5 = (code *)puVar12[-0xf];
        if (pcVar5 != (code *)0x0) {
          puVar12[-0xe] = 0;
          puVar12[-0xd] = 0;
          puVar12[-0x10] = 0;
          puVar12[-0xf] = 0;
          (*pcVar5)(puVar12 + -0xc);
        }
      }
      *(long *)(lVar3 + 0x80) = *(long *)(lVar3 + 0x80) + -1;
      lVar11 = param_2[1] + -0x80;
      param_2[1] = lVar11;
      puVar12 = puVar8;
    } while (puVar9 != puVar8);
  }
  puVar2 = PTR_DAT_02710860;
  puVar9 = (undefined8 *)param_1[1];
  if (puVar9 != param_3) {
    puVar12 = (undefined8 *)param_2[2];
    do {
      lVar3 = param_1[3];
      lVar11 = nn::os::GetTlsValue(*(undefined4 *)puVar2);
      if (0xf < *(ulong *)(lVar11 + 0x80)) {
LAB_006d2a84:
                    /* WARNING: Subroutine does not return */
        abort();
      }
      *(long *)(lVar11 + *(ulong *)(lVar11 + 0x80) * 8) = lVar3;
      *(long *)(lVar11 + 0x80) = *(long *)(lVar11 + 0x80) + 1;
      puVar12[2] = 0;
      puVar12[3] = 0;
      *puVar12 = 0;
      puVar12[1] = 0;
      if ((code *)param_3[3] != (code *)0x0) {
        (*(code *)param_3[3])(param_3 + 4,puVar12 + 4);
        uVar1 = *param_3;
        uVar4 = param_3[1];
        uVar6 = param_3[3];
        puVar12[2] = param_3[2];
        puVar12[3] = uVar6;
        *puVar12 = uVar1;
        puVar12[1] = uVar4;
        pcVar5 = (code *)param_3[1];
        if (pcVar5 != (code *)0x0) {
          param_3[2] = 0;
          param_3[3] = 0;
          *param_3 = 0;
          param_3[1] = 0;
          (*pcVar5)(param_3 + 4);
        }
      }
      *(long *)(lVar11 + 0x80) = *(long *)(lVar11 + 0x80) + -1;
      param_3 = param_3 + 0x10;
      puVar12 = (undefined8 *)(param_2[2] + 0x80);
      param_2[2] = puVar12;
    } while (puVar9 != param_3);
    lVar11 = param_2[1];
  }
  lVar3 = *param_1;
  *param_1 = lVar11;
  param_2[1] = lVar3;
  lVar11 = param_1[1];
  param_1[1] = param_2[2];
  param_2[2] = lVar11;
  lVar11 = param_1[2];
  param_1[2] = param_2[3];
  param_2[3] = lVar11;
  *param_2 = param_2[1];
  return lVar10;
}


