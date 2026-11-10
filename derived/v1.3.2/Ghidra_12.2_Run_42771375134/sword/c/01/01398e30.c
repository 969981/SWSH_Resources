/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 01398e30; name: FUN_01398e30
 */


void FUN_01398e30(long param_1)

{
  float fVar1;
  float fVar2;
  long lVar3;
  long lVar4;
  int iVar5;
  float fVar6;
  long local_38;
  
  FUN_01399620(&local_38);
  if (local_38 != 0) {
    if (((*(long *)(param_1 + 0x80) != 0) &&
        (lVar3 = FUN_00794780(), fVar2 = DAT_01d4c774, fVar1 = DAT_01d4bd14, lVar3 != 0)) &&
       (iVar5 = *(int *)(lVar3 + 0x17c), iVar5 != 0)) {
      if (*(int *)(param_1 + 0xb8) == 0) {
        if (0 < iVar5) {
          iVar5 = 0;
          do {
            lVar4 = FUN_019d6820(lVar3,iVar5);
            *(undefined4 *)(lVar4 + 0x60) = 0x3f800000;
            iVar5 = iVar5 + 1;
          } while (iVar5 < *(int *)(lVar3 + 0x17c));
        }
      }
      else if (0 < iVar5) {
        iVar5 = 0;
        do {
          lVar4 = FUN_019d6820(lVar3,iVar5);
          fVar6 = 0.0;
          if (0.0 < *(float *)(local_38 + 0x7c)) {
            fVar6 = *(float *)(local_38 + 0xb0) / *(float *)(local_38 + 0x7c);
          }
          fVar6 = fVar6 * fVar2 + fVar1;
          if (1.0 < fVar6) {
            fVar6 = 1.0;
          }
          *(float *)(lVar4 + 0x60) = fVar6;
          iVar5 = iVar5 + 1;
        } while (iVar5 < *(int *)(lVar3 + 0x17c));
      }
    }
    if (((*(long *)(param_1 + 0x88) != 0) &&
        (lVar3 = FUN_00794780(), fVar2 = DAT_01d4c774, fVar1 = DAT_01d4bd14, lVar3 != 0)) &&
       (iVar5 = *(int *)(lVar3 + 0x17c), iVar5 != 0)) {
      if (*(int *)(param_1 + 0xb8) == 0) {
        if (0 < iVar5) {
          iVar5 = 0;
          do {
            lVar4 = FUN_019d6820(lVar3,iVar5);
            *(undefined4 *)(lVar4 + 0x60) = 0x3f800000;
            iVar5 = iVar5 + 1;
          } while (iVar5 < *(int *)(lVar3 + 0x17c));
        }
      }
      else if (0 < iVar5) {
        iVar5 = 0;
        do {
          lVar4 = FUN_019d6820(lVar3,iVar5);
          fVar6 = 0.0;
          if (0.0 < *(float *)(local_38 + 0x7c)) {
            fVar6 = *(float *)(local_38 + 0xb0) / *(float *)(local_38 + 0x7c);
          }
          fVar6 = fVar6 * fVar2 + fVar1;
          if (1.0 < fVar6) {
            fVar6 = 1.0;
          }
          *(float *)(lVar4 + 0x60) = fVar6;
          iVar5 = iVar5 + 1;
        } while (iVar5 < *(int *)(lVar3 + 0x17c));
      }
    }
    if (((*(long *)(param_1 + 0x90) != 0) &&
        (lVar3 = FUN_00794780(), fVar2 = DAT_01d4c774, fVar1 = DAT_01d4bd14, lVar3 != 0)) &&
       (iVar5 = *(int *)(lVar3 + 0x17c), iVar5 != 0)) {
      if (*(int *)(param_1 + 0xb8) == 0) {
        if (0 < iVar5) {
          iVar5 = 0;
          do {
            lVar4 = FUN_019d6820(lVar3,iVar5);
            *(undefined4 *)(lVar4 + 0x60) = 0x3f800000;
            iVar5 = iVar5 + 1;
          } while (iVar5 < *(int *)(lVar3 + 0x17c));
        }
      }
      else if (0 < iVar5) {
        iVar5 = 0;
        do {
          lVar4 = FUN_019d6820(lVar3,iVar5);
          fVar6 = 0.0;
          if (0.0 < *(float *)(local_38 + 0x7c)) {
            fVar6 = *(float *)(local_38 + 0xb0) / *(float *)(local_38 + 0x7c);
          }
          fVar6 = fVar6 * fVar2 + fVar1;
          if (1.0 < fVar6) {
            fVar6 = 1.0;
          }
          *(float *)(lVar4 + 0x60) = fVar6;
          iVar5 = iVar5 + 1;
        } while (iVar5 < *(int *)(lVar3 + 0x17c));
      }
    }
    if (((*(long *)(param_1 + 0x98) != 0) &&
        (lVar3 = FUN_00794780(), fVar2 = DAT_01d4c774, fVar1 = DAT_01d4bd14, lVar3 != 0)) &&
       (iVar5 = *(int *)(lVar3 + 0x17c), iVar5 != 0)) {
      if (*(int *)(param_1 + 0xb8) == 0) {
        if (0 < iVar5) {
          iVar5 = 0;
          do {
            lVar4 = FUN_019d6820(lVar3,iVar5);
            *(undefined4 *)(lVar4 + 0x60) = 0x3f800000;
            iVar5 = iVar5 + 1;
          } while (iVar5 < *(int *)(lVar3 + 0x17c));
        }
      }
      else if (0 < iVar5) {
        iVar5 = 0;
        do {
          lVar4 = FUN_019d6820(lVar3,iVar5);
          fVar6 = 0.0;
          if (0.0 < *(float *)(local_38 + 0x7c)) {
            fVar6 = *(float *)(local_38 + 0xb0) / *(float *)(local_38 + 0x7c);
          }
          fVar6 = fVar6 * fVar2 + fVar1;
          if (1.0 < fVar6) {
            fVar6 = 1.0;
          }
          *(float *)(lVar4 + 0x60) = fVar6;
          iVar5 = iVar5 + 1;
        } while (iVar5 < *(int *)(lVar3 + 0x17c));
      }
    }
    (**(code **)(*(long *)(local_38 + 0x48) + 0x18))((long *)(local_38 + 0x48));
  }
  return;
}


