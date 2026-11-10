/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0087b910; name: FUN_0087b910
 */


bool FUN_0087b910(long param_1,int param_2)

{
  int iVar1;
  
  iVar1 = FUN_00869ee0(*(undefined8 *)(param_1 + 0x98),0);
  if (((iVar1 == param_2) ||
      (iVar1 = FUN_00869ee0(*(undefined8 *)(param_1 + 0x98),1), iVar1 == param_2)) ||
     (iVar1 = FUN_00869ee0(*(undefined8 *)(param_1 + 0x98),2), iVar1 == param_2)) {
    return true;
  }
  iVar1 = FUN_00869ee0(*(undefined8 *)(param_1 + 0x98),3);
  return iVar1 == param_2;
}


