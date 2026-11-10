/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0130e0b0; name: FUN_0130e0b0
 */


void FUN_0130e0b0(char *param_1)

{
  float *pfVar1;
  float fVar2;
  
  if (*param_1 != '\0') {
    pfVar1 = (float *)(param_1 + 4);
    fVar2 = *(float *)(param_1 + 0x20) *
            (*(float *)(param_1 + 0x1c) +
            *(float *)(param_1 + 0xc) *
            ((*pfVar1 * *(float *)(param_1 + 8) -
             *(float *)(param_1 + 0x10) * (*(float *)(param_1 + 0x18) - *(float *)(param_1 + 0x14)))
            / *pfVar1));
    *(float *)(param_1 + 0x18) = *(float *)(param_1 + 0x18) + fVar2;
    *(float *)(param_1 + 0x1c) = fVar2;
    if (ABS(fVar2) < DAT_01d4c6ac) {
      *param_1 = '\0';
      param_1[0x14] = '\0';
      param_1[0x15] = '\0';
      param_1[0x16] = '\0';
      param_1[0x17] = '\0';
      param_1[0x18] = '\0';
      param_1[0x19] = '\0';
      param_1[0x1a] = '\0';
      param_1[0x1b] = '\0';
      param_1[0x1c] = '\0';
      param_1[0x1d] = '\0';
      param_1[0x1e] = '\0';
      param_1[0x1f] = '\0';
      param_1[0x20] = '\0';
      param_1[0x21] = '\0';
      param_1[0x22] = '\0';
      param_1[0x23] = '\0';
      pfVar1[0] = 0.0;
      pfVar1[1] = 0.0;
      param_1[0xc] = '\0';
      param_1[0xd] = '\0';
      param_1[0xe] = '\0';
      param_1[0xf] = '\0';
      param_1[0x10] = '\0';
      param_1[0x11] = '\0';
      param_1[0x12] = '\0';
      param_1[0x13] = '\0';
    }
  }
  return;
}


