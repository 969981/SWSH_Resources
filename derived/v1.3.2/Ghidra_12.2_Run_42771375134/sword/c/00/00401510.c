/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00401510; name: FUN_00401510
 */


undefined8 FUN_00401510(undefined8 param_1,long param_2,undefined8 param_3,undefined4 param_4)

{
  long *plVar1;
  undefined8 uVar2;
  
  if (param_2 == 0) {
    return 0;
  }
  plVar1 = (long *)FUN_00400d30();
                    /* WARNING: Could not recover jumptable at 0x0040155c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar2 = (**(code **)(*plVar1 + 0x10))(plVar1,param_2,&DAT_01d38550,param_3,param_4);
  return uVar2;
}


