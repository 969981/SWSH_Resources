/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00940c30; name: FUN_00940c30
 */


void FUN_00940c30(long param_1,int param_2)

{
  int iVar1;
  
  iVar1 = FUN_008db610(*(undefined8 *)(param_1 + 0x30),0x33);
  FUN_008db590(*(undefined8 *)(param_1 + 0x30),0x33,iVar1 * param_2);
  return;
}


