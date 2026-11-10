/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0039ae80; name: FUN_0039ae80
 */


undefined8 FUN_0039ae80(long param_1,ulong param_2)

{
  long *plVar1;
  undefined8 uVar2;
  
  plVar1 = *(long **)(param_1 + (param_2 & 0xffffffff) * 0x30);
  if ((plVar1 == (long *)0x0) || (*(int *)(param_1 + (param_2 & 0xffffffff) * 0x30 + 0x28) != 1)) {
    return 0;
  }
                    /* WARNING: Could not recover jumptable at 0x0039aeb4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar2 = (**(code **)(*plVar1 + 0x98))();
  return uVar2;
}


