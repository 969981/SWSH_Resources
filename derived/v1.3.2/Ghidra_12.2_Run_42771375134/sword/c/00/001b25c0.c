/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 001b25c0; name: FUN_001b25c0
 */


void FUN_001b25c0(int *param_1)

{
  undefined8 *puVar1;
  long *plVar2;
  ulong uVar3;
  long lVar4;
  ulong uVar5;
  int local_24;
  
  uVar3 = (ulong)(uint)param_1[8];
  if (param_1[8] != 0) {
    uVar5 = 0;
    do {
      puVar1 = *(undefined8 **)(*(long *)(param_1 + 6) + uVar5 * 8);
      if (puVar1 != (undefined8 *)0x0) {
        local_24 = *(int *)(puVar1 + 9);
        if (*param_1 + -1 == local_24) {
          *param_1 = local_24;
        }
        else if ((uint)param_1[4] < (param_1[5] & 0x7fffffffU)) {
          *(int *)(*(long *)(param_1 + 2) + (ulong)(uint)param_1[4] * 4) = local_24;
          param_1[4] = param_1[4] + 1;
        }
        else {
          FUN_001b4230(param_1 + 2,&local_24);
          puVar1 = *(undefined8 **)(*(long *)(param_1 + 6) + uVar5 * 8);
        }
        (**(code **)*puVar1)();
        *(undefined8 *)(*(long *)(param_1 + 6) + uVar5 * 8) = 0;
        uVar3 = (ulong)(uint)param_1[8];
      }
      uVar5 = uVar5 + 1;
    } while (uVar5 < uVar3);
  }
  lVar4 = *(long *)(param_1 + 6);
  if (lVar4 != 0) {
    plVar2 = (long *)FUN_00400d30();
    (**(code **)(*plVar2 + 0x18))(plVar2,lVar4);
  }
  return;
}


