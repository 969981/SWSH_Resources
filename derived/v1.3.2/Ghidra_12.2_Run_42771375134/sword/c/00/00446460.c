/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00446460; name: FUN_00446460
 */


uint FUN_00446460(long param_1,undefined8 param_2)

{
  uint uVar1;
  undefined8 uVar2;
  uint local_68 [2];
  EventType aEStack_60 [19];
  char local_4d;
  
  nn::os::InitializeEvent(aEStack_60,0,1);
  uVar2 = FUN_0044d170(param_1 + 0xd8,local_68);
  uVar1 = FUN_00449b60(uVar2,param_2,PTR_LAB_02712dd8,local_68);
  if (uVar1 == 1) {
    nn::os::WaitEvent(aEStack_60);
    if (local_4d == '\x01') {
      nn::os::FinalizeEvent(aEStack_60);
    }
    uVar1 = local_68[0];
  }
  else if (local_4d == '\x01') {
    nn::os::FinalizeEvent(aEStack_60);
  }
  return uVar1;
}


