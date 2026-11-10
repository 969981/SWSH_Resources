/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00bc5440; name: FUN_00bc5440
 */


void FUN_00bc5440(long param_1)

{
  undefined4 uVar1;
  undefined8 uVar2;
  
  uVar1 = FUN_00bcd970(*(undefined8 *)(param_1 + 0x5e8));
  switch(uVar1) {
  case 0xd:
    uVar2 = 0x11;
    break;
  case 0xe:
    uVar2 = 0xe;
    break;
  case 0xf:
    uVar2 = 0xf;
    break;
  case 0x10:
    uVar2 = 0x10;
    break;
  case 0x11:
    uVar2 = 0x12;
    break;
  case 0x12:
    uVar2 = 0x13;
    break;
  default:
    return;
  }
  FUN_00bc46a0(param_1,uVar2,0);
  return;
}


