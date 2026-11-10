/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00ed5be0; name: FUN_00ed5be0
 */


void FUN_00ed5be0(long *param_1)

{
  ulong uVar1;
  
  if ((*(char *)((long)param_1 + 0x735) != '\0') &&
     (*(undefined1 *)((long)param_1 + 0x735) = 0, *(char *)((long)param_1 + 0x736) != '\0')) {
    (**(code **)(*param_1 + 0x168))(param_1);
    uVar1 = (**(code **)(*param_1 + 0x88))(param_1);
    if ((uVar1 & 1) == 0) {
      *(undefined4 *)((long)param_1 + 0x1cc) = 1;
    }
  }
  return;
}


