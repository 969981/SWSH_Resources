/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0138aae0; name: FUN_0138aae0
 */


void FUN_0138aae0(long param_1,long *param_2)

{
  long lVar1;
  long lVar2;
  long *plVar3;
  undefined1 auStack_38 [8];
  
  lVar1 = FUN_0137a500(*param_2,auStack_38);
  if (lVar1 != 0) {
    plVar3 = (long *)(param_1 + 0x80);
    if (*plVar3 != 0) {
      plVar3 = (long *)(*plVar3 + 0x48);
      (**(code **)(*plVar3 + 0x10))(plVar3);
      (**(code **)(*plVar3 + 0x18))(plVar3);
      plVar3 = (long *)(param_1 + 0x88);
      if (*plVar3 != 0) {
        plVar3 = (long *)(*plVar3 + 0x48);
        (**(code **)(*plVar3 + 0x10))(plVar3);
        (**(code **)(*plVar3 + 0x18))(plVar3);
        plVar3 = (long *)(param_1 + 0x90);
        if (*plVar3 != 0) {
          plVar3 = (long *)(*plVar3 + 0x48);
          (**(code **)(*plVar3 + 0x10))(plVar3);
          (**(code **)(*plVar3 + 0x18))(plVar3);
          plVar3 = (long *)(param_1 + 0x98);
          if (*plVar3 != 0) {
            plVar3 = (long *)(*plVar3 + 0x48);
            (**(code **)(*plVar3 + 0x10))(plVar3);
            (**(code **)(*plVar3 + 0x18))(plVar3);
                    /* WARNING: Subroutine does not return */
            nn::diag::detail::AbortImpl("","","",0);
          }
        }
      }
    }
    lVar1 = *param_2;
    if (lVar1 == 0) {
      *plVar3 = 0;
    }
    else {
      (**(code **)(*(long *)(lVar1 + 0x48) + 0x10))();
      lVar2 = *plVar3;
      *plVar3 = lVar1;
      if (lVar2 != 0) {
        (**(code **)(*(long *)(lVar2 + 0x48) + 0x18))();
      }
    }
  }
  return;
}


