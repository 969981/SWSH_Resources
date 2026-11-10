/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 008b2f80; name: FUN_008b2f80
 */


void FUN_008b2f80(long param_1)

{
  int iVar1;
  long *plVar2;
  long lVar3;
  undefined8 uVar4;
  ulong uVar5;
  undefined4 uVar6;
  undefined8 *puVar7;
  
  iVar1 = *(int *)(*(long *)(param_1 + 0x88) + 0x5cc);
  if (iVar1 == 0) {
    return;
  }
  if (iVar1 == 5) {
    FUN_00ffa3f0();
    puVar7 = *(undefined8 **)(*(long *)(param_1 + 0x68) + 0x60);
    plVar2 = (long *)(**(code **)*puVar7)(puVar7);
    lVar3 = FUN_00897d00();
    for (; plVar2 != (long *)lVar3; plVar2 = (long *)*plVar2) {
    }
    lVar3 = puVar7[0xb];
    if (*(int *)(lVar3 + 0x60) == 0) {
      uVar4 = (**(code **)(**(long **)(lVar3 + 0x10) + 0x50))
                        (*(long **)(lVar3 + 0x10),*(undefined4 *)(lVar3 + 0x1c));
      uVar5 = FUN_0087d610(uVar4,2);
      if ((uVar5 & 1) != 0) {
        if ((*(long *)(param_1 + 0x68) != 0) &&
           (puVar7 = *(undefined8 **)(*(long *)(param_1 + 0x68) + 0x60), puVar7 != (undefined8 *)0x0
           )) {
          plVar2 = (long *)(**(code **)*puVar7)(puVar7);
          lVar3 = FUN_00897d00();
          for (; plVar2 != (long *)0x0; plVar2 = (long *)*plVar2) {
            if (plVar2 == (long *)lVar3) {
              puVar7 = puVar7 + -10;
              goto LAB_008b3080;
            }
          }
        }
        puVar7 = (undefined8 *)0x0;
LAB_008b3080:
        FUN_008a6b70(puVar7,0xcf39f8ca2348b32d,*(char *)(param_1 + 0x99) == '\0',0);
        *(undefined1 *)(param_1 + 0x99) = 1;
        FUN_00ffa3d0(*(undefined8 *)(param_1 + 0x90),0);
        FUN_008c4b10(*(undefined8 *)(param_1 + 0x88),0);
        FUN_008c82b0(*(undefined8 *)(param_1 + 0x88),0);
        uVar6 = 3;
        goto LAB_008b30e4;
      }
    }
    FUN_008b3380(param_1);
  }
  else if (iVar1 == 6) {
    FUN_01038270(*(undefined8 *)(param_1 + 0x90),1);
    FUN_008c4b10(*(undefined8 *)(param_1 + 0x88),0);
    *(undefined4 *)(*(long *)(param_1 + 0x88) + 0x810) = 0xffffffff;
    *(undefined4 *)(param_1 + 0x80) = 0;
  }
  uVar6 = 4;
LAB_008b30e4:
  *(undefined4 *)(param_1 + 0x7c) = uVar6;
  *(undefined4 *)(*(long *)(param_1 + 0x88) + 0x5cc) = 0;
  return;
}


