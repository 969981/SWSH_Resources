/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 009aecb0; name: FUN_009aecb0
 */


void FUN_009aecb0(undefined8 param_1)

{
  int iVar1;
  undefined8 uVar2;
  undefined1 auStack_28 [8];
  undefined1 local_18 [8];
  
  iVar1 = FUN_00942620();
  if (iVar1 == 2) {
    FUN_009424b0(param_1,4);
    FUN_008e0b60();
    iVar1 = FUN_008e6070();
    if (iVar1 == 2) {
      local_18[0] = 0;
      FUN_00942450(param_1);
      uVar2 = FUN_00925a90();
      FUN_009ac500(uVar2,auStack_28,local_18);
    }
  }
  return;
}


