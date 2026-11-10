/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00ffaaa0; name: FUN_00ffaaa0
 */


undefined8 FUN_00ffaaa0(long *param_1)

{
  ulong uVar1;
  ulong uVar2;
  undefined8 uVar3;
  
  uVar1 = FUN_00ffab40(param_1,param_1[1]);
  uVar2 = (**(code **)(*param_1 + 0x38))(param_1);
  uVar3 = 0;
  if (((uVar1 & 1) != 0) && ((uVar2 & 1) != 0)) {
    if ((param_1[0xe] == 0) || (*(int *)(param_1[0xe] + 0x54) == 0)) {
      uVar3 = 0;
    }
    else {
      uVar3 = 1;
      if ((char)param_1[0xb9] == '\0') {
        FUN_00ffcb20(param_1 + 0x20);
        (**(code **)(*param_1 + 0x40))(param_1);
        *(undefined1 *)(param_1 + 0xb9) = 1;
      }
    }
  }
  return uVar3;
}


