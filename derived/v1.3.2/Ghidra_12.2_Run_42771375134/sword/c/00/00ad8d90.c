/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00ad8d90; name: FUN_00ad8d90
 */


void FUN_00ad8d90(long *param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  long *plVar3;
  
  puVar1 = PTR_DAT_02719920 + 0x250;
  puVar2 = PTR_DAT_02719920 + 0x290;
  *param_1 = (long)(PTR_DAT_02719920 + 0x10);
  param_1[9] = (long)puVar1;
  param_1[10] = (long)puVar2;
  if (param_1[0xb3] != 0) {
    (**(code **)(*(long *)(param_1[0xb3] + 0x48) + 0x18))();
    param_1[0xb3] = 0;
  }
  if (param_1[0xb2] != 0) {
    (**(code **)(*(long *)(param_1[0xb2] + 0x48) + 0x18))();
    param_1[0xb2] = 0;
  }
  if (param_1[0xad] != 0) {
    (**(code **)(*(long *)(param_1[0xad] + 0x48) + 0x18))();
    param_1[0xad] = 0;
  }
  if (param_1[0xac] != 0) {
    (**(code **)(*(long *)(param_1[0xac] + 0x48) + 0x18))();
    param_1[0xac] = 0;
  }
  if (param_1[0xab] != 0) {
    (**(code **)(*(long *)(param_1[0xab] + 0x48) + 0x18))();
    param_1[0xab] = 0;
  }
  if (param_1[0xa3] != 0) {
    (**(code **)(*(long *)(param_1[0xa3] + 0x48) + 0x18))();
    param_1[0xa3] = 0;
  }
  if (param_1[0xa2] != 0) {
    (**(code **)(*(long *)(param_1[0xa2] + 0x48) + 0x18))();
    param_1[0xa2] = 0;
  }
  if (param_1[0x99] != 0) {
    (**(code **)(*(long *)(param_1[0x99] + 0x48) + 0x18))();
    param_1[0x99] = 0;
  }
  puVar1 = PTR_DAT_02719760;
  plVar3 = (long *)param_1[0x93];
  param_1[0x93] = 0;
  *param_1 = (long)(puVar1 + 0x10);
  param_1[9] = (long)(puVar1 + 0x250);
  param_1[10] = (long)(puVar1 + 0x290);
  if (plVar3 != (long *)0x0) {
    if (*plVar3 != 0) {
      (**(code **)(*(long *)(*plVar3 + 0x48) + 0x18))();
      *plVar3 = 0;
    }
    (**(code **)(*(long *)param_1[0x94] + 0x18))
              ((long *)param_1[0x94],plVar3,param_1[0x95],param_1[0x96]);
  }
  plVar3 = (long *)param_1[0x8f];
  param_1[0x8f] = 0;
  if (plVar3 != (long *)0x0) {
    if (*plVar3 != 0) {
      (**(code **)(*(long *)(*plVar3 + 0x48) + 0x18))();
      *plVar3 = 0;
    }
    (**(code **)(*(long *)param_1[0x90] + 0x18))
              ((long *)param_1[0x90],plVar3,param_1[0x91],param_1[0x92]);
  }
  FUN_00aab880(param_1);
  return;
}


