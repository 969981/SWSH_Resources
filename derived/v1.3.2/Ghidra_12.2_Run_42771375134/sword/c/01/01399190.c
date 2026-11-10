/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 01399190; name: FUN_01399190
 */


void FUN_01399190(long param_1)

{
  int iVar1;
  long lVar2;
  long lVar3;
  float fVar4;
  undefined4 uVar5;
  long local_28;
  
  if (((*(long *)(param_1 + 0xb0) != 0) && (lVar2 = FUN_00794780(), lVar2 != 0)) &&
     (*(int *)(lVar2 + 0x17c) != 0)) {
    if (*(int *)(param_1 + 0xb8) == 0) {
      FUN_01399620(&local_28,param_1);
      if (local_28 == 0) {
        uVar5 = 0x3f800000;
        iVar1 = *(int *)(lVar2 + 0x17c);
      }
      else {
        uVar5 = 0x3f800000;
        if (((0.0 < *(float *)(local_28 + 0x7c)) &&
            (fVar4 = *(float *)(local_28 + 0xb0) / *(float *)(local_28 + 0x7c),
            DAT_01d4bacc <= fVar4)) && (fVar4 < 0.5)) {
          uVar5 = DAT_01d4bcb0;
        }
        (**(code **)(*(long *)(local_28 + 0x48) + 0x18))();
        iVar1 = *(int *)(lVar2 + 0x17c);
      }
    }
    else {
      iVar1 = FUN_013986d0(param_1);
      uVar5 = DAT_01d4bcb0;
      if (iVar1 != 1) {
        uVar5 = 0x3f800000;
      }
      iVar1 = *(int *)(lVar2 + 0x17c);
    }
    if (0 < iVar1) {
      iVar1 = 0;
      do {
        lVar3 = FUN_019d6820(lVar2,iVar1);
        *(undefined4 *)(lVar3 + 0x60) = uVar5;
        iVar1 = iVar1 + 1;
      } while (iVar1 < *(int *)(lVar2 + 0x17c));
    }
  }
  return;
}


