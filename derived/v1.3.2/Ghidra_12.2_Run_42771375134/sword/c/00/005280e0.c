/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 005280e0; name: FUN_005280e0
 */


bool FUN_005280e0(int param_1)

{
  byte bVar1;
  
  bVar1 = 0;
  switch(param_1) {
  case 0:
    return false;
  case 2:
  case 6:
  case 0x10:
  case 0x14:
  case 0x15:
  case 0x28:
  case 0x29:
    bVar1 = 1;
    break;
  case 4:
  case 8:
  case 0xd:
  case 0xe:
  case 0x12:
  case 0x1f:
  case 0x25:
  case 0x26:
  case 0x2b:
  case 0x33:
  case 0x34:
  case 0x3a:
  case 0x3b:
  case 0x3f:
  case 0x40:
  case 0x51:
  case 0x54:
    return true;
  }
  if ((0x39 < param_1 - 10U) || ((1L << ((ulong)(param_1 - 10U) & 0x3f) & 0x200100001000001U) == 0))
  {
    if ((bool)(param_1 != 0x1a & (bVar1 ^ 1))) {
      return false;
    }
    if ((param_1 - 0x14U < 0x24) && ((0x802100001U >> ((ulong)(param_1 - 0x14U) & 0x3f) & 1) != 0))
    {
      return false;
    }
  }
  return param_1 != 0x1a;
}


