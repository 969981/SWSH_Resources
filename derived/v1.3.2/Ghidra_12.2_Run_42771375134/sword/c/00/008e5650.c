/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 008e5650; name: FUN_008e5650
 */


void FUN_008e5650(long param_1,undefined4 param_2)

{
  int iVar1;
  int iVar2;
  
  iVar2 = FUN_00888d50(param_2);
  iVar1 = 4;
  if (iVar2 != 0) {
    iVar1 = iVar2;
  }
  FUN_00878f70(*(undefined8 *)(param_1 + 0x60),8,iVar1);
  if (iVar1 == 0x16) {
    FUN_0087d3f0(*(undefined8 *)(param_1 + 0x60),0x96);
    return;
  }
  return;
}


