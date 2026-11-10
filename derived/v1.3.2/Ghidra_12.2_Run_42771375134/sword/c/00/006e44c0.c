/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 006e44c0; name: FUN_006e44c0
 */


void FUN_006e44c0(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined1 auStack_48 [8];
  char *local_40;
  long local_30;
  int local_24;
  
  local_24 = FUN_006e5c90(param_2);
  if (local_24 != -1) {
    lVar1 = param_1 + (long)local_24 * 4;
    if (*(int *)(lVar1 + 0x14c) != 3) {
      FUN_006e5ca0(auStack_48,param_2);
      nn::fs::Unmount(local_40);
      if (local_30 != 0) {
        (**(code **)(*(long *)(local_30 + 0x48) + 0x18))();
        local_30 = 0;
      }
      lVar1 = param_1 + (long)local_24 * 4;
    }
    *(undefined4 *)(lVar1 + 0x14c) = 0;
    FUN_006e4150(param_1 + 0x178,&local_24);
  }
  return;
}


