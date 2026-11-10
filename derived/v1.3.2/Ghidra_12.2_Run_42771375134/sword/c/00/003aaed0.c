/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 003aaed0; name: FUN_003aaed0
 */


void FUN_003aaed0(long param_1)

{
  float *pfVar1;
  long lVar2;
  float local_30;
  float fStack_2c;
  float local_28;
  
  pfVar1 = (float *)FUN_003aa250(*(undefined8 *)(param_1 + 0x50));
  local_30 = *pfVar1;
  fStack_2c = pfVar1[1];
  local_28 = pfVar1[2];
  if ((*(byte *)(*(long *)(param_1 + 0x50) + 0xc) >> 1 & 1) == 0) {
    lVar2 = *(long *)(param_1 + 0x48);
    fStack_2c = *(float *)(lVar2 + 0x798) + fStack_2c;
    local_30 = *(float *)(lVar2 + 0x794) + local_30;
    local_28 = *(float *)(lVar2 + 0x79c) + local_28;
  }
  (**(code **)(**(long **)(param_1 + 0x58) + 0x18))(*(long **)(param_1 + 0x58),&local_30);
  (**(code **)(**(long **)(param_1 + 0x58) + 0x28))
            (*(undefined4 *)(*(long *)(param_1 + 0x48) + 0x7b8));
  return;
}


