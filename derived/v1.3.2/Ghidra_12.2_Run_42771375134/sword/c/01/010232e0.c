/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 010232e0; name: FUN_010232e0
 */


void FUN_010232e0(long param_1,int param_2)

{
  ulong uVar1;
  long lVar2;
  long *plVar3;
  long lVar4;
  long local_38;
  int local_28;
  int local_24;
  
  local_24 = param_2;
  uVar1 = FUN_01023430();
  if ((uVar1 & 1) != 0) {
    uVar1 = *(long *)(param_1 + 0x28) - *(long *)(param_1 + 0x20);
    if (0 < (int)(uVar1 >> 6)) {
      lVar2 = 0;
      lVar4 = 0x38;
      do {
        if (*(int *)(*(long *)(param_1 + 0x20) + lVar4) == param_2) {
          FUN_0075b680(&local_38,*(undefined8 *)(param_1 + 8),&local_24);
          FUN_01023500(&local_38);
          FUN_0075a3d0();
          if (local_38 != 0) {
            (**(code **)(*(long *)(local_38 + 0x48) + 0x18))();
            local_38 = 0;
          }
          local_28 = FUN_01023660(param_1,local_24);
          if (-1 < local_28) {
            FUN_0075b680(&local_38,*(undefined8 *)(param_1 + 8),&local_28);
            FUN_01023500(&local_38);
            FUN_0075a3d0();
            if (local_38 != 0) {
              (**(code **)(*(long *)(local_38 + 0x48) + 0x18))();
              local_38 = 0;
            }
          }
          plVar3 = (long *)(param_1 + (long)local_24 * 0x110 + 0x58);
          if (*plVar3 == 0) {
            *plVar3 = 0;
          }
          else {
            FUN_006e2100(*plVar3,param_1 + (long)local_24 * 0x110 + 0x50);
            lVar2 = *plVar3;
            *plVar3 = 0;
            if (lVar2 != 0) {
              (**(code **)(*(long *)(lVar2 + 0x48) + 0x18))();
            }
          }
          *(undefined4 *)(*(long *)(param_1 + 0x20) + lVar4) = 0xffffffff;
          return;
        }
        lVar2 = lVar2 + 1;
        lVar4 = lVar4 + 0x40;
      } while (lVar2 < (long)(uVar1 * 0x4000000) >> 0x20);
    }
  }
  return;
}


