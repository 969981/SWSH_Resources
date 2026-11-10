/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00e34760; name: FUN_00e34760
 */


void FUN_00e34760(long param_1,undefined8 *param_2,undefined4 param_3,undefined4 param_4,
                 uint param_5)

{
  undefined1 (*pauVar1) [12];
  undefined4 uVar2;
  undefined4 uVar3;
  undefined1 auVar4 [16];
  long lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  undefined8 uVar15;
  undefined8 uVar16;
  undefined8 local_70;
  undefined8 local_68;
  undefined8 local_60;
  undefined8 local_58;
  undefined1 auStack_48 [8];
  
  lVar5 = FUN_00706c40(*(undefined8 *)(param_1 + 0x2c0),&local_70);
  lVar5 = *(long *)(lVar5 + 0x78);
  local_58 = *(undefined8 *)(lVar5 + 0x2b8);
  local_68 = *(undefined8 *)(lVar5 + 0x2a8);
  local_60 = *(undefined8 *)(lVar5 + 0x2b0);
  local_70 = *(undefined8 *)(lVar5 + 0x2a0);
  uVar7 = param_2[3];
  pauVar1 = (undefined1 (*) [12])(lVar5 + 0x2c0);
  uVar16 = *(undefined8 *)(lVar5 + 0x2c8);
  uVar15 = *(undefined8 *)*pauVar1;
  uVar3 = *(undefined4 *)(lVar5 + 0x2d0);
  uVar6 = param_2[1];
  uVar8 = *param_2;
  uVar10 = param_2[2];
  uVar2 = *(undefined4 *)(param_2 + 6);
  if ((param_5 & 2) != 0) {
    uVar2 = uVar3;
  }
  auVar13._0_4_ = -(uint)((param_5 & 1) == 0);
  auVar13._4_4_ = auVar13._0_4_;
  auVar13._8_4_ = auVar13._0_4_;
  auVar13._12_4_ = auVar13._0_4_;
  auVar4._12_4_ = 0;
  auVar4._0_12_ = *pauVar1;
  auVar14._12_4_ = 0;
  auVar14._0_12_ = *pauVar1;
  auVar14 = auVar14 ^ (auVar4 ^ *(undefined1 (*) [16])(param_2 + 4)) & auVar13;
  if (*(char *)(param_1 + 0x60) == '\0') {
    lVar5 = FUN_00706c40(*(undefined8 *)(param_1 + 0x2c0),auStack_48);
    lVar5 = *(long *)(lVar5 + 0x78);
    uVar9 = *(undefined8 *)(lVar5 + 0x2b8);
    uVar11 = *(undefined8 *)(lVar5 + 0x2c8);
    uVar12 = *(undefined8 *)(lVar5 + 0x2c0);
    *(undefined4 *)(param_1 + 0x170) = *(undefined4 *)(lVar5 + 0x2d0);
    *(undefined8 *)(param_1 + 0x158) = uVar9;
    *(undefined8 *)(param_1 + 0x160) = uVar12;
    *(undefined8 *)(param_1 + 0x168) = uVar11;
    uVar11 = *(undefined8 *)(lVar5 + 0x2a0);
    uVar9 = *(undefined8 *)(lVar5 + 0x2b0);
    *(undefined8 *)(param_1 + 0x148) = *(undefined8 *)(lVar5 + 0x2a8);
    *(undefined8 *)(param_1 + 0x150) = uVar9;
    *(undefined8 *)(param_1 + 0x140) = uVar11;
  }
  *(undefined8 *)(param_1 + 0x7c) = 0;
  *(undefined2 *)(param_1 + 0x60) = 0x101;
  *(undefined1 *)(param_1 + 0x70) = 0;
  *(undefined8 *)(param_1 + 0x74) = 2;
  *(undefined4 *)(param_1 + 0xa0) = 0x3f800000;
  *(undefined8 *)(param_1 + 0x90) = 0;
  *(undefined8 *)(param_1 + 0x98) = 0;
  *(undefined4 *)(param_1 + 0xe0) = uVar3;
  *(undefined8 *)(param_1 + 0xd8) = uVar16;
  *(undefined8 *)(param_1 + 0xd0) = uVar15;
  *(undefined8 *)(param_1 + 0xc0) = local_60;
  *(undefined8 *)(param_1 + 200) = local_58;
  *(undefined8 *)(param_1 + 0xb0) = local_70;
  *(undefined8 *)(param_1 + 0xb8) = local_68;
  *(undefined4 *)(param_1 + 0x120) = uVar2;
  *(undefined4 *)(param_1 + 0x130) = param_3;
  *(undefined4 *)(param_1 + 0x134) = 0;
  *(undefined4 *)(param_1 + 0x138) = param_4;
  *(undefined8 *)(param_1 + 0x100) = uVar10;
  *(undefined8 *)(param_1 + 0x108) = uVar7;
  *(undefined8 *)(param_1 + 0xf0) = uVar8;
  *(undefined8 *)(param_1 + 0xf8) = uVar6;
  *(long *)(param_1 + 0x118) = auVar14._8_8_;
  *(long *)(param_1 + 0x110) = auVar14._0_8_;
  return;
}


