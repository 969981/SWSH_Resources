/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 01005b00; name: FUN_01005b00
 */


void FUN_01005b00(long param_1)

{
  long lVar1;
  ulong uVar2;
  long lVar3;
  ulong uVar4;
  long *plVar5;
  
  for (plVar5 = *(long **)(param_1 + 0x3d8); plVar5 != (long *)0x0; plVar5 = (long *)*plVar5) {
    while( true ) {
      if (plVar5[7] == 0) {
        plVar5[7] = 0;
        lVar1 = plVar5[0x29];
      }
      else {
        FUN_006e2100(plVar5[7],plVar5 + 6);
        lVar1 = plVar5[7];
        plVar5[7] = 0;
        if (lVar1 != 0) {
          (**(code **)(*(long *)(lVar1 + 0x48) + 0x18))();
        }
        lVar1 = plVar5[0x29];
      }
      if (lVar1 == 0) break;
      FUN_006e2100(lVar1,plVar5 + 0x28);
      lVar1 = plVar5[0x29];
      plVar5[0x29] = 0;
      if (lVar1 != 0) {
        (**(code **)(*(long *)(lVar1 + 0x48) + 0x18))();
      }
      plVar5 = (long *)*plVar5;
      if (plVar5 == (long *)0x0) goto LAB_01005b90;
    }
    plVar5[0x29] = 0;
  }
LAB_01005b90:
  if (*(long *)(param_1 + 0x3f8) != 0) {
    plVar5 = (long *)*(long *)(param_1 + 0x3d8);
    while (plVar5 != (long *)0x0) {
      lVar1 = *plVar5;
      FUN_01009300(plVar5 + 4);
      (**(code **)(**(long **)(param_1 + 0x3e0) + 0x18))
                (*(long **)(param_1 + 0x3e0),plVar5,0x250,0x10);
      plVar5 = (long *)lVar1;
    }
    uVar4 = *(ulong *)(param_1 + 0x3b8);
    *(undefined8 *)(param_1 + 0x3d8) = 0;
    if (uVar4 != 0) {
      uVar2 = uVar4 & 3;
      if (uVar4 - 1 < 3) {
        lVar1 = 0;
      }
      else {
        lVar1 = 0;
        do {
          lVar3 = lVar1 * 8;
          lVar1 = lVar1 + 4;
          *(undefined8 *)(*(long *)(param_1 + 0x3b0) + lVar3) = 0;
          *(undefined8 *)(*(long *)(param_1 + 0x3b0) + lVar3 + 8) = 0;
          *(undefined8 *)(*(long *)(param_1 + 0x3b0) + lVar3 + 0x10) = 0;
          *(undefined8 *)(*(long *)(param_1 + 0x3b0) + lVar3 + 0x18) = 0;
        } while (uVar4 - uVar2 != lVar1);
      }
      if (uVar2 != 0) {
        lVar1 = lVar1 << 3;
        lVar3 = -uVar2;
        do {
          *(undefined8 *)(*(long *)(param_1 + 0x3b0) + lVar1) = 0;
          lVar1 = lVar1 + 8;
          lVar3 = lVar3 + 1;
        } while (lVar3 != 0);
      }
    }
    *(undefined8 *)(param_1 + 0x3f8) = 0;
  }
  return;
}


