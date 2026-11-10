/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00538690; name: FUN_00538690
 */


byte FUN_00538690(int param_1)

{
  bool bVar1;
  byte bVar2;
  
  bVar1 = false;
  bVar2 = 0;
  switch(param_1) {
  case 0:
    break;
  case 2:
  case 6:
  case 0x10:
  case 0x14:
  case 0x15:
  case 0x28:
  case 0x29:
    bVar1 = true;
  default:
    if ((param_1 - 10U < 0x3a) &&
       ((1L << ((ulong)(param_1 - 10U) & 0x3f) & 0x200100001000001U) != 0)) {
      if (bVar1) {
        return 0;
      }
      bVar2 = 1;
    }
    else {
      bVar2 = 0;
      if (bVar1) {
        return 0;
      }
    }
    break;
  case 0x1d:
    bVar2 = 0;
    param_1 = 0x1c;
    break;
  case 0x48:
    bVar2 = 0;
    param_1 = 0x47;
    break;
  case 0x4b:
    bVar2 = 0;
    param_1 = 0x4a;
    break;
  case 0x4e:
    bVar2 = 0;
    param_1 = 0x4d;
    break;
  case 0x5b:
    bVar2 = 0;
    param_1 = 0x57;
    break;
  case 0x5d:
    bVar2 = 0;
    param_1 = 0x58;
    break;
  case 99:
    bVar2 = 0;
    param_1 = 0x62;
  }
  return param_1 != 0x1a & (bVar2 ^ 0xff);
}


