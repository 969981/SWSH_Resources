/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 01306880; name: FUN_01306880
 */


void FUN_01306880(long param_1)

{
  long *plVar1;
  long *plVar2;
  long *plVar3;
  long local_38;
  
  plVar3 = *(long **)(param_1 + 0xf0);
  plVar1 = *(long **)(param_1 + 0xf8);
  do {
    if (plVar3 == plVar1) {
      return;
    }
    while (local_38 = *plVar3, local_38 != 0) {
      plVar2 = (long *)(local_38 + 0x48);
      (**(code **)(*plVar2 + 0x10))(plVar2);
      FUN_01306370(param_1,&local_38);
      (**(code **)(*plVar2 + 0x18))(plVar2);
      plVar3 = plVar3 + 1;
      if (plVar1 == plVar3) {
        return;
      }
    }
    FUN_01306370(param_1,&local_38);
    plVar3 = plVar3 + 1;
  } while( true );
}


