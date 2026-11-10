/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 008e2f50; name: FUN_008e2f50
 */


bool FUN_008e2f50(long param_1,undefined4 param_2,int param_3)

{
  bool bVar1;
  char cVar2;
  char *pcVar3;
  
  switch(param_2) {
  case 1:
    pcVar3 = (char *)(param_1 + 0x2b4);
    break;
  case 2:
    pcVar3 = (char *)(param_1 + 0x2b5);
    break;
  case 3:
    pcVar3 = (char *)(param_1 + 0x2b6);
    break;
  case 4:
    pcVar3 = (char *)(param_1 + 0x2b7);
    break;
  case 5:
    pcVar3 = (char *)(param_1 + 0x2b8);
    break;
  case 6:
    pcVar3 = (char *)(param_1 + 0x2b9);
    break;
  case 7:
    pcVar3 = (char *)(param_1 + 0x2ba);
    break;
  default:
    cVar2 = '\0';
    goto LAB_008e2fb0;
  }
  cVar2 = *pcVar3;
LAB_008e2fb0:
  bVar1 = cVar2 < '\f';
  if (param_3 < 1) {
    bVar1 = '\0' < cVar2;
  }
  return bVar1;
}


