/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00750de0; name: FUN_00750de0
 */


void FUN_00750de0(long *param_1,undefined8 *param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  undefined4 uVar4;
  long lVar5;
  long lVar6;
  code *pcVar7;
  undefined8 uVar8;
  long lVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  long lVar12;
  long lVar13;
  long lVar14;
  
  lVar9 = *param_1;
  lVar3 = param_1[1];
  if (lVar3 == lVar9) {
    lVar12 = param_2[1];
  }
  else {
    lVar12 = param_2[1];
    puVar1 = PTR_DAT_02710a48 + 0x10;
    lVar13 = 0;
    puVar2 = PTR_DAT_02715e08 + 0x10;
    do {
      lVar14 = param_1[3];
      lVar5 = nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_02710860);
      if (0xf < *(ulong *)(lVar5 + 0x80)) {
                    /* WARNING: Subroutine does not return */
        abort();
      }
      *(long *)(lVar5 + *(ulong *)(lVar5 + 0x80) * 8) = lVar14;
      lVar14 = lVar3 + lVar13;
      *(long *)(lVar5 + 0x80) = *(long *)(lVar5 + 0x80) + 1;
      *(undefined8 *)(lVar12 + -0x1d0) = *(undefined8 *)(lVar14 + -0x1d0);
      lVar6 = *(long *)(lVar14 + -0x1c8);
      *(long *)(lVar12 + -0x1c8) = lVar6;
      if (lVar6 != 0) {
        (**(code **)(*(long *)(lVar6 + 0x48) + 0x10))();
      }
      *(long *)(lVar12 + -0x1c0) = (long)puVar1;
      lVar6 = *(long *)(lVar14 + -0x1b8);
      *(long *)(lVar12 + -0x1b8) = lVar6;
      if (lVar6 != 0) {
        (**(code **)(*(long *)(lVar6 + 0x48) + 0x10))();
      }
      *(undefined8 *)(lVar12 + -0x198) = 0;
      *(undefined8 *)(lVar12 + -0x1b0) = 0;
      *(undefined8 *)(lVar12 + -0x1a0) = 0;
      *(undefined8 *)(lVar12 + -0x1a8) = 0;
      pcVar7 = *(code **)(lVar14 + -0x1a0);
      if (pcVar7 != (code *)0x0) {
        (*pcVar7)(lVar14 + -400,lVar12 + -400);
        uVar8 = *(undefined8 *)(lVar14 + -0x1b0);
        uVar10 = *(undefined8 *)(lVar14 + -0x1a8);
        uVar11 = *(undefined8 *)(lVar14 + -0x198);
        *(undefined8 *)(lVar12 + -0x1a0) = *(undefined8 *)(lVar14 + -0x1a0);
        *(undefined8 *)(lVar12 + -0x198) = uVar11;
        *(undefined8 *)(lVar12 + -0x1b0) = uVar8;
        *(undefined8 *)(lVar12 + -0x1a8) = uVar10;
      }
      *(undefined8 *)(lVar12 + -0x118) = 0;
      *(undefined8 *)(lVar12 + -0x130) = 0;
      *(undefined8 *)(lVar12 + -0x120) = 0;
      *(undefined8 *)(lVar12 + -0x128) = 0;
      pcVar7 = *(code **)(lVar14 + -0x120);
      if (pcVar7 != (code *)0x0) {
        (*pcVar7)(lVar14 + -0x110,lVar12 + -0x110);
        uVar8 = *(undefined8 *)(lVar14 + -0x130);
        uVar10 = *(undefined8 *)(lVar14 + -0x128);
        uVar11 = *(undefined8 *)(lVar14 + -0x118);
        *(undefined8 *)(lVar12 + -0x120) = *(undefined8 *)(lVar14 + -0x120);
        *(undefined8 *)(lVar12 + -0x118) = uVar11;
        *(undefined8 *)(lVar12 + -0x130) = uVar8;
        *(undefined8 *)(lVar12 + -0x128) = uVar10;
      }
      *(long *)(lVar12 + -0x1c0) = (long)puVar2;
      uVar4 = *(undefined4 *)(lVar14 + -0xb0);
      *(undefined8 *)(lVar12 + -0xa0) = 0;
      *(undefined8 *)(lVar12 + -0x90) = 0;
      *(undefined8 *)(lVar12 + -0x88) = 0;
      *(undefined4 *)(lVar12 + -0xb0) = uVar4;
      *(undefined8 *)(lVar12 + -0x98) = 0;
      if (*(code **)(lVar14 + -0x90) != (code *)0x0) {
        (**(code **)(lVar14 + -0x90))(lVar14 + -0x80,lVar12 + -0x80);
        uVar8 = *(undefined8 *)(lVar14 + -0xa0);
        uVar10 = *(undefined8 *)(lVar14 + -0x98);
        uVar11 = *(undefined8 *)(lVar14 + -0x88);
        *(undefined8 *)(lVar12 + -0x90) = *(undefined8 *)(lVar14 + -0x90);
        *(undefined8 *)(lVar12 + -0x88) = uVar11;
        *(undefined8 *)(lVar12 + -0xa0) = uVar8;
        *(undefined8 *)(lVar12 + -0x98) = uVar10;
      }
      uVar8 = *(undefined8 *)(lVar14 + -0x20);
      uVar10 = *(undefined8 *)(lVar14 + -0x18);
      *(undefined1 *)(lVar12 + -0x10) = *(undefined1 *)(lVar14 + -0x10);
      *(undefined8 *)(lVar12 + -0x20) = uVar8;
      *(undefined8 *)(lVar12 + -0x18) = uVar10;
      *(long *)(lVar5 + 0x80) = *(long *)(lVar5 + 0x80) + -1;
      lVar12 = param_2[1] + -0x1d0;
      lVar13 = lVar13 + -0x1d0;
      param_2[1] = lVar12;
    } while (lVar9 - lVar3 != lVar13);
    lVar9 = *param_1;
  }
  *param_1 = lVar12;
  param_2[1] = lVar9;
  lVar9 = param_1[1];
  param_1[1] = param_2[2];
  param_2[2] = lVar9;
  lVar9 = param_1[2];
  param_1[2] = param_2[3];
  param_2[3] = lVar9;
  *param_2 = param_2[1];
  return;
}


