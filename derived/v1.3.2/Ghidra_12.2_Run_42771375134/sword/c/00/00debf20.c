/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00debf20; name: FUN_00debf20
 */


void FUN_00debf20(float param_1,long param_2,byte param_3)

{
  float fVar1;
  float fVar2;
  
  if ((*(int *)(param_2 + 0x60) == 3) && (*(char *)(param_2 + 0xd0) != '\0')) {
    fVar2 = *(float *)(param_2 + 0xd4);
    fVar1 = *(float *)(param_2 + 0xe0);
    if (fVar2 <= *(float *)(param_2 + 0xe0)) {
      *(float *)(param_2 + 0xe0) = fVar2;
      fVar1 = fVar2;
    }
    fVar2 = 0.0;
    if ((fVar1 - param_1 < 0.0 & param_3) == 0) {
      fVar2 = fVar1 - param_1;
    }
    *(float *)(param_2 + 0xe0) = fVar2;
    *(undefined1 *)(param_2 + 0xd1) = 1;
  }
  return;
}


