/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 007417a0; name: FUN_007417a0
 */


void FUN_007417a0(long *param_1,undefined8 *param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  undefined8 uVar4;
  long lVar5;
  long lVar6;
  undefined8 uVar7;
  long lVar8;
  undefined8 uVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  
  lVar8 = *param_1;
  lVar3 = param_1[1];
  if (lVar3 == lVar8) {
    lVar10 = param_2[1];
  }
  else {
    lVar10 = param_2[1];
    puVar1 = PTR_DAT_02710800 + 0x10;
    lVar11 = 0;
    puVar2 = PTR_DAT_02710810 + 0x10;
    do {
      lVar12 = param_1[3];
      lVar5 = nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_02710860);
      if (0xf < *(ulong *)(lVar5 + 0x80)) {
                    /* WARNING: Subroutine does not return */
        abort();
      }
      *(long *)(lVar5 + *(ulong *)(lVar5 + 0x80) * 8) = lVar12;
      *(long *)(lVar5 + 0x80) = *(long *)(lVar5 + 0x80) + 1;
      lVar12 = lVar3 + lVar11;
      *(long *)(lVar10 + -0x120) = (long)puVar1;
      lVar6 = *(long *)(lVar12 + -0x118);
      *(long *)(lVar10 + -0x118) = lVar6;
      if (lVar6 != 0) {
        (**(code **)(*(long *)(lVar6 + 0x48) + 0x10))();
      }
      *(undefined8 *)(lVar10 + -0x100) = 0;
      *(undefined8 *)(lVar10 + -0xf8) = 0;
      *(undefined8 *)(lVar10 + -0x108) = 0;
      *(undefined8 *)(lVar10 + -0x110) = 0;
      if (*(code **)(lVar12 + -0x100) != (code *)0x0) {
        (**(code **)(lVar12 + -0x100))(lVar12 + -0xf0,lVar10 + -0xf0);
        uVar7 = *(undefined8 *)(lVar12 + -0x110);
        uVar9 = *(undefined8 *)(lVar12 + -0x108);
        uVar4 = *(undefined8 *)(lVar12 + -0xf8);
        *(undefined8 *)(lVar10 + -0x100) = *(undefined8 *)(lVar12 + -0x100);
        *(undefined8 *)(lVar10 + -0xf8) = uVar4;
        *(undefined8 *)(lVar10 + -0x110) = uVar7;
        *(undefined8 *)(lVar10 + -0x108) = uVar9;
      }
      *(undefined8 *)(lVar10 + -0x90) = 0;
      *(undefined8 *)(lVar10 + -0x80) = 0;
      *(undefined8 *)(lVar10 + -0x78) = 0;
      *(undefined8 *)(lVar10 + -0x88) = 0;
      if (*(code **)(lVar12 + -0x80) != (code *)0x0) {
        (**(code **)(lVar12 + -0x80))(lVar12 + -0x70,lVar10 + -0x70);
        uVar4 = *(undefined8 *)(lVar12 + -0x90);
        uVar7 = *(undefined8 *)(lVar12 + -0x88);
        uVar9 = *(undefined8 *)(lVar12 + -0x78);
        *(undefined8 *)(lVar10 + -0x80) = *(undefined8 *)(lVar12 + -0x80);
        *(undefined8 *)(lVar10 + -0x78) = uVar9;
        *(undefined8 *)(lVar10 + -0x90) = uVar4;
        *(undefined8 *)(lVar10 + -0x88) = uVar7;
      }
      *(long *)(lVar10 + -0x120) = (long)puVar2;
      *(undefined4 *)(lVar10 + -0x10) = *(undefined4 *)(lVar12 + -0x10);
      *(long *)(lVar5 + 0x80) = *(long *)(lVar5 + 0x80) + -1;
      lVar10 = param_2[1] + -0x120;
      lVar11 = lVar11 + -0x120;
      param_2[1] = lVar10;
    } while (lVar8 - lVar3 != lVar11);
    lVar8 = *param_1;
  }
  *param_1 = lVar10;
  param_2[1] = lVar8;
  lVar8 = param_1[1];
  param_1[1] = param_2[2];
  param_2[2] = lVar8;
  lVar8 = param_1[2];
  param_1[2] = param_2[3];
  param_2[3] = lVar8;
  *param_2 = param_2[1];
  return;
}


