/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 006a0bf0; name: FUN_006a0bf0
 */


void FUN_006a0bf0(undefined8 *param_1)

{
  char cVar1;
  long lVar2;
  long *plVar3;
  
  lVar2 = FUN_006a9880(param_1 + 2);
  if (lVar2 == 0) {
    return;
  }
  plVar3 = (long *)param_1[0x2a];
  if ((char)plVar3[1] == '\0') {
    (**(code **)(*plVar3 + 0x30))(plVar3,*param_1);
    plVar3 = (long *)param_1[0x2e];
    cVar1 = (char)plVar3[1];
  }
  else {
    plVar3 = (long *)param_1[0x2e];
    cVar1 = (char)plVar3[1];
  }
  if (cVar1 == '\0') {
    (**(code **)(*plVar3 + 0x30))(plVar3,*param_1);
    plVar3 = (long *)param_1[0x32];
    cVar1 = (char)plVar3[1];
  }
  else {
    plVar3 = (long *)param_1[0x32];
    cVar1 = (char)plVar3[1];
  }
  if (cVar1 == '\0') {
    (**(code **)(*plVar3 + 0x30))(plVar3,*param_1);
    plVar3 = (long *)param_1[0x36];
    cVar1 = (char)plVar3[1];
  }
  else {
    plVar3 = (long *)param_1[0x36];
    cVar1 = (char)plVar3[1];
  }
  if (cVar1 == '\0') {
    (**(code **)(*plVar3 + 0x30))(plVar3,*param_1);
    plVar3 = (long *)param_1[0x3a];
    cVar1 = (char)plVar3[1];
  }
  else {
    plVar3 = (long *)param_1[0x3a];
    cVar1 = (char)plVar3[1];
  }
  if (cVar1 == '\0') {
                    /* WARNING: Could not recover jumptable at 0x006a0cd8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar3 + 0x30))(plVar3,*param_1);
    return;
  }
  return;
}


