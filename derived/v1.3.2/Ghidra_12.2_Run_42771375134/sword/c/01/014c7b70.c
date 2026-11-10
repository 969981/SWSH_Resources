/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 014c7b70; name: FUN_014c7b70
 */


void FUN_014c7b70(undefined8 param_1,undefined4 param_2,undefined8 param_3)

{
  byte bVar1;
  undefined1 uVar2;
  
  bVar1 = FUN_0087ee40(param_3);
  if (bVar1 < 0x62) {
    uVar2 = FUN_0087ee40(param_3);
    FUN_014c7da0(param_1,param_2,uVar2,param_3);
    return;
  }
  FUN_014c7bf0(param_1,param_2,param_3);
  return;
}


