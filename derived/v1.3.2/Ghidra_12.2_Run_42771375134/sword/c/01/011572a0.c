/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 011572a0; name: FUN_011572a0
 */


undefined8 FUN_011572a0(long param_1,int param_2)

{
  undefined4 uVar1;
  ulong uVar2;
  
  uVar2 = FUN_01160900(*(undefined8 *)(param_1 + 0xb0));
  if ((uVar2 & 1) != 0) {
    return 0;
  }
  uVar2 = FUN_01157330(param_1,param_2 == 1);
  if ((uVar2 & 1) == 0) {
    return 0;
  }
  if (*(int *)(param_1 + 0xe0) == 0) {
    uVar1 = *(undefined4 *)(param_1 + 0x78);
    *(undefined4 *)(param_1 + 0xb8) = 0;
    *(int *)(param_1 + 0x78) = param_2;
    *(undefined4 *)(param_1 + 0x7c) = uVar1;
    *(undefined4 *)(param_1 + 0xe0) = 1;
    return 1;
  }
  return 0;
}


