/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00dd0c80; name: FUN_00dd0c80
 */


void FUN_00dd0c80(long *param_1,undefined8 *param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  code *pcVar6;
  long lVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  
  lVar7 = *param_1;
  lVar3 = param_1[1];
  if (lVar3 == lVar7) {
    lVar11 = param_2[1];
  }
  else {
    lVar11 = param_2[1];
    puVar1 = PTR_DAT_0271e948 + 0x10;
    lVar12 = 0;
    puVar2 = PTR_DAT_0271e940 + 0x10;
    do {
      lVar13 = param_1[3];
      lVar4 = nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_02710860);
      if (0xf < *(ulong *)(lVar4 + 0x80)) {
                    /* WARNING: Subroutine does not return */
        abort();
      }
      *(long *)(lVar4 + *(ulong *)(lVar4 + 0x80) * 8) = lVar13;
      lVar13 = lVar3 + lVar12;
      *(long *)(lVar4 + 0x80) = *(long *)(lVar4 + 0x80) + 1;
      uVar9 = *(undefined8 *)(lVar13 + -0x228);
      *(undefined8 *)(lVar11 + -0x218) = *(undefined8 *)(lVar13 + -0x218);
      *(undefined8 *)(lVar11 + -0x228) = uVar9;
      uVar9 = *(undefined8 *)(lVar13 + -0x208);
      *(undefined8 *)(lVar11 + -0x1f8) = *(undefined8 *)(lVar13 + -0x1f8);
      *(undefined8 *)(lVar11 + -0x208) = uVar9;
      uVar9 = *(undefined8 *)(lVar13 + -0x1e8);
      *(undefined8 *)(lVar11 + -0x1d8) = *(undefined8 *)(lVar13 + -0x1d8);
      *(undefined8 *)(lVar11 + -0x1e8) = uVar9;
      uVar9 = *(undefined8 *)(lVar13 + -0x1c8);
      *(undefined8 *)(lVar11 + -0x1b8) = *(undefined8 *)(lVar13 + -0x1b8);
      *(undefined8 *)(lVar11 + -0x1c8) = uVar9;
      uVar9 = *(undefined8 *)(lVar13 + -0x230);
      *(undefined8 *)(lVar11 + -0x220) = *(undefined8 *)(lVar13 + -0x220);
      *(undefined8 *)(lVar11 + -0x230) = uVar9;
      uVar9 = *(undefined8 *)(lVar13 + -0x210);
      *(undefined8 *)(lVar11 + -0x200) = *(undefined8 *)(lVar13 + -0x200);
      *(undefined8 *)(lVar11 + -0x210) = uVar9;
      uVar9 = *(undefined8 *)(lVar13 + -0x1f0);
      *(undefined8 *)(lVar11 + -0x1e0) = *(undefined8 *)(lVar13 + -0x1e0);
      *(undefined8 *)(lVar11 + -0x1f0) = uVar9;
      uVar9 = *(undefined8 *)(lVar13 + -0x1d0);
      *(undefined8 *)(lVar11 + -0x1c0) = *(undefined8 *)(lVar13 + -0x1c0);
      *(undefined8 *)(lVar11 + -0x1d0) = uVar9;
      *(long *)(lVar11 + -0x1b0) = (long)puVar1;
      lVar5 = *(long *)(lVar13 + -0x1a8);
      *(long *)(lVar11 + -0x1a8) = lVar5;
      if (lVar5 != 0) {
        (**(code **)(*(long *)(lVar5 + 0x48) + 0x10))();
      }
      *(undefined8 *)(lVar11 + -0x188) = 0;
      *(undefined8 *)(lVar11 + -0x1a0) = 0;
      *(undefined8 *)(lVar11 + -400) = 0;
      *(undefined8 *)(lVar11 + -0x198) = 0;
      pcVar6 = *(code **)(lVar13 + -400);
      if (pcVar6 != (code *)0x0) {
        (*pcVar6)(lVar13 + -0x180,lVar11 + -0x180);
        uVar9 = *(undefined8 *)(lVar13 + -0x1a0);
        uVar8 = *(undefined8 *)(lVar13 + -0x198);
        uVar10 = *(undefined8 *)(lVar13 + -0x188);
        *(undefined8 *)(lVar11 + -400) = *(undefined8 *)(lVar13 + -400);
        *(undefined8 *)(lVar11 + -0x188) = uVar10;
        *(undefined8 *)(lVar11 + -0x1a0) = uVar9;
        *(undefined8 *)(lVar11 + -0x198) = uVar8;
      }
      *(undefined8 *)(lVar11 + -0x108) = 0;
      *(undefined8 *)(lVar11 + -0x120) = 0;
      *(undefined8 *)(lVar11 + -0x110) = 0;
      *(undefined8 *)(lVar11 + -0x118) = 0;
      pcVar6 = *(code **)(lVar13 + -0x110);
      if (pcVar6 != (code *)0x0) {
        (*pcVar6)(lVar13 + -0x100,lVar11 + -0x100);
        uVar9 = *(undefined8 *)(lVar13 + -0x120);
        uVar8 = *(undefined8 *)(lVar13 + -0x118);
        uVar10 = *(undefined8 *)(lVar13 + -0x108);
        *(undefined8 *)(lVar11 + -0x110) = *(undefined8 *)(lVar13 + -0x110);
        *(undefined8 *)(lVar11 + -0x108) = uVar10;
        *(undefined8 *)(lVar11 + -0x120) = uVar9;
        *(undefined8 *)(lVar11 + -0x118) = uVar8;
      }
      *(long *)(lVar11 + -0x1b0) = (long)puVar2;
      uVar9 = *(undefined8 *)(lVar13 + -0xa0);
      *(undefined8 *)(lVar11 + -0x90) = 0;
      *(undefined8 *)(lVar11 + -0x80) = 0;
      *(undefined8 *)(lVar11 + -0x78) = 0;
      *(undefined8 *)(lVar11 + -0xa0) = uVar9;
      *(undefined8 *)(lVar11 + -0x88) = 0;
      if (*(code **)(lVar13 + -0x80) != (code *)0x0) {
        (**(code **)(lVar13 + -0x80))(lVar13 + -0x70,lVar11 + -0x70);
        uVar9 = *(undefined8 *)(lVar13 + -0x90);
        uVar8 = *(undefined8 *)(lVar13 + -0x88);
        uVar10 = *(undefined8 *)(lVar13 + -0x78);
        *(undefined8 *)(lVar11 + -0x80) = *(undefined8 *)(lVar13 + -0x80);
        *(undefined8 *)(lVar11 + -0x78) = uVar10;
        *(undefined8 *)(lVar11 + -0x90) = uVar9;
        *(undefined8 *)(lVar11 + -0x88) = uVar8;
      }
      *(undefined4 *)(lVar11 + -0x10) = *(undefined4 *)(lVar13 + -0x10);
      *(long *)(lVar4 + 0x80) = *(long *)(lVar4 + 0x80) + -1;
      lVar11 = param_2[1] + -0x230;
      lVar12 = lVar12 + -0x230;
      param_2[1] = lVar11;
    } while (lVar7 - lVar3 != lVar12);
    lVar7 = *param_1;
  }
  *param_1 = lVar11;
  param_2[1] = lVar7;
  lVar7 = param_1[1];
  param_1[1] = param_2[2];
  param_2[2] = lVar7;
  lVar7 = param_1[2];
  param_1[2] = param_2[3];
  param_2[3] = lVar7;
  *param_2 = param_2[1];
  return;
}


