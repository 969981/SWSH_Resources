/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 01320260; name: FUN_01320260
 */


void FUN_01320260(float param_1,long param_2,undefined8 *param_3)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  undefined8 local_20;
  undefined8 uStack_18;
  
  if (*(int *)(param_2 + 0x10) == 1) {
    fVar1 = (float)*(undefined8 *)(param_2 + 0x20);
    fVar2 = (float)((ulong)*(undefined8 *)(param_2 + 0x20) >> 0x20);
    fVar3 = (float)*(undefined8 *)(param_2 + 0x28);
    fVar4 = (float)((ulong)*(undefined8 *)(param_2 + 0x28) >> 0x20);
    local_20 = CONCAT44(fVar2 + ((float)((ulong)*param_3 >> 0x20) - fVar2) * param_1,
                        fVar1 + ((float)*param_3 - fVar1) * param_1);
    uStack_18 = CONCAT44(fVar4 + ((float)((ulong)param_3[1] >> 0x20) - fVar4) * param_1,
                         fVar3 + ((float)param_3[1] - fVar3) * param_1);
  }
  else {
    uStack_18 = param_3[1];
    local_20 = *param_3;
  }
  FUN_0131fb30(param_2,&local_20);
  return;
}


