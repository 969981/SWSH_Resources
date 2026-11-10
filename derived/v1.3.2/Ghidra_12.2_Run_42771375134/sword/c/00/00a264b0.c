/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00a264b0; name: FUN_00a264b0
 */


void FUN_00a264b0(long param_1,undefined1 param_2)

{
  char cVar1;
  undefined8 uVar2;
  undefined4 uVar3;
  undefined8 local_38;
  undefined8 local_28;
  
  local_28 = *(undefined8 *)(param_1 + 0x20);
  cVar1 = *(char *)(param_1 + 0x30);
  uVar2 = *(undefined8 *)(param_1 + 0x10);
  local_38 = *(undefined8 *)(param_1 + 0x18);
  *(undefined1 *)(param_1 + 0x30) = param_2;
  switch(param_2) {
  case 0:
    uVar3 = 0x40400000;
    break;
  case 1:
    uVar3 = 0x40800000;
    break;
  case 2:
    uVar3 = 0;
    break;
  case 3:
    uVar3 = 0x3f800000;
    break;
  case 4:
    uVar3 = 0x40000000;
    break;
  case 5:
    goto switchD_00a26504_caseD_5;
  default:
    *(undefined1 *)(param_1 + 0x30) = 0;
    return;
  }
  FUN_00ffd510(uVar3,uVar2,&local_28);
switchD_00a26504_caseD_5:
  if ((cVar1 == '\0') && (*(char *)(param_1 + 0x30) != '\0')) {
    FUN_00ffd010(uVar2,&local_38);
  }
  return;
}


