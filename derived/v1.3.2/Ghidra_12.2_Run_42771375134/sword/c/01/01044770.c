/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 01044770; name: FUN_01044770
 */


void FUN_01044770(long param_1)

{
  long lVar1;
  long *plVar2;
  
  lVar1 = *(long *)(param_1 + 0x290);
  if (lVar1 == 0) {
    FUN_0077d660(0);
    lVar1 = *(long *)(param_1 + 0x298);
  }
  else {
    plVar2 = (long *)(lVar1 + 0x48);
    (**(code **)(*plVar2 + 0x10))(plVar2);
    FUN_0077d660(lVar1);
    (**(code **)(*plVar2 + 0x18))(plVar2);
    lVar1 = *(long *)(param_1 + 0x298);
  }
  if (lVar1 == 0) {
    FUN_0077d660(0);
    lVar1 = *(long *)(param_1 + 0x2a0);
  }
  else {
    plVar2 = (long *)(lVar1 + 0x48);
    (**(code **)(*plVar2 + 0x10))(plVar2);
    FUN_0077d660(lVar1);
    (**(code **)(*plVar2 + 0x18))(plVar2);
    lVar1 = *(long *)(param_1 + 0x2a0);
  }
  if (lVar1 == 0) {
    FUN_0077d660(0);
    lVar1 = *(long *)(param_1 + 0x2a8);
  }
  else {
    plVar2 = (long *)(lVar1 + 0x48);
    (**(code **)(*plVar2 + 0x10))(plVar2);
    FUN_0077d660(lVar1);
    (**(code **)(*plVar2 + 0x18))(plVar2);
    lVar1 = *(long *)(param_1 + 0x2a8);
  }
  if (lVar1 == 0) {
    FUN_0077d660(0);
    lVar1 = *(long *)(param_1 + 0x2b0);
  }
  else {
    plVar2 = (long *)(lVar1 + 0x48);
    (**(code **)(*plVar2 + 0x10))(plVar2);
    FUN_0077d660(lVar1);
    (**(code **)(*plVar2 + 0x18))(plVar2);
    lVar1 = *(long *)(param_1 + 0x2b0);
  }
  if (lVar1 == 0) {
    FUN_0077d660(0);
    lVar1 = *(long *)(param_1 + 0x2b8);
  }
  else {
    plVar2 = (long *)(lVar1 + 0x48);
    (**(code **)(*plVar2 + 0x10))(plVar2);
    FUN_0077d660(lVar1);
    (**(code **)(*plVar2 + 0x18))(plVar2);
    lVar1 = *(long *)(param_1 + 0x2b8);
  }
  if (lVar1 == 0) {
    FUN_0077d660(0);
    lVar1 = *(long *)(param_1 + 0x2c0);
  }
  else {
    plVar2 = (long *)(lVar1 + 0x48);
    (**(code **)(*plVar2 + 0x10))(plVar2);
    FUN_0077d660(lVar1);
    (**(code **)(*plVar2 + 0x18))(plVar2);
    lVar1 = *(long *)(param_1 + 0x2c0);
  }
  if (lVar1 == 0) {
    FUN_0077d660(0);
    return;
  }
  plVar2 = (long *)(lVar1 + 0x48);
  (**(code **)(*plVar2 + 0x10))(plVar2);
  FUN_0077d660(lVar1);
                    /* WARNING: Could not recover jumptable at 0x010448f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar2 + 0x18))(plVar2);
  return;
}


