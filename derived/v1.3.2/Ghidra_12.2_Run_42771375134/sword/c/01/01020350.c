/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 01020350; name: FUN_01020350
 */


undefined8 FUN_01020350(long param_1)

{
  ulong uVar1;
  undefined8 uVar2;
  long *plVar3;
  
  plVar3 = (long *)(param_1 + 0x20);
  if (((long *)*plVar3 == (long *)0x0) ||
     (uVar1 = (**(code **)(*(long *)*plVar3 + 0x58))(), (uVar1 & 1) == 0)) {
    plVar3 = (long *)(param_1 + 0x40);
    if (((long *)*plVar3 == (long *)0x0) ||
       (uVar1 = (**(code **)(*(long *)*plVar3 + 0x58))(), (uVar1 & 1) == 0)) {
      return 0;
    }
  }
                    /* WARNING: Could not recover jumptable at 0x010203ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar2 = (**(code **)(*(long *)*plVar3 + 0x40))();
  return uVar2;
}


