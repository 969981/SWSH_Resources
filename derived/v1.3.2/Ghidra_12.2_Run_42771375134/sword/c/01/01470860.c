/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 01470860; name: FUN_01470860
 */


void FUN_01470860(long param_1)

{
  long lVar1;
  code *pcVar2;
  long lVar3;
  long *plVar4;
  long *local_b0;
  code *local_a8;
  code *local_a0;
  undefined8 local_98;
  undefined1 auStack_90 [96];
  long local_28;
  
  if ((*(long *)(param_1 + 0x4c0) == 0) ||
     (lVar3 = *(long *)(*(long *)(param_1 + 0x4c0) + 0x58), lVar3 == 0)) {
    *(undefined8 *)(param_1 + 0x608) = 0;
  }
  else {
    plVar4 = (long *)(lVar3 + 0x48);
    (**(code **)(*plVar4 + 0x10))(plVar4);
    (**(code **)(*plVar4 + 0x18))(plVar4);
    lVar3 = *(long *)(*(long *)(param_1 + 0x4c0) + 0x58);
    if (lVar3 != 0) {
      (**(code **)(*(long *)(lVar3 + 0x48) + 0x10))();
    }
    local_b0 = &local_28;
    local_28 = 0;
    local_a8 = (code *)0xe2c06acab97c29c2;
    FUN_01037340(lVar3,&local_b0,0);
    lVar1 = local_28;
    if (lVar3 != 0) {
      (**(code **)(*(long *)(lVar3 + 0x48) + 0x18))((long *)(lVar3 + 0x48));
    }
    *(long *)(param_1 + 0x608) = lVar1;
    if (lVar1 != 0) {
      FUN_016bbde0(lVar1,0);
      FUN_016bbde0(*(undefined8 *)(param_1 + 0x608),1);
      FUN_016bbde0(*(undefined8 *)(param_1 + 0x608),2);
      FUN_016bbde0(*(undefined8 *)(param_1 + 0x608),3);
      FUN_016bbde0(*(undefined8 *)(param_1 + 0x608),4);
      lVar3 = *(long *)(param_1 + 0x608);
      local_a0 = (code *)0x0;
      local_98 = 0;
      local_b0 = (long *)0x0;
      local_a8 = (code *)0x0;
      pcVar2 = *(code **)(lVar3 + 0x168);
      if (pcVar2 != (code *)0x0) {
        *(undefined8 *)(lVar3 + 0x170) = 0;
        *(undefined8 *)(lVar3 + 0x178) = 0;
        *(undefined8 *)(lVar3 + 0x160) = 0;
        *(undefined8 *)(lVar3 + 0x168) = 0;
        (*pcVar2)(lVar3 + 0x180);
        if (local_a0 != (code *)0x0) {
          (*local_a0)(auStack_90,lVar3 + 0x180);
          *(undefined8 *)(lVar3 + 0x178) = local_98;
          *(code **)(lVar3 + 0x168) = local_a8;
          *(code **)(lVar3 + 0x170) = local_a0;
          *(undefined8 *)(lVar3 + 0x160) = local_b0;
        }
      }
      pcVar2 = local_a8;
      if (local_a8 != (code *)0x0) {
        local_a0 = (code *)0x0;
        local_98 = 0;
        local_b0 = (long *)0x0;
        local_a8 = (code *)0x0;
        (*pcVar2)(auStack_90);
      }
      FUN_016b2d70(*(undefined8 *)(param_1 + 0x608),0);
    }
  }
  return;
}


