/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 005f6760; name: FUN_005f6760
 */


undefined8 FUN_005f6760(long param_1,undefined4 *param_2)

{
  int iVar1;
  undefined4 uVar2;
  
  *param_2 = 0;
  if ((((*(uint *)(param_1 + 4) ^ 0xffffffff) & 0x41) == 0) && (*(int *)(param_1 + 0xc) == 0x20)) {
    if (*(int *)(param_1 + 0x10) == 0xff0000) {
      if (*(int *)(param_1 + 0x14) != 0xff00) {
        return 0;
      }
      if (*(int *)(param_1 + 0x18) != 0xff) {
        return 0;
      }
      if (*(int *)(param_1 + 0x1c) != -0x1000000) {
        return 0;
      }
      uVar2 = 0x57;
    }
    else {
      if (*(int *)(param_1 + 0x10) != 0xff) {
        return 0;
      }
      if (*(int *)(param_1 + 0x14) != 0xff00) {
        return 0;
      }
      if (*(int *)(param_1 + 0x18) != 0xff0000) {
        return 0;
      }
      if (*(int *)(param_1 + 0x1c) != -0x1000000) {
        return 0;
      }
      uVar2 = 0x1c;
    }
  }
  else {
    if ((*(uint *)(param_1 + 4) >> 2 & 1) == 0) {
      return 0;
    }
    iVar1 = *(int *)(param_1 + 8);
    if (iVar1 < 0x31545844) {
      switch(iVar1) {
      case 0x6e:
        uVar2 = 0xd;
        break;
      case 0x6f:
        uVar2 = 0x36;
        break;
      case 0x70:
        uVar2 = 0x22;
        break;
      case 0x71:
        uVar2 = 10;
        break;
      case 0x72:
        uVar2 = 0x29;
        break;
      case 0x73:
        uVar2 = 0x10;
        break;
      case 0x74:
        uVar2 = 2;
        break;
      default:
        if (iVar1 != 0x24) {
          return 0;
        }
        uVar2 = 0xb;
      }
    }
    else {
      if (iVar1 < 0x33545844) {
        if (iVar1 == 0x31545844) {
          uVar2 = 0x47;
          goto LAB_005f6910;
        }
        if (iVar1 != 0x32545844) {
          return 0;
        }
      }
      else if (iVar1 != 0x33545844) {
        if ((iVar1 != 0x34545844) && (iVar1 != 0x35545844)) {
          return 0;
        }
        uVar2 = 0x4d;
        goto LAB_005f6910;
      }
      uVar2 = 0x4a;
    }
  }
LAB_005f6910:
  *param_2 = uVar2;
  return 1;
}


