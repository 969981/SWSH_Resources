/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 006bca90; name: FUN_006bca90
 */


void FUN_006bca90(long *param_1,undefined8 *param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  code *pcVar5;
  long lVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  
  lVar6 = *param_1;
  lVar3 = param_1[1];
  if (lVar3 == lVar6) {
    lVar11 = param_2[1];
  }
  else {
    lVar11 = param_2[1];
    puVar1 = PTR_DAT_02710a48 + 0x10;
    lVar12 = 0;
    puVar2 = PTR_DAT_027150e0 + 0x10;
    do {
      lVar10 = param_1[3];
      lVar4 = nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_02710860);
      if (0xf < *(ulong *)(lVar4 + 0x80)) {
                    /* WARNING: Subroutine does not return */
        abort();
      }
      *(long *)(lVar4 + *(ulong *)(lVar4 + 0x80) * 8) = lVar10;
      lVar10 = lVar3 + lVar12;
      *(long *)(lVar4 + 0x80) = *(long *)(lVar4 + 0x80) + 1;
      *(undefined8 *)(lVar11 + -0x200) = *(undefined8 *)(lVar10 + -0x200);
      *(long *)(lVar11 + -0x1f0) = (long)puVar1;
      uVar7 = *(undefined8 *)(lVar10 + -0x1e8);
      *(undefined8 *)(lVar10 + -0x1e8) = 0;
      *(undefined8 *)(lVar11 + -0x1e8) = uVar7;
      *(undefined8 *)(lVar11 + -0x1c8) = 0;
      *(undefined8 *)(lVar11 + -0x1e0) = 0;
      *(undefined8 *)(lVar11 + -0x1d0) = 0;
      *(undefined8 *)(lVar11 + -0x1d8) = 0;
      pcVar5 = *(code **)(lVar10 + -0x1c8);
      if (pcVar5 != (code *)0x0) {
        (*pcVar5)(lVar10 + -0x1c0,lVar11 + -0x1c0);
        uVar7 = *(undefined8 *)(lVar10 + -0x1e0);
        uVar8 = *(undefined8 *)(lVar10 + -0x1d8);
        uVar9 = *(undefined8 *)(lVar10 + -0x1c8);
        *(undefined8 *)(lVar11 + -0x1d0) = *(undefined8 *)(lVar10 + -0x1d0);
        *(undefined8 *)(lVar11 + -0x1c8) = uVar9;
        *(undefined8 *)(lVar11 + -0x1e0) = uVar7;
        *(undefined8 *)(lVar11 + -0x1d8) = uVar8;
        pcVar5 = *(code **)(lVar10 + -0x1d8);
        if (pcVar5 != (code *)0x0) {
          *(undefined8 *)(lVar10 + -0x1d0) = 0;
          *(undefined8 *)(lVar10 + -0x1c8) = 0;
          *(undefined8 *)(lVar10 + -0x1e0) = 0;
          *(undefined8 *)(lVar10 + -0x1d8) = 0;
          (*pcVar5)(lVar10 + -0x1c0);
        }
      }
      *(undefined8 *)(lVar11 + -0x148) = 0;
      *(undefined8 *)(lVar11 + -0x160) = 0;
      *(undefined8 *)(lVar11 + -0x150) = 0;
      *(undefined8 *)(lVar11 + -0x158) = 0;
      pcVar5 = *(code **)(lVar10 + -0x148);
      if (pcVar5 != (code *)0x0) {
        (*pcVar5)(lVar10 + -0x140,lVar11 + -0x140);
        uVar7 = *(undefined8 *)(lVar10 + -0x160);
        uVar8 = *(undefined8 *)(lVar10 + -0x158);
        uVar9 = *(undefined8 *)(lVar10 + -0x148);
        *(undefined8 *)(lVar11 + -0x150) = *(undefined8 *)(lVar10 + -0x150);
        *(undefined8 *)(lVar11 + -0x148) = uVar9;
        *(undefined8 *)(lVar11 + -0x160) = uVar7;
        *(undefined8 *)(lVar11 + -0x158) = uVar8;
        pcVar5 = *(code **)(lVar10 + -0x158);
        if (pcVar5 != (code *)0x0) {
          *(undefined8 *)(lVar10 + -0x150) = 0;
          *(undefined8 *)(lVar10 + -0x148) = 0;
          *(undefined8 *)(lVar10 + -0x160) = 0;
          *(undefined8 *)(lVar10 + -0x158) = 0;
          (*pcVar5)(lVar10 + -0x140);
        }
      }
      *(long *)(lVar11 + -0x1f0) = (long)puVar2;
      *(undefined8 *)(lVar11 + -0xe0) = *(undefined8 *)(lVar10 + -0xe0);
      uVar7 = *(undefined8 *)(lVar10 + -0xd0);
      uVar8 = *(undefined8 *)(lVar10 + -200);
      uVar9 = *(undefined8 *)(lVar10 + -0xc0);
      *(undefined4 *)(lVar11 + -0xb8) = *(undefined4 *)(lVar10 + -0xb8);
      *(undefined8 *)(lVar11 + -200) = uVar8;
      *(undefined8 *)(lVar11 + -0xc0) = uVar9;
      *(undefined8 *)(lVar11 + -0xd0) = uVar7;
      uVar7 = *(undefined8 *)(lVar10 + -0xb0);
      *(undefined8 *)(lVar10 + -0xb0) = 0;
      *(undefined8 *)(lVar11 + -0xb0) = uVar7;
      uVar7 = *(undefined8 *)(lVar10 + -0xa8);
      uVar8 = *(undefined8 *)(lVar10 + -0x98);
      *(undefined8 *)(lVar11 + -0xa0) = *(undefined8 *)(lVar10 + -0xa0);
      *(undefined8 *)(lVar11 + -0x98) = uVar8;
      *(undefined8 *)(lVar11 + -0xa8) = uVar7;
      uVar7 = *(undefined8 *)(lVar10 + -0x90);
      *(undefined8 *)(lVar10 + -0x90) = 0;
      *(undefined8 *)(lVar11 + -0x90) = uVar7;
      uVar7 = *(undefined8 *)(lVar10 + -0x88);
      uVar8 = *(undefined8 *)(lVar10 + -0x78);
      *(undefined8 *)(lVar11 + -0x80) = *(undefined8 *)(lVar10 + -0x80);
      *(undefined8 *)(lVar11 + -0x78) = uVar8;
      *(undefined8 *)(lVar11 + -0x88) = uVar7;
      uVar7 = *(undefined8 *)(lVar10 + -0x70);
      *(undefined8 *)(lVar10 + -0x70) = 0;
      *(undefined8 *)(lVar11 + -0x70) = uVar7;
      uVar7 = *(undefined8 *)(lVar10 + -0x68);
      uVar8 = *(undefined8 *)(lVar10 + -0x58);
      *(undefined8 *)(lVar11 + -0x60) = *(undefined8 *)(lVar10 + -0x60);
      *(undefined8 *)(lVar11 + -0x58) = uVar8;
      *(undefined8 *)(lVar11 + -0x68) = uVar7;
      uVar7 = *(undefined8 *)(lVar10 + -0x50);
      *(undefined8 *)(lVar10 + -0x50) = 0;
      *(undefined8 *)(lVar11 + -0x50) = uVar7;
      uVar7 = *(undefined8 *)(lVar10 + -0x48);
      uVar8 = *(undefined8 *)(lVar10 + -0x38);
      *(undefined8 *)(lVar11 + -0x40) = *(undefined8 *)(lVar10 + -0x40);
      *(undefined8 *)(lVar11 + -0x38) = uVar8;
      *(undefined8 *)(lVar11 + -0x48) = uVar7;
      uVar7 = *(undefined8 *)(lVar10 + -0x30);
      *(undefined8 *)(lVar10 + -0x30) = 0;
      *(undefined8 *)(lVar11 + -0x30) = uVar7;
      uVar7 = *(undefined8 *)(lVar10 + -0x28);
      uVar8 = *(undefined8 *)(lVar10 + -0x18);
      *(undefined8 *)(lVar11 + -0x20) = *(undefined8 *)(lVar10 + -0x20);
      *(undefined8 *)(lVar11 + -0x18) = uVar8;
      *(undefined8 *)(lVar11 + -0x28) = uVar7;
      *(undefined4 *)(lVar11 + -0x10) = *(undefined4 *)(lVar10 + -0x10);
      *(long *)(lVar4 + 0x80) = *(long *)(lVar4 + 0x80) + -1;
      lVar11 = param_2[1] + -0x200;
      param_2[1] = lVar11;
      lVar12 = lVar12 + -0x200;
    } while (lVar6 - lVar3 != lVar12);
    lVar6 = *param_1;
  }
  *param_1 = lVar11;
  param_2[1] = lVar6;
  lVar6 = param_1[1];
  param_1[1] = param_2[2];
  param_2[2] = lVar6;
  lVar6 = param_1[2];
  param_1[2] = param_2[3];
  param_2[3] = lVar6;
  *param_2 = param_2[1];
  return;
}


