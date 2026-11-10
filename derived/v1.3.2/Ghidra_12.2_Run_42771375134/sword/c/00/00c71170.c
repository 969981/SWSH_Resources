/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00c71170; name: FUN_00c71170
 */


void FUN_00c71170(long param_1,ulong param_2,int param_3,undefined8 param_4)

{
  long lVar1;
  long *plVar2;
  long *plVar3;
  code *pcVar4;
  long lVar5;
  undefined1 auStack_308 [16];
  undefined8 local_2f8;
  long local_2f0;
  undefined1 local_2e4;
  undefined8 local_2e0;
  long local_298;
  undefined1 auStack_38 [8];
  
  if (param_3 < 6) {
    lVar1 = param_1 + (long)param_3 * 8;
    if (*(long *)(lVar1 + 0x168) == 0) {
      FUN_00c712b0(auStack_308,param_4);
      lVar5 = *(long *)(param_1 + 0x70);
      if (lVar5 != 0) {
        (**(code **)(*(long *)(lVar5 + 0x48) + 0x10))();
      }
      if (local_2f0 != 0) {
        plVar2 = (long *)(local_2f0 + 0x48);
        local_2f0 = lVar5;
        (**(code **)(*plVar2 + 0x18))();
        lVar5 = local_2f0;
      }
      local_2f0 = lVar5;
      local_2e4 = 1;
      local_2e0 = *(undefined8 *)(param_1 + 0xa0);
      lVar5 = *(long *)(param_1 + 0x108);
      if (lVar5 != 0) {
        (**(code **)(*(long *)(lVar5 + 0x48) + 0x10))();
      }
      if (local_298 != 0) {
        plVar2 = (long *)(local_298 + 0x48);
        local_298 = lVar5;
        (**(code **)(*plVar2 + 0x18))();
        lVar5 = local_298;
      }
      local_298 = lVar5;
      plVar2 = (long *)(lVar1 + 0x168);
      plVar3 = (long *)FUN_00c74b90(auStack_38,local_2f8);
      if (plVar3 != (long *)0x0) {
        (**(code **)(plVar3[9] + 0x10))();
      }
      if (*plVar2 != 0) {
        (**(code **)(*(long *)(*plVar2 + 0x48) + 0x18))();
        *plVar2 = 0;
      }
      *plVar2 = (long)plVar3;
      if ((param_2 & 1) == 0) {
        pcVar4 = *(code **)(*plVar3 + 0x48);
      }
      else {
        pcVar4 = *(code **)(*plVar3 + 0x40);
      }
      (*pcVar4)(plVar3,auStack_308);
      FUN_00c71750(auStack_308);
    }
  }
  return;
}


