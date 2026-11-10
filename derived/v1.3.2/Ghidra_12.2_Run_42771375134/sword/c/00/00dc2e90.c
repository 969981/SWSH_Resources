/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00dc2e90; name: FUN_00dc2e90
 */


void FUN_00dc2e90(long *param_1,undefined8 *param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  code *pcVar6;
  undefined8 uVar7;
  long lVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  
  lVar8 = *param_1;
  lVar3 = param_1[1];
  if (lVar3 == lVar8) {
    lVar11 = param_2[1];
  }
  else {
    lVar11 = param_2[1];
    puVar1 = PTR_DAT_027164e0 + 0x10;
    lVar12 = 0;
    puVar2 = PTR_DAT_027164d8 + 0x10;
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
      *(undefined8 *)(lVar11 + -0x180) = *(undefined8 *)(lVar13 + -0x180);
      *(long *)(lVar11 + -0x170) = (long)puVar1;
      lVar5 = *(long *)(lVar13 + -0x168);
      *(long *)(lVar11 + -0x168) = lVar5;
      if (lVar5 != 0) {
        (**(code **)(*(long *)(lVar5 + 0x48) + 0x10))();
      }
      *(undefined8 *)(lVar11 + -0x148) = 0;
      *(undefined8 *)(lVar11 + -0x160) = 0;
      *(undefined8 *)(lVar11 + -0x150) = 0;
      *(undefined8 *)(lVar11 + -0x158) = 0;
      pcVar6 = *(code **)(lVar13 + -0x150);
      if (pcVar6 != (code *)0x0) {
        (*pcVar6)(lVar13 + -0x140,lVar11 + -0x140);
        uVar7 = *(undefined8 *)(lVar13 + -0x160);
        uVar9 = *(undefined8 *)(lVar13 + -0x158);
        uVar10 = *(undefined8 *)(lVar13 + -0x148);
        *(undefined8 *)(lVar11 + -0x150) = *(undefined8 *)(lVar13 + -0x150);
        *(undefined8 *)(lVar11 + -0x148) = uVar10;
        *(undefined8 *)(lVar11 + -0x160) = uVar7;
        *(undefined8 *)(lVar11 + -0x158) = uVar9;
      }
      *(undefined8 *)(lVar11 + -0xe0) = 0;
      *(undefined8 *)(lVar11 + -0xd0) = 0;
      *(undefined8 *)(lVar11 + -200) = 0;
      *(undefined8 *)(lVar11 + -0xd8) = 0;
      if (*(code **)(lVar13 + -0xd0) != (code *)0x0) {
        (**(code **)(lVar13 + -0xd0))(lVar13 + -0xc0,lVar11 + -0xc0);
        uVar7 = *(undefined8 *)(lVar13 + -0xe0);
        uVar9 = *(undefined8 *)(lVar13 + -0xd8);
        uVar10 = *(undefined8 *)(lVar13 + -200);
        *(undefined8 *)(lVar11 + -0xd0) = *(undefined8 *)(lVar13 + -0xd0);
        *(undefined8 *)(lVar11 + -200) = uVar10;
        *(undefined8 *)(lVar11 + -0xe0) = uVar7;
        *(undefined8 *)(lVar11 + -0xd8) = uVar9;
      }
      *(long *)(lVar11 + -0x170) = (long)puVar2;
      *(undefined8 *)(lVar11 + -0x60) = *(undefined8 *)(lVar13 + -0x60);
      *(undefined8 *)(lVar11 + -0x58) = *(undefined8 *)(lVar13 + -0x58);
      *(undefined8 *)(lVar11 + -0x50) = *(undefined8 *)(lVar13 + -0x50);
      *(undefined8 *)(lVar11 + -0x48) = *(undefined8 *)(lVar13 + -0x48);
      lVar5 = *(long *)(lVar13 + -0x40);
      *(long *)(lVar11 + -0x40) = lVar5;
      if (lVar5 != 0) {
        (**(code **)(*(long *)(lVar5 + 0x48) + 0x10))();
      }
      *(undefined8 *)(lVar11 + -0x30) = *(undefined8 *)(lVar13 + -0x30);
      uVar9 = *(undefined8 *)(lVar13 + -0x18);
      uVar7 = *(undefined8 *)(lVar13 + -0x28);
      *(undefined8 *)(lVar11 + -0x11) = *(undefined8 *)(lVar13 + -0x11);
      *(undefined8 *)(lVar11 + -0x18) = uVar9;
      uVar9 = *(undefined8 *)(lVar13 + -0x20);
      lVar12 = lVar12 + -0x180;
      *(undefined8 *)(lVar11 + -0x28) = uVar7;
      *(undefined8 *)(lVar11 + -0x20) = uVar9;
      *(long *)(lVar4 + 0x80) = *(long *)(lVar4 + 0x80) + -1;
      lVar11 = param_2[1] + -0x180;
      param_2[1] = lVar11;
    } while (lVar8 - lVar3 != lVar12);
    lVar8 = *param_1;
  }
  *param_1 = lVar11;
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


