/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 008adba0; name: FUN_008adba0
 */


void FUN_008adba0(long param_1)

{
  undefined *puVar1;
  undefined4 uVar2;
  long *plVar3;
  long lVar4;
  undefined8 uVar5;
  ulong uVar6;
  undefined8 *puVar7;
  
  if (*(char *)(param_1 + 0x80) == '\0') {
    uVar6 = FUN_010384a0(*(undefined8 *)(param_1 + 0x90));
    if ((uVar6 & 1) != 0) {
      FUN_01038270(*(undefined8 *)(param_1 + 0x90),1);
      FUN_00ffa3d0(*(undefined8 *)(param_1 + 0x88),0);
      *(undefined4 *)(param_1 + 0x7c) = 2;
      *(undefined4 *)(*(long *)(param_1 + 0x88) + 0x810) = 0xffffffff;
      *(undefined4 *)(param_1 + 0x84) = 0;
    }
    return;
  }
  *(undefined4 *)(param_1 + 0x84) = 10;
  puVar7 = *(undefined8 **)(*(long *)(param_1 + 0x68) + 0x60);
  plVar3 = (long *)(**(code **)*puVar7)(puVar7);
  lVar4 = FUN_00897d00();
  for (; plVar3 != (long *)lVar4; plVar3 = (long *)*plVar3) {
  }
  lVar4 = puVar7[0xb];
  uVar2 = FUN_008c8330(*(undefined8 *)(param_1 + 0x88));
  uVar5 = (**(code **)(**(long **)(lVar4 + 0x10) + 0x50))
                    (*(long **)(lVar4 + 0x10),*(undefined4 *)(lVar4 + 0x1c));
  FUN_008a6e20(puVar7 + -10,uVar2,uVar5,1);
  puVar1 = PTR_DAT_02710798;
  *(undefined4 *)(lVar4 + 0x24) = uVar2;
  lVar4 = *(long *)(*(long *)puVar1 + 0x1d8);
  if (lVar4 == 0) {
    FUN_01520b70(0,uVar2,1);
  }
  else {
    plVar3 = (long *)(lVar4 + 0x48);
    (**(code **)(*plVar3 + 0x10))(plVar3);
    FUN_01520b70(lVar4,uVar2,1);
    (**(code **)(*plVar3 + 0x18))(plVar3);
  }
  *(undefined4 *)(param_1 + 0x7c) = 2;
  return;
}


