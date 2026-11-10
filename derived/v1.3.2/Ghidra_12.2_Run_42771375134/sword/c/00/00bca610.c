/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00bca610; name: FUN_00bca610
 */


undefined8 FUN_00bca610(long param_1)

{
  undefined4 uVar1;
  undefined8 uVar2;
  
  uVar1 = FUN_00bcf1f0(*(undefined8 *)(param_1 + 0x5e8));
  switch(uVar1) {
  case 1:
    uVar2 = 0x15;
    break;
  case 2:
    uVar2 = 0x16;
    break;
  case 3:
    uVar2 = 0x17;
    break;
  case 4:
    uVar2 = 2;
    break;
  case 5:
    uVar2 = 0x18;
    break;
  case 6:
    uVar2 = 0x1a;
    break;
  case 7:
    uVar2 = 0x1b;
    break;
  default:
    return 1;
  }
  FUN_00bc46a0(param_1,uVar2,0);
  return 0;
}


