/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 008b7ad0; name: FUN_008b7ad0
 */


void FUN_008b7ad0(long param_1)

{
  undefined4 uVar1;
  int iVar2;
  long *plVar3;
  long lVar4;
  undefined8 *puVar5;
  long lVar6;
  long local_68 [2];
  char *local_58;
  undefined8 local_50;
  long local_48;
  
  if (*(long *)(param_1 + 0x68) != 0) {
    puVar5 = *(undefined8 **)(*(long *)(param_1 + 0x68) + 0x60);
    if (puVar5 == (undefined8 *)0x0) goto LAB_008b7b2c;
    plVar3 = (long *)(**(code **)*puVar5)(puVar5);
    lVar4 = FUN_00897d00();
    for (; plVar3 != (long *)0x0; plVar3 = (long *)*plVar3) {
      if (plVar3 == (long *)lVar4) {
        puVar5 = puVar5 + -10;
        goto LAB_008b7b2c;
      }
    }
  }
  puVar5 = (undefined8 *)0x0;
LAB_008b7b2c:
  iVar2 = FUN_008c8330(*(undefined8 *)(param_1 + 0x88));
  plVar3 = *(long **)(puVar5[0x15] + 0x10);
  lVar4 = (**(code **)(*plVar3 + 0x50))(plVar3,*(undefined4 *)(puVar5[0x15] + 0x1c));
  if (*(char *)(param_1 + 0x9a) != '\0') {
    lVar6 = *(long *)(*(long *)PTR_DAT_02710798 + 0x1d8);
    if (lVar6 == 0) {
      FUN_01520b70(0,iVar2,1);
      FUN_0087cce0(lVar4,iVar2 + -0x6a);
      FUN_01528a20(0x1c);
    }
    else {
      plVar3 = (long *)(lVar6 + 0x48);
      (**(code **)(*plVar3 + 0x10))(plVar3);
      FUN_01520b70(lVar6,iVar2,1);
      FUN_0087cce0(lVar4,iVar2 + -0x6a);
      FUN_01528a20(0x1c);
      (**(code **)(*plVar3 + 0x18))(plVar3);
    }
  }
  local_68[1] = 0xea89adefc6ba7fa7;
  local_58 = "LEARN_SKILL";
  local_50 = 0xb;
  local_48 = 0;
  uVar1 = *(undefined4 *)(param_1 + 0x9c);
  local_68[0] = lVar4;
  if (lVar4 != 0) {
    (**(code **)(*(long *)(lVar4 + 0x48) + 0x10))();
  }
  FUN_014af7f0(local_68 + 1,uVar1,local_68);
  if (local_68[0] != 0) {
    (**(code **)(*(long *)(local_68[0] + 0x48) + 0x18))();
    local_68[0] = 0;
  }
  if (local_48 != 0) {
    (**(code **)(*(long *)(local_48 + 0x48) + 0x18))();
    local_48 = 0;
  }
  FUN_008a6e20(puVar5,iVar2,lVar4,0);
  return;
}


