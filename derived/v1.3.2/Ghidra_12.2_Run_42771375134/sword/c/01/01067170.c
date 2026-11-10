/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 01067170; name: FUN_01067170
 */


/* WARNING: Control flow encountered bad instruction data */

void FUN_01067170(long param_1)

{
  long lVar1;
  long lVar2;
  long *plVar3;
  long *plVar4;
  
  lVar1 = *(long *)(param_1 + 0x58);
  if (lVar1 == 0) {
    return;
  }
  lVar2 = *(long *)(lVar1 + 0x160);
  if (lVar2 == 0) {
    FUN_01053260(0);
    lVar2 = *(long *)(lVar1 + 0x168);
  }
  else {
    plVar4 = (long *)(lVar2 + 0x48);
    (**(code **)(*plVar4 + 0x10))(plVar4);
    FUN_01053260(lVar2);
    (**(code **)(*plVar4 + 0x18))(plVar4);
    lVar2 = *(long *)(lVar1 + 0x168);
  }
  if (lVar2 == 0) {
    FUN_01053260(0);
    plVar4 = *(long **)(lVar1 + 0x168);
  }
  else {
    plVar4 = (long *)(lVar2 + 0x48);
    (**(code **)(*plVar4 + 0x10))(plVar4);
    FUN_01053260(lVar2);
    (**(code **)(*plVar4 + 0x18))(plVar4);
    plVar4 = *(long **)(lVar1 + 0x168);
  }
  if (plVar4 == (long *)0x0) {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  plVar3 = plVar4 + 9;
  (**(code **)(*plVar3 + 0x10))(plVar3);
  (**(code **)(*plVar4 + 0x70))(plVar4,0,0);
                    /* WARNING: Could not recover jumptable at 0x01067248. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar3 + 0x18))(plVar3);
  return;
}


