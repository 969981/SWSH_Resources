/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 009a8460; name: FUN_009a8460
 */


void FUN_009a8460(undefined8 param_1,undefined8 param_2,undefined4 param_3)

{
  ulong uVar1;
  
  uVar1 = FUN_008e1600(param_2);
  if ((uVar1 & 1) == 0) {
    FUN_009a8570(param_1,param_2,param_3);
    switch(param_3) {
    case 8:
      FUN_009a89f0(param_1,param_2);
      return;
    case 0x12:
      FUN_009a8730(param_1,param_2);
      return;
    case 0x14:
      FUN_009a8650(param_1,param_2);
      return;
    case 0x15:
      FUN_009a8920(param_1,param_2);
      return;
    case 0x17:
      FUN_009a8d10(param_1,param_2);
      return;
    case 0x24:
      FUN_009a8c30(param_1,param_2);
      return;
    case 0x2b:
      FUN_009a8de0(param_1,param_2);
      return;
    }
  }
  return;
}


