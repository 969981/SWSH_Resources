/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00526120; name: FUN_00526120
 */


void FUN_00526120(ulong param_1,long param_2,uint param_3)

{
  long lVar1;
  int iVar2;
  long lVar3;
  ulong uVar4;
  long lVar5;
  ulong uVar6;
  undefined4 uVar7;
  undefined4 local_60;
  undefined4 uStack_5c;
  undefined4 local_58;
  undefined4 uStack_54;
  
  if ((float)param_1 <= 0.0) {
    param_1 = (ulong)(uint)(((*(float *)(param_2 + 0x6c4) + *(float *)(param_2 + 0x6c8)) * 0.5 +
                            1.0 / ((1.0 / *(float *)(param_2 + 0x6c4) +
                                   1.0 / *(float *)(param_2 + 0x6c8)) * 0.5)) * 0.5);
  }
  if (param_3 == 0xffffffff) {
    param_3 = *(uint *)(param_2 + 0x298);
  }
  FUN_00525d00(param_2);
  iVar2 = *(int *)(param_2 + 0x400);
  if (0 < iVar2) {
    uVar7 = (undefined4)param_1;
    if (param_3 == 0x7fffffff) {
      lVar3 = 0;
      lVar5 = 0;
      do {
        lVar1 = *(long *)(param_2 + 0x2a8) + lVar3;
        if (*(long *)(lVar1 + 0x48) != 0) {
          local_60 = uVar7;
          uStack_5c = uVar7;
          local_58 = uVar7;
          uStack_54 = uVar7;
          FUN_005b91f0(param_1,*(undefined4 *)(param_2 + 0x8c0),0x3f800000,
                       *(undefined4 *)(param_2 + 0x6c4),*(undefined4 *)(param_2 + 0x6c8),
                       *(long *)(lVar1 + 0x48),&local_60,1);
        }
        *(undefined4 *)(lVar1 + 0x34) = uVar7;
        *(undefined4 *)(lVar1 + 0x38) = uVar7;
        *(undefined8 *)(lVar1 + 0x2c) = 0;
        lVar5 = lVar5 + 1;
        *(undefined1 *)(lVar1 + 0x3c) = 0;
        lVar3 = lVar3 + 0x50;
        *(undefined4 *)(lVar1 + 0x40) = 5;
      } while (lVar5 < *(int *)(param_2 + 0x400));
    }
    else {
      uVar6 = 0;
      uVar4 = (ulong)param_3;
      do {
        if (uVar4 == uVar6) {
          lVar3 = *(long *)(param_2 + 0x2a8);
          lVar5 = *(long *)(lVar3 + uVar4 * 0x50 + 0x48);
          if (lVar5 != 0) {
            local_60 = uVar7;
            uStack_5c = uVar7;
            local_58 = uVar7;
            uStack_54 = uVar7;
            FUN_005b91f0(param_1,*(undefined4 *)(param_2 + 0x8c0),0x3f800000,
                         *(undefined4 *)(param_2 + 0x6c4),*(undefined4 *)(param_2 + 0x6c8),lVar5,
                         &local_60,1);
          }
          lVar3 = lVar3 + uVar4 * 0x50;
          *(undefined4 *)(lVar3 + 0x34) = uVar7;
          *(undefined4 *)(lVar3 + 0x38) = uVar7;
          *(undefined8 *)(lVar3 + 0x2c) = 0;
          *(undefined1 *)(lVar3 + 0x3c) = 0;
          *(undefined4 *)(lVar3 + 0x40) = 5;
          iVar2 = *(int *)(param_2 + 0x400);
        }
        uVar6 = uVar6 + 1;
      } while ((long)uVar6 < (long)iVar2);
    }
  }
  FUN_005262c0(param_2);
  return;
}


