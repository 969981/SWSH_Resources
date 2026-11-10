/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 01336710; name: FUN_01336710
 */


undefined8 FUN_01336710(long param_1)

{
  long *plVar1;
  long *plVar2;
  ulong uVar3;
  long lVar4;
  long lVar5;
  
  plVar2 = *(long **)(param_1 + 0xa8);
  for (plVar1 = *(long **)(param_1 + 0xa0); plVar1 != plVar2; plVar1 = plVar1 + 3) {
    uVar3 = FUN_0130a600(plVar1[1]);
    if ((uVar3 & 1) != 0) {
      lVar5 = *plVar1;
      if (lVar5 != 0) {
        (**(code **)(*(long *)(lVar5 + 0x48) + 0x10))();
      }
      lVar4 = *(long *)(param_1 + 0xd0);
      *(long *)(param_1 + 0xd0) = lVar5;
      if (lVar4 != 0) {
        (**(code **)(*(long *)(lVar4 + 0x48) + 0x18))();
      }
    }
  }
  if ((*(long *)(param_1 + 0xd0) == 0) || (*(int *)(*(long *)(param_1 + 0xd0) + 0x54) == 0)) {
    FUN_0130a610(*(undefined8 *)(*(long *)(param_1 + 0xa0) + 8),1);
  }
  else {
    lVar5 = *(long *)(param_1 + 0xd8);
    *(undefined8 *)(param_1 + 0xd8) = 0;
    if (lVar5 != 0) {
      (**(code **)(*(long *)(lVar5 + 0x48) + 0x18))();
    }
    plVar2 = *(long **)(param_1 + 0xa8);
    for (plVar1 = *(long **)(param_1 + 0xa0); plVar1 != plVar2; plVar1 = plVar1 + 3) {
      if ((char)plVar1[2] == '\0') {
        lVar5 = *plVar1;
        if (lVar5 != 0) {
          (**(code **)(*(long *)(lVar5 + 0x48) + 0x10))();
        }
        lVar4 = *(long *)(param_1 + 0xd8);
        *(long *)(param_1 + 0xd8) = lVar5;
        if (lVar4 != 0) {
          (**(code **)(*(long *)(lVar4 + 0x48) + 0x18))();
        }
      }
    }
  }
  return 1;
}


