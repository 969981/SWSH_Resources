/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00878860; name: FUN_00878860
 */


void FUN_00878860(long param_1,int param_2,int param_3)

{
  undefined4 uVar1;
  undefined8 uVar2;
  
  if ((param_2 < 6) && (param_3 < 3)) {
    uVar2 = FUN_008694e0(*(undefined8 *)(param_1 + 0x98));
    uVar1 = FUN_008807a0(uVar2,param_2,param_3);
    FUN_00870140(*(undefined8 *)(param_1 + 0x98),uVar1);
    return;
  }
  return;
}


