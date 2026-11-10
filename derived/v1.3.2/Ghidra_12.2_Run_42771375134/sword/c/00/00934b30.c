/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00934b30; name: FUN_00934b30
 */


void FUN_00934b30(long *param_1)

{
  bool bVar1;
  long *plVar2;
  undefined8 *puVar3;
  long lVar4;
  
  lVar4 = 0;
  *param_1 = (long)(PTR_DAT_02717dc8 + 0x10);
  do {
    puVar3 = *(undefined8 **)((long)param_1 + lVar4 + 8);
    *(undefined8 *)((long)param_1 + lVar4 + 8) = 0;
    if (puVar3 != (undefined8 *)0x0) {
      (**(code **)*puVar3)(puVar3);
      plVar2 = *(long **)((long)param_1 + lVar4 + 0x10);
      (**(code **)(*plVar2 + 0x18))
                (plVar2,puVar3,*(undefined8 *)((long)param_1 + lVar4 + 0x18),
                 *(undefined8 *)((long)param_1 + lVar4 + 0x20));
    }
    lVar4 = lVar4 + 0x20;
  } while (lVar4 != 0x300);
  lVar4 = 0;
  do {
    puVar3 = *(undefined8 **)((long)param_1 + lVar4 + 0x308);
    *(undefined8 *)((long)param_1 + lVar4 + 0x308) = 0;
    if (puVar3 != (undefined8 *)0x0) {
      (**(code **)*puVar3)(puVar3);
      plVar2 = *(long **)((long)param_1 + lVar4 + 0x310);
      (**(code **)(*plVar2 + 0x18))
                (plVar2,puVar3,*(undefined8 *)((long)param_1 + lVar4 + 0x318),
                 *(undefined8 *)((long)param_1 + lVar4 + 800));
    }
    lVar4 = lVar4 + 0x20;
  } while (lVar4 != 0x300);
  lVar4 = 0;
  do {
    puVar3 = *(undefined8 **)((long)param_1 + lVar4 + 0x5e8);
    *(undefined8 *)((long)param_1 + lVar4 + 0x5e8) = 0;
    if (puVar3 != (undefined8 *)0x0) {
      (**(code **)*puVar3)(puVar3);
      plVar2 = *(long **)((long)param_1 + lVar4 + 0x5f0);
      (**(code **)(*plVar2 + 0x18))
                (plVar2,puVar3,*(undefined8 *)((long)param_1 + lVar4 + 0x5f8),
                 *(undefined8 *)((long)param_1 + lVar4 + 0x600));
    }
    bVar1 = lVar4 != -0x5e0;
    lVar4 = lVar4 + -0x20;
  } while (bVar1);
  return;
}


