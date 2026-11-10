/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 008e1720; name: FUN_008e1720
 */


ulong FUN_008e1720(long param_1,int param_2)

{
  long lVar1;
  ulong uVar2;
  int iVar3;
  
  lVar1 = *(long *)(param_1 + 0x460);
  if (lVar1 != 0) {
    if (param_2 == 0xb) {
      uVar2 = FUN_00932ae0(lVar1,4);
      iVar3 = 0xb;
      param_2 = 9;
    }
    else {
      if (param_2 != 9) goto LAB_008e1778;
      uVar2 = FUN_00932ae0(lVar1,4);
      iVar3 = 9;
      param_2 = 0xb;
    }
    if ((uVar2 & 1) == 0) {
      param_2 = iVar3;
    }
  }
LAB_008e1778:
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
  default:
    uVar2 = FUN_008e12a0(param_1);
    return uVar2;
  }
}


