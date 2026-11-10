/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00bf36d0; name: FUN_00bf36d0
 */


void FUN_00bf36d0(long param_1)

{
  int iVar1;
  ulong uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  ulong uVar5;
  
  uVar5 = 0;
  uVar2 = 0;
  switch(*(undefined4 *)(param_1 + 0x68)) {
  case 0:
    uVar2 = FUN_00bf73f0(*(undefined8 *)(param_1 + 0xb8));
    break;
  case 1:
  case 2:
  case 3:
  case 4:
  case 6:
  case 7:
  case 8:
  case 9:
  case 10:
  case 0xb:
  case 0xc:
  case 0xd:
  case 0xe:
  case 0xf:
  case 0x10:
  case 0x12:
  case 0x13:
  case 0x14:
  case 0x15:
  case 0x16:
  case 0x17:
  case 0x18:
  case 0x19:
  case 0x1a:
  case 0x1b:
  case 0x1c:
  case 0x1d:
  case 0x1e:
  case 0x1f:
  case 0x20:
  case 0x21:
  case 0x22:
  case 0x23:
  case 0x24:
  case 0x25:
  case 0x26:
  case 0x27:
  case 0x28:
  case 0x29:
  case 0x2a:
  case 0x2b:
  case 0x2c:
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
  case 0x41:
  case 0x44:
  case 0x45:
  case 0x46:
  case 0x47:
  case 0x48:
  case 0x49:
  case 0x4a:
  case 0x4b:
  case 0x4c:
  case 0x4d:
  case 0x4e:
  case 0x4f:
  case 0x50:
  case 0x51:
  case 0x52:
  case 0x53:
  case 0x54:
  case 0x55:
  case 0x56:
  case 0x57:
  case 0x59:
  case 0x5a:
  case 0x5b:
  case 0x5c:
  case 0x5d:
  case 0x5e:
  case 0x5f:
  case 0x60:
  case 0x61:
  case 0x62:
  case 99:
  case 100:
  case 0x65:
  case 0x66:
  case 0x67:
  case 0x68:
  case 0x69:
  case 0x6a:
  case 0x6b:
    goto switchD_00bf3704_caseD_1;
  case 5:
  case 0x58:
  case 0x6c:
    uVar3 = *(undefined8 *)(param_1 + 0xe0);
    uVar4 = 1;
    goto LAB_00bf3728;
  case 0x11:
    uVar2 = FUN_00c10680(*(undefined8 *)(param_1 + 0x100));
    break;
  case 0x37:
    uVar2 = FUN_00c09480(*(undefined8 *)(param_1 + 0xe8),0);
    break;
  case 0x38:
    uVar2 = FUN_00c09480(*(undefined8 *)(param_1 + 0xe8),1);
    break;
  case 0x39:
    uVar2 = FUN_00c09480(*(undefined8 *)(param_1 + 0xe8),2);
    break;
  case 0x3a:
    uVar2 = FUN_00c09480(*(undefined8 *)(param_1 + 0xe8),3);
    break;
  case 0x3b:
    uVar2 = FUN_00c09480(*(undefined8 *)(param_1 + 0xe8),4);
    break;
  case 0x3c:
    uVar2 = FUN_00c09480(*(undefined8 *)(param_1 + 0xe8),5);
    break;
  case 0x3d:
    uVar2 = FUN_00c09480(*(undefined8 *)(param_1 + 0xe8),6);
    break;
  case 0x3e:
    uVar2 = FUN_00c09480(*(undefined8 *)(param_1 + 0xe8),7);
    break;
  case 0x42:
  case 0x43:
    uVar3 = *(undefined8 *)(param_1 + 0xe0);
    uVar4 = 0;
    goto LAB_00bf3728;
  case 0x6d:
  case 0x6e:
    uVar3 = *(undefined8 *)(param_1 + 0xe0);
    uVar4 = 2;
LAB_00bf3728:
    uVar2 = FUN_00bf97c0(uVar3,uVar4);
    break;
  default:
    uVar2 = 0;
    if (*(int *)(param_1 + 0x9c) != 0) goto LAB_00bf3748;
    goto LAB_00bf373c;
  }
  uVar5 = uVar2 >> 0x20;
switchD_00bf3704_caseD_1:
  if (*(int *)(param_1 + 0x9c) == (int)uVar2) {
LAB_00bf373c:
    if (*(int *)(param_1 + 0xa0) == (int)uVar5) {
      return;
    }
  }
LAB_00bf3748:
  *(ulong *)(param_1 + 0x9c) = uVar2 & 0xffffffff | uVar5 << 0x20;
  if (*(char *)(param_1 + 0x98) == '\0') {
    FUN_00bf3850(param_1);
    iVar1 = *(int *)(param_1 + 0x68);
  }
  else {
    iVar1 = *(int *)(param_1 + 0x68);
  }
  if (iVar1 == 0x11) {
    FUN_00bf5040(param_1);
    return;
  }
  return;
}


