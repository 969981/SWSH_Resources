/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00c6a480; name: FUN_00c6a480
 */


void FUN_00c6a480(long param_1,long *param_2,undefined8 param_3,undefined8 param_4)

{
  ulong uVar1;
  long lVar2;
  long local_38;
  
  lVar2 = *(long *)(param_1 + 0x90);
  if (lVar2 != 0) {
    uVar1 = FUN_00c6b140(lVar2 + 0x50);
    local_38 = *param_2;
    if ((uVar1 & 1) == 0) {
      lVar2 = 0;
    }
    if (local_38 != 0) {
      (**(code **)(*(long *)(local_38 + 0x48) + 0x10))();
    }
    FUN_00c71a20(lVar2,&local_38,param_3,param_4);
    if (local_38 != 0) {
      (**(code **)(*(long *)(local_38 + 0x48) + 0x18))();
    }
  }
  return;
}


