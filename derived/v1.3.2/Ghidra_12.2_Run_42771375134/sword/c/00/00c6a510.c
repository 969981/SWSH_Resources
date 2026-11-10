/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00c6a510; name: FUN_00c6a510
 */


void FUN_00c6a510(long param_1,long *param_2)

{
  ulong uVar1;
  long lVar2;
  long local_28;
  
  lVar2 = *(long *)(param_1 + 0x90);
  if (lVar2 != 0) {
    uVar1 = FUN_00c6b140(lVar2 + 0x50);
    local_28 = *param_2;
    if ((uVar1 & 1) == 0) {
      lVar2 = 0;
    }
    if (local_28 != 0) {
      (**(code **)(*(long *)(local_28 + 0x48) + 0x10))();
    }
    FUN_00c72160(lVar2,&local_28);
    if (local_28 != 0) {
      (**(code **)(*(long *)(local_28 + 0x48) + 0x18))();
    }
  }
  return;
}


