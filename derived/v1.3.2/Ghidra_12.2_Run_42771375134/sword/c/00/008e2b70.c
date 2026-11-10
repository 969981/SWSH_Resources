/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 008e2b70; name: FUN_008e2b70
 */


ulong FUN_008e2b70(long param_1,int param_2)

{
  char cVar1;
  long lVar2;
  ulong uVar3;
  int iVar4;
  int iVar5;
  
  lVar2 = *(long *)(param_1 + 0x460);
  iVar5 = param_2;
  if (lVar2 != 0) {
    if (param_2 == 0xb) {
      uVar3 = FUN_00932ae0(lVar2,4);
      iVar4 = 0xb;
      iVar5 = 9;
    }
    else {
      if (param_2 != 9) goto LAB_008e2bd4;
      uVar3 = FUN_00932ae0(lVar2,4);
      iVar4 = 9;
      iVar5 = 0xb;
    }
    if ((uVar3 & 1) == 0) {
      iVar5 = iVar4;
    }
  }
LAB_008e2bd4:
  switch(iVar5) {
  case 8:
    cVar1 = *(char *)(param_1 + 0x2b4);
    break;
  case 9:
    cVar1 = *(char *)(param_1 + 0x2b5);
    goto joined_r0x008e2c58;
  case 10:
    cVar1 = *(char *)(param_1 + 0x2b6);
    break;
  case 0xb:
    cVar1 = *(char *)(param_1 + 0x2b7);
joined_r0x008e2c58:
    if (cVar1 < '\a') goto switchD_008e2bf0_default;
    goto LAB_008e2c10;
  default:
    goto switchD_008e2bf0_default;
  }
  if ('\x05' < cVar1) goto switchD_008e2bf0_default;
LAB_008e2c10:
  lVar2 = *(long *)(param_1 + 0x460);
  if (lVar2 != 0) {
    if (param_2 == 0xb) {
      uVar3 = FUN_00932ae0(lVar2,4);
      iVar5 = 0xb;
      param_2 = 9;
    }
    else {
      if (param_2 != 9) goto LAB_008e2c78;
      uVar3 = FUN_00932ae0(lVar2,4);
      iVar5 = 9;
      param_2 = 0xb;
    }
    if ((uVar3 & 1) == 0) {
      param_2 = iVar5;
    }
  }
LAB_008e2c78:
  switch(param_2) {
  case 6:
  case 7:
    return 6;
  case 8:
    return (ulong)*(ushort *)(param_1 + 0x2a2);
  case 9:
    return (ulong)*(ushort *)(param_1 + 0x2a4);
  case 10:
    return (ulong)*(ushort *)(param_1 + 0x2a6);
  case 0xb:
    return (ulong)*(ushort *)(param_1 + 0x2a8);
  case 0xc:
    return (ulong)*(ushort *)(param_1 + 0x2aa);
  }
switchD_008e2bf0_default:
  uVar3 = FUN_008e12a0(param_1,param_2);
  return uVar3;
}


