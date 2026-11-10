/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00603170; name: FUN_00603170
 */


void FUN_00603170(long param_1)

{
  short sVar1;
  short sVar2;
  short sVar3;
  long lVar4;
  ulong uVar5;
  long lVar6;
  
  if (param_1 != 0) {
    uVar5 = (ulong)*(short *)(param_1 + 0x60);
    sVar1 = *(short *)(param_1 + 0x1a);
    sVar2 = *(short *)(param_1 + 0x62) + sVar1;
    sVar3 = *(short *)(param_1 + 0x18) + *(short *)(param_1 + 0x60);
    *(short *)(param_1 + 0x1a) = sVar2;
    *(short *)(param_1 + 0x18) = sVar3;
    *(int *)(param_1 + 0x50) = *(int *)(param_1 + 0x50) + *(int *)(param_1 + 0x98);
    if (0 < (long)uVar5) {
      if ((uVar5 & 0xffffffff) == 1) {
        lVar4 = 0;
      }
      else {
        lVar4 = 0;
        do {
          lVar6 = lVar4 * 2;
          lVar4 = lVar4 + 2;
          *(short *)(*(long *)(param_1 + 0x78) + lVar6) =
               *(short *)(*(long *)(param_1 + 0x78) + lVar6) + sVar1;
          lVar6 = *(long *)(param_1 + 0x78) + lVar6;
          *(short *)(lVar6 + 2) = *(short *)(lVar6 + 2) + sVar1;
        } while ((uVar5 & 0xffffffff) - (uVar5 & 1) != lVar4);
      }
      if ((uVar5 & 1) != 0) {
        *(short *)(*(long *)(param_1 + 0x78) + lVar4 * 2) =
             *(short *)(*(long *)(param_1 + 0x78) + lVar4 * 2) + sVar1;
      }
      sVar2 = *(short *)(param_1 + 0x1a);
      sVar3 = *(short *)(param_1 + 0x18);
    }
    *(long *)(param_1 + 0x68) = *(long *)(param_1 + 0x20) + (long)sVar2 * 0x10;
    *(long *)(param_1 + 0x70) = *(long *)(param_1 + 0x28) + (long)sVar2;
    *(long *)(param_1 + 0x78) = *(long *)(param_1 + 0x30) + (long)sVar3 * 2;
    *(undefined4 *)(param_1 + 0x60) = 0;
    *(undefined4 *)(param_1 + 0x98) = 0;
    if (*(char *)(param_1 + 0x14) != '\0') {
      lVar4 = (long)sVar2 * 0x10;
      *(long *)(param_1 + 0x88) = *(long *)(param_1 + 0x40) + lVar4;
      *(long *)(param_1 + 0x90) = *(long *)(param_1 + 0x48) + lVar4;
    }
    *(ulong *)(param_1 + 0xa0) = *(long *)(param_1 + 0x58) + (ulong)*(uint *)(param_1 + 0x50) * 0x30
    ;
  }
  return;
}


