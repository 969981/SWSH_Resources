/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 004c9600; name: FUN_004c9600
 */


void FUN_004c9600(long *param_1)

{
  undefined *puVar1;
  undefined8 *puVar2;
  long lVar3;
  long lVar4;
  
  puVar1 = PTR_DAT_02712ae0;
  lVar3 = *param_1;
  lVar4 = lVar3;
  if ((int)param_1[1] != 0) {
    do {
      if ((*(long *)(lVar4 + 8) != 0) && (*(int *)(lVar4 + 0x14) != -1)) {
        FUN_00449180(*(undefined8 *)puVar1);
        puVar2 = *(undefined8 **)(lVar4 + 0x18);
        if (puVar2 != (undefined8 *)0x0) {
          (**(code **)*puVar2)(puVar2,0);
        }
      }
      lVar3 = *param_1;
      lVar4 = lVar4 + 0x20;
    } while (lVar4 != lVar3 + (ulong)*(uint *)(param_1 + 1) * 0x20);
  }
  if (lVar3 != 0) {
    *(undefined4 *)(param_1 + 1) = 0;
    FUN_00404870(*(undefined4 *)PTR_DAT_02712a90,lVar3);
    *param_1 = 0;
    *(undefined4 *)((long)param_1 + 0xc) = 0;
  }
  return;
}


