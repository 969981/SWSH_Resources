/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 003bf5e0; name: FUN_003bf5e0
 */


void FUN_003bf5e0(undefined8 param_1,long param_2,undefined8 param_3,undefined8 param_4)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  long lVar4;
  long lVar5;
  float fVar6;
  undefined4 local_60;
  undefined4 uStack_5c;
  undefined4 local_58;
  
  lVar4 = *(long *)(param_2 + 0x88);
  if (((*(byte *)(lVar4 + 0x1c) >> 5 & 1) != 0) && ((*(byte *)(param_2 + 0x7c) & 1) == 0)) {
    uVar1 = *(undefined4 *)(lVar4 + 0x50);
    uVar2 = *(undefined4 *)(lVar4 + 0x54);
    uVar3 = *(undefined4 *)(lVar4 + 0x58);
    fVar6 = sqrtf(*(float *)(lVar4 + 0x40) * *(float *)(lVar4 + 0x40) +
                  *(float *)(lVar4 + 0x44) * *(float *)(lVar4 + 0x44) +
                  *(float *)(lVar4 + 0x48) * *(float *)(lVar4 + 0x48));
    if (*(long *)(param_2 + 0x38) != 0) {
      lVar4 = *(long *)(param_2 + 0x38);
      do {
        while (lVar5 = *(long *)(lVar4 + 8), (*(byte *)(lVar4 + 0x1b) & 0x60) != 0) {
          lVar4 = lVar5;
          if (lVar5 == 0) {
            return;
          }
        }
        local_60 = uVar1;
        uStack_5c = uVar2;
        local_58 = uVar3;
        FUN_003fd180(fVar6 * (float)param_1,param_1,lVar4,param_3,&local_60,param_4);
        lVar4 = lVar5;
      } while (lVar5 != 0);
    }
  }
  return;
}


