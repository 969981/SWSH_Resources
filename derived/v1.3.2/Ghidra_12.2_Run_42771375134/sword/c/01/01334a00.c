/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 01334a00; name: FUN_01334a00
 */


bool FUN_01334a00(long param_1,ulong param_2)

{
  int *piVar1;
  undefined1 uVar2;
  int *piVar3;
  uint uVar4;
  ulong uVar5;
  uint *puVar6;
  
  if (*(long *)(param_1 + 0x68) == 0) {
    return false;
  }
  if (*(char *)(*(long *)(param_1 + 0x68) + 0x170) == '\0') {
    return false;
  }
  uVar5 = FUN_014bca10(*(undefined8 *)(param_1 + 0x170));
  if ((uVar5 & 1) == 0) {
    return false;
  }
  puVar6 = *(uint **)(*(long *)(param_1 + 0x68) + 400);
  piVar1 = (int *)((long)puVar6 + (ulong)*puVar6);
  puVar6 = (uint *)((long)piVar1 + (ulong)*(ushort *)((long)piVar1 + (4 - (long)*piVar1)));
  if (*(uint *)((long)puVar6 + (ulong)*puVar6) <= param_2) {
    return false;
  }
  piVar3 = (int *)0x0;
  if (*(long *)(param_1 + 0x68) != 0) {
    piVar3 = piVar1;
  }
  puVar6 = (uint *)0x0;
  if ((8 < *(ushort *)((long)piVar3 - (long)*piVar3)) &&
     (uVar5 = (ulong)((ushort *)((long)piVar3 - (long)*piVar3))[4], puVar6 = (uint *)0x0, uVar5 != 0
     )) {
    puVar6 = (uint *)((long)piVar3 + uVar5);
    puVar6 = (uint *)((long)puVar6 + (ulong)*puVar6);
  }
  if (param_2 != 0) {
    if ((ulong)*puVar6 <= param_2 + 5) {
      return false;
    }
    piVar1 = (int *)((long)(puVar6 + (param_2 + 5 & 0xffffffff) + 1) +
                    (ulong)puVar6[(param_2 + 5 & 0xffffffff) + 1]);
    if (*(ushort *)((long)piVar1 - (long)*piVar1) < 0xf) {
      return false;
    }
    uVar5 = (ulong)((ushort *)((long)piVar1 - (long)*piVar1))[7];
    if (uVar5 == 0) {
      return false;
    }
    return 0 < *(int *)((long)piVar1 + uVar5);
  }
  uVar4 = *puVar6;
  if (uVar4 == 0) {
    return false;
  }
  if (5 < uVar4) {
    uVar4 = 6;
  }
  piVar1 = (int *)((long)(puVar6 + 1) + (ulong)puVar6[1]);
  if (*(ushort *)((long)piVar1 - (long)*piVar1) < 0xf) {
    return false;
  }
  uVar5 = (ulong)((ushort *)((long)piVar1 - (long)*piVar1))[7];
  if (uVar5 == 0) {
    return false;
  }
  if (*(int *)((long)piVar1 + uVar5) == 0) {
    return false;
  }
  if (uVar4 < 2) {
    return true;
  }
  piVar1 = (int *)((long)(puVar6 + 2) + (ulong)puVar6[2]);
  if (*(ushort *)((long)piVar1 - (long)*piVar1) < 0xf) {
    return true;
  }
  uVar5 = (ulong)((ushort *)((long)piVar1 - (long)*piVar1))[7];
  if (uVar5 == 0) {
    return true;
  }
  if (*(int *)((long)piVar1 + uVar5) == 0) {
    return true;
  }
  if (uVar4 < 3) {
    return (bool)2;
  }
  piVar1 = (int *)((long)(puVar6 + 3) + (ulong)puVar6[3]);
  if (*(ushort *)((long)piVar1 - (long)*piVar1) < 0xf) {
    return (bool)2;
  }
  uVar5 = (ulong)((ushort *)((long)piVar1 - (long)*piVar1))[7];
  if (uVar5 == 0) {
    return (bool)2;
  }
  if (*(int *)((long)piVar1 + uVar5) == 0) {
    return (bool)2;
  }
  if (uVar4 < 4) {
    return (bool)3;
  }
  piVar1 = (int *)((long)(puVar6 + 4) + (ulong)puVar6[4]);
  if (*(ushort *)((long)piVar1 - (long)*piVar1) < 0xf) {
    return (bool)3;
  }
  uVar5 = (ulong)((ushort *)((long)piVar1 - (long)*piVar1))[7];
  if (uVar5 == 0) {
    return (bool)3;
  }
  if (*(int *)((long)piVar1 + uVar5) == 0) {
    return (bool)3;
  }
  if (uVar4 < 5) {
    return (bool)4;
  }
  piVar1 = (int *)((long)(puVar6 + 5) + (ulong)puVar6[5]);
  if (*(ushort *)((long)piVar1 - (long)*piVar1) < 0xf) {
    return (bool)4;
  }
  uVar5 = (ulong)((ushort *)((long)piVar1 - (long)*piVar1))[7];
  if (uVar5 == 0) {
    return (bool)4;
  }
  if (*(int *)((long)piVar1 + uVar5) == 0) {
    return (bool)4;
  }
  if (uVar4 < 6) {
    return (bool)5;
  }
  piVar1 = (int *)((long)(puVar6 + 6) + (ulong)puVar6[6]);
  if (*(ushort *)((long)piVar1 - (long)*piVar1) < 0xf) {
    return (bool)5;
  }
  uVar5 = (ulong)((ushort *)((long)piVar1 - (long)*piVar1))[7];
  if (uVar5 == 0) {
    return (bool)5;
  }
  uVar2 = 5;
  if (*(int *)((long)piVar1 + uVar5) != 0) {
    uVar2 = 6;
  }
  return (bool)uVar2;
}


