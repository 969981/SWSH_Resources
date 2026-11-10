/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 003e5320; name: FUN_003e5320
 */


void FUN_003e5320(long param_1,undefined4 param_2)

{
  uint uVar1;
  uint uVar2;
  long lVar3;
  undefined8 uVar4;
  long lVar5;
  long lVar6;
  ulong uVar7;
  long lVar8;
  undefined1 auStack_68 [40];
  
  (**(code **)(**(long **)(*(long *)(param_1 + 0x720) + 0x6e8) + 0xa8))(auStack_68);
  lVar6 = *(long *)(*(long *)(param_1 + 0x750) + 0x10);
  uVar2 = *(uint *)(lVar6 + 0x10);
  uVar7 = (ulong)uVar2;
  if (uVar2 != 0) {
    lVar8 = 0;
    do {
      lVar5 = *(long *)(lVar6 + 8);
      lVar3 = *(long *)(lVar5 + lVar8);
      if ((lVar3 != 0) && (uVar2 = *(uint *)(lVar3 + 0x40), (uVar2 & 0x1c0) != 0)) {
        uVar1 = uVar2 & 0xffe00000 | uVar2 & 0x7ffff | (uVar2 >> 0x13 & 1) << 0x14;
        *(uint *)(lVar3 + 0x40) = uVar1;
        lVar5 = lVar5 + lVar8;
        if (*(float *)(lVar5 + 0x18) <= *(float *)(lVar5 + 0xc) * *(float *)(param_1 + 0x7b8)) {
          if (((uVar2 >> 8 & 1) != 0) && ((uVar2 & 0x80000) != 0)) {
            uVar4 = 0x100;
            goto LAB_003e53e8;
          }
        }
        else {
          *(uint *)(lVar3 + 0x40) = uVar1 | 0x80000;
          if ((uVar2 & 0x80000) == 0) {
            if ((uVar2 >> 6 & 1) != 0) {
              uVar4 = 0x40;
LAB_003e53e8:
              FUN_003f9c50(lVar3,uVar4,0,0,param_2,0,auStack_68);
            }
          }
          else if ((uVar2 >> 7 & 1) != 0) {
            uVar4 = 0x80;
            goto LAB_003e53e8;
          }
        }
      }
      lVar8 = lVar8 + 0x20;
      uVar7 = uVar7 - 1;
    } while (uVar7 != 0);
  }
  return;
}


