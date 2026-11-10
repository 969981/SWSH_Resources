/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 01503260; name: FUN_01503260
 */


void FUN_01503260(long param_1,int param_2)

{
  ushort uVar1;
  char cVar2;
  
  if (param_2 == 0) {
    if (*(uint *)(param_1 + 100) < 9999999) {
      *(uint *)(param_1 + 100) = *(uint *)(param_1 + 100) + 1;
      uVar1 = *(short *)(param_1 + 0x6c) + 1;
      *(ushort *)(param_1 + 0x6c) = uVar1;
      if (300 < uVar1) {
        *(undefined2 *)(param_1 + 0x6c) = 0xc9;
      }
      if (*(char *)(param_1 + 0x72) == '!') {
        cVar2 = '\x01';
        if ((byte)(*(char *)(param_1 + 0x70) + 1U) < 0xb) {
          cVar2 = *(char *)(param_1 + 0x70) + '\x01';
        }
        *(char *)(param_1 + 0x70) = cVar2;
        return;
      }
    }
  }
  else if (*(uint *)(param_1 + 0x68) < 9999999) {
    *(uint *)(param_1 + 0x68) = *(uint *)(param_1 + 0x68) + 1;
    uVar1 = *(short *)(param_1 + 0x6e) + 1;
    *(ushort *)(param_1 + 0x6e) = uVar1;
    if (300 < uVar1) {
      *(undefined2 *)(param_1 + 0x6e) = 200;
    }
    if (*(char *)(param_1 + 0x73) == '!') {
      cVar2 = '\x01';
      if ((byte)(*(char *)(param_1 + 0x71) + 1U) < 0xb) {
        cVar2 = *(char *)(param_1 + 0x71) + '\x01';
      }
      *(char *)(param_1 + 0x71) = cVar2;
    }
  }
  return;
}


