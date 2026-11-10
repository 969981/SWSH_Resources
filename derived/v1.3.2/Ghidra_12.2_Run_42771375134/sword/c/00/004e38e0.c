/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 004e38e0; name: FUN_004e38e0
 */


int FUN_004e38e0(long param_1,byte *param_2,undefined4 *param_3)

{
  byte bVar1;
  byte bVar2;
  ulong uVar3;
  int iVar4;
  
  do {
    if (((*(byte *)(param_1 + 0x6c) >> 1 & 1) == 0) || (*(long *)(param_1 + 0x38) == 0)) {
      iVar4 = 0;
    }
    else {
      bVar2 = *(byte *)(param_1 + 0x44);
      iVar4 = 0;
      if (((bVar2 & 0xf0) != 0xf0) && ((char)bVar2 < '\0')) {
        bVar1 = bVar2 & 0xf0;
        if (0xef < bVar2) {
          bVar1 = bVar2;
        }
        *param_2 = bVar1;
        param_2[1] = *(byte *)(param_1 + 0x44) & 0xf;
        param_2[2] = *(byte *)(param_1 + 0x45);
        bVar2 = *(byte *)(param_1 + 0x46);
        iVar4 = 1;
        param_2[3] = bVar2;
        if ((bVar1 == 0x90) && (bVar2 == 0)) {
          iVar4 = 1;
          *param_2 = 0x80;
        }
      }
    }
    *param_3 = *(undefined4 *)(param_1 + 0x5c);
    uVar3 = FUN_004e31a0(param_1);
  } while ((iVar4 == 0) && ((uVar3 & 1) != 0));
  return iVar4;
}


