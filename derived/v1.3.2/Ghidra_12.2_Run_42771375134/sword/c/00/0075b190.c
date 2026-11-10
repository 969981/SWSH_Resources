/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0075b190; name: FUN_0075b190
 */


void FUN_0075b190(long *param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  code *pcVar3;
  long *plVar4;
  undefined8 *puVar5;
  long lVar6;
  
  puVar1 = PTR_DAT_02715ed0 + 0x58;
  puVar2 = PTR_DAT_02715ed0 + 0x98;
  *param_1 = (long)(PTR_DAT_02715ed0 + 0x10);
  param_1[9] = (long)puVar1;
  param_1[10] = (long)puVar2;
  nn::os::LockMutex((MutexType *)&DAT_029f3840);
  if (param_1[0x33] != 0) {
    plVar4 = (long *)param_1[0x32];
    lVar6 = param_1[0x33] << 3;
    do {
      if (*plVar4 != 0) {
        (**(code **)(*(long *)(*plVar4 + 0x48) + 0x18))();
        *plVar4 = 0;
      }
      plVar4 = plVar4 + 1;
      lVar6 = lVar6 + -8;
    } while (lVar6 != 0);
    lVar6 = param_1[0x33];
    if (lVar6 != 0) {
      plVar4 = (long *)param_1[0x32];
      do {
        lVar6 = lVar6 + -1;
        if (*plVar4 != 0) {
          (**(code **)(*(long *)(*plVar4 + 0x48) + 0x18))();
          *plVar4 = 0;
        }
        plVar4 = plVar4 + 1;
      } while (lVar6 != 0);
    }
  }
  param_1[0x33] = 0;
  nn::os::UnlockMutex((MutexType *)&DAT_029f3840);
  FUN_0075b4d0(param_1);
  nn::os::LockMutex((MutexType *)&DAT_029f3840);
  puVar5 = (undefined8 *)param_1[0xf];
  param_1[0xf] = 0;
  if (puVar5 != (undefined8 *)0x0) {
    (**(code **)*puVar5)(puVar5);
    (**(code **)(*(long *)param_1[0x10] + 0x18))
              ((long *)param_1[0x10],puVar5,param_1[0x11],param_1[0x12]);
  }
  puVar5 = (undefined8 *)param_1[0x13];
  param_1[0x13] = 0;
  if (puVar5 != (undefined8 *)0x0) {
    (**(code **)*puVar5)(puVar5);
    (**(code **)(*(long *)param_1[0x14] + 0x18))
              ((long *)param_1[0x14],puVar5,param_1[0x15],param_1[0x16]);
  }
  nn::os::UnlockMutex((MutexType *)&DAT_029f3840);
  if (param_1[0x36] != 0) {
    (**(code **)(*(long *)(param_1[0x36] + 0x48) + 0x18))();
    param_1[0x36] = 0;
  }
  lVar6 = *(long *)PTR_DAT_02715ed8;
  *(undefined8 *)PTR_DAT_02715ed8 = 0;
  if (lVar6 != 0) {
    (**(code **)(*(long *)(lVar6 + 0x48) + 0x18))();
    if (param_1[0x36] != 0) {
      (**(code **)(*(long *)(param_1[0x36] + 0x48) + 0x18))();
      param_1[0x36] = 0;
    }
  }
  lVar6 = param_1[0x33];
  if (lVar6 != 0) {
    plVar4 = (long *)param_1[0x32];
    do {
      lVar6 = lVar6 + -1;
      if (*plVar4 != 0) {
        (**(code **)(*(long *)(*plVar4 + 0x48) + 0x18))();
        *plVar4 = 0;
      }
      plVar4 = plVar4 + 1;
    } while (lVar6 != 0);
  }
  if (param_1[0x34] != 0) {
    (**(code **)(*(long *)param_1[0x2a] + 0x18))
              ((long *)param_1[0x2a],param_1[0x32],param_1[0x34] << 3,8);
  }
  plVar4 = (long *)param_1[0x30];
  if (param_1 + 0x2c == plVar4) {
    pcVar3 = *(code **)(*plVar4 + 0x20);
  }
  else {
    if (plVar4 == (long *)0x0) goto LAB_0075b398;
    pcVar3 = *(code **)(*plVar4 + 0x28);
  }
  (*pcVar3)();
LAB_0075b398:
  lVar6 = param_1[0x27];
  if (lVar6 != 0) {
    plVar4 = param_1 + 0x17;
    do {
      puVar5 = (undefined8 *)plVar4[4];
      plVar4[4] = 0;
      if (puVar5 != (undefined8 *)0x0) {
        (**(code **)*puVar5)(puVar5);
        (**(code **)(*(long *)plVar4[5] + 0x18))((long *)plVar4[5],puVar5,plVar4[6],plVar4[7]);
      }
      puVar5 = (undefined8 *)*plVar4;
      lVar6 = lVar6 + -1;
      *plVar4 = 0;
      if (puVar5 != (undefined8 *)0x0) {
        (**(code **)*puVar5)(puVar5);
        (**(code **)(*(long *)plVar4[1] + 0x18))((long *)plVar4[1],puVar5,plVar4[2],plVar4[3]);
      }
      plVar4 = plVar4 + 8;
    } while (lVar6 != 0);
  }
  puVar5 = (undefined8 *)param_1[0x13];
  param_1[0x13] = 0;
  if (puVar5 != (undefined8 *)0x0) {
    (**(code **)*puVar5)(puVar5);
    (**(code **)(*(long *)param_1[0x14] + 0x18))
              ((long *)param_1[0x14],puVar5,param_1[0x15],param_1[0x16]);
  }
  puVar5 = (undefined8 *)param_1[0xf];
  param_1[0xf] = 0;
  if (puVar5 != (undefined8 *)0x0) {
    (**(code **)*puVar5)(puVar5);
    (**(code **)(*(long *)param_1[0x10] + 0x18))
              ((long *)param_1[0x10],puVar5,param_1[0x11],param_1[0x12]);
  }
  puVar1 = PTR_DAT_027152a8 + 0x50;
  puVar2 = PTR_DAT_027152a8 + 0x90;
  *param_1 = (long)(PTR_DAT_027152a8 + 0x10);
  param_1[9] = (long)puVar1;
  param_1[10] = (long)puVar2;
  if (param_1[0xb] != 0) {
    (**(code **)(*(long *)(param_1[0xb] + 0x48) + 0x18))();
    param_1[0xb] = 0;
  }
  return;
}


