/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 008e3280; name: FUN_008e3280
 */


/* WARNING: Type propagation algorithm not settling */

uint FUN_008e3280(long param_1,undefined4 param_2,uint param_3)

{
  char *pcVar1;
  uint uVar2;
  char cVar3;
  
  switch(param_2) {
  case 1:
    pcVar1 = (char *)(param_1 + 0x2b4);
    cVar3 = *pcVar1;
    break;
  case 2:
    pcVar1 = (char *)(param_1 + 0x2b5);
    cVar3 = *pcVar1;
    break;
  case 3:
    pcVar1 = (char *)(param_1 + 0x2b6);
    cVar3 = *pcVar1;
    break;
  case 4:
    pcVar1 = (char *)(param_1 + 0x2b7);
    cVar3 = *pcVar1;
    break;
  case 5:
    pcVar1 = (char *)(param_1 + 0x2b8);
    cVar3 = *pcVar1;
    break;
  case 6:
    pcVar1 = (char *)(param_1 + 0x2b9);
    cVar3 = *pcVar1;
    break;
  case 7:
    pcVar1 = (char *)(param_1 + 0x2ba);
    cVar3 = *pcVar1;
    break;
  default:
    return 0;
  }
  if (cVar3 < '\x01') {
    return 0;
  }
  uVar2 = (int)cVar3;
  if ((int)(param_3 & 0xff) <= (int)cVar3) {
    uVar2 = param_3;
  }
  *pcVar1 = cVar3 - (char)uVar2;
  return uVar2;
}


