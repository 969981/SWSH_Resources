/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 011b8720; name: FUN_011b8720
 */


undefined8 FUN_011b8720(undefined8 param_1,undefined8 param_2)

{
  undefined1 uVar1;
  undefined4 uVar2;
  ulong uVar3;
  undefined8 uVar4;
  
  uVar1 = FUN_0121c6c0(param_2);
  uVar4 = 0;
  switch(uVar1) {
  case 0:
    return 1;
  case 1:
    break;
  case 2:
    uVar4 = 4;
    break;
  case 3:
    uVar4 = 5;
    break;
  case 4:
    uVar4 = 1;
    break;
  default:
    goto switchD_011b876c_caseD_0;
  }
  uVar2 = FUN_0121c700(param_2);
  uVar3 = FUN_011b8800(param_1,uVar4,uVar2);
  if ((uVar3 & 1) != 0) {
    uVar2 = FUN_0121c710(param_2);
    uVar3 = FUN_011b8800(param_1,2,uVar2);
    if ((uVar3 & 1) != 0) {
      uVar2 = FUN_0121c720(param_2);
      uVar4 = FUN_011b8800(param_1,3,uVar2);
      return uVar4;
    }
  }
switchD_011b876c_caseD_0:
  return 0;
}


