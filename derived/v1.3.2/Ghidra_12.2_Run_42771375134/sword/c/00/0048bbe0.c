/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0048bbe0; name: FUN_0048bbe0
 */


void FUN_0048bbe0(long param_1)

{
  uint *puVar1;
  uint uVar2;
  undefined5 uVar3;
  undefined8 *puVar5;
  undefined8 *puVar4;
  undefined4 local_40 [2];
  undefined8 local_38;
  undefined8 uStack_30;
  undefined4 local_28;
  undefined2 local_24;
  
  puVar1 = (uint *)(param_1 + 0x26b);
  uVar2 = *puVar1;
  uVar3 = *(undefined5 *)puVar1;
  if ((uVar2 >> 0x1c & 1) != 0) {
    FUN_0048d110(param_1,0);
    uVar2 = *puVar1;
    uVar3 = *(undefined5 *)puVar1;
  }
  if ((uVar2 >> 0x14 & 1) != 0) {
    return;
  }
  *(char *)(param_1 + 0x26f) = (char)((uint5)uVar3 >> 0x20);
  *puVar1 = (uint)uVar3 | 0x100000;
  if (*(int *)(param_1 + 0x2b0) != 0) {
    puVar4 = *(undefined8 **)(param_1 + 0x2a8);
    do {
      puVar5 = puVar4 + 1;
      FUN_004815f0(*puVar4,param_1);
      puVar4 = puVar5;
    } while (puVar5 != (undefined8 *)
                       (*(long *)(param_1 + 0x2a8) + (ulong)*(uint *)(param_1 + 0x2b0) * 8));
  }
  *(undefined4 *)(param_1 + 0x2b0) = 0;
  local_40[0] = 0;
  local_28 = 1;
  local_24 = 0x100;
  local_38 = *(undefined8 *)(param_1 + 0x28);
  uStack_30 = 0;
  (**(code **)(**(long **)(param_1 + 0x160) + 0x120))(*(long **)(param_1 + 0x160),local_40);
  return;
}


