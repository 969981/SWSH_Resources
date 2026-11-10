/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 003fb250; name: FUN_003fb250
 */


undefined8
FUN_003fb250(long param_1,undefined4 param_2,ulong param_3,undefined8 param_4,ulong param_5)

{
  short sVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  uint uVar5;
  
  uVar5 = *(uint *)(param_1 + 0x40);
  if ((uVar5 >> 0xf & 1) != 0) {
    if ((uVar5 & 0x1dc) != 0) {
      uVar5 = (uVar5 >> 0xb & 0x100 | 0x10) & uVar5;
      if (uVar5 != 0) {
        if (*(short *)(*(long *)(param_1 + 0x48) + 2) == 1) {
          uVar3 = 8;
        }
        else {
          uVar3 = 0;
        }
        FUN_003f9c50(param_1,uVar5,uVar3,1,param_2,0,param_4);
      }
      lVar4 = *(long *)(*(long *)(param_1 + 0x48) + 0x18);
      if ((lVar4 != 0) &&
         (*(int *)(lVar4 + 0xc) == *(int *)(*(long *)(*(long *)(param_1 + 8) + 0x48) + 0x7c0))) {
        *(ushort *)(lVar4 + 10) = *(ushort *)(lVar4 + 10) | 0x10;
      }
      uVar5 = *(uint *)(param_1 + 0x40);
      if ((uVar5 & 0xa00000) != 0) {
        if ((uVar5 >> 0x17 & 1) == 0) {
          FUN_003cf6c0();
        }
        else {
          FUN_003cf7c0(*(undefined8 *)(*(long *)(*(long *)(param_1 + 8) + 0x48) + 0x1048),param_1);
        }
        uVar5 = *(uint *)(param_1 + 0x40) & 0xffe7ffff;
        *(uint *)(param_1 + 0x40) = uVar5;
      }
    }
    *(uint *)(param_1 + 0x40) = uVar5 & 0xfffe7fff | 0x10000;
    lVar4 = FUN_003fc7b0(*(undefined8 *)(param_1 + 0x28));
    lVar2 = FUN_003fc7b0(*(undefined8 *)(param_1 + 0x30));
    if (((param_3 & 1) == 0) ||
       ((sVar1 = *(short *)(*(long *)(param_1 + 0x48) + 2) + -1,
        *(short *)(*(long *)(param_1 + 0x48) + 2) = sVar1, sVar1 != 0 && ((param_5 & 1) == 0)))) {
      if (lVar2 != 0) {
        return 1;
      }
    }
    else {
      *(int *)(*(long *)(lVar4 + 0x88) + 0x98) = *(int *)(*(long *)(lVar4 + 0x88) + 0x98) + -1;
      if (lVar2 != 0) {
        *(int *)(*(long *)(lVar2 + 0x88) + 0x98) = *(int *)(*(long *)(lVar2 + 0x88) + 0x98) + -1;
        return 1;
      }
    }
    FUN_003c00a0(DAT_01d4c464,lVar4);
  }
  return 0;
}


