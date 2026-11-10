/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 001d0df0; name: FUN_001d0df0
 */


void FUN_001d0df0(long param_1)

{
  uint uVar1;
  ulong uVar2;
  long lVar3;
  ulong uVar4;
  long lVar5;
  
  if (*(int *)(param_1 + 0x2084) != 0) {
    uVar4 = 0;
    do {
      FUN_001d80e0(*(undefined8 *)(*(long *)(param_1 + 0x2058) + uVar4 * 8));
      uVar4 = uVar4 + 1;
    } while (uVar4 < *(uint *)(param_1 + 0x2084));
  }
  if (*(int *)(param_1 + 0x20bc) != 0) {
    uVar4 = 0;
    do {
      FUN_001d80e0(*(undefined8 *)(*(long *)(param_1 + 0x2090) + uVar4 * 8));
      uVar4 = uVar4 + 1;
    } while (uVar4 < *(uint *)(param_1 + 0x20bc));
  }
  if (*(int *)(param_1 + 0x212c) != 0) {
    uVar4 = 0;
    do {
      lVar5 = *(long *)(*(long *)(param_1 + 0x2100) + uVar4 * 8);
      if (2 < *(uint *)(lVar5 + 8) >> 0x1e) {
        FUN_003dfc00(param_1 + 0x10,lVar5 + 0x18);
        if ((*(byte *)(lVar5 + 0xb) >> 4 & 1) == 0) {
          FUN_001d7c70(lVar5);
        }
      }
      uVar2 = (ulong)*(uint *)(param_1 + 0x212c);
      uVar4 = uVar4 + 1;
    } while (uVar4 < uVar2);
    if (*(uint *)(param_1 + 0x212c) != 0) {
      lVar5 = *(long *)(param_1 + 0x2100);
      uVar4 = 0;
      do {
        lVar3 = *(long *)(lVar5 + uVar4 * 8);
        if (((*(uint *)(lVar3 + 8) ^ 0xffffffff) & 0x10000001) == 0) {
          FUN_003c15d0(lVar3 + 0x18);
          uVar2 = (ulong)*(uint *)(param_1 + 0x212c);
        }
        uVar4 = uVar4 + 1;
      } while (uVar4 < uVar2);
    }
  }
  uVar4 = (ulong)*(uint *)(param_1 + 0x219c);
  if (*(uint *)(param_1 + 0x219c) != 0) {
    uVar2 = 0;
    do {
      lVar5 = *(long *)(*(long *)(param_1 + 0x2170) + uVar2 * 8);
      if (2 < *(uint *)(lVar5 + 8) >> 0x1e) {
        FUN_003dff00(param_1 + 0x10,lVar5 + 0x18);
        uVar4 = (ulong)*(uint *)(param_1 + 0x219c);
      }
      uVar2 = uVar2 + 1;
    } while (uVar2 < uVar4);
  }
  FUN_001d10a0(param_1,param_1 + 0x2050);
  FUN_001d1480(param_1,param_1 + 0x2088);
  if (*(int *)(param_1 + 0x2164) != 0) {
    uVar4 = 0;
    do {
      lVar5 = *(long *)(*(long *)(param_1 + 0x2138) + uVar4 * 8);
      if (2 < *(uint *)(lVar5 + 8) >> 0x1e) {
        *(uint *)(lVar5 + 8) = *(uint *)(lVar5 + 8) & 0xfffffcff;
        FUN_003dfdc0(param_1 + 0x10,lVar5 + 0x18);
        if ((*(byte *)(lVar5 + 0xb) >> 4 & 1) == 0) {
          FUN_001d7d60(lVar5);
        }
      }
      uVar4 = uVar4 + 1;
    } while (uVar4 < *(uint *)(param_1 + 0x2164));
  }
  uVar4 = (ulong)*(uint *)(param_1 + 0x20f4);
  if (*(uint *)(param_1 + 0x20f4) != 0) {
    uVar2 = 0;
    do {
      lVar5 = *(long *)(*(long *)(param_1 + 0x20c8) + uVar2 * 8);
      uVar1 = *(uint *)(lVar5 + 8);
      if (2 < uVar1 >> 0x1e) {
        FUN_003ea030(param_1 + 0x10,lVar5 + 0x18,uVar1 >> 0x1d & 1);
        uVar4 = (ulong)*(uint *)(param_1 + 0x20f4);
      }
      uVar2 = uVar2 + 1;
    } while (uVar2 < uVar4);
  }
  uVar4 = (ulong)*(uint *)(param_1 + 0x220c);
  if (*(uint *)(param_1 + 0x220c) != 0) {
    uVar2 = 0;
    do {
      lVar5 = *(long *)(*(long *)(param_1 + 0x21e0) + uVar2 * 8);
      if (2 < *(uint *)(lVar5 + 8) >> 0x1e) {
        FUN_003ea250(param_1 + 0x10,lVar5 + 0x18);
        uVar4 = (ulong)*(uint *)(param_1 + 0x220c);
      }
      uVar2 = uVar2 + 1;
    } while (uVar2 < uVar4);
  }
  uVar4 = (ulong)*(uint *)(param_1 + 0x21d4);
  if (*(uint *)(param_1 + 0x21d4) != 0) {
    uVar2 = 0;
    do {
      lVar5 = *(long *)(*(long *)(param_1 + 0x21a8) + uVar2 * 8);
      if (2 < *(uint *)(lVar5 + 8) >> 0x1e) {
        FUN_001cfdf0(lVar5,param_1);
        FUN_003ea410(param_1 + 0x10,*(undefined4 *)(lVar5 + 0x20));
        uVar4 = (ulong)*(uint *)(param_1 + 0x21d4);
      }
      uVar2 = uVar2 + 1;
    } while (uVar2 < uVar4);
  }
  return;
}


