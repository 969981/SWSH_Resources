/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0087c370; name: FUN_0087c370
 */


void FUN_0087c370(long param_1)

{
  int iVar1;
  
  iVar1 = FUN_00869ee0(*(undefined8 *)(param_1 + 0x98),0);
  if (iVar1 == 0) {
    FUN_0087c240(param_1,0,1);
    FUN_0087c240(param_1,1,2);
    FUN_0087c240(param_1,2,3);
    iVar1 = FUN_00869ee0(*(undefined8 *)(param_1 + 0x98),1);
  }
  else {
    iVar1 = FUN_00869ee0(*(undefined8 *)(param_1 + 0x98),1);
  }
  if (iVar1 == 0) {
    FUN_0087c240(param_1,1,2);
    FUN_0087c240(param_1,2,3);
    iVar1 = FUN_00869ee0(*(undefined8 *)(param_1 + 0x98),2);
  }
  else {
    iVar1 = FUN_00869ee0(*(undefined8 *)(param_1 + 0x98),2);
  }
  if (iVar1 == 0) {
    FUN_0087c240(param_1,2,3);
    return;
  }
  return;
}


