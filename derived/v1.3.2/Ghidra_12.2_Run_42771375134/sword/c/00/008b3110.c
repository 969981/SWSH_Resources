/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 008b3110; name: FUN_008b3110
 */


void FUN_008b3110(long param_1)

{
  long *plVar1;
  long lVar2;
  undefined8 uVar3;
  ulong uVar4;
  undefined4 uVar5;
  undefined8 *puVar6;
  
  puVar6 = *(undefined8 **)(*(long *)(param_1 + 0x68) + 0x60);
  plVar1 = (long *)(**(code **)*puVar6)(puVar6);
  lVar2 = FUN_00897d00();
  for (; plVar1 != (long *)lVar2; plVar1 = (long *)*plVar1) {
  }
  lVar2 = puVar6[0xb];
  if (*(int *)(lVar2 + 0x60) == 0) {
    uVar3 = (**(code **)(**(long **)(lVar2 + 0x10) + 0x50))
                      (*(long **)(lVar2 + 0x10),*(undefined4 *)(lVar2 + 0x1c));
    uVar4 = FUN_0087d610(uVar3,2);
    if ((uVar4 & 1) != 0) {
      if ((*(long *)(param_1 + 0x68) != 0) &&
         (puVar6 = *(undefined8 **)(*(long *)(param_1 + 0x68) + 0x60), puVar6 != (undefined8 *)0x0))
      {
        plVar1 = (long *)(**(code **)*puVar6)(puVar6);
        lVar2 = FUN_00897d00();
        for (; plVar1 != (long *)0x0; plVar1 = (long *)*plVar1) {
          if (plVar1 == (long *)lVar2) {
            puVar6 = puVar6 + -10;
            goto LAB_008b31c4;
          }
        }
      }
      puVar6 = (undefined8 *)0x0;
LAB_008b31c4:
      FUN_008a6b70(puVar6,0xcf39f8ca2348b32d,*(char *)(param_1 + 0x99) == '\0',0);
      *(undefined1 *)(param_1 + 0x99) = 1;
      FUN_00ffa3d0(*(undefined8 *)(param_1 + 0x90),0);
      uVar5 = 3;
      goto LAB_008b3210;
    }
  }
  FUN_008b3380(param_1);
  uVar5 = 4;
LAB_008b3210:
  *(undefined4 *)(param_1 + 0x7c) = uVar5;
  return;
}


