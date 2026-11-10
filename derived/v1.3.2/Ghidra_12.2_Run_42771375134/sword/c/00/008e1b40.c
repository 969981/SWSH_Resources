/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 008e1b40; name: FUN_008e1b40
 */


ulong FUN_008e1b40(long param_1,uint param_2)

{
  int iVar1;
  ulong uVar2;
  undefined8 uVar3;
  
  if ((*(byte *)(param_1 + (ulong)param_2 * 8 + 0x90) & 7) == 0) {
    return 0;
  }
  switch(param_2) {
  case 4:
    uVar3 = 0x10;
    break;
  case 5:
    uVar2 = FUN_008ed1d0(param_1 + (ulong)param_2 * 8 + 0x90);
    if ((uVar2 & 1) != 0) {
      iVar1 = FUN_008ec2f0(param_1,0x10,1);
      return (ulong)(iVar1 * (uint)*(byte *)(param_1 + (ulong)param_2 + 0x1f8));
    }
    uVar3 = 8;
    break;
  default:
    return 0;
  case 9:
    iVar1 = FUN_008e12a0(param_1,0x13);
    if ((iVar1 != 0xd5) && ((*(byte *)(param_1 + 0xa0) & 7) == 0)) {
      return 0;
    }
  case 10:
    uVar3 = 4;
  }
  uVar2 = FUN_008ec2f0(param_1,uVar3,1);
  return uVar2;
}


