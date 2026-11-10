/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 006036c0; name: FUN_006036c0
 */


void FUN_006036c0(long param_1)

{
  long lVar1;
  long *plVar2;
  uint *puVar3;
  long *plVar4;
  long lVar5;
  
  plVar4 = *(long **)(*(long *)(param_1 + 8) + 0xb0);
  lVar1 = plVar4[2];
  if (*(code **)(plVar4[3] + 0x88) != (code *)0x0) {
    (**(code **)(plVar4[3] + 0x88))(param_1);
  }
  plVar2 = *(long **)(param_1 + 0x128);
  if ((plVar2 == (long *)0x0) || (puVar3 = (uint *)(plVar2 + 1), (*puVar3 & 1) == 0)) {
    *(undefined8 *)(param_1 + 0xa8) = 0;
  }
  else {
    if (*(long *)(param_1 + 0xa8) != 0) {
      (**(code **)(*(long *)(*(long *)(param_1 + 8) + 0xb8) + 0x10))();
      puVar3 = (uint *)(*(long *)(param_1 + 0x128) + 8);
    }
    *(undefined8 *)(param_1 + 0xa8) = 0;
    *puVar3 = *puVar3 & 0xfffffffe;
    plVar2 = *(long **)(param_1 + 0x128);
  }
  if (plVar2 != (long *)0x0) {
    if ((*(byte *)(*plVar4 + 1) >> 1 & 1) == 0) {
      plVar4 = (long *)*plVar2;
      if (plVar4 != (long *)0x0) {
        lVar5 = *plVar4;
        if (plVar4[4] != 0) {
          (**(code **)(lVar5 + 0x10))(lVar5);
        }
        plVar4[4] = 0;
        if (plVar4[5] != 0) {
          (**(code **)(lVar5 + 0x10))(lVar5);
        }
        plVar4[5] = 0;
        if (plVar4[6] != 0) {
          (**(code **)(lVar5 + 0x10))(lVar5);
        }
        plVar4[6] = 0;
        if (plVar4[8] != 0) {
          (**(code **)(lVar5 + 0x10))(lVar5);
        }
        plVar4[8] = 0;
        if (plVar4[0xb] != 0) {
          (**(code **)(lVar5 + 0x10))(lVar5);
        }
        *(undefined4 *)(plVar4 + 3) = 0;
        plVar4[0xf] = plVar4[6];
        plVar4[0x10] = plVar4[7];
        *(undefined4 *)(plVar4 + 10) = 0;
        plVar4[9] = 0;
        plVar4[0xd] = plVar4[4];
        plVar4[0xe] = plVar4[5];
        plVar4[0x11] = plVar4[8];
        plVar4[0x12] = 0;
        plVar4[0xb] = 0;
        plVar4[0xc] = plVar4[3];
        plVar4[1] = 0;
        *(undefined4 *)(plVar4 + 2) = 0;
        plVar4[0x13] = plVar4[10];
        plVar4[0x14] = 0;
        (**(code **)(lVar5 + 0x10))(lVar5,plVar4);
        plVar2 = *(long **)(param_1 + 0x128);
      }
      *plVar2 = 0;
      plVar2 = *(long **)(param_1 + 0x128);
    }
    if (plVar2 != (long *)0x0) {
      (**(code **)(lVar1 + 0x10))(lVar1);
    }
    *(undefined8 *)(param_1 + 0x128) = 0;
  }
  return;
}


