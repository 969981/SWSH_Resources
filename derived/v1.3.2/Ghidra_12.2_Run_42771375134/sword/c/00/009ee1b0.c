/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 009ee1b0; name: FUN_009ee1b0
 */


void FUN_009ee1b0(long param_1)

{
  undefined8 uVar1;
  long local_48;
  
  local_48 = *(long *)(*(long *)(param_1 + 0x60) + 8);
  if (local_48 != 0) {
    (**(code **)(*(long *)(local_48 + 0x48) + 0x10))();
  }
  uVar1 = FUN_009fce50(param_1 + 0x78,&local_48);
  if (local_48 != 0) {
    (**(code **)(*(long *)(local_48 + 0x48) + 0x18))();
  }
  *(char *)(*(long *)(param_1 + 0x60) + 0x84) = (char)uVar1;
  *(char *)(*(long *)(param_1 + 0x60) + 0x85) = (char)((ulong)uVar1 >> 8);
  *(char *)(*(long *)(param_1 + 0x60) + 0x86) = (char)((ulong)uVar1 >> 0x10);
  *(char *)(*(long *)(param_1 + 0x60) + 0x87) = (char)((ulong)uVar1 >> 0x18);
  *(char *)(*(long *)(param_1 + 0x60) + 0x88) = (char)((ulong)uVar1 >> 0x20);
  *(char *)(*(long *)(param_1 + 0x60) + 0x89) = (char)((ulong)uVar1 >> 0x28);
  return;
}


