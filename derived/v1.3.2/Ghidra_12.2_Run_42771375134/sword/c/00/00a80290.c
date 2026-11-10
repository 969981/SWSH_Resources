/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00a80290; name: FUN_00a80290
 */


undefined4 FUN_00a80290(long param_1,undefined4 param_2)

{
  undefined4 uVar1;
  
  uVar1 = 0;
  switch(param_2) {
  case 0:
    return *(undefined4 *)(param_1 + 0x1700);
  case 1:
  case 2:
    return *(undefined4 *)(param_1 + 0x16fc);
  case 3:
    break;
  case 4:
    return 1;
  case 5:
    return 2;
  case 6:
    return 3;
  case 7:
    return 4;
  case 8:
    return 5;
  case 9:
    return 6;
  default:
    uVar1 = 0xff;
  }
  return uVar1;
}


