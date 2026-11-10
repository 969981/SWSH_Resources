/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 008e3350; name: FUN_008e3350
 */


void FUN_008e3350(long param_1,undefined4 param_2,byte param_3)

{
  byte *pbVar1;
  
  switch(param_2) {
  case 1:
    pbVar1 = (byte *)(param_1 + 0x2b4);
    break;
  case 2:
    pbVar1 = (byte *)(param_1 + 0x2b5);
    goto joined_r0x008e33a4;
  case 3:
    pbVar1 = (byte *)(param_1 + 0x2b6);
joined_r0x008e33a4:
    if (0xc < param_3) {
      return;
    }
    goto LAB_008e33f8;
  case 4:
    pbVar1 = (byte *)(param_1 + 0x2b7);
    break;
  case 5:
    pbVar1 = (byte *)(param_1 + 0x2b8);
    break;
  case 6:
    pbVar1 = (byte *)(param_1 + 0x2b9);
    break;
  case 7:
    pbVar1 = (byte *)(param_1 + 0x2ba);
    break;
  default:
    goto switchD_008e336c_default;
  }
  if (param_3 < 0xd) {
LAB_008e33f8:
    *pbVar1 = param_3;
  }
switchD_008e336c_default:
  return;
}


