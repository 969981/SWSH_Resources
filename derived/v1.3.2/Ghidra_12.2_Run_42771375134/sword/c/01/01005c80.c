/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 01005c80; name: FUN_01005c80
 */


void FUN_01005c80(long param_1)

{
  long *plVar1;
  ulong uVar2;
  long lVar3;
  ulong uVar4;
  undefined8 *puVar5;
  long lVar6;
  
  if (*(long *)(param_1 + 0x90) != 0) {
    plVar1 = (long *)*(long *)(param_1 + 0x70);
    while (plVar1 != (long *)0x0) {
      puVar5 = (undefined8 *)plVar1[3];
      lVar6 = *plVar1;
      plVar1[3] = 0;
      if (puVar5 != (undefined8 *)0x0) {
        (**(code **)*puVar5)(puVar5);
        (**(code **)(*(long *)plVar1[4] + 0x18))((long *)plVar1[4],puVar5,plVar1[5],plVar1[6]);
      }
      (**(code **)(**(long **)(param_1 + 0x78) + 0x18))(*(long **)(param_1 + 0x78),plVar1,0x38,8);
      plVar1 = (long *)lVar6;
    }
    uVar4 = *(ulong *)(param_1 + 0x50);
    *(undefined8 *)(param_1 + 0x70) = 0;
    if (uVar4 != 0) {
      uVar2 = uVar4 & 3;
      if (uVar4 - 1 < 3) {
        lVar6 = 0;
      }
      else {
        lVar6 = 0;
        do {
          lVar3 = lVar6 * 8;
          lVar6 = lVar6 + 4;
          *(undefined8 *)(*(long *)(param_1 + 0x48) + lVar3) = 0;
          *(undefined8 *)(*(long *)(param_1 + 0x48) + lVar3 + 8) = 0;
          *(undefined8 *)(*(long *)(param_1 + 0x48) + lVar3 + 0x10) = 0;
          *(undefined8 *)(*(long *)(param_1 + 0x48) + lVar3 + 0x18) = 0;
        } while (uVar4 - uVar2 != lVar6);
      }
      if (uVar2 != 0) {
        lVar6 = lVar6 << 3;
        lVar3 = -uVar2;
        do {
          *(undefined8 *)(*(long *)(param_1 + 0x48) + lVar6) = 0;
          lVar6 = lVar6 + 8;
          lVar3 = lVar3 + 1;
        } while (lVar3 != 0);
      }
    }
    *(undefined8 *)(param_1 + 0x90) = 0;
  }
  if (*(long *)(param_1 + 0xe8) != 0) {
    plVar1 = (long *)*(long *)(param_1 + 200);
    while (plVar1 != (long *)0x0) {
      puVar5 = (undefined8 *)plVar1[3];
      lVar6 = *plVar1;
      plVar1[3] = 0;
      if (puVar5 != (undefined8 *)0x0) {
        (**(code **)*puVar5)(puVar5);
        (**(code **)(*(long *)plVar1[4] + 0x18))((long *)plVar1[4],puVar5,plVar1[5],plVar1[6]);
      }
      (**(code **)(**(long **)(param_1 + 0xd0) + 0x18))(*(long **)(param_1 + 0xd0),plVar1,0x38,8);
      plVar1 = (long *)lVar6;
    }
    uVar4 = *(ulong *)(param_1 + 0xa8);
    *(undefined8 *)(param_1 + 200) = 0;
    if (uVar4 != 0) {
      uVar2 = uVar4 & 3;
      if (uVar4 - 1 < 3) {
        lVar6 = 0;
      }
      else {
        lVar6 = 0;
        do {
          lVar3 = lVar6 * 8;
          lVar6 = lVar6 + 4;
          *(undefined8 *)(*(long *)(param_1 + 0xa0) + lVar3) = 0;
          *(undefined8 *)(*(long *)(param_1 + 0xa0) + lVar3 + 8) = 0;
          *(undefined8 *)(*(long *)(param_1 + 0xa0) + lVar3 + 0x10) = 0;
          *(undefined8 *)(*(long *)(param_1 + 0xa0) + lVar3 + 0x18) = 0;
        } while (uVar4 - uVar2 != lVar6);
      }
      if (uVar2 != 0) {
        lVar6 = lVar6 << 3;
        lVar3 = -uVar2;
        do {
          *(undefined8 *)(*(long *)(param_1 + 0xa0) + lVar6) = 0;
          lVar6 = lVar6 + 8;
          lVar3 = lVar3 + 1;
        } while (lVar3 != 0);
      }
    }
    *(undefined8 *)(param_1 + 0xe8) = 0;
  }
  if (*(long *)(param_1 + 0x140) != 0) {
    plVar1 = (long *)*(long *)(param_1 + 0x120);
    while (plVar1 != (long *)0x0) {
      puVar5 = (undefined8 *)plVar1[3];
      lVar6 = *plVar1;
      plVar1[3] = 0;
      if (puVar5 != (undefined8 *)0x0) {
        (**(code **)*puVar5)(puVar5);
        (**(code **)(*(long *)plVar1[4] + 0x18))((long *)plVar1[4],puVar5,plVar1[5],plVar1[6]);
      }
      (**(code **)(**(long **)(param_1 + 0x128) + 0x18))(*(long **)(param_1 + 0x128),plVar1,0x38,8);
      plVar1 = (long *)lVar6;
    }
    uVar4 = *(ulong *)(param_1 + 0x100);
    *(undefined8 *)(param_1 + 0x120) = 0;
    if (uVar4 != 0) {
      uVar2 = uVar4 & 3;
      if (uVar4 - 1 < 3) {
        lVar6 = 0;
      }
      else {
        lVar6 = 0;
        do {
          lVar3 = lVar6 * 8;
          lVar6 = lVar6 + 4;
          *(undefined8 *)(*(long *)(param_1 + 0xf8) + lVar3) = 0;
          *(undefined8 *)(*(long *)(param_1 + 0xf8) + lVar3 + 8) = 0;
          *(undefined8 *)(*(long *)(param_1 + 0xf8) + lVar3 + 0x10) = 0;
          *(undefined8 *)(*(long *)(param_1 + 0xf8) + lVar3 + 0x18) = 0;
        } while (uVar4 - uVar2 != lVar6);
      }
      if (uVar2 != 0) {
        lVar6 = lVar6 << 3;
        lVar3 = -uVar2;
        do {
          *(undefined8 *)(*(long *)(param_1 + 0xf8) + lVar6) = 0;
          lVar6 = lVar6 + 8;
          lVar3 = lVar3 + 1;
        } while (lVar3 != 0);
      }
    }
    *(undefined8 *)(param_1 + 0x140) = 0;
  }
  if (*(long *)(param_1 + 0x198) != 0) {
    plVar1 = (long *)*(long *)(param_1 + 0x178);
    while (plVar1 != (long *)0x0) {
      puVar5 = (undefined8 *)plVar1[3];
      lVar6 = *plVar1;
      plVar1[3] = 0;
      if (puVar5 != (undefined8 *)0x0) {
        (**(code **)*puVar5)(puVar5);
        (**(code **)(*(long *)plVar1[4] + 0x18))((long *)plVar1[4],puVar5,plVar1[5],plVar1[6]);
      }
      (**(code **)(**(long **)(param_1 + 0x180) + 0x18))(*(long **)(param_1 + 0x180),plVar1,0x38,8);
      plVar1 = (long *)lVar6;
    }
    uVar4 = *(ulong *)(param_1 + 0x158);
    *(undefined8 *)(param_1 + 0x178) = 0;
    if (uVar4 != 0) {
      uVar2 = uVar4 & 3;
      if (uVar4 - 1 < 3) {
        lVar6 = 0;
      }
      else {
        lVar6 = 0;
        do {
          lVar3 = lVar6 * 8;
          lVar6 = lVar6 + 4;
          *(undefined8 *)(*(long *)(param_1 + 0x150) + lVar3) = 0;
          *(undefined8 *)(*(long *)(param_1 + 0x150) + lVar3 + 8) = 0;
          *(undefined8 *)(*(long *)(param_1 + 0x150) + lVar3 + 0x10) = 0;
          *(undefined8 *)(*(long *)(param_1 + 0x150) + lVar3 + 0x18) = 0;
        } while (uVar4 - uVar2 != lVar6);
      }
      if (uVar2 != 0) {
        lVar6 = lVar6 << 3;
        lVar3 = -uVar2;
        do {
          *(undefined8 *)(*(long *)(param_1 + 0x150) + lVar6) = 0;
          lVar6 = lVar6 + 8;
          lVar3 = lVar3 + 1;
        } while (lVar3 != 0);
      }
    }
    *(undefined8 *)(param_1 + 0x198) = 0;
  }
  return;
}


