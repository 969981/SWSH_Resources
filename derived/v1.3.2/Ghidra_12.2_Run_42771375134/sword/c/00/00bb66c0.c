/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00bb66c0; name: FUN_00bb66c0
 */


void FUN_00bb66c0(long param_1,int *param_2,ushort param_3,byte param_4,byte param_5,byte param_6)

{
  ulong uVar1;
  short sVar2;
  
  *(byte *)(param_1 + 0x6e0) = param_4 & 1;
  *(byte *)(param_1 + 0x6e1) = param_5 & 1;
  *(byte *)(param_1 + 0x6e2) = param_6 & 1;
  uVar1 = (ulong)(uint)param_3;
  *(int **)(param_1 + 0x6d0) = param_2;
  *(ushort *)(param_1 + 0x6d8) = param_3;
  *(undefined2 *)(param_1 + 0x6da) = 0;
  if (param_3 != 0) {
    sVar2 = 0;
    do {
      if (*param_2 != 2) {
        sVar2 = sVar2 + 1;
        *(short *)(param_1 + 0x6da) = sVar2;
      }
      param_2 = param_2 + 2;
      uVar1 = uVar1 - 1;
    } while (uVar1 != 0);
  }
  return;
}


