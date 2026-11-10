/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00fb85f0; name: FUN_00fb85f0
 */


void FUN_00fb85f0(long *param_1,ulong param_2)

{
  long lVar1;
  long lVar2;
  char *pcVar3;
  long local_68;
  char *local_60;
  char *local_58;
  long local_50;
  long *plStack_48;
  
  lVar1 = *param_1;
  if ((ulong)((param_1[2] - lVar1 >> 4) * -0x30c30c30c30c30c3) < param_2) {
    lVar2 = param_1[1];
    local_50 = 0;
    plStack_48 = param_1 + 3;
    local_68 = (**(code **)(*(long *)param_1[3] + 0x10))((long *)param_1[3],param_2 * 0x150,0x10);
    if (local_68 == 0) {
      (**(code **)(*(long *)param_1[3] + 0xb8))();
    }
    local_60 = (char *)(local_68 + (lVar2 - lVar1 >> 4) * 0x10);
    local_50 = local_68 + param_2 * 0x150;
    local_58 = local_60;
    FUN_00fc0aa0(param_1,&local_68);
    while (local_58 != local_60) {
      pcVar3 = local_58 + -0x150;
      if (local_58[-0x30] != '\0') {
        local_58[-0x30] = '\0';
      }
      if (local_58[-0x40] != '\0') {
        local_58[-0x40] = '\0';
      }
      if (local_58[-0x90] != '\0') {
        local_58[-0x90] = '\0';
      }
      local_58 = pcVar3;
      if (*pcVar3 != '\0') {
        *pcVar3 = '\0';
      }
    }
    if (local_68 != 0) {
      (**(code **)(*(long *)*plStack_48 + 0x18))
                ((long *)*plStack_48,local_68,local_50 - local_68,0x10);
    }
  }
  return;
}


