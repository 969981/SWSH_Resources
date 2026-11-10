/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0095f250; name: FUN_0095f250
 */


void FUN_0095f250(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 uVar2;
  undefined1 auStack_38 [8];
  undefined1 local_28;
  undefined1 local_27;
  
  FUN_0093b2e0(param_2);
  lVar1 = FUN_0093b2f0(param_2);
  while (lVar1 != 0) {
    local_28 = FUN_008e0a00();
    local_27 = 1;
    FUN_00942450(param_1);
    uVar2 = FUN_00925140();
    FUN_00944c20(uVar2,auStack_38,&local_28);
    lVar1 = FUN_0093b2f0(param_2);
  }
  return;
}


