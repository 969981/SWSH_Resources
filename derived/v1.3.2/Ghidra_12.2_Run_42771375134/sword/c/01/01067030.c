/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 01067030; name: FUN_01067030
 */


/* WARNING: Control flow encountered bad instruction data */

void FUN_01067030(long param_1,undefined8 param_2,undefined4 param_3,undefined8 param_4,
                 undefined4 param_5)

{
  long lVar1;
  long *plVar2;
  long lVar3;
  long *plVar4;
  
  lVar1 = *(long *)(param_1 + 0x58);
  if (lVar1 == 0) {
    return;
  }
  lVar3 = *(long *)(lVar1 + 0x160);
  if (lVar3 == 0) {
    FUN_01053080(0,param_2,param_3);
    lVar3 = *(long *)(lVar1 + 0x168);
  }
  else {
    plVar4 = (long *)(lVar3 + 0x48);
    (**(code **)(*plVar4 + 0x10))(plVar4);
    FUN_01053080(lVar3,param_2,param_3);
    (**(code **)(*plVar4 + 0x18))(plVar4);
    lVar3 = *(long *)(lVar1 + 0x168);
  }
  if (lVar3 == 0) {
    FUN_01053080(0,param_4,param_5);
    plVar4 = *(long **)(lVar1 + 0x168);
  }
  else {
    plVar4 = (long *)(lVar3 + 0x48);
    (**(code **)(*plVar4 + 0x10))(plVar4);
    FUN_01053080(lVar3,param_4,param_5);
    (**(code **)(*plVar4 + 0x18))(plVar4);
    plVar4 = *(long **)(lVar1 + 0x168);
  }
  if (plVar4 == (long *)0x0) {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  plVar2 = plVar4 + 9;
  (**(code **)(*plVar2 + 0x10))(plVar2);
  (**(code **)(*plVar4 + 0x70))(plVar4,1,0);
                    /* WARNING: Could not recover jumptable at 0x01067138. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar2 + 0x18))(plVar2);
  return;
}


