/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 008bb7c0; name: FUN_008bb7c0
 */


undefined8 FUN_008bb7c0(long param_1)

{
  char cVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  long *plVar5;
  long lVar6;
  undefined8 uVar7;
  undefined8 *puVar8;
  long lVar9;
  
  iVar2 = FUN_008c8330(*(undefined8 *)(param_1 + 0x78));
  if (iVar2 != 0x469) {
    return 0;
  }
  puVar8 = *(undefined8 **)(*(long *)(param_1 + 0x68) + 0x60);
  plVar5 = (long *)(**(code **)*puVar8)(puVar8);
  lVar6 = FUN_00897d00();
  for (; plVar5 != (long *)lVar6; plVar5 = (long *)*plVar5) {
  }
  lVar9 = puVar8[0xb];
  lVar6 = *(long *)(*(long *)PTR_DAT_02710798 + 0x1d8);
  if (lVar6 != 0) {
    (**(code **)(*(long *)(lVar6 + 0x48) + 0x10))();
  }
  uVar3 = FUN_008a6f80(puVar8 + -10);
  uVar7 = (**(code **)(**(long **)(lVar9 + 0x10) + 0x50))
                    (*(long **)(lVar9 + 0x10),*(undefined4 *)(lVar9 + 0x1c));
  cVar1 = FUN_00879890();
  if (cVar1 == '\n') {
    cVar1 = *(char *)(param_1 + 0x9c);
    if ((*(long *)(param_1 + 0x68) != 0) &&
       (puVar8 = *(undefined8 **)(*(long *)(param_1 + 0x68) + 0x60), puVar8 != (undefined8 *)0x0)) {
      plVar5 = (long *)(**(code **)*puVar8)(puVar8);
      lVar9 = FUN_00897d00();
      for (; plVar5 != (long *)0x0; plVar5 = (long *)*plVar5) {
        if (plVar5 == (long *)lVar9) {
          puVar8 = puVar8 + -10;
          goto LAB_008bb8c0;
        }
      }
    }
    puVar8 = (undefined8 *)0x0;
LAB_008bb8c0:
    uVar7 = 0xcf39f8ca2348b32d;
  }
  else {
    FUN_008798d0(uVar7,uVar3);
    *(undefined1 *)(param_1 + 0x90) = 0;
    uVar4 = FUN_01521090(lVar6,0x469);
    if ((uVar3 < uVar4) && (*(char *)(lVar9 + 0x2b) == '\0')) {
      *(undefined1 *)(param_1 + 0x90) = 1;
    }
    FUN_008a6e20(puVar8 + -10,0x469,uVar7,1);
    FUN_01520b70(lVar6,0x469,uVar3);
    FUN_014ca220(*(undefined8 *)(*(long *)(param_1 + 0x88) + 0x5d8),0,uVar3,2,0,1);
    cVar1 = *(char *)(param_1 + 0x9c);
    if ((*(long *)(param_1 + 0x68) != 0) &&
       (puVar8 = *(undefined8 **)(*(long *)(param_1 + 0x68) + 0x60), puVar8 != (undefined8 *)0x0)) {
      plVar5 = (long *)(**(code **)*puVar8)(puVar8);
      lVar9 = FUN_00897d00();
      for (; plVar5 != (long *)0x0; plVar5 = (long *)*plVar5) {
        if (plVar5 == (long *)lVar9) {
          puVar8 = puVar8 + -10;
          goto LAB_008bb9c4;
        }
      }
    }
    puVar8 = (undefined8 *)0x0;
LAB_008bb9c4:
    uVar7 = 0xcf4768ca2353fbd9;
  }
  if (cVar1 == '\0') {
    FUN_008a6b70(puVar8,uVar7,1,0);
    *(undefined1 *)(param_1 + 0x9c) = 1;
    FUN_00ffa3d0(*(undefined8 *)(param_1 + 0x88),0);
  }
  else {
    FUN_008a6b70(puVar8,uVar7,0,0);
    FUN_00ffa3d0(*(undefined8 *)(param_1 + 0x88),0);
  }
  if (lVar6 != 0) {
    (**(code **)(*(long *)(lVar6 + 0x48) + 0x18))((long *)(lVar6 + 0x48));
  }
  return 1;
}


