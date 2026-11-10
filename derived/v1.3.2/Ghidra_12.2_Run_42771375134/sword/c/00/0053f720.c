/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0053f720; name: FUN_0053f720
 */


undefined8 FUN_0053f720(long param_1,uint param_2)

{
  undefined4 *puVar1;
  uint uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  long lVar7;
  long lVar8;
  undefined4 uVar9;
  undefined1 uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  long lVar13;
  
  uVar3 = DAT_01d4ddf0;
  if (0x3f < param_2) {
    return 0xfffffffa;
  }
  if ((~param_2 & 6) == 0) {
    return 1;
  }
  if ((~param_2 & 0x18) == 0) {
    return 1;
  }
  lVar7 = param_1 + (long)(int)param_2 * 0x530;
  *(undefined8 *)(lVar7 + 0xb0) = DAT_01d4ddf8;
  *(undefined8 *)(lVar7 + 0xb8) = 8;
  uVar4 = DAT_01d6af74;
  *(undefined8 *)(lVar7 + 0xc0) = DAT_01d6af6c;
  *(undefined4 *)(lVar7 + 0xe0) = DAT_01d6af8c;
  uVar6 = DAT_01d6af84;
  uVar5 = DAT_01d6af7c;
  *(undefined8 *)(lVar7 + 200) = uVar4;
  *(undefined8 *)(lVar7 + 0xd0) = uVar5;
  *(undefined8 *)(lVar7 + 0xd8) = uVar6;
  *(undefined8 *)(lVar7 + 0xa8) = uVar3;
  uVar3 = DAT_01d4dde8;
  lVar8 = (long)(int)param_2;
  *(undefined8 *)(lVar7 + 0x98) = DAT_01d4dde0;
  *(undefined8 *)(lVar7 + 0xa0) = uVar3;
  if ((param_2 >> 5 & 1) != 0) {
    *(undefined1 *)(param_1 + lVar8 * 0x530 + 0xb5) = 1;
  }
  lVar7 = param_1 + lVar8 * 0x530;
  *(undefined8 *)(lVar7 + 0x59c) = 0;
  *(undefined2 *)(lVar7 + 0xe4) = 0;
  *(undefined4 *)(lVar7 + 0xf4) = 1;
  *(undefined8 *)(lVar7 + 0x100) = 0x101010100000001;
  *(undefined4 *)(lVar7 + 0x5a4) = 0xffffffff;
  uVar10 = 0;
  uVar9 = 2;
  uVar11 = 2;
  uVar12 = 2;
  switch(param_2 & 7) {
  case 0:
    break;
  case 1:
    uVar9 = 5;
    uVar11 = 6;
    uVar10 = 1;
    uVar12 = 5;
    break;
  case 2:
    uVar11 = 2;
    goto LAB_0053f878;
  case 3:
    uVar11 = 6;
    goto LAB_0053f878;
  case 4:
    uVar12 = 7;
    uVar10 = 1;
    uVar9 = 9;
    uVar11 = 1;
    break;
  case 5:
    uVar11 = 0xe;
LAB_0053f878:
    uVar10 = 1;
    uVar9 = 2;
    uVar12 = 2;
    break;
  default:
    goto switchD_0053f828_default;
  }
  lVar13 = param_1 + lVar8 * 0x530;
  *(undefined1 *)(lVar13 + 0xe8) = uVar10;
  *(undefined4 *)(lVar13 + 0xec) = uVar9;
  *(undefined4 *)(lVar13 + 0xf0) = uVar11;
  *(undefined4 *)(lVar13 + 0xf8) = uVar12;
  *(undefined4 *)(lVar13 + 0xfc) = uVar11;
switchD_0053f828_default:
  uVar2 = param_2 >> 3 & 3;
  puVar1 = (undefined4 *)(lVar7 + 0x104);
  if (uVar2 == 2) {
    *(undefined1 *)puVar1 = 0;
    *(undefined1 *)(lVar7 + 0x105) = 0;
    *(undefined1 *)(lVar7 + 0x106) = 0;
    *(undefined1 *)(lVar7 + 0x107) = 1;
  }
  else if (uVar2 == 1) {
    *(undefined1 *)puVar1 = 1;
    *(undefined1 *)(lVar7 + 0x105) = 1;
    *(undefined1 *)(lVar7 + 0x106) = 1;
    *(undefined1 *)(lVar7 + 0x107) = 0;
  }
  else if (uVar2 == 0) {
    *puVar1 = 0x1010101;
  }
  param_1 = param_1 + lVar8 * 0x530;
  *(undefined1 *)(param_1 + 0x108) = 0;
  *(undefined8 *)(param_1 + 0x114) = 0x200000001;
  *(undefined8 *)(param_1 + 0x10c) = 0x100000002;
  *(undefined8 *)(param_1 + 0x11c) = 0x100000001;
  *(undefined4 *)(param_1 + 0x124) = 0x1010101;
  *(undefined1 *)(param_1 + 0x128) = 0;
  *(undefined8 *)(param_1 + 0x134) = 0x200000001;
  *(undefined8 *)(param_1 + 300) = 0x100000002;
  *(undefined8 *)(param_1 + 0x13c) = 0x100000001;
  *(undefined4 *)(param_1 + 0x144) = 0x1010101;
  *(undefined1 *)(param_1 + 0x148) = 0;
  *(undefined8 *)(param_1 + 0x154) = 0x200000001;
  *(undefined8 *)(param_1 + 0x14c) = 0x100000002;
  *(undefined8 *)(param_1 + 0x15c) = 0x100000001;
  *(undefined4 *)(param_1 + 0x164) = 0x1010101;
  *(undefined1 *)(param_1 + 0x168) = 0;
  *(undefined4 *)(param_1 + 0x174) = 1;
  *(undefined4 *)(param_1 + 0x180) = 1;
  *(undefined8 *)(param_1 + 0x16c) = 0x100000002;
  *(undefined8 *)(param_1 + 0x178) = 0x100000002;
  *(undefined4 *)(param_1 + 0x184) = 0x1010101;
  *(undefined1 *)(param_1 + 0x188) = 0;
  *(undefined8 *)(param_1 + 0x194) = 0x200000001;
  *(undefined8 *)(param_1 + 0x18c) = 0x100000002;
  *(undefined8 *)(param_1 + 0x19c) = 0x100000001;
  *(undefined4 *)(param_1 + 0x1a4) = 0x1010101;
  *(undefined1 *)(param_1 + 0x1a8) = 0;
  *(undefined8 *)(param_1 + 0x1b4) = 0x200000001;
  *(undefined8 *)(param_1 + 0x1ac) = 0x100000002;
  *(undefined8 *)(param_1 + 0x1bc) = 0x100000001;
  *(undefined4 *)(param_1 + 0x1c4) = 0x1010101;
  *(undefined1 *)(param_1 + 0x1c8) = 0;
  *(undefined4 *)(param_1 + 0x1d4) = 1;
  *(undefined4 *)(param_1 + 0x1e0) = 1;
  *(undefined4 *)(param_1 + 0x1d0) = 1;
  *(undefined8 *)(param_1 + 0x1d8) = 0x100000002;
  *(undefined4 *)(param_1 + 0x1e4) = 0x1010101;
  *(undefined4 *)(param_1 + 0x1cc) = 2;
  return 0;
}


