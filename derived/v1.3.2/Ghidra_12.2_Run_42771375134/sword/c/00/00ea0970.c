/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00ea0970; name: FUN_00ea0970
 */


void FUN_00ea0970(long *param_1,byte param_2)

{
  *(byte *)(param_1 + 0xd7) = param_2 & 1;
  if ((param_2 & 1) == 0) {
    return;
  }
  (**(code **)(*param_1 + 400))(param_1,PTR_DAT_0271ed28,8);
  (**(code **)(*param_1 + 0x1b0))(param_1,PTR_DAT_0271ed30);
  FUN_00fbf540(*(undefined8 *)PTR_DAT_0271bd18,6);
  return;
}


