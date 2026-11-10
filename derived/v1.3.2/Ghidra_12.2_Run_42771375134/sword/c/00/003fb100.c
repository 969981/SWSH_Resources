/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 003fb100; name: FUN_003fb100
 */


void FUN_003fb100(long param_1,undefined4 param_2,ulong param_3,undefined8 param_4,ulong param_5)

{
  uint uVar1;
  short sVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  
  if ((*(uint *)(param_1 + 0x40) >> 0xf & 1) == 0) {
    *(uint *)(param_1 + 0x40) = *(uint *)(param_1 + 0x40) & 0xfffe7fff | 0x8000;
    if ((param_3 & 1) != 0) {
      lVar3 = FUN_003fc7b0(*(undefined8 *)(param_1 + 0x28));
      lVar4 = FUN_003fc7b0(*(undefined8 *)(param_1 + 0x30));
      sVar2 = *(short *)(*(long *)(param_1 + 0x48) + 2);
      *(short *)(*(long *)(param_1 + 0x48) + 2) = sVar2 + 1;
      if (((sVar2 == 0) || ((param_5 & 1) != 0)) &&
         (*(int *)(*(long *)(lVar3 + 0x88) + 0x98) = *(int *)(*(long *)(lVar3 + 0x88) + 0x98) + 1,
         lVar4 != 0)) {
        *(int *)(*(long *)(lVar4 + 0x88) + 0x98) = *(int *)(*(long *)(lVar4 + 0x88) + 0x98) + 1;
      }
    }
    uVar1 = *(uint *)(param_1 + 0x40);
    if ((uVar1 & 0x1dc) != 0) {
      if ((uVar1 >> 2 & 1) != 0) {
        if (*(short *)(*(long *)(param_1 + 0x48) + 2) == 1) {
          uVar5 = 4;
        }
        else {
          uVar5 = 0;
        }
        FUN_003f9c50(param_1,4,uVar5,0,param_2,1,param_4);
      }
      if ((uVar1 >> 3 & 1) != 0) {
        FUN_003d0560(*(undefined8 *)(*(long *)(*(long *)(param_1 + 8) + 0x48) + 0x1048),param_1);
        return;
      }
      if ((uVar1 & 0x1c0) != 0) {
        FUN_003cf750(*(undefined8 *)(*(long *)(*(long *)(param_1 + 8) + 0x48) + 0x1048),param_1);
        return;
      }
    }
  }
  return;
}


