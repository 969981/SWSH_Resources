/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00e01360; name: FUN_00e01360
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_00e01360(long param_1,undefined8 *param_2,void *param_3)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  undefined1 auStack_220 [64];
  undefined1 auStack_1e0 [384];
  int local_60;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  fVar1 = (float)*param_2;
  fVar2 = (float)((ulong)*param_2 >> 0x20);
  uStack_40 = CONCAT44(fVar2 + (float)((ulong)_DAT_01d4b600 >> 0x20),fVar1 + (float)_DAT_01d4b600);
  fVar3 = (float)param_2[1];
  fVar4 = (float)((ulong)param_2[1] >> 0x20);
  uStack_38 = CONCAT44(fVar4 + (float)((ulong)_UNK_01d4b608 >> 0x20),fVar3 + (float)_UNK_01d4b608);
  local_50 = CONCAT44(fVar2 + (float)((ulong)_DAT_01d4a890 >> 0x20),fVar1 + (float)_DAT_01d4a890);
  uStack_48 = CONCAT44(fVar4 + (float)((ulong)_UNK_01d4a898 >> 0x20),fVar3 + (float)_UNK_01d4a898);
  FUN_00e018d0(auStack_220);
  FUN_006c83a0(param_1 + 0x170,&uStack_40,&local_50,0xffffffff,auStack_220);
  if (local_60 < 1) {
    local_60 = 0;
  }
  else if (param_3 != (void *)0x0) {
    memcpy(param_3,auStack_1e0,0x180);
  }
  thunk_FUN_006c5c80(auStack_220);
  return local_60;
}


