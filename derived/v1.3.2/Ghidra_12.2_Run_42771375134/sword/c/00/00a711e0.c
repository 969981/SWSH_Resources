/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00a711e0; name: FUN_00a711e0
 */


void FUN_00a711e0(long param_1,uint param_2,long param_3)

{
  int *piVar1;
  uint *puVar2;
  ulong uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  
  puVar2 = *(uint **)(*(long *)(param_1 + 7000) + 400);
  piVar1 = (int *)((long)puVar2 + (ulong)*puVar2);
  puVar2 = (uint *)((long)piVar1 + (ulong)*(ushort *)((long)piVar1 + (4 - (long)*piVar1)));
  puVar2 = (uint *)((long)puVar2 + (ulong)*puVar2);
  if (param_2 < *puVar2) {
    puVar2 = puVar2 + (ulong)param_2 + 1;
    piVar1 = (int *)((long)puVar2 + (ulong)*puVar2);
    if (*(ushort *)((long)piVar1 - (long)*piVar1) < 5) {
      uVar5 = 0;
    }
    else {
      uVar3 = (ulong)((ushort *)((long)piVar1 - (long)*piVar1))[2];
      uVar5 = 0;
      if (uVar3 != 0) {
        uVar5 = *(undefined4 *)((long)piVar1 + uVar3);
      }
    }
    *(undefined4 *)(param_3 + 0xf8) = uVar5;
    uVar4 = 0;
    uVar5 = 0;
    if (6 < *(ushort *)((long)piVar1 - (long)*piVar1)) {
      uVar3 = (ulong)((ushort *)((long)piVar1 - (long)*piVar1))[3];
      uVar5 = 0;
      if (uVar3 != 0) {
        uVar5 = *(undefined4 *)((long)piVar1 + uVar3);
      }
    }
    *(undefined4 *)(param_3 + 0xfc) = uVar5;
    uVar5 = 0;
    if (8 < *(ushort *)((long)piVar1 - (long)*piVar1)) {
      uVar3 = (ulong)((ushort *)((long)piVar1 - (long)*piVar1))[4];
      uVar5 = 0;
      if (uVar3 != 0) {
        uVar5 = *(undefined4 *)((long)piVar1 + uVar3);
      }
    }
    *(undefined4 *)(param_3 + 0x100) = uVar5;
    uVar5 = 0;
    if (10 < *(ushort *)((long)piVar1 - (long)*piVar1)) {
      uVar3 = (ulong)((ushort *)((long)piVar1 - (long)*piVar1))[5];
      uVar5 = 0;
      if (uVar3 != 0) {
        uVar5 = *(undefined4 *)((long)piVar1 + uVar3);
      }
    }
    *(undefined4 *)(param_3 + 0x104) = uVar5;
    uVar5 = 0;
    if (0xc < *(ushort *)((long)piVar1 - (long)*piVar1)) {
      uVar3 = (ulong)((ushort *)((long)piVar1 - (long)*piVar1))[6];
      uVar5 = 0;
      if (uVar3 != 0) {
        uVar5 = *(undefined4 *)((long)piVar1 + uVar3);
      }
    }
    *(undefined4 *)(param_3 + 0x108) = uVar5;
    uVar5 = 0;
    if (0xe < *(ushort *)((long)piVar1 - (long)*piVar1)) {
      uVar3 = (ulong)((ushort *)((long)piVar1 - (long)*piVar1))[7];
      uVar5 = 0;
      if (uVar3 != 0) {
        uVar5 = *(undefined4 *)((long)piVar1 + uVar3);
      }
    }
    *(undefined4 *)(param_3 + 0x10c) = uVar5;
    uVar5 = 0;
    if (0x10 < *(ushort *)((long)piVar1 - (long)*piVar1)) {
      uVar3 = (ulong)((ushort *)((long)piVar1 - (long)*piVar1))[8];
      uVar5 = 0;
      if (uVar3 != 0) {
        uVar5 = *(undefined4 *)((long)piVar1 + uVar3);
      }
    }
    *(undefined4 *)(param_3 + 0x110) = uVar5;
    if ((0x12 < *(ushort *)((long)piVar1 - (long)*piVar1)) &&
       (uVar3 = (ulong)((ushort *)((long)piVar1 - (long)*piVar1))[9], uVar3 != 0)) {
      uVar4 = *(undefined4 *)((long)piVar1 + uVar3);
    }
    *(undefined4 *)(param_3 + 0x114) = uVar4;
  }
  return;
}


