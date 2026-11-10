/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 004e0b90; name: FUN_004e0b90
 */


void FUN_004e0b90(long param_1,long *param_2)

{
  int iVar1;
  long lVar2;
  undefined8 uVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  undefined4 *puVar7;
  long lVar8;
  long lVar9;
  undefined4 extraout_s0;
  undefined4 auStack_50 [4];
  undefined8 local_38;
  
  if ((*param_2 == 0) || (*(long *)(*(long *)(param_1 + 0x10) + 0x68) == 0)) {
    return;
  }
  if (((DAT_0275b1a8 & 1) == 0) && (iVar1 = __cxa_guard_acquire(), iVar1 != 0)) {
    DAT_0275b1a0 = 0x81;
    __cxa_guard_release(&DAT_0275b1a8);
    lVar9 = *(long *)(param_1 + 0x10);
    lVar2 = *(long *)(lVar9 + 0x68);
  }
  else {
    lVar9 = *(long *)(param_1 + 0x10);
    lVar2 = *(long *)(lVar9 + 0x68);
  }
  if (lVar2 != 0) {
    local_38 = 0;
    FUN_004798d0(lVar2,&DAT_0275b1a0,(long)&local_38 + 4,&local_38);
    uVar5 = local_38 & 0xffffffff;
    uVar4 = (ulong)local_38._4_4_;
    if ((int)local_38 != 0 || local_38._4_4_ != 0) {
      if (((*(uint *)(*(long *)(param_1 + 0x10) + 0x26b) >> 0xc & 1) == 0) ||
         (*(int *)(*(long *)(param_1 + 0x10) + 0x2b8) != -1)) {
        uVar6 = uVar4 * 8 + 0xf & 0xffffffff0;
        lVar2 = (long)auStack_50 - uVar6;
        puVar7 = (undefined4 *)(lVar2 - (uVar5 * 8 + 0xf & 0xffffffff0));
        lVar8 = (long)puVar7 - uVar6;
        uVar3 = 0;
        if (*(long *)(lVar9 + 0x68) != 0) {
          uVar3 = FUN_00479990(*(long *)(lVar9 + 0x68),&DAT_0275b1a0,lVar2,puVar7,lVar8,
                               (long)&local_38 + 4,&local_38);
          uVar5 = local_38 & 0xffffffff;
          uVar4 = local_38 >> 0x20;
        }
      }
      else {
        if (*(long *)(lVar9 + 0x68) == 0) {
          auStack_50[2] = 0x3f800000;
          uVar3 = 0;
        }
        else {
          uVar3 = FUN_00479ab0(*(long *)(lVar9 + 0x68),&DAT_0275b1a0);
          auStack_50[2] = extraout_s0;
        }
        puVar7 = auStack_50 + 2;
        uVar5 = 1;
        lVar2 = 0;
        lVar8 = 0;
        uVar4 = 0;
        auStack_50[3] = auStack_50[2];
      }
      FUN_004e0db0(uVar3,param_2,lVar2,puVar7,lVar8,uVar4,uVar5);
    }
  }
  return;
}


