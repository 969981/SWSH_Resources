/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 011f4070; name: FUN_011f4070
 */


long FUN_011f4070(long *param_1,undefined8 *param_2,undefined8 *param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined *puVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  long lVar11;
  
  puVar5 = PTR_DAT_02710860;
  lVar7 = param_2[1];
  puVar9 = (undefined8 *)*param_1;
  lVar8 = lVar7;
  if (puVar9 != param_3) {
    puVar10 = param_3;
    do {
      lVar11 = param_1[3];
      lVar6 = nn::os::GetTlsValue(*(undefined4 *)puVar5);
      if (0xf < *(ulong *)(lVar6 + 0x80)) goto LAB_011f4244;
      *(long *)(lVar6 + *(ulong *)(lVar6 + 0x80) * 8) = lVar11;
      *(long *)(lVar6 + 0x80) = *(long *)(lVar6 + 0x80) + 1;
      uVar2 = puVar10[-0x10];
      uVar3 = puVar10[-0xf];
      uVar4 = puVar10[-0xd];
      *(undefined8 *)(lVar8 + -0x70) = puVar10[-0xe];
      *(undefined8 *)(lVar8 + -0x68) = uVar4;
      *(undefined8 *)(lVar8 + -0x80) = uVar2;
      *(undefined8 *)(lVar8 + -0x78) = uVar3;
      uVar2 = puVar10[-0xc];
      uVar3 = puVar10[-0xb];
      uVar4 = puVar10[-9];
      *(undefined8 *)(lVar8 + -0x50) = puVar10[-10];
      *(undefined8 *)(lVar8 + -0x48) = uVar4;
      *(undefined8 *)(lVar8 + -0x60) = uVar2;
      *(undefined8 *)(lVar8 + -0x58) = uVar3;
      uVar2 = puVar10[-8];
      uVar3 = puVar10[-7];
      uVar4 = puVar10[-5];
      *(undefined8 *)(lVar8 + -0x30) = puVar10[-6];
      *(undefined8 *)(lVar8 + -0x28) = uVar4;
      *(undefined8 *)(lVar8 + -0x40) = uVar2;
      *(undefined8 *)(lVar8 + -0x38) = uVar3;
      uVar2 = puVar10[-4];
      uVar3 = puVar10[-3];
      puVar1 = puVar10 + -2;
      uVar4 = puVar10[-1];
      puVar10 = puVar10 + -0x10;
      *(undefined8 *)(lVar8 + -0x10) = *puVar1;
      *(undefined8 *)(lVar8 + -8) = uVar4;
      *(undefined8 *)(lVar8 + -0x20) = uVar2;
      *(undefined8 *)(lVar8 + -0x18) = uVar3;
      *(long *)(lVar6 + 0x80) = *(long *)(lVar6 + 0x80) + -1;
      lVar8 = param_2[1] + -0x80;
      param_2[1] = lVar8;
    } while (puVar9 != puVar10);
  }
  puVar5 = PTR_DAT_02710860;
  puVar9 = (undefined8 *)param_1[1];
  if (puVar9 != param_3) {
    puVar10 = (undefined8 *)param_2[2];
    do {
      lVar6 = param_1[3];
      lVar8 = nn::os::GetTlsValue(*(undefined4 *)puVar5);
      if (0xf < *(ulong *)(lVar8 + 0x80)) {
LAB_011f4244:
                    /* WARNING: Subroutine does not return */
        abort();
      }
      *(long *)(lVar8 + *(ulong *)(lVar8 + 0x80) * 8) = lVar6;
      *(long *)(lVar8 + 0x80) = *(long *)(lVar8 + 0x80) + 1;
      uVar2 = *param_3;
      uVar3 = param_3[1];
      uVar4 = param_3[3];
      puVar10[2] = param_3[2];
      puVar10[3] = uVar4;
      *puVar10 = uVar2;
      puVar10[1] = uVar3;
      uVar2 = param_3[4];
      uVar3 = param_3[5];
      uVar4 = param_3[7];
      puVar10[6] = param_3[6];
      puVar10[7] = uVar4;
      puVar10[4] = uVar2;
      puVar10[5] = uVar3;
      uVar2 = param_3[8];
      uVar3 = param_3[9];
      uVar4 = param_3[0xb];
      puVar10[10] = param_3[10];
      puVar10[0xb] = uVar4;
      puVar10[8] = uVar2;
      puVar10[9] = uVar3;
      uVar2 = param_3[0xc];
      uVar3 = param_3[0xd];
      puVar1 = param_3 + 0xe;
      uVar4 = param_3[0xf];
      param_3 = param_3 + 0x10;
      puVar10[0xe] = *puVar1;
      puVar10[0xf] = uVar4;
      puVar10[0xc] = uVar2;
      puVar10[0xd] = uVar3;
      *(long *)(lVar8 + 0x80) = *(long *)(lVar8 + 0x80) + -1;
      puVar10 = (undefined8 *)(param_2[2] + 0x80);
      param_2[2] = puVar10;
    } while (puVar9 != param_3);
    lVar8 = param_2[1];
  }
  lVar6 = *param_1;
  *param_1 = lVar8;
  param_2[1] = lVar6;
  lVar8 = param_1[1];
  param_1[1] = param_2[2];
  param_2[2] = lVar8;
  lVar8 = param_1[2];
  param_1[2] = param_2[3];
  param_2[3] = lVar8;
  *param_2 = param_2[1];
  return lVar7;
}


