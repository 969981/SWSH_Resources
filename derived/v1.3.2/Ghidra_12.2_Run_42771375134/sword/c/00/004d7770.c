/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 004d7770; name: FUN_004d7770
 */


void FUN_004d7770(float param_1,long param_2)

{
  int iVar1;
  int iVar2;
  float fVar3;
  float fVar4;
  
  if ((*(char *)(param_2 + 0x5f) != '\0') || (*(float *)(param_2 + 0x58) != param_1)) {
    fVar4 = *(float *)(param_2 + 0x54);
    fVar3 = exp2f(param_1 * DAT_01d4bdb0);
    iVar1 = (int)(fVar3 * DAT_01d4c1a8 * fVar4 + 0.5);
    iVar2 = -1;
    if (param_1 <= 0.0) {
      iVar2 = 1;
    }
    if (iVar1 != 0) {
      iVar2 = iVar1;
    }
    *(int *)(param_2 + 0x34) = iVar2;
    *(int *)(param_2 + 0x38) = iVar2;
    *(undefined4 *)(param_2 + 0x3c) = 0x400;
    *(float *)(param_2 + 0x58) = param_1;
    *(undefined1 *)(param_2 + 0x5f) = 0;
  }
  return;
}


