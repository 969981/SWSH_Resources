/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0100ee00; name: FUN_0100ee00
 */


void FUN_0100ee00(long param_1,long param_2)

{
  long lVar1;
  undefined8 *puVar2;
  long *plVar3;
  long *plVar4;
  long *plVar5;
  
  plVar3 = *(long **)(param_1 + 0x50);
  plVar4 = *(long **)(param_1 + 0x58);
  if ((plVar4 != plVar3) && (*plVar3 != param_2)) {
    do {
      plVar3 = plVar3 + 4;
      if (plVar4 == plVar3) {
        return;
      }
    } while (*plVar3 != param_2);
  }
  if (plVar3 == plVar4) {
    return;
  }
  if (plVar3 + 4 != plVar4) {
    do {
      lVar1 = plVar3[4];
      puVar2 = (undefined8 *)*plVar3;
      plVar3[4] = 0;
      *plVar3 = lVar1;
      if (puVar2 != (undefined8 *)0x0) {
        (**(code **)*puVar2)(puVar2);
        (**(code **)(*(long *)plVar3[1] + 0x18))((long *)plVar3[1],puVar2,plVar3[2],plVar3[3]);
      }
      plVar3[2] = plVar3[6];
      plVar3[3] = plVar3[7];
      plVar3[1] = plVar3[5];
      plVar3 = plVar3 + 4;
    } while (plVar4 + -4 != plVar3);
    plVar4 = *(long **)(param_1 + 0x58);
    if (plVar4 == plVar3) goto LAB_0100ef0c;
  }
  do {
    plVar5 = plVar4 + -4;
    puVar2 = (undefined8 *)*plVar5;
    *plVar5 = 0;
    if (puVar2 != (undefined8 *)0x0) {
      (**(code **)*puVar2)(puVar2);
      (**(code **)(*(long *)plVar4[-3] + 0x18))((long *)plVar4[-3],puVar2,plVar4[-2],plVar4[-1]);
    }
    plVar4 = plVar5;
  } while (plVar3 != plVar5);
LAB_0100ef0c:
  *(long **)(param_1 + 0x58) = plVar3;
  return;
}


