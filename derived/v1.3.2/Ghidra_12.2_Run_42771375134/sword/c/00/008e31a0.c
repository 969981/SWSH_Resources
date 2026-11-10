/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 008e31a0; name: FUN_008e31a0
 */


/* WARNING: Type propagation algorithm not settling */

uint FUN_008e31a0(long param_1,undefined4 param_2,uint param_3)

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
  if ('\v' < cVar3) {
    return 0;
  }
  uVar2 = 0xc - (int)cVar3;
  if ((int)((int)cVar3 + (param_3 & 0xff)) < 0xd) {
    uVar2 = param_3;
  }
  *pcVar1 = (char)uVar2 + cVar3;
  return uVar2;
}


