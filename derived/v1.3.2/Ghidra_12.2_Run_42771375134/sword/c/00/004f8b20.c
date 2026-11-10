/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 004f8b20; name: FUN_004f8b20
 */


void FUN_004f8b20(long *param_1)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  
  lVar2 = param_1[1];
  *param_1 = (long)(PTR_DAT_027137d0 + 0x10);
  puVar1 = PTR_DAT_02712a90;
  lVar3 = lVar2;
  if ((int)param_1[2] != 0) {
    do {
      (**(code **)(*(long *)**(undefined8 **)(lVar3 + 0x10) + 0x10))();
      **(undefined8 **)(lVar3 + 0x10) = 0;
      lVar2 = *(long *)(lVar3 + 0x10);
      if (lVar2 != 0) {
        if (*(long *)(lVar2 + 0x10) != 0) {
          *(undefined4 *)(lVar2 + 0x18) = 0;
          FUN_00404870(*(undefined4 *)puVar1);
          *(undefined8 *)(lVar2 + 0x10) = 0;
          *(undefined4 *)(lVar2 + 0x1c) = 0;
          lVar2 = *(long *)(lVar3 + 0x10);
        }
        FUN_00404870(*(undefined4 *)puVar1,lVar2);
        *(undefined8 *)(lVar3 + 0x10) = 0;
      }
      lVar2 = param_1[1];
      lVar3 = lVar3 + 0x18;
    } while (lVar3 != lVar2 + (ulong)*(uint *)(param_1 + 2) * 0x18);
  }
  if (lVar2 != 0) {
    *(undefined4 *)(param_1 + 2) = 0;
    FUN_00404870(*(undefined4 *)PTR_DAT_027137c8,lVar2);
    param_1[1] = 0;
    *(undefined4 *)((long)param_1 + 0x14) = 0;
  }
  *(undefined8 *)PTR_DAT_02712d98 = 0;
  return;
}


