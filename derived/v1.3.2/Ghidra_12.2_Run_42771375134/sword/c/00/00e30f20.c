/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00e30f20; name: FUN_00e30f20
 */


void FUN_00e30f20(long param_1,undefined8 param_2,long *param_3)

{
  long lVar1;
  long lVar2;
  ulong uVar3;
  long local_48;
  
  if (0 < *(int *)(param_1 + 0x268)) {
    uVar3 = 0;
    lVar1 = param_1;
    do {
      lVar1 = lVar1 + 0x58;
      lVar2 = *param_3;
      local_48 = lVar2;
      if (lVar2 != 0) {
        (**(code **)(*(long *)(lVar2 + 0x48) + 0x10))();
      }
      if (5 < uVar3) {
                    /* WARNING: Subroutine does not return */
        abort();
      }
      FUN_00e30fe0(param_1,param_2,&local_48,lVar1);
      if (lVar2 != 0) {
        (**(code **)(*(long *)(lVar2 + 0x48) + 0x18))((long *)(lVar2 + 0x48));
      }
      uVar3 = uVar3 + 1;
    } while ((long)uVar3 < (long)*(int *)(param_1 + 0x268));
  }
  return;
}


