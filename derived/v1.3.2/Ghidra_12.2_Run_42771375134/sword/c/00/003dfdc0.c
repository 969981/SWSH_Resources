/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 003dfdc0; name: FUN_003dfdc0
 */


void FUN_003dfdc0(long param_1,long *param_2)

{
  long *plVar1;
  long lVar2;
  long *local_28;
  
  lVar2 = *param_2;
  if (lVar2 != 0) {
    FUN_003bb930(lVar2);
                    /* try { // try from 003dfde8 to 003dfdfb has its CatchHandler @ 003dfe1c */
    plVar1 = (long *)FUN_00400d30();
    (**(code **)(*plVar1 + 0x18))(plVar1,lVar2);
  }
  local_28 = param_2;
  FUN_003f4320(param_1 + 0x868,&local_28);
  return;
}


