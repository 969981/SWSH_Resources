/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 009ca650; name: FUN_009ca650
 */


void FUN_009ca650(long param_1)

{
  undefined4 uVar1;
  undefined8 uVar2;
  
  uVar1 = FUN_009c5470(*(undefined8 *)(param_1 + 0x20));
  switch(uVar1) {
  case 1:
    uVar2 = 0x1e2;
    break;
  case 2:
    uVar2 = 0x1e3;
    break;
  case 3:
    uVar2 = 0x1e4;
    break;
  case 4:
    uVar2 = 0x1e5;
    break;
  case 5:
    uVar2 = 0x1e6;
    break;
  case 6:
    uVar2 = 0x1e7;
    break;
  default:
    return;
  }
  FUN_009c7ca0(param_1 + 0x34,1,uVar2);
  FUN_009c7cd0(param_1 + 0x34,*(undefined1 *)(param_1 + 0x28));
  return;
}


