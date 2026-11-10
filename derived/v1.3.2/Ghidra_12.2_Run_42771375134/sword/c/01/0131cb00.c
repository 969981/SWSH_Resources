/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0131cb00; name: FUN_0131cb00
 */


void FUN_0131cb00(undefined8 param_1,undefined4 param_2)

{
  switch(param_2) {
  case 0:
    FUN_0131bc30(0,param_1,0);
    return;
  case 1:
    FUN_0131bc30(0,param_1,1);
    return;
  case 2:
    FUN_0131bc30(0x3f000000,param_1,0);
    return;
  case 3:
    FUN_0131bc30(0x3f800000,param_1,0);
    return;
  default:
    return;
  }
}


