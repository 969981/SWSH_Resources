/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 004102a0; name: FUN_004102a0
 */


void FUN_004102a0(long *param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 *puVar3;
  long lVar4;
  
  puVar1 = PTR_DAT_02712ba0 + 0x108;
  puVar2 = PTR_DAT_02712ba0 + 0x130;
  *param_1 = (long)(PTR_DAT_02712ba0 + 0x10);
  param_1[3] = (long)puVar1;
  param_1[5] = (long)puVar2;
  if (param_1[0x16] != 0) {
    *(undefined4 *)(param_1 + 0x17) = 0;
    FUN_00404870(*(undefined4 *)PTR_DAT_02712a90);
    param_1[0x16] = 0;
    *(undefined4 *)((long)param_1 + 0xbc) = 0;
  }
  puVar3 = (undefined8 *)param_1[0x10];
  if (puVar3 != (undefined8 *)0x0) {
    if (*(uint *)(param_1 + 0x11) != 0) {
      lVar4 = (ulong)*(uint *)(param_1 + 0x11) * 0x18;
      do {
        (**(code **)*puVar3)(puVar3);
        lVar4 = lVar4 + -0x18;
        puVar3 = puVar3 + 3;
      } while (lVar4 != 0);
      puVar3 = (undefined8 *)param_1[0x10];
    }
    *(undefined4 *)(param_1 + 0x11) = 0;
    FUN_00404870(*(undefined4 *)PTR_DAT_02712a90,puVar3);
    param_1[0x10] = 0;
    *(undefined4 *)((long)param_1 + 0x8c) = 0;
  }
  if ((long *)param_1[0xf] != (long *)0x0) {
    (**(code **)(*(long *)param_1[0xf] + 0x18))();
  }
  FUN_0040ade0(param_1);
  return;
}


