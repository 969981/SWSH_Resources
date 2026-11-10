/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0069e6b0; name: FUN_0069e6b0
 */


void FUN_0069e6b0(long *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined *puVar4;
  long lVar5;
  undefined8 *puVar6;
  long lVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  long lVar10;
  
  puVar4 = PTR_DAT_02710860;
  puVar6 = (undefined8 *)*param_1;
  if ((undefined8 *)param_1[1] == puVar6) {
    lVar7 = param_2[1];
  }
  else {
    lVar7 = param_2[1];
    puVar8 = (undefined8 *)param_1[1];
    do {
      lVar10 = param_1[3];
      lVar5 = nn::os::GetTlsValue(*(undefined4 *)puVar4);
      if (0xf < *(ulong *)(lVar5 + 0x80)) {
                    /* WARNING: Subroutine does not return */
        abort();
      }
      *(long *)(lVar5 + *(ulong *)(lVar5 + 0x80) * 8) = lVar10;
      puVar9 = puVar8 + -0x24;
      *(long *)(lVar5 + 0x80) = *(long *)(lVar5 + 0x80) + 1;
      *(undefined8 *)(lVar7 + -0x120) = *puVar9;
      *(undefined8 *)(lVar7 + -0x118) = puVar8[-0x23];
      *(undefined8 *)(lVar7 + -0x110) = puVar8[-0x22];
      lVar10 = puVar8[-0x21];
      *(long *)(lVar7 + -0x108) = lVar10;
      if (lVar10 != 0) {
        (**(code **)(*(long *)(lVar10 + 0x48) + 0x10))();
      }
      *(undefined8 *)(lVar7 + -0x100) = 0;
      *(undefined8 *)(lVar7 + -0xf0) = 0;
      *(undefined8 *)(lVar7 + -0xe8) = 0;
      *(undefined8 *)(lVar7 + -0xf8) = 0;
      if ((code *)puVar8[-0x1e] != (code *)0x0) {
        (*(code *)puVar8[-0x1e])(puVar8 + -0x1c,lVar7 + -0xe0);
        uVar1 = puVar8[-0x20];
        uVar2 = puVar8[-0x1f];
        uVar3 = puVar8[-0x1d];
        *(undefined8 *)(lVar7 + -0xf0) = puVar8[-0x1e];
        *(undefined8 *)(lVar7 + -0xe8) = uVar3;
        *(undefined8 *)(lVar7 + -0x100) = uVar1;
        *(undefined8 *)(lVar7 + -0xf8) = uVar2;
      }
      *(undefined8 *)(lVar7 + -0x80) = 0;
      *(undefined8 *)(lVar7 + -0x70) = 0;
      *(undefined8 *)(lVar7 + -0x68) = 0;
      *(undefined8 *)(lVar7 + -0x78) = 0;
      if ((code *)puVar8[-0xe] != (code *)0x0) {
        (*(code *)puVar8[-0xe])(puVar8 + -0xc,lVar7 + -0x60);
        uVar1 = puVar8[-0x10];
        uVar2 = puVar8[-0xf];
        uVar3 = puVar8[-0xd];
        *(undefined8 *)(lVar7 + -0x70) = puVar8[-0xe];
        *(undefined8 *)(lVar7 + -0x68) = uVar3;
        *(undefined8 *)(lVar7 + -0x80) = uVar1;
        *(undefined8 *)(lVar7 + -0x78) = uVar2;
      }
      *(long *)(lVar5 + 0x80) = *(long *)(lVar5 + 0x80) + -1;
      lVar7 = param_2[1] + -0x120;
      param_2[1] = lVar7;
      puVar8 = puVar9;
    } while (puVar6 != puVar9);
    puVar6 = (undefined8 *)*param_1;
  }
  *param_1 = lVar7;
  param_2[1] = puVar6;
  lVar7 = param_1[1];
  param_1[1] = param_2[2];
  param_2[2] = lVar7;
  lVar7 = param_1[2];
  param_1[2] = param_2[3];
  param_2[3] = lVar7;
  *param_2 = param_2[1];
  return;
}


