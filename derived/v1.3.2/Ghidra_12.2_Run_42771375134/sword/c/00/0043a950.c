/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0043a950; name: FUN_0043a950
 */


void FUN_0043a950(long param_1,long param_2)

{
  long *plVar1;
  long *plVar2;
  long *plVar3;
  long *plVar4;
  long lVar5;
  long lVar6;
  long *plVar7;
  
  plVar4 = *(long **)(param_1 + 0x50);
  while (plVar4 != (long *)0x0) {
    lVar6 = plVar4[2];
    lVar5 = *(long *)(lVar6 + 8);
    plVar7 = (long *)FUN_0043e8c0(lVar5);
    if (lVar5 == param_2) {
      *(int *)(lVar6 + 0x34) = *(int *)(lVar6 + 0x34) + 1;
      plVar4 = (long *)*plVar4;
    }
    else {
      plVar4 = (long *)*plVar4;
    }
    if (plVar7 != (long *)0x0) {
      (**(code **)(*plVar7 + 0x18))();
    }
  }
  plVar4 = *(long **)(param_1 + 0x28);
  if (plVar4 != (long *)0x0) {
    plVar7 = (long *)0x0;
    do {
      lVar5 = plVar4[2];
      lVar6 = *(long *)(lVar5 + 8);
      plVar2 = (long *)FUN_0043e8c0(lVar6);
      if (lVar6 == param_2) {
        FUN_0043a7c0(param_1,*(undefined4 *)(param_2 + 0x30),lVar5,0);
        plVar3 = (long *)*plVar4;
        plVar1 = (long *)(param_1 + 0x28);
        if (*(long **)(param_1 + 0x28) != plVar4) {
          plVar1 = plVar7;
        }
        *plVar1 = (long)plVar3;
        if (*(long **)(param_1 + 0x30) == plVar4) {
          *(long **)(param_1 + 0x30) = plVar7;
        }
        *plVar4 = *(long *)(param_1 + 0x38);
        *(long **)(param_1 + 0x38) = plVar4;
        *(int *)(param_1 + 0x4c) = *(int *)(param_1 + 0x4c) + -1;
      }
      else {
        plVar3 = (long *)*plVar4;
        plVar7 = plVar4;
      }
      plVar4 = plVar3;
      if (plVar2 != (long *)0x0) {
        (**(code **)(*plVar2 + 0x18))(plVar2);
      }
    } while (plVar4 != (long *)0x0);
  }
  return;
}


