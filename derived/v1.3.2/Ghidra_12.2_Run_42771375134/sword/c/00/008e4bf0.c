/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 008e4bf0; name: FUN_008e4bf0
 */


void FUN_008e4bf0(long param_1,undefined1 param_2,undefined1 param_3,ushort param_4,int param_5,
                 undefined4 param_6)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 0x34c);
  *(int *)(param_1 + 0x34c) = param_5;
  *(undefined4 *)(param_1 + 0x350) = param_6;
  *(undefined1 *)(param_1 + 0x34a) = param_2;
  *(undefined1 *)(param_1 + 0x341) = param_3;
  if (iVar1 != param_5) {
    *(ushort *)(param_1 + 0x348) = param_4 & 1;
    return;
  }
  if ((param_4 & 1) == 0) {
    *(undefined2 *)(param_1 + 0x348) = 0;
    return;
  }
  *(short *)(param_1 + 0x348) = *(short *)(param_1 + 0x348) + 1;
  return;
}


