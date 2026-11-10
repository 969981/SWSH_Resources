/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00954750; name: thunk_FUN_008daae0
 */


void thunk_FUN_008daae0(long param_1,long param_2)

{
  ulong uVar1;
  undefined8 uVar2;
  
  if ((param_2 == 0) || (uVar1 = FUN_008dba10(param_2), (uVar1 & 1) == 0)) {
    return;
  }
  uVar1 = FUN_008dba30(param_2);
  if ((uVar1 & 1) == 0) {
    uVar2 = FUN_00931990(*(undefined8 *)(param_1 + 8));
    FUN_008dcfc0(uVar2,param_2);
    return;
  }
  FUN_008dbb00(param_2,1);
  return;
}


