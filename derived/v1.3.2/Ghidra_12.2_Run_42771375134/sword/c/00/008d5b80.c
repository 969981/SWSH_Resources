/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 008d5b80; name: FUN_008d5b80
 */


bool FUN_008d5b80(long param_1,undefined8 param_2,int param_3)

{
  int iVar1;
  ulong uVar2;
  
  uVar2 = FUN_008e0a00(param_2);
  iVar1 = *(int *)(param_1 + (uVar2 & 0xff) * 0x10 + 0xa8);
  if (((iVar1 == 0 || iVar1 != param_3) &&
      (param_1 = param_1 + (uVar2 & 0xff) * 0x10,
      *(int *)(param_1 + 0xac) == 0 || *(int *)(param_1 + 0xac) != param_3)) &&
     ((*(int *)(param_1 + 0xb0) == 0 || (*(int *)(param_1 + 0xb0) != param_3)))) {
    return *(int *)(param_1 + 0xb4) != 0 && *(int *)(param_1 + 0xb4) == param_3;
  }
  return true;
}


