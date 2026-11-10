/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 01108160; name: FUN_01108160
 */


void FUN_01108160(char *param_1)

{
  ulong uVar1;
  long local_28;
  
  if ((*param_1 != '\0') && (*(int *)(param_1 + 4) == 0)) {
    if (*(long *)(param_1 + 8) == 0) {
      local_28 = 0;
      uVar1 = FUN_010ef130();
    }
    else {
      FUN_010edb50(&local_28);
      uVar1 = FUN_010ef130(local_28);
    }
    if (local_28 != 0) {
      (**(code **)(*(long *)(local_28 + 0x48) + 0x18))();
      local_28 = 0;
    }
    if ((uVar1 & 1) == 0) {
      (**(code **)(param_1 + 0x10))(param_1 + 0x30);
      *param_1 = '\0';
    }
  }
  return;
}


