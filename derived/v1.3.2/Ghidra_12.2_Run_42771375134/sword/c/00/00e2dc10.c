/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00e2dc10; name: FUN_00e2dc10
 */


undefined8 FUN_00e2dc10(undefined8 param_1,undefined8 *param_2)

{
  ulong uVar1;
  undefined8 uVar2;
  long *plVar3;
  
  plVar3 = (long *)*param_2;
  uVar1 = (**(code **)(*plVar3 + 0x78))(plVar3);
  if (((uVar1 & 1) == 0) && (uVar1 = (**(code **)(*plVar3 + 0x28))(plVar3), (uVar1 & 1) != 0)) {
                    /* WARNING: Could not recover jumptable at 0x00e2dc5c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar2 = (**(code **)(*plVar3 + 0x70))(plVar3);
    return uVar2;
  }
  return 0;
}


