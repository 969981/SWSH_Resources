/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 010f5d50; name: FUN_010f5d50
 */


void FUN_010f5d50(long *param_1)

{
  ulong uVar1;
  undefined4 local_14;
  
  if (((*param_1 != 0) && ((char)param_1[1] != '\0')) &&
     ((uVar1 = FUN_010384a0(), (uVar1 & 1) != 0 ||
      (uVar1 = FUN_010386c0(*param_1), (uVar1 & 1) != 0)))) {
    if (param_1[2] != 0) {
      local_14 = FUN_010386e0(*param_1);
      (*(code *)param_1[2])(param_1 + 6,&local_14);
    }
    *(undefined1 *)(param_1 + 1) = 0;
  }
  return;
}


