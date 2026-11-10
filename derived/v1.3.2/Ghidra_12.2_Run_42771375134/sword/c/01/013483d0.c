/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 013483d0; name: FUN_013483d0
 */


void FUN_013483d0(long param_1)

{
  undefined8 uVar1;
  long local_20;
  undefined1 auStack_18 [8];
  
  *(undefined4 *)(param_1 + 0xa4) = 0;
  FUN_01312230(&local_20);
  uVar1 = FUN_012d52c0(local_20,auStack_18);
  FUN_012e0340(0,uVar1,0xa957e3270a9644aa);
  if (local_20 != 0) {
    (**(code **)(*(long *)(local_20 + 0x48) + 0x18))();
  }
  return;
}


