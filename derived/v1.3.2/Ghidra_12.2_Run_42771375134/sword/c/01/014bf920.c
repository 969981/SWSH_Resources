/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 014bf920; name: FUN_014bf920
 */


bool FUN_014bf920(long param_1,int param_2)

{
  long lVar1;
  
  if ((param_1 == 0) ||
     (((lVar1 = FUN_019c1410(param_1,&DAT_01d07b51), lVar1 == 0 &&
       (lVar1 = FUN_019c1410(param_1,"no_short"), lVar1 == 0)) ||
      (*(int *)(lVar1 + (ulong)*(uint *)(lVar1 + 4)) == 0)))) {
    return param_2 - 2U < 5;
  }
  return false;
}


