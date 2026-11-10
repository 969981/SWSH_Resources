/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00e3d6f0; name: FUN_00e3d6f0
 */


void FUN_00e3d6f0(long param_1)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  
  if (*(char *)(param_1 + 0x469) != '\0') {
    *(undefined1 *)(param_1 + 0x469) = 0;
    if (*(int *)(param_1 + 0x460) != *(int *)(param_1 + 0x46c)) {
      if (*(int *)(param_1 + 0x4e8) < 2) {
        fVar1 = 0.0;
      }
      else {
        fVar1 = (float)*(int *)(param_1 + 0x460) / (float)(*(int *)(param_1 + 0x4e8) + -1);
      }
      *(undefined8 *)(param_1 + 0x438) = *(undefined8 *)(param_1 + 0x418);
      *(undefined8 *)(param_1 + 0x430) = *(undefined8 *)(param_1 + 0x410);
      fVar2 = (float)*(undefined8 *)(param_1 + 0x4b0);
      fVar3 = (float)((ulong)*(undefined8 *)(param_1 + 0x4b0) >> 0x20);
      fVar4 = (float)*(undefined8 *)(param_1 + 0x4b8);
      fVar5 = (float)((ulong)*(undefined8 *)(param_1 + 0x4b8) >> 0x20);
      *(undefined8 *)(param_1 + 0x428) = *(undefined8 *)(param_1 + 0x408);
      *(undefined8 *)(param_1 + 0x420) = *(undefined8 *)(param_1 + 0x400);
      *(float *)(param_1 + 0x440) =
           *(float *)(param_1 + 0x4a0) +
           fVar1 * (*(float *)(param_1 + 0x4c0) - *(float *)(param_1 + 0x4a0));
      *(undefined4 *)(param_1 + 0x464) = *(undefined4 *)(param_1 + 0x4e0);
      *(ulong *)(param_1 + 0x458) =
           CONCAT44(fVar5 + ((float)((ulong)*(undefined8 *)(param_1 + 0x4d8) >> 0x20) - fVar5) *
                            fVar1,fVar4 + ((float)*(undefined8 *)(param_1 + 0x4d8) - fVar4) * fVar1)
      ;
      *(ulong *)(param_1 + 0x450) =
           CONCAT44(fVar3 + ((float)((ulong)*(undefined8 *)(param_1 + 0x4d0) >> 0x20) - fVar3) *
                            fVar1,fVar2 + ((float)*(undefined8 *)(param_1 + 0x4d0) - fVar2) * fVar1)
      ;
    }
  }
  return;
}


