/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 007572f0; name: FUN_007572f0
 */


void FUN_007572f0(long *param_1,undefined8 *param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long lVar6;
  undefined8 *puVar7;
  long lVar8;
  long lVar9;
  undefined8 *puVar10;
  undefined8 *puVar11;
  
  puVar7 = (undefined8 *)*param_1;
  if ((undefined8 *)param_1[1] == puVar7) {
    lVar9 = param_2[1];
  }
  else {
    lVar9 = param_2[1];
    puVar1 = PTR_DAT_02715af8 + 0x10;
    puVar2 = PTR_DAT_02715b00 + 0x10;
    puVar10 = (undefined8 *)param_1[1];
    do {
      lVar8 = param_1[3];
      lVar6 = nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_02710860);
      if (0xf < *(ulong *)(lVar6 + 0x80)) {
                    /* WARNING: Subroutine does not return */
        abort();
      }
      *(long *)(lVar6 + *(ulong *)(lVar6 + 0x80) * 8) = lVar8;
      puVar11 = puVar10 + -0x38;
      *(long *)(lVar6 + 0x80) = *(long *)(lVar6 + 0x80) + 1;
      *(undefined8 *)(lVar9 + -0x1c0) = *puVar11;
      *(undefined8 *)(lVar9 + -0x1b8) = puVar10[-0x37];
      *(undefined8 *)(lVar9 + -0x1b0) = puVar10[-0x36];
      lVar8 = puVar10[-0x35];
      *(long *)(lVar9 + -0x1a8) = lVar8;
      if (lVar8 != 0) {
        (**(code **)(*(long *)(lVar8 + 0x48) + 0x10))();
      }
      *(undefined8 *)(lVar9 + -0x1a0) = puVar10[-0x34];
      *(undefined8 *)(lVar9 + -0x198) = puVar10[-0x33];
      *(undefined8 *)(lVar9 + -400) = puVar10[-0x32];
      lVar8 = puVar10[-0x31];
      *(long *)(lVar9 + -0x188) = lVar8;
      if (lVar8 != 0) {
        (**(code **)(*(long *)(lVar8 + 0x48) + 0x10))();
      }
      *(undefined8 *)(lVar9 + -0x178) = puVar10[-0x2f];
      *(undefined8 *)(lVar9 + -0x180) = puVar10[-0x30];
      *(undefined8 *)(lVar9 + -0x168) = puVar10[-0x2d];
      *(undefined8 *)(lVar9 + -0x170) = puVar10[-0x2e];
      *(undefined8 *)(lVar9 + -0x158) = puVar10[-0x2b];
      *(undefined8 *)(lVar9 + -0x160) = puVar10[-0x2c];
      *(undefined8 *)(lVar9 + -0x148) = puVar10[-0x29];
      *(undefined8 *)(lVar9 + -0x150) = puVar10[-0x2a];
      FUN_00754a00(lVar9 + -0x140,puVar10 + -0x28);
      *(long *)(lVar9 + -0x110) = (long)puVar1;
      lVar8 = puVar10[-0x21];
      *(long *)(lVar9 + -0x108) = lVar8;
      if (lVar8 != 0) {
        (**(code **)(*(long *)(lVar8 + 0x48) + 0x10))();
      }
      *(undefined8 *)(lVar9 + -0x100) = 0;
      *(undefined8 *)(lVar9 + -0xf0) = 0;
      *(undefined8 *)(lVar9 + -0xe8) = 0;
      *(undefined8 *)(lVar9 + -0xf8) = 0;
      if ((code *)puVar10[-0x1e] != (code *)0x0) {
        (*(code *)puVar10[-0x1e])(puVar10 + -0x1c,lVar9 + -0xe0);
        uVar3 = puVar10[-0x20];
        uVar4 = puVar10[-0x1f];
        uVar5 = puVar10[-0x1d];
        *(undefined8 *)(lVar9 + -0xf0) = puVar10[-0x1e];
        *(undefined8 *)(lVar9 + -0xe8) = uVar5;
        *(undefined8 *)(lVar9 + -0x100) = uVar3;
        *(undefined8 *)(lVar9 + -0xf8) = uVar4;
      }
      *(undefined8 *)(lVar9 + -0x80) = 0;
      *(undefined8 *)(lVar9 + -0x70) = 0;
      *(undefined8 *)(lVar9 + -0x68) = 0;
      *(undefined8 *)(lVar9 + -0x78) = 0;
      if ((code *)puVar10[-0xe] != (code *)0x0) {
        (*(code *)puVar10[-0xe])(puVar10 + -0xc,lVar9 + -0x60);
        uVar3 = puVar10[-0x10];
        uVar4 = puVar10[-0xf];
        uVar5 = puVar10[-0xd];
        *(undefined8 *)(lVar9 + -0x70) = puVar10[-0xe];
        *(undefined8 *)(lVar9 + -0x68) = uVar5;
        *(undefined8 *)(lVar9 + -0x80) = uVar3;
        *(undefined8 *)(lVar9 + -0x78) = uVar4;
      }
      *(long *)(lVar9 + -0x110) = (long)puVar2;
      *(long *)(lVar6 + 0x80) = *(long *)(lVar6 + 0x80) + -1;
      lVar9 = param_2[1] + -0x1c0;
      param_2[1] = lVar9;
      puVar10 = puVar11;
    } while (puVar7 != puVar11);
    puVar7 = (undefined8 *)*param_1;
  }
  *param_1 = lVar9;
  param_2[1] = puVar7;
  lVar9 = param_1[1];
  param_1[1] = param_2[2];
  param_2[2] = lVar9;
  lVar9 = param_1[2];
  param_1[2] = param_2[3];
  param_2[3] = lVar9;
  *param_2 = param_2[1];
  return;
}


