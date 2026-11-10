/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00482e30; name: FUN_00482e30
 */


void FUN_00482e30(undefined4 param_1)

{
  long *plVar1;
  
  plVar1 = (long *)FUN_00435260(*(undefined8 *)PTR_DAT_02712ae8,param_1,0);
  if (plVar1 == (long *)0x0) {
    return;
  }
  (**(code **)(*plVar1 + 0x140))(plVar1);
  (**(code **)(*plVar1 + 0x18))(plVar1);
                    /* WARNING: Could not recover jumptable at 0x00482e94. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar1 + 0x18))(plVar1);
  return;
}


