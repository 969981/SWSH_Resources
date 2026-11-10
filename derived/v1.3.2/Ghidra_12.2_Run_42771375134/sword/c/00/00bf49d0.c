/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00bf49d0; name: FUN_00bf49d0
 */


void FUN_00bf49d0(long param_1)

{
  ulong uVar1;
  undefined8 uVar2;
  int iVar3;
  uint uVar4;
  
  iVar3 = *(int *)(param_1 + 0x68);
  switch(iVar3) {
  case 1:
  case 6:
  case 0x12:
  case 0x16:
  case 0x2d:
  case 0x2e:
  case 0x2f:
  case 0x30:
  case 0x31:
  case 0x32:
  case 0x33:
  case 0x34:
  case 0x35:
  case 0x36:
  case 0x3f:
  case 0x40:
  case 0x44:
  case 0x4b:
  case 0x4c:
  case 0x4f:
  case 0x67:
  case 0x6b:
  case 0x6f:
  case 0x70:
  case 0x77:
  case 0x78:
  case 0x79:
  case 0x7a:
  case 0x7b:
  case 0x80:
  case 0x83:
  case 0x84:
  case 0x85:
  case 0x86:
  case 0x87:
  case 0x89:
    FUN_00bfaf10(*(undefined8 *)(param_1 + 0xa8));
    iVar3 = *(int *)(param_1 + 0x68);
    break;
  case 0x88:
    FUN_00bfaf10(*(undefined8 *)(param_1 + 0xa8));
    FUN_00bf6c40(*(undefined8 *)(param_1 + 0xb0));
    FUN_00bf7af0(*(undefined8 *)(param_1 + 0xb8));
    uVar1 = (**(code **)(**(long **)(param_1 + 0xc0) + 0x88))();
    if (((uVar1 & 1) == 0) && (*(char *)(param_1 + 0xa4) != '\0')) {
      if (*(int *)(*(long *)(param_1 + 0x90) + 0x54) == 0) {
        uVar2 = 1;
      }
      else {
        uVar2 = 3;
      }
      FUN_010364c0(*(undefined8 *)(param_1 + 0xc0),uVar2);
      *(undefined1 *)(param_1 + 0xa4) = 0;
      *(undefined1 *)(param_1 + 0x70) = 2;
    }
    FUN_00c0e0d0(*(undefined8 *)(param_1 + 200));
    FUN_00c169c0(*(undefined8 *)(param_1 + 0xd8));
    FUN_00bf9e10(*(undefined8 *)(param_1 + 0xe0));
    FUN_00c09d80(*(undefined8 *)(param_1 + 0xe8));
    FUN_00c02870(*(undefined8 *)(param_1 + 0xf0));
    FUN_00bfe1f0(*(undefined8 *)(param_1 + 0x140));
    FUN_00bfb430(*(undefined8 *)(param_1 + 0xf8));
    FUN_00c10d80(*(undefined8 *)(param_1 + 0x100));
    FUN_00c01610(*(undefined8 *)(param_1 + 0x108));
    FUN_00bfd660(*(undefined8 *)(param_1 + 0x110));
    if ((*(byte *)(*(long *)(param_1 + 0x148) + 0x58) & 1) == 0) {
      return;
    }
    FUN_01037030(*(undefined8 *)(param_1 + 0x138));
    return;
  }
  if (iVar3 == 0) {
LAB_00bf4a44:
    uVar1 = (**(code **)(**(long **)(param_1 + 0xc0) + 0x88))();
    if (((uVar1 & 1) == 0) && (*(char *)(param_1 + 0xa4) != '\0')) {
      if (*(int *)(*(long *)(param_1 + 0x90) + 0x54) == 0) {
        uVar2 = 1;
      }
      else {
        uVar2 = 3;
      }
      FUN_010364c0(*(undefined8 *)(param_1 + 0xc0),uVar2);
      *(undefined1 *)(param_1 + 0xa4) = 0;
      *(undefined1 *)(param_1 + 0x70) = 2;
    }
  }
  else {
    FUN_00bf7af0(*(undefined8 *)(param_1 + 0xb8));
    if ((0x3f < *(uint *)(param_1 + 0x68)) ||
       ((1L << ((ulong)*(uint *)(param_1 + 0x68) & 0x3f) & 0x8000000000040042U) == 0))
    goto LAB_00bf4a44;
  }
  iVar3 = *(int *)(param_1 + 0x68);
  if (7 < iVar3 - 0x37U) {
    FUN_00c09d80(*(undefined8 *)(param_1 + 0xe8));
    iVar3 = *(int *)(param_1 + 0x68);
  }
  if (((0x2c < iVar3 - 0x42U) || ((1L << ((ulong)(iVar3 - 0x42U) & 0x3f) & 0x1c0000400003U) == 0))
     && (iVar3 != 5)) {
    FUN_00bf9e10(*(undefined8 *)(param_1 + 0xe0));
    iVar3 = *(int *)(param_1 + 0x68);
  }
  if (iVar3 != 0x11) {
    FUN_00c10d80(*(undefined8 *)(param_1 + 0x100));
    iVar3 = *(int *)(param_1 + 0x68);
    switch(iVar3) {
    case 8:
    case 9:
    case 10:
    case 0x10:
    case 0x17:
    case 0x18:
    case 0x19:
    case 0x2b:
    case 0x2c:
    case 0x52:
    case 0x53:
    case 0x54:
      goto switchD_00bf4b38_caseD_8;
    default:
      break;
    }
  }
  FUN_00c01610(*(undefined8 *)(param_1 + 0x108));
  iVar3 = *(int *)(param_1 + 0x68);
  if (iVar3 - 0x2dU < 9) goto LAB_00bf4b48;
LAB_00bf4c58:
  if ((iVar3 == 0x16) ||
     (FUN_00bfb430(*(undefined8 *)(param_1 + 0xf8)), *(int *)(param_1 + 0x68) != 0x5e))
  goto LAB_00bf4b48;
LAB_00bf4b5c:
  FUN_00bffdb0(*(undefined8 *)(param_1 + 0x120));
  if (*(int *)(param_1 + 0x68) != 0x60) goto LAB_00bf4b70;
LAB_00bf4b84:
  FUN_00bffdb0(*(undefined8 *)(param_1 + 0x130));
  uVar4 = *(uint *)(param_1 + 0x68);
  if ((uVar4 & 0xfffffffe) == 100) goto LAB_00bf4ba8;
LAB_00bf4b9c:
  FUN_00c169c0(*(undefined8 *)(param_1 + 0xd8));
  uVar4 = *(uint *)(param_1 + 0x68);
LAB_00bf4ba8:
  if (((uVar4 - 0x6f < 2) ||
      (FUN_00bfd660(*(undefined8 *)(param_1 + 0x110)), *(int *)(param_1 + 0x68) != 0x75)) &&
     (FUN_00c0e0d0(*(undefined8 *)(param_1 + 200)), *(int *)(param_1 + 0x68) == 0x76)) {
    uVar4 = *(uint *)(param_1 + 0x6c);
  }
  else {
    FUN_00bffdb0(*(undefined8 *)(param_1 + 0xd0));
    uVar4 = *(uint *)(param_1 + 0x6c);
  }
  if (uVar4 - 0x77 < 5) {
    FUN_00bfe1f0(*(undefined8 *)(param_1 + 0x140));
    *(undefined1 *)(param_1 + 0x178) = 1;
    uVar4 = *(uint *)(param_1 + 0x6c);
  }
  if (uVar4 < 0x8a) {
    switch(uVar4) {
    case 0:
    case 3:
    case 4:
    case 5:
    case 7:
    case 9:
    case 0xb:
    case 0xe:
    case 0x11:
    case 0x14:
    case 0x18:
    case 0x1b:
    case 0x21:
    case 0x2b:
    case 0x2c:
    case 0x37:
    case 0x38:
    case 0x39:
    case 0x3a:
    case 0x3b:
    case 0x3c:
    case 0x3d:
    case 0x3e:
    case 0x40:
    case 0x41:
    case 0x42:
    case 0x43:
    case 0x58:
    case 0x5b:
    case 0x67:
    case 0x71:
    case 0x80:
    case 0x89:
      FUN_00c02670(*(undefined8 *)(param_1 + 0xf0),1);
      return;
    }
  }
  return;
switchD_00bf4b38_caseD_8:
  if (8 < iVar3 - 0x2dU) goto LAB_00bf4c58;
LAB_00bf4b48:
  FUN_00c13020(*(undefined8 *)(param_1 + 0x118));
  if (*(int *)(param_1 + 0x68) != 0x5f) goto LAB_00bf4b5c;
LAB_00bf4b70:
  FUN_00c0be60(*(undefined8 *)(param_1 + 0x128));
  if (*(int *)(param_1 + 0x68) != 0x61) goto LAB_00bf4b84;
  goto LAB_00bf4b9c;
}


