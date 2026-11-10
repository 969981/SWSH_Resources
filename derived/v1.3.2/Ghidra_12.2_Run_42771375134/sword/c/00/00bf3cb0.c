/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00bf3cb0; name: FUN_00bf3cb0
 */


void FUN_00bf3cb0(long param_1)

{
  long lVar1;
  
  if (*(int *)(param_1 + 0x68) == 0x16) {
    if (*(long *)(param_1 + 0x88) != 0) {
      FUN_00ffa3f0();
      *(undefined8 *)(param_1 + 0x88) = 0;
    }
    if (*(long *)(param_1 + 0x80) != 0) {
      FUN_00ffa3f0();
      *(undefined8 *)(param_1 + 0x80) = 0;
    }
    if (*(long *)(param_1 + 0x78) == 0) {
      return;
    }
    FUN_00ffa3f0();
    *(undefined8 *)(param_1 + 0x78) = 0;
    return;
  }
  *(long *)(param_1 + 0x78) = 0;
  *(undefined8 *)(param_1 + 0x80) = 0;
  *(undefined8 *)(param_1 + 0x88) = 0;
  switch(*(int *)(param_1 + 0x68)) {
  case 0:
    lVar1 = *(long *)(param_1 + 0xb8);
    *(long *)(param_1 + 0x78) = lVar1;
    break;
  case 1:
  case 6:
  case 0x12:
  case 0x3f:
    FUN_00ffa3d0(*(undefined8 *)(param_1 + 0xc0),0);
    lVar1 = *(long *)(param_1 + 0x78);
    break;
  case 2:
  case 3:
  case 4:
  case 7:
  case 9:
  case 10:
  case 0xb:
  case 0xc:
  case 0xd:
  case 0xf:
  case 0x10:
  case 0x13:
  case 0x15:
  case 0x18:
  case 0x19:
  case 0x1a:
  case 0x1c:
  case 0x1d:
  case 0x1e:
  case 0x1f:
  case 0x20:
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
  case 0x53:
  case 0x54:
  case 0x55:
  case 0x56:
  case 0x57:
  case 0x59:
  case 0x5b:
  case 0x5c:
  case 0x5d:
  case 0x62:
  case 99:
  case 0x67:
  case 0x68:
  case 0x69:
  case 0x6a:
  case 0x6b:
  case 0x71:
  case 0x72:
  case 0x73:
  case 0x74:
  case 0x7c:
  case 0x7d:
  case 0x7e:
  case 0x7f:
  case 0x80:
  case 0x81:
  case 0x82:
  case 0x89:
    lVar1 = *(long *)(param_1 + 0xf0);
    *(long *)(param_1 + 0x80) = lVar1;
    goto joined_r0x00bf3d34;
  case 5:
  case 0x42:
  case 0x43:
  case 0x58:
  case 0x6c:
  case 0x6d:
  case 0x6e:
    lVar1 = *(long *)(param_1 + 0xe0);
    *(long *)(param_1 + 0x78) = lVar1;
    break;
  case 8:
  case 0x17:
  case 0x52:
    lVar1 = *(long *)(param_1 + 0x108);
    *(long *)(param_1 + 0x78) = lVar1;
    break;
  default:
    goto switchD_00bf3d28_caseD_e;
  case 0x11:
    lVar1 = *(long *)(param_1 + 0x100);
    *(long *)(param_1 + 0x78) = lVar1;
    break;
  case 0x37:
  case 0x38:
  case 0x39:
  case 0x3a:
  case 0x3b:
  case 0x3c:
  case 0x3d:
  case 0x3e:
    lVar1 = *(long *)(param_1 + 0xe8);
    *(long *)(param_1 + 0x78) = lVar1;
    break;
  case 0x5e:
    lVar1 = *(long *)(param_1 + 0x118);
    *(long *)(param_1 + 0x78) = lVar1;
    break;
  case 0x5f:
    lVar1 = *(long *)(param_1 + 0x120);
    *(long *)(param_1 + 0x78) = lVar1;
    break;
  case 0x60:
    lVar1 = *(long *)(param_1 + 0x128);
    *(long *)(param_1 + 0x78) = lVar1;
    break;
  case 0x61:
    lVar1 = *(long *)(param_1 + 0x130);
    *(long *)(param_1 + 0x78) = lVar1;
    break;
  case 100:
  case 0x65:
    lVar1 = *(long *)(param_1 + 0xd8);
    *(long *)(param_1 + 0x78) = lVar1;
    break;
  case 0x6f:
  case 0x70:
    lVar1 = *(long *)(param_1 + 0x110);
    *(long *)(param_1 + 0x78) = lVar1;
    break;
  case 0x75:
    lVar1 = *(long *)(param_1 + 200);
    *(long *)(param_1 + 0x78) = lVar1;
    break;
  case 0x76:
    lVar1 = *(long *)(param_1 + 0xd0);
    *(long *)(param_1 + 0x78) = lVar1;
    break;
  case 0x77:
  case 0x78:
  case 0x79:
  case 0x7a:
  case 0x7b:
    *(undefined8 *)(param_1 + 0x88) = *(undefined8 *)(param_1 + 0x140);
    lVar1 = *(long *)(param_1 + 0x80);
    goto joined_r0x00bf3d34;
  }
  if ((lVar1 != 0) && (FUN_00ffa3d0(lVar1,0), *(long *)(*(long *)(param_1 + 0x78) + 0x4c0) != 0)) {
    FUN_016d20d0();
  }
  lVar1 = *(long *)(param_1 + 0x80);
joined_r0x00bf3d34:
  if ((lVar1 != 0) && (FUN_00ffa3d0(lVar1,0), *(long *)(*(long *)(param_1 + 0x80) + 0x4c0) != 0)) {
    FUN_016d20d0();
  }
  if ((*(long *)(param_1 + 0x88) != 0) &&
     (FUN_00ffa3d0(*(long *)(param_1 + 0x88),0), *(long *)(*(long *)(param_1 + 0x88) + 0x4c0) != 0))
  {
    FUN_016d20d0();
    return;
  }
switchD_00bf3d28_caseD_e:
  return;
}


