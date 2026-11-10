/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 007d7b40; name: FUN_007d7b40
 */


int FUN_007d7b40(long *param_1)

{
  bool bVar1;
  undefined8 *puVar2;
  int iVar3;
  long *plVar4;
  undefined8 *puVar5;
  int local_34;
  
  puVar5 = (undefined8 *)*param_1;
  puVar2 = (undefined8 *)param_1[1];
  if ((puVar2 == puVar5) || (puVar5 == puVar2)) {
LAB_007d7be4:
    iVar3 = 0;
  }
  else {
    iVar3 = 0;
    do {
      plVar4 = (long *)*puVar5;
      if (plVar4 != (long *)0x0) {
        (**(code **)(plVar4[9] + 0x10))();
      }
      bVar1 = *(char *)((long)plVar4 + 0x61) == '\0';
      if (!bVar1) {
        local_34 = (**(code **)(*plVar4 + 0x38))(plVar4);
        local_34 = iVar3 + local_34;
        iVar3 = FUN_0075de30(&local_34,4);
      }
      (**(code **)(plVar4[9] + 0x18))(plVar4 + 9);
      if (bVar1) goto LAB_007d7be4;
      puVar5 = puVar5 + 1;
    } while (puVar2 != puVar5);
  }
  return iVar3;
}


