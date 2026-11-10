/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 006a0ce0; name: FUN_006a0ce0
 */


void FUN_006a0ce0(undefined8 param_1,long param_2)

{
  long lVar1;
  char cVar2;
  long lVar3;
  long *plVar4;
  undefined8 uVar5;
  
  lVar3 = FUN_006a9880(param_2 + 0x10);
  if (lVar3 == 0) {
    return;
  }
  lVar1 = param_2 + 0x130;
  uVar5 = FUN_0069a8a0(lVar1);
  FUN_0069a680(param_1,lVar1);
  plVar4 = *(long **)(param_2 + 0x150);
  if ((char)plVar4[1] == '\0') {
    (**(code **)(*plVar4 + 0x28))(uVar5,plVar4,lVar1,lVar3);
    plVar4 = *(long **)(param_2 + 0x170);
    cVar2 = (char)plVar4[1];
  }
  else {
    plVar4 = *(long **)(param_2 + 0x170);
    cVar2 = (char)plVar4[1];
  }
  if (cVar2 == '\0') {
    (**(code **)(*plVar4 + 0x28))(uVar5,plVar4,lVar1,lVar3);
    plVar4 = *(long **)(param_2 + 400);
    cVar2 = (char)plVar4[1];
  }
  else {
    plVar4 = *(long **)(param_2 + 400);
    cVar2 = (char)plVar4[1];
  }
  if (cVar2 == '\0') {
    (**(code **)(*plVar4 + 0x28))(uVar5,plVar4,lVar1,lVar3);
    plVar4 = *(long **)(param_2 + 0x1b0);
    cVar2 = (char)plVar4[1];
  }
  else {
    plVar4 = *(long **)(param_2 + 0x1b0);
    cVar2 = (char)plVar4[1];
  }
  if (cVar2 == '\0') {
    (**(code **)(*plVar4 + 0x28))(uVar5,plVar4,lVar1,lVar3);
    plVar4 = *(long **)(param_2 + 0x1d0);
    cVar2 = (char)plVar4[1];
  }
  else {
    plVar4 = *(long **)(param_2 + 0x1d0);
    cVar2 = (char)plVar4[1];
  }
  if (cVar2 == '\0') {
                    /* WARNING: Could not recover jumptable at 0x006a0e2c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar4 + 0x28))(uVar5,plVar4,lVar1,lVar3);
    return;
  }
  return;
}


