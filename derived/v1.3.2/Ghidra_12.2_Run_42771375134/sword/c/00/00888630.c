/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00888630; name: FUN_00888630
 */


ulong FUN_00888630(long *param_1,int param_2)

{
  uint *puVar1;
  char cVar2;
  long lVar3;
  
  switch(param_2) {
  case 0:
    return (ulong)*(uint *)(param_1 + 1);
  case 1:
    return (ulong)*(uint *)*param_1;
  case 2:
    return (ulong)*(uint *)(*param_1 + 4);
  case 3:
    return (ulong)*(uint *)(*param_1 + 8);
  case 4:
    return (long)*(short *)(*param_1 + 0x1a);
  case 5:
    return (ulong)*(byte *)(*param_1 + 0xc);
  case 6:
    return (ulong)*(byte *)(*param_1 + 0xd);
  case 7:
    return (ulong)*(byte *)(*param_1 + 0xe);
  case 8:
    return (ulong)(*(ushort *)(*param_1 + 0x10) >> 0xc & 1);
  case 9:
    return (ulong)*(byte *)(*param_1 + 0x12);
  case 10:
    return (ulong)*(byte *)(*param_1 + 0xf);
  case 0xb:
    return (ulong)(*(ushort *)(*param_1 + 0x10) & 0x1f);
  case 0xc:
    return (ulong)(*(ushort *)(*param_1 + 0x10) >> 5 & 1);
  case 0xd:
    return (ulong)(*(ushort *)(*param_1 + 0x10) >> 6 & 1);
  case 0xe:
    return (ulong)(*(byte *)(*param_1 + 0x11) & 0xf);
  case 0xf:
    return (ulong)*(byte *)(*param_1 + 0x13);
  case 0x10:
    return (ulong)*(byte *)(*param_1 + 0x14);
  case 0x11:
    return (ulong)*(byte *)(*param_1 + 0x15);
  case 0x12:
    return (ulong)*(byte *)(*param_1 + 0x16);
  case 0x13:
    return (ulong)(*(byte *)(*param_1 + 0x17) & 0xf);
  case 0x14:
    return (ulong)(*(byte *)(*param_1 + 0x17) >> 4);
  case 0x15:
    return (ulong)*(byte *)(*param_1 + 0x18);
  case 0x16:
    return (ulong)*(byte *)(*param_1 + 0x1c);
  case 0x17:
    return (ulong)*(byte *)(*param_1 + 0x1d);
  case 0x18:
    return (ulong)(*(ushort *)(*param_1 + 0x10) >> 7 & 1);
  case 0x19:
    return (ulong)(*(ushort *)(*param_1 + 0x10) >> 0xd & 1);
  }
  lVar3 = *param_1;
  cVar2 = *(char *)(lVar3 + 0x15);
  if (cVar2 != '\x02') {
    if (cVar2 == '\x01') {
      if (0x2c < param_2 - 0x1aU) {
        return 0;
      }
      puVar1 = (uint *)(lVar3 + 0x1e);
      switch(param_2) {
      case 0x1a:
        return (ulong)(*puVar1 & 1);
      case 0x1b:
        return (ulong)(*puVar1 >> 1 & 1);
      case 0x1c:
        return (ulong)(*puVar1 >> 2 & 1);
      case 0x1d:
        return (ulong)(*puVar1 >> 3 & 1);
      case 0x1e:
        return (ulong)(*puVar1 >> 4 & 1);
      case 0x1f:
        return (ulong)(*puVar1 >> 5 & 1);
      case 0x20:
        return (ulong)(*puVar1 >> 6 & 1);
      case 0x21:
        return (ulong)(*puVar1 >> 7 & 1);
      case 0x22:
        return (ulong)(*puVar1 >> 8 & 1);
      case 0x23:
        return (ulong)(*puVar1 >> 9 & 1);
      case 0x24:
        return (ulong)(*puVar1 >> 10 & 1);
      case 0x25:
        return (ulong)(*puVar1 >> 0xb & 1);
      case 0x26:
        return (ulong)(*puVar1 >> 0xc & 0xf);
      case 0x27:
        return (ulong)(*(ushort *)(lVar3 + 0x20) & 0xf);
      case 0x28:
        return (ulong)(*puVar1 >> 0x14 & 0xf);
      case 0x29:
        return (ulong)(*(byte *)(lVar3 + 0x21) & 0xf);
      case 0x2a:
        return (ulong)(*puVar1 >> 0x1c);
      case 0x2b:
        return (ulong)(*(ushort *)(lVar3 + 0x22) & 0xf);
      case 0x2c:
        return (ulong)(*(ushort *)(lVar3 + 0x22) >> 4 & 3);
      case 0x2d:
        return (ulong)(*(ushort *)(lVar3 + 0x22) >> 6 & 1);
      case 0x2e:
        return (ulong)(*(ushort *)(lVar3 + 0x22) >> 7 & 1);
      case 0x2f:
        return (ulong)(*(byte *)(lVar3 + 0x23) & 1);
      case 0x30:
        return (ulong)(*(ushort *)(lVar3 + 0x22) >> 9 & 1);
      case 0x31:
        return (ulong)(*(ushort *)(lVar3 + 0x22) >> 10 & 1);
      case 0x32:
        return (ulong)(*(ushort *)(lVar3 + 0x22) >> 0xb & 1);
      case 0x33:
        return (ulong)(*(ushort *)(lVar3 + 0x22) >> 0xc & 1);
      case 0x34:
        return (ulong)(*(ushort *)(lVar3 + 0x22) >> 0xd & 1);
      case 0x35:
        return (ulong)(*(ushort *)(lVar3 + 0x22) >> 0xe & 1);
      case 0x36:
        return (ulong)(*(ushort *)(lVar3 + 0x22) >> 0xf);
      case 0x37:
        return (ulong)(*(byte *)(lVar3 + 0x24) & 1);
      case 0x38:
        return (ulong)(*(byte *)(lVar3 + 0x24) >> 1 & 1);
      case 0x39:
        return (ulong)(*(byte *)(lVar3 + 0x24) >> 2 & 1);
      case 0x3a:
        return (ulong)(*(byte *)(lVar3 + 0x24) >> 3 & 1);
      case 0x3b:
        return (ulong)(*(byte *)(lVar3 + 0x24) >> 4 & 1);
      case 0x3c:
        return (long)*(char *)(lVar3 + 0x25);
      case 0x3d:
        return (long)*(char *)(lVar3 + 0x26);
      case 0x3e:
        return (long)*(char *)(lVar3 + 0x27);
      case 0x3f:
        return (long)*(char *)(lVar3 + 0x28);
      case 0x40:
        return (long)*(char *)(lVar3 + 0x29);
      case 0x41:
        return (long)*(char *)(lVar3 + 0x2a);
      case 0x42:
        return (ulong)*(byte *)(lVar3 + 0x2b);
      case 0x43:
        return (ulong)*(byte *)(lVar3 + 0x2c);
      case 0x44:
        return (long)*(char *)(lVar3 + 0x2d);
      case 0x45:
        return (long)*(char *)(lVar3 + 0x2e);
      case 0x46:
        return (long)*(char *)(lVar3 + 0x2f);
      }
    }
    if (cVar2 != '\0') {
      return 0;
    }
  }
  return (ulong)*(byte *)(lVar3 + 0x1e);
}


