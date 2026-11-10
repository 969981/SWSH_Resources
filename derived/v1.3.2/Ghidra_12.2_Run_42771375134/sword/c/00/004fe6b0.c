/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 004fe6b0; name: FUN_004fe6b0
 */


short FUN_004fe6b0(long param_1,long param_2)

{
  short sVar1;
  
  sVar1 = *(short *)(param_2 + 0x24) + -1;
  *(short *)(param_2 + 0x24) = sVar1;
  if (sVar1 == 0) {
    if (*(int *)(param_2 + 0x20) == -1) {
      *(int *)(param_1 + 0x24) = *(int *)(param_1 + 0x24) - *(int *)(param_2 + 0x1c);
      FUN_004ff420(param_1 + 0x38,*(int *)(param_2 + 8) - *(int *)(param_1 + 0x338),
                   *(undefined4 *)(param_2 + 0x1c));
      FUN_00404870(*(undefined4 *)PTR_DAT_027137c8,param_2);
    }
    else {
      *(int *)(param_1 + 0x20) = *(int *)(param_1 + 0x20) + *(int *)(param_2 + 0x18);
      *(undefined8 *)(param_2 + 0x10) = 0;
      if (*(long *)(param_1 + 0x18) == 0) {
        *(long *)(param_1 + 0x18) = param_2;
      }
      else {
        *(long *)(*(long *)(param_1 + 0x10) + 0x10) = param_2;
      }
      *(long *)(param_1 + 0x10) = param_2;
      *(int *)(param_1 + 8) = *(int *)(param_1 + 8) + 1;
    }
    FUN_004ffe40(*(undefined8 *)(param_1 + 0x360));
  }
  return sVar1;
}


