/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0120c690; name: FUN_0120c690
 */


void FUN_0120c690(long param_1)

{
  undefined *puVar1;
  long lVar2;
  long *plVar3;
  undefined1 auStack_40 [16];
  
  plVar3 = (long *)(param_1 + 0x68);
  *(undefined1 *)(param_1 + 0x7a78) = 0xfd;
  if (*plVar3 != 0) {
    (**(code **)(*(long *)(*plVar3 + 0x48) + 0x18))();
    *plVar3 = 0;
  }
  *plVar3 = 0;
  *(undefined8 *)(param_1 + 0x70) = 0;
  puVar1 = PTR_DAT_027104a0;
  lVar2 = FUN_007a8430(*(undefined8 *)PTR_DAT_027104a0,0);
  if (lVar2 != 0) {
    if ((*(uint *)(lVar2 + 0x4c) | 0x1000000) >> 0x10 == 0x302) {
      FUN_01956260(auStack_40,lVar2);
    }
    FUN_01955f40(auStack_40,lVar2);
  }
  lVar2 = FUN_007a8430(*(undefined8 *)puVar1,1);
  if (lVar2 != 0) {
    if ((*(uint *)(lVar2 + 0x4c) | 0x1000000) >> 0x10 == 0x302) {
      FUN_01956260(auStack_40,lVar2);
    }
    FUN_01955f40(auStack_40,lVar2);
  }
  lVar2 = FUN_007a8430(*(undefined8 *)puVar1,2);
  if (lVar2 != 0) {
    if ((*(uint *)(lVar2 + 0x4c) | 0x1000000) >> 0x10 == 0x302) {
      FUN_01956260(auStack_40,lVar2);
    }
    FUN_01955f40(auStack_40,lVar2);
  }
  lVar2 = FUN_007a8430(*(undefined8 *)puVar1,3);
  if (lVar2 != 0) {
    if ((*(uint *)(lVar2 + 0x4c) | 0x1000000) >> 0x10 == 0x302) {
      FUN_01956260(auStack_40,lVar2);
    }
    FUN_01955f40(auStack_40,lVar2);
  }
  lVar2 = FUN_007a8430(*(undefined8 *)puVar1,4);
  if (lVar2 != 0) {
    if ((*(uint *)(lVar2 + 0x4c) | 0x1000000) >> 0x10 == 0x302) {
      FUN_01956260(auStack_40,lVar2);
    }
    FUN_01955f40(auStack_40,lVar2);
  }
  lVar2 = FUN_007a8430(*(undefined8 *)puVar1,5);
  if (lVar2 != 0) {
    if ((*(uint *)(lVar2 + 0x4c) | 0x1000000) >> 0x10 == 0x302) {
      FUN_01956260(auStack_40,lVar2);
    }
    FUN_01955f40(auStack_40,lVar2);
  }
  lVar2 = FUN_007a8430(*(undefined8 *)puVar1,6);
  if (lVar2 != 0) {
    if ((*(uint *)(lVar2 + 0x4c) | 0x1000000) >> 0x10 == 0x302) {
      FUN_01956260(auStack_40,lVar2);
    }
    FUN_01955f40(auStack_40,lVar2);
  }
  lVar2 = FUN_007a8430(*(undefined8 *)puVar1,7);
  if (lVar2 != 0) {
    if ((*(uint *)(lVar2 + 0x4c) | 0x1000000) >> 0x10 == 0x302) {
      FUN_01956260(auStack_40,lVar2);
    }
    FUN_01955f40(auStack_40,lVar2);
  }
  *(undefined8 *)(param_1 + 0x1b78) = 0;
  *(undefined1 *)(param_1 + 0x1b80) = 0;
  *(undefined8 *)(param_1 + 0x2908) = 0;
  *(undefined1 *)(param_1 + 0x2910) = 0;
  *(undefined8 *)(param_1 + 0x3698) = 0;
  *(undefined1 *)(param_1 + 0x36a0) = 0;
  *(undefined8 *)(param_1 + 0x4428) = 0;
  *(undefined1 *)(param_1 + 0x4430) = 0;
  *(undefined8 *)(param_1 + 0x51b8) = 0;
  *(undefined1 *)(param_1 + 0x51c0) = 0;
  *(undefined8 *)(param_1 + 0x5f48) = 0;
  *(undefined1 *)(param_1 + 0x5f50) = 0;
  *(undefined8 *)(param_1 + 0x6cd8) = 0;
  *(undefined1 *)(param_1 + 0x6ce0) = 0;
  *(undefined8 *)(param_1 + 0x7a68) = 0;
  *(undefined1 *)(param_1 + 0x7a70) = 0;
  return;
}


