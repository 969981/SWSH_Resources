/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0108fce0; name: FUN_0108fce0
 */


void FUN_0108fce0(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined8 local_38;
  
  FUN_014bc9b0(*(undefined8 *)(param_1 + 0x568));
  lVar1 = *(long *)(*(long *)(param_1 + 0x568) + 0x60);
  if (lVar1 != 0) {
    (**(code **)(*(long *)(lVar1 + 0x48) + 0x10))();
  }
  local_38 = param_2;
  FUN_0077eb10(lVar1,&local_38,*(undefined8 *)(param_1 + 0x570));
  local_38 = param_3;
  FUN_0077eb10(lVar1,&local_38,*(undefined8 *)(param_1 + 0x578));
  if (lVar1 != 0) {
    (**(code **)(*(long *)(lVar1 + 0x48) + 0x18))((long *)(lVar1 + 0x48));
  }
  return;
}


