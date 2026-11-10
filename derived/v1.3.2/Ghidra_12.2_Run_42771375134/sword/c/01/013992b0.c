/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 013992b0; name: FUN_013992b0
 */


void FUN_013992b0(long param_1)

{
  float fVar1;
  long lVar2;
  long lVar3;
  int iVar4;
  float fVar5;
  long local_48;
  
  FUN_01399620(&local_48);
  if (local_48 != 0) {
    lVar2 = FUN_00794780(*(undefined8 *)(param_1 + 0xa8));
    fVar1 = DAT_01d4bcb8;
    if ((lVar2 != 0) && (0 < *(int *)(lVar2 + 0x17c))) {
      iVar4 = 0;
      do {
        lVar3 = FUN_019d6820(lVar2,iVar4);
        fVar5 = 0.0;
        if (0.0 < *(float *)(local_48 + 0x7c)) {
          fVar5 = *(float *)(local_48 + 0xb0) / *(float *)(local_48 + 0x7c);
        }
        fVar5 = fVar1 - fVar5;
        if (fVar5 <= 1.0) {
          fVar5 = 1.0;
        }
        *(float *)(lVar3 + 100) = fVar5;
        lVar3 = FUN_019d6820(lVar2,iVar4);
        fVar5 = 0.0;
        if (0.0 < *(float *)(local_48 + 0x7c)) {
          fVar5 = *(float *)(local_48 + 0xb0) / *(float *)(local_48 + 0x7c);
        }
        if (1.0 < fVar5) {
          fVar5 = 1.0;
        }
        *(float *)(lVar3 + 0x60) = fVar5;
        iVar4 = iVar4 + 1;
      } while (iVar4 < *(int *)(lVar2 + 0x17c));
    }
    (**(code **)(*(long *)(local_48 + 0x48) + 0x18))((long *)(local_48 + 0x48));
  }
  return;
}


