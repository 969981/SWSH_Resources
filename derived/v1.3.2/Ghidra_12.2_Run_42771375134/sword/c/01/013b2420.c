/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 013b2420; name: FUN_013b2420
 */


void FUN_013b2420(undefined8 param_1)

{
  uint uVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined1 local_40 [16];
  long local_28;
  
  FUN_013a5170(&local_28);
  puVar2 = (undefined8 *)FUN_012e3520(param_1);
  uVar1 = FUN_012b6590(*puVar2);
  uVar3 = FUN_012e4b40(param_1);
  if (uVar1 < 0x1e) {
    uVar4 = FUN_012dcaa0(local_28);
    FUN_0131fb30(uVar3,uVar4);
  }
  else {
    local_40 = FUN_0130a450(local_28);
    FUN_0131fb30(uVar3,local_40);
  }
  if (local_28 != 0) {
    (**(code **)(*(long *)(local_28 + 0x48) + 0x18))();
  }
  return;
}


