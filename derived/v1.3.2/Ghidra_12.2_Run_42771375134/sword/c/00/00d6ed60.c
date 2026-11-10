/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00d6ed60; name: FUN_00d6ed60
 */


undefined8 FUN_00d6ed60(long param_1)

{
  long *plVar1;
  long lVar2;
  long lVar3;
  long *plVar4;
  long *plVar5;
  
  if (*(long *)(param_1 + 0x88) != 0) {
    plVar4 = *(long **)(param_1 + 0x80);
    plVar1 = plVar4 + *(long *)(param_1 + 0x88) * 4;
    do {
      plVar5 = plVar4 + 4;
      if (plVar4 + 4 != plVar1) {
        plVar5 = plVar4;
        do {
          lVar2 = plVar5[4];
          lVar3 = *plVar5;
          plVar5[4] = 0;
          *plVar5 = lVar2;
          if (lVar3 != 0) {
            FUN_00d6f2e0(lVar3);
            (**(code **)(*(long *)plVar5[1] + 0x18))((long *)plVar5[1],lVar3,plVar5[2],plVar5[3]);
          }
          plVar5[2] = plVar5[6];
          plVar5[3] = plVar5[7];
          plVar5[1] = plVar5[5];
          plVar5 = plVar5 + 4;
        } while (plVar1 + -4 != plVar5);
        plVar5 = (long *)(*(long *)(param_1 + 0x80) + *(long *)(param_1 + 0x88) * 0x20);
      }
      lVar2 = plVar5[-4];
      plVar5[-4] = 0;
      if (lVar2 != 0) {
        FUN_00d6f2e0(lVar2);
        (**(code **)(*(long *)plVar5[-3] + 0x18))((long *)plVar5[-3],lVar2,plVar5[-2],plVar5[-1]);
      }
      lVar2 = *(long *)(param_1 + 0x88) + -1;
      plVar1 = (long *)(*(long *)(param_1 + 0x80) + lVar2 * 0x20);
      *(long *)(param_1 + 0x88) = lVar2;
    } while (plVar4 != plVar1);
  }
  return 1;
}


