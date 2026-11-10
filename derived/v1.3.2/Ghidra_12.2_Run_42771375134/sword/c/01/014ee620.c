/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 014ee620; name: FUN_014ee620
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_014ee620(long param_1)

{
  uint uVar1;
  undefined4 uVar2;
  long local_28;
  
  if (*(char *)(param_1 + 0x78) != '\0') {
    if (*(int *)(param_1 + 0x7c) == 0) {
      uVar2 = _DAT_0000006c;
      uVar1 = _DAT_00000068;
      if (*(long *)(param_1 + 0x88) != 0) {
        FUN_014ddc70(&local_28);
        uVar1 = *(uint *)(local_28 + 0x68);
        uVar2 = *(undefined4 *)(local_28 + 0x6c);
        if (local_28 != 0) {
          (**(code **)(*(long *)(local_28 + 0x48) + 0x18))();
        }
      }
      local_28 = 0;
      if ((uVar1 & 0xff) != 0) {
        if (*(long *)(param_1 + 0x88) == 0) {
          local_28 = 0;
          FUN_014e12c0(0,uVar2);
        }
        else {
          FUN_014ddc70(&local_28);
          FUN_014e12c0(local_28,uVar2);
        }
        if (local_28 != 0) {
          (**(code **)(*(long *)(local_28 + 0x48) + 0x18))();
        }
        *(undefined4 *)(param_1 + 0x80) = 9;
      }
    }
    *(undefined1 *)(param_1 + 0x78) = 0;
  }
  return;
}


