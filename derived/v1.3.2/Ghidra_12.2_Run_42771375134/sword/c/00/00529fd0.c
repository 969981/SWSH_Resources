/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00529fd0; name: FUN_00529fd0
 */


undefined8 FUN_00529fd0(long param_1,ulong param_2,byte param_3)

{
  undefined4 uVar1;
  uint uVar2;
  bool bVar3;
  ulong uVar4;
  uint uVar5;
  uint uVar6;
  long lVar7;
  int iVar8;
  long lVar9;
  undefined1 auVar10 [16];
  
  if (*(long *)(param_1 + 0x1a0) == 0) {
    return 0;
  }
  if ((param_2 & 1) == 0) {
    param_3 = *(char *)(param_1 + 0x914) != '\0';
  }
  *(byte *)(*(long *)(param_1 + 0x1a0) + 0x1e0) = param_3 & 1;
  iVar8 = *(int *)(param_1 + 0x5d8);
  lVar7 = *(long *)(param_1 + 400);
  if (iVar8 == -1) {
    iVar8 = *(int *)(lVar7 + 0x90);
    if (iVar8 < *(int *)(lVar7 + 0x30)) goto LAB_0052a020;
LAB_0052a054:
    uVar1 = *(undefined4 *)(param_1 + 0x6a8);
    iVar8 = *(int *)(param_1 + 0x5e0);
  }
  else {
    if (*(int *)(lVar7 + 0x30) <= iVar8) goto LAB_0052a054;
LAB_0052a020:
    lVar9 = *(long *)(*(long *)(lVar7 + 0x38) + (long)iVar8 * 8);
    if (lVar9 == 0) goto LAB_0052a054;
    uVar1 = *(undefined4 *)(lVar9 + 0x38);
    iVar8 = *(int *)(param_1 + 0x5e0);
  }
  if (iVar8 == -1) {
    iVar8 = *(int *)(lVar7 + 0x90);
  }
  uVar6 = *(uint *)(*(long *)(*(long *)(lVar7 + 0x38) + (long)iVar8 * 8) + 0x38);
  uVar2 = *(uint *)(*(long *)(param_1 + 0x1a0) + 0xd4);
  uVar5 = 0xffffffff;
  switch(uVar1) {
  default:
    auVar10 = FUN_00538690();
    param_2 = auVar10._8_8_;
    uVar5 = 0x18;
    if ((auVar10._0_8_ & 1) == 0) {
      uVar5 = 0xffffffff;
    }
    break;
  case 0xb:
  case 0xc:
  case 0xd:
  case 0xe:
  case 0x23:
  case 0x24:
  case 0x25:
  case 0x26:
  case 0x37:
  case 0x38:
  case 0x39:
  case 0x3a:
  case 0x3b:
    uVar5 = 0x10;
    break;
  case 0x1c:
  case 0x1d:
  case 0x1e:
  case 0x1f:
  case 0x20:
  case 0x31:
  case 0x32:
  case 0x33:
  case 0x34:
  case 0x3d:
  case 0x3e:
  case 0x3f:
  case 0x40:
  case 0x41:
  case 0x57:
  case 0x58:
  case 0x5b:
  case 0x5d:
    uVar5 = 8;
  case 0:
  }
  if (uVar6 < 0x5e) {
    switch((long)&switchD_0052a0d4::switchdataD_01d6a8fc +
           (long)(int)(&switchD_0052a0d4::switchdataD_01d6a8fc)[uVar6]) {
    case 0x52a0d8:
      goto switchD_0052a0d4_caseD_52a0d8;
    case 0x52a0e8:
      bVar3 = 0xf < uVar5;
      uVar6 = 0x10;
      goto LAB_0052a0f0;
    case 0x52a0f4:
      goto switchD_0052a0d4_caseD_52a0f4;
    default:
      break;
    }
  }
  auVar10 = FUN_00538690(uVar6);
  param_2 = auVar10._8_8_;
  if ((auVar10._0_8_ & 1) != 0) {
    bVar3 = 0x17 < uVar5;
    uVar6 = 0x18;
LAB_0052a0f0:
    if (bVar3) {
      uVar5 = uVar6;
    }
  }
switchD_0052a0d4_caseD_52a0f4:
  if (0x5d < uVar2) goto switchD_0052a114_caseD_52a170;
LAB_0052a0fc:
  param_2 = 8;
  switch((long)&switchD_0052a114::switchdataD_01d6aa74 +
         (long)(int)(&switchD_0052a114::switchdataD_01d6aa74)[uVar2]) {
  case 0x52a118:
    bVar3 = 0xf < uVar5;
    uVar6 = 0x10;
    goto LAB_0052a120;
  case 0x52a124:
    goto switchD_0052a114_caseD_52a124;
  default:
    goto switchD_0052a114_caseD_52a170;
  case 0x52a188:
    goto switchD_0052a114_caseD_52a188;
  }
switchD_0052a0d4_caseD_52a0d8:
  uVar5 = 8;
  if (uVar2 < 0x5e) goto LAB_0052a0fc;
switchD_0052a114_caseD_52a170:
  uVar4 = FUN_00538690(uVar2,param_2);
  if ((uVar4 & 1) == 0) {
switchD_0052a114_caseD_52a188:
    uVar6 = 0;
    if (uVar5 != 0xffffffff) {
      uVar6 = uVar5;
    }
    param_2 = (ulong)uVar6;
  }
  else {
    bVar3 = 0x17 < uVar5;
    uVar6 = 0x18;
LAB_0052a120:
    if (bVar3) {
      uVar5 = uVar6;
    }
    param_2 = (ulong)uVar5;
  }
switchD_0052a114_caseD_52a124:
  FUN_005aa0e0(*(undefined8 *)(param_1 + 0x1a0),param_2);
  return 0;
}


