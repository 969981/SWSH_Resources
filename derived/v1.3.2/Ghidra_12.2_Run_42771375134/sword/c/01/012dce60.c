/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 012dce60; name: FUN_012dce60
 */


void FUN_012dce60(long *param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  long *plVar3;
  undefined8 local_50;
  char *local_48;
  undefined8 local_40;
  long local_38;
  
  puVar1 = PTR_DAT_02727a60 + 0x10;
  puVar2 = PTR_DAT_02727a60 + 0x150;
  param_1[9] = (long)(PTR_DAT_02727a60 + 0xe0);
  param_1[10] = (long)puVar2;
  *param_1 = (long)puVar1;
  if ((int)param_1[0x92] == 4) {
    local_50 = 0xcc1a6bc4572b27fa;
    local_48 = "Stop_Camp_BallAura_MirrorBall_lp";
    local_40 = 0x20;
    local_38 = 0;
    FUN_012d7010(&local_50,param_1);
    if (local_38 != 0) {
      (**(code **)(*(long *)(local_38 + 0x48) + 0x18))();
      local_38 = 0;
    }
  }
  FUN_00895d70(param_1[0x93]);
  plVar3 = (long *)param_1[0x93];
  param_1[0x93] = 0;
  puVar1 = PTR_DAT_027175d0;
  if (plVar3 == (long *)0x0) {
    param_1[0x93] = 0;
  }
  else {
    *plVar3 = (long)(PTR_DAT_027175d0 + 0x10);
    if (plVar3[1] != 0) {
      (**(code **)(*(long *)(plVar3[1] + 0x48) + 0x18))();
      plVar3[1] = 0;
    }
    (**(code **)(*(long *)param_1[0x94] + 0x18))
              ((long *)param_1[0x94],plVar3,param_1[0x95],param_1[0x96]);
    plVar3 = (long *)param_1[0x93];
    param_1[0x93] = 0;
    if (plVar3 != (long *)0x0) {
      *plVar3 = (long)(puVar1 + 0x10);
      if (plVar3[1] != 0) {
        (**(code **)(*(long *)(plVar3[1] + 0x48) + 0x18))();
        plVar3[1] = 0;
      }
      (**(code **)(*(long *)param_1[0x94] + 0x18))
                ((long *)param_1[0x94],plVar3,param_1[0x95],param_1[0x96]);
    }
  }
  FUN_012dcfc0(param_1);
  return;
}


