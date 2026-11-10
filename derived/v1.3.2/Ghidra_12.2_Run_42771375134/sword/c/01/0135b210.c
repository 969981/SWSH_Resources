/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0135b210; name: FUN_0135b210
 */


undefined8 FUN_0135b210(undefined8 param_1)

{
  undefined8 *puVar1;
  long lVar2;
  undefined8 uVar3;
  long local_30;
  long local_28;
  
  FUN_01346e80();
  puVar1 = (undefined8 *)FUN_012e3520();
  lVar2 = FUN_012ba780(*puVar1);
  uVar3 = 0;
  if (lVar2 != 0) {
    FUN_01346ef0(param_1);
    FUN_01321c80(&local_30);
    FUN_01320fc0(&local_28,&local_30);
    if (local_30 != 0) {
      (**(code **)(*(long *)(local_30 + 0x48) + 0x18))();
      local_30 = 0;
    }
    if (local_28 == 0) {
      uVar3 = 0;
    }
    else {
      FUN_01324450();
      uVar3 = FUN_0135c7f0(lVar2);
      if (local_28 != 0) {
        (**(code **)(*(long *)(local_28 + 0x48) + 0x18))();
      }
    }
  }
  return uVar3;
}


