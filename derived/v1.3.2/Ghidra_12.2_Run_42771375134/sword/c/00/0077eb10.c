/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0077eb10; name: FUN_0077eb10
 */


void FUN_0077eb10(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined4 uVar1;
  
  if (*(long *)(param_1 + 0xb8) == 0) {
    uVar1 = 0xffffffff;
  }
  else {
    uVar1 = FUN_006e7220();
  }
  FUN_0077e740(param_1,uVar1,param_3);
  return;
}


