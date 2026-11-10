/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00e73bc0; name: FUN_00e73bc0
 */


void FUN_00e73bc0(long *param_1)

{
  ulong uVar1;
  
  uVar1 = FUN_00e73f80();
  if ((uVar1 & 1) != 0) {
    (**(code **)(*param_1 + 0x90))(param_1);
    *(undefined4 *)(param_1 + 0xc) = 2;
    *(undefined1 *)((long)param_1 + 0x6a) = 0;
  }
  return;
}


