/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 005aa0e0; name: FUN_005aa0e0
 */


undefined8 FUN_005aa0e0(long param_1,int param_2)

{
  ulong uVar1;
  undefined4 uVar2;
  
  if (param_2 < 0) {
    *(undefined4 *)(param_1 + 0x170) = 0;
    switch(*(undefined4 *)(param_1 + 0xd4)) {
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
      param_2 = 0x10;
      goto LAB_005aa0f4;
    default:
      uVar1 = FUN_00538690();
      if ((uVar1 & 1) == 0) {
        param_2 = *(int *)(param_1 + 0x170);
        goto LAB_005aa130;
      }
      uVar2 = 0x18;
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
      uVar2 = 8;
    }
    *(undefined4 *)(param_1 + 0x170) = uVar2;
    param_2 = 0x10;
  }
  else {
LAB_005aa0f4:
    *(int *)(param_1 + 0x170) = param_2;
  }
LAB_005aa130:
  *(uint *)(param_1 + 0x16c) = (uint)(param_2 != 0 | *(byte *)(param_1 + 0x1e0));
  return 0;
}


