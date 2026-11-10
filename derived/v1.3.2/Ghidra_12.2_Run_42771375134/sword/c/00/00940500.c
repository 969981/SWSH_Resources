/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00940500; name: FUN_00940500
 */


void FUN_00940500(long param_1,undefined4 param_2)

{
  int iVar1;
  
  iVar1 = FUN_008db610(*(undefined8 *)(param_1 + 0x30),0x7c);
  if (iVar1 < 2) {
    FUN_008db590(*(undefined8 *)(param_1 + 0x30),iVar1 + 0x7d,param_2);
    FUN_008db590(*(undefined8 *)(param_1 + 0x30),0x7c,iVar1 + 1);
    return;
  }
  return;
}


