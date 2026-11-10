/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 01319d90; name: FUN_01319d90
 */


void FUN_01319d90(undefined8 param_1,undefined8 param_2,int param_3)

{
  float *pfVar1;
  float *pfVar2;
  undefined1 auStack_90 [48];
  undefined4 local_60;
  float local_5c [3];
  char local_50;
  char local_4f;
  undefined4 local_4e;
  undefined4 local_40;
  float fStack_3c;
  undefined4 local_38;
  undefined4 uStack_34;
  float local_28;
  float fStack_24;
  
  FUN_01319840(param_1,auStack_90);
  pfVar1 = &local_28;
  if (local_5c[0] <= 1.0) {
    pfVar1 = local_5c;
  }
  pfVar2 = &fStack_24;
  if (0.0 <= local_5c[0]) {
    pfVar2 = pfVar1;
  }
  local_28 = 1.0;
  fStack_24 = 0.0;
  fStack_3c = *pfVar2;
  local_40 = local_60;
  local_38 = 0x3f800000;
  uStack_34 = local_4e;
  if (param_3 == 4) {
    if (local_50 == '\0') {
      local_38 = 0x40000000;
    }
  }
  else if ((param_3 == 0) && (local_4f == '\0')) {
    local_38 = 0x3f000000;
  }
  FUN_0131c220(param_2,&local_40);
  FUN_0131c030(param_2,param_3);
  return;
}


