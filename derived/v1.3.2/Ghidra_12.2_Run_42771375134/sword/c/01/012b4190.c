/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 012b4190; name: FUN_012b4190
 */


void FUN_012b4190(undefined8 *param_1,undefined8 *param_2,ulong param_3)

{
  long lVar1;
  int *piVar2;
  uint uVar3;
  int *piVar4;
  uint *puVar5;
  ulong uVar6;
  
  piVar4 = (int *)*param_2;
  if (piVar4 == (int *)0x0) {
    *param_1 = 0;
    *(undefined4 *)(param_1 + 1) = 0xffffffff;
    return;
  }
  if (*(uint *)(param_2 + 1) == 0xffffffff) {
    *param_1 = 0;
    *(undefined4 *)(param_1 + 1) = 0xffffffff;
    return;
  }
  if ((((*(ushort *)((long)piVar4 - (long)*piVar4) < 5) ||
       (uVar6 = (ulong)((ushort *)((long)piVar4 - (long)*piVar4))[2], uVar6 == 0)) ||
      (puVar5 = (uint *)((long)piVar4 + uVar6), lVar1 = (long)puVar5 + (ulong)*puVar5, lVar1 == 0))
     || ((puVar5 = (uint *)(lVar1 + (ulong)*(uint *)(param_2 + 1) * 4 + 4),
         piVar2 = (int *)((long)puVar5 + (ulong)*puVar5), piVar2 == (int *)0x0 ||
         (puVar5 = (uint *)((long)piVar2 + (ulong)*(ushort *)((long)piVar2 + (6 - (long)*piVar2))),
         puVar5 = (uint *)((long)puVar5 + (ulong)*puVar5), *puVar5 <= param_3)))) {
    *param_1 = 0;
    *(undefined4 *)(param_1 + 1) = 0xffffffff;
    return;
  }
  uVar3 = puVar5[(param_3 & 0xffffffff) + 1];
  *param_1 = piVar4;
  *(uint *)(param_1 + 1) = uVar3;
  return;
}


