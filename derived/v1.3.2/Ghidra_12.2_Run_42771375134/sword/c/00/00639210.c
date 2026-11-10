/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00639210; name: FUN_00639210
 */


long * FUN_00639210(long param_1,long param_2)

{
  long *plVar1;
  long lVar2;
  undefined1 auStack_40 [16];
  
  FUN_006966f0(auStack_40,param_1 + 0x18,1);
  plVar1 = (long *)FUN_006348c0(param_1);
  while ((plVar1 != (long *)0x0 && (lVar2 = (**(code **)(*plVar1 + 0xa8))(plVar1), lVar2 != param_2)
         )) {
    plVar1 = (long *)FUN_00634920(param_1,plVar1);
  }
  FUN_00696730(auStack_40);
  return plVar1;
}


