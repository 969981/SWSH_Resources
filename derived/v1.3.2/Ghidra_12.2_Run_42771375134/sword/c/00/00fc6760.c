/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00fc6760; name: FUN_00fc6760
 */


void FUN_00fc6760(long *param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  code *pcVar5;
  long *plVar6;
  
  plVar6 = (long *)param_1[0xc6];
  puVar1 = PTR_DAT_02722f08 + 0x248;
  puVar2 = PTR_DAT_02722f08 + 0x288;
  *param_1 = (long)(PTR_DAT_02722f08 + 0x10);
  param_1[0xc6] = 0;
  param_1[9] = (long)puVar1;
  param_1[10] = (long)puVar2;
  if (plVar6 != (long *)0x0) {
    *plVar6 = (long)(PTR_DAT_027175d0 + 0x10);
    if (plVar6[1] != 0) {
      (**(code **)(*(long *)(plVar6[1] + 0x48) + 0x18))();
      plVar6[1] = 0;
    }
    (**(code **)(*(long *)param_1[199] + 0x18))
              ((long *)param_1[199],plVar6,param_1[200],param_1[0xc9]);
  }
  puVar3 = PTR_DAT_027164e0;
  puVar1 = PTR_DAT_0271ebd0 + 0x248;
  puVar2 = PTR_DAT_0271ebd0 + 0x288;
  *param_1 = (long)(PTR_DAT_0271ebd0 + 0x10);
  param_1[9] = (long)puVar1;
  param_1[10] = (long)puVar2;
  param_1[0x9a] = (long)(puVar3 + 0x10);
  if (param_1[0x9b] == 0) {
    param_1[0x9b] = 0;
    pcVar5 = (code *)param_1[0xad];
  }
  else {
    FUN_006e2100(param_1[0x9b],param_1 + 0x9a);
    lVar4 = param_1[0x9b];
    param_1[0x9b] = 0;
    if (lVar4 != 0) {
      (**(code **)(*(long *)(lVar4 + 0x48) + 0x18))();
    }
    pcVar5 = (code *)param_1[0xad];
  }
  if (pcVar5 != (code *)0x0) {
    param_1[0xaf] = 0;
    param_1[0xae] = 0;
    param_1[0xad] = 0;
    param_1[0xac] = 0;
    (*pcVar5)(param_1 + 0xb0);
  }
  pcVar5 = (code *)param_1[0x9d];
  if (pcVar5 != (code *)0x0) {
    param_1[0x9f] = 0;
    param_1[0x9e] = 0;
    param_1[0x9d] = 0;
    param_1[0x9c] = 0;
    (*pcVar5)(param_1 + 0xa0);
  }
  if (param_1[0x9b] != 0) {
    (**(code **)(*(long *)(param_1[0x9b] + 0x48) + 0x18))();
    param_1[0x9b] = 0;
  }
  FUN_00dbcb30(param_1);
  return;
}


