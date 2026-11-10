/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 006567e0; name: FUN_006567e0
 */


undefined8 FUN_006567e0(long param_1)

{
  long *plVar1;
  long lVar2;
  long *plVar3;
  code *pcVar4;
  long lVar5;
  
  lVar5 = 0;
  plVar3 = (long *)(param_1 + 0xc0);
  *(undefined4 *)(param_1 + 0x298) = 0;
  do {
    plVar1 = (long *)plVar3[-3];
    if (plVar1 == (long *)0x0) {
      plVar1 = (long *)plVar3[-1];
      if (plVar1 != (long *)0x0) goto LAB_00656840;
      if ((long *)*plVar3 != (long *)0x0) {
        pcVar4 = *(code **)(*(long *)*plVar3 + 0x98);
        goto LAB_00656848;
      }
    }
    else {
      plVar1 = (long *)(**(code **)(*plVar1 + 0xc0))(plVar1,0);
LAB_00656840:
      pcVar4 = *(code **)(*plVar1 + 0x88);
LAB_00656848:
      lVar2 = (*pcVar4)();
      *(undefined4 *)(param_1 + 0x29c + lVar5) = *(undefined4 *)(lVar2 + 4);
      *(int *)(param_1 + 0x298) = *(int *)(param_1 + 0x298) + 1;
    }
    lVar5 = lVar5 + 4;
    plVar3 = plVar3 + 7;
  } while (lVar5 != 0x20);
  *(undefined4 *)(param_1 + 0x298) = *(undefined4 *)(param_1 + 0x88);
  if (*(long **)(param_1 + 0x268) == (long *)0x0) {
    plVar3 = *(long **)(param_1 + 0x270);
    if (plVar3 == (long *)0x0) {
      if (*(long **)(param_1 + 0x278) == (long *)0x0) {
        return 1;
      }
      pcVar4 = *(code **)(**(long **)(param_1 + 0x278) + 0x98);
      goto LAB_006568b8;
    }
  }
  else {
    lVar5 = (**(code **)(**(long **)(param_1 + 0x268) + 200))();
    if (lVar5 == 0) {
      return 1;
    }
    plVar3 = (long *)(**(code **)(**(long **)(param_1 + 0x268) + 200))();
  }
  pcVar4 = *(code **)(*plVar3 + 0x88);
LAB_006568b8:
  lVar5 = (*pcVar4)();
  *(undefined4 *)(param_1 + 700) = *(undefined4 *)(lVar5 + 4);
  return 1;
}


