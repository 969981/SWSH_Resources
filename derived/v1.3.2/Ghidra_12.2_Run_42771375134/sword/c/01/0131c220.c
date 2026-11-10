/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0131c220; name: FUN_0131c220
 */


void FUN_0131c220(long param_1,undefined4 *param_2)

{
  char cVar1;
  long *plVar2;
  long lVar3;
  undefined8 *puVar4;
  undefined4 uVar5;
  undefined8 local_68;
  char *pcStack_60;
  undefined8 local_58;
  long local_50;
  ulong local_48;
  
  local_68 = 0x1567a43f87df9a2;
  pcStack_60 = "camp_meal_offset_01";
  local_58 = 0x13;
  local_50 = 0;
  if ((*(long *)(param_1 + 0x10) != 0) &&
     (uVar5 = *param_2, *(int *)(*(long *)(param_1 + 0x10) + 0x54) != 0)) {
    if (*(long *)(param_1 + 0x10) == 0) {
LAB_0131c2bc:
      puVar4 = (undefined8 *)0x0;
    }
    else {
      puVar4 = *(undefined8 **)(*(long *)(param_1 + 0x10) + 0x60);
      if (puVar4 != (undefined8 *)0x0) {
        plVar2 = (long *)(**(code **)*puVar4)(puVar4);
        lVar3 = FUN_00c781c0();
        for (; plVar2 != (long *)0x0; plVar2 = (long *)*plVar2) {
          if (plVar2 == (long *)lVar3) {
            puVar4 = puVar4 + -10;
            goto LAB_0131c2c0;
          }
        }
        goto LAB_0131c2bc;
      }
    }
LAB_0131c2c0:
    local_48 = FUN_0069d160(puVar4,&local_68);
    if ((local_48 & 0xff) != 0) {
      FUN_0069d190(uVar5,puVar4,&local_48);
    }
  }
  if (local_50 != 0) {
    (**(code **)(*(long *)(local_50 + 0x48) + 0x18))();
  }
  local_68 = 0x1567943f87df7ef;
  pcStack_60 = "camp_meal_offset_02";
  local_58 = 0x13;
  local_50 = 0;
  if ((*(long *)(param_1 + 0x10) != 0) &&
     (uVar5 = param_2[1], *(int *)(*(long *)(param_1 + 0x10) + 0x54) != 0)) {
    if (*(long *)(param_1 + 0x10) == 0) {
LAB_0131c378:
      puVar4 = (undefined8 *)0x0;
    }
    else {
      puVar4 = *(undefined8 **)(*(long *)(param_1 + 0x10) + 0x60);
      if (puVar4 != (undefined8 *)0x0) {
        plVar2 = (long *)(**(code **)*puVar4)(puVar4);
        lVar3 = FUN_00c781c0();
        for (; plVar2 != (long *)0x0; plVar2 = (long *)*plVar2) {
          if (plVar2 == (long *)lVar3) {
            puVar4 = puVar4 + -10;
            goto LAB_0131c37c;
          }
        }
        goto LAB_0131c378;
      }
    }
LAB_0131c37c:
    local_48 = FUN_0069d160(puVar4,&local_68);
    if ((local_48 & 0xff) != 0) {
      FUN_0069d190(uVar5,puVar4,&local_48);
    }
  }
  if (local_50 != 0) {
    (**(code **)(*(long *)(local_50 + 0x48) + 0x18))();
  }
  local_68 = 0xad26741f6c68918;
  pcStack_60 = "camp_meal_reaction_after_eat_speed";
  local_58 = 0x22;
  local_50 = 0;
  if ((*(long *)(param_1 + 0x10) != 0) &&
     (uVar5 = param_2[2], *(int *)(*(long *)(param_1 + 0x10) + 0x54) != 0)) {
    if (*(long *)(param_1 + 0x10) == 0) {
LAB_0131c434:
      puVar4 = (undefined8 *)0x0;
    }
    else {
      puVar4 = *(undefined8 **)(*(long *)(param_1 + 0x10) + 0x60);
      if (puVar4 != (undefined8 *)0x0) {
        plVar2 = (long *)(**(code **)*puVar4)(puVar4);
        lVar3 = FUN_00c781c0();
        for (; plVar2 != (long *)0x0; plVar2 = (long *)*plVar2) {
          if (plVar2 == (long *)lVar3) {
            puVar4 = puVar4 + -10;
            goto LAB_0131c438;
          }
        }
        goto LAB_0131c434;
      }
    }
LAB_0131c438:
    local_48 = FUN_0069d160(puVar4,&local_68);
    if ((local_48 & 0xff) != 0) {
      FUN_0069d190(uVar5,puVar4,&local_48);
    }
  }
  if (local_50 != 0) {
    (**(code **)(*(long *)(local_50 + 0x48) + 0x18))();
  }
  local_68 = 0xad84cee75a087217;
  pcStack_60 = "camp_meal_hate_no_use";
  local_58 = 0x15;
  local_50 = 0;
  if ((*(long *)(param_1 + 0x10) != 0) &&
     (cVar1 = *(char *)((long)param_2 + 0xf), *(int *)(*(long *)(param_1 + 0x10) + 0x54) != 0)) {
    if (*(long *)(param_1 + 0x10) == 0) {
LAB_0131c4f0:
      puVar4 = (undefined8 *)0x0;
    }
    else {
      puVar4 = *(undefined8 **)(*(long *)(param_1 + 0x10) + 0x60);
      if (puVar4 != (undefined8 *)0x0) {
        plVar2 = (long *)(**(code **)*puVar4)(puVar4);
        lVar3 = FUN_00c781c0();
        for (; plVar2 != (long *)0x0; plVar2 = (long *)*plVar2) {
          if (plVar2 == (long *)lVar3) {
            puVar4 = puVar4 + -10;
            goto LAB_0131c4f4;
          }
        }
        goto LAB_0131c4f0;
      }
    }
LAB_0131c4f4:
    local_48 = FUN_0069d1d0(puVar4,&local_68);
    if ((local_48 & 0xff) != 0) {
      FUN_0069d200(puVar4,&local_48,cVar1 != '\0');
    }
  }
  if (local_50 != 0) {
    (**(code **)(*(long *)(local_50 + 0x48) + 0x18))();
  }
  local_68 = 0x65ac7f7f6efc083c;
  pcStack_60 = "camp_meal_a_no_use";
  local_58 = 0x12;
  local_50 = 0;
  if ((*(long *)(param_1 + 0x10) != 0) &&
     (cVar1 = *(char *)((long)param_2 + 0xd), *(int *)(*(long *)(param_1 + 0x10) + 0x54) != 0)) {
    if (*(long *)(param_1 + 0x10) == 0) {
LAB_0131c5b0:
      puVar4 = (undefined8 *)0x0;
    }
    else {
      puVar4 = *(undefined8 **)(*(long *)(param_1 + 0x10) + 0x60);
      if (puVar4 != (undefined8 *)0x0) {
        plVar2 = (long *)(**(code **)*puVar4)(puVar4);
        lVar3 = FUN_00c781c0();
        for (; plVar2 != (long *)0x0; plVar2 = (long *)*plVar2) {
          if (plVar2 == (long *)lVar3) {
            puVar4 = puVar4 + -10;
            goto LAB_0131c5b4;
          }
        }
        goto LAB_0131c5b0;
      }
    }
LAB_0131c5b4:
    local_48 = FUN_0069d1d0(puVar4,&local_68);
    if ((local_48 & 0xff) != 0) {
      FUN_0069d200(puVar4,&local_48,cVar1 != '\0');
    }
  }
  if (local_50 != 0) {
    (**(code **)(*(long *)(local_50 + 0x48) + 0x18))();
  }
  local_68 = 0x3a2290c4b264605e;
  pcStack_60 = "camp_meal_c_no_use";
  local_58 = 0x12;
  local_50 = 0;
  if ((*(long *)(param_1 + 0x10) != 0) &&
     (cVar1 = *(char *)(param_2 + 3), *(int *)(*(long *)(param_1 + 0x10) + 0x54) != 0)) {
    if (*(long *)(param_1 + 0x10) == 0) {
LAB_0131c670:
      puVar4 = (undefined8 *)0x0;
    }
    else {
      puVar4 = *(undefined8 **)(*(long *)(param_1 + 0x10) + 0x60);
      if (puVar4 != (undefined8 *)0x0) {
        plVar2 = (long *)(**(code **)*puVar4)(puVar4);
        lVar3 = FUN_00c781c0();
        for (; plVar2 != (long *)0x0; plVar2 = (long *)*plVar2) {
          if (plVar2 == (long *)lVar3) {
            puVar4 = puVar4 + -10;
            goto LAB_0131c674;
          }
        }
        goto LAB_0131c670;
      }
    }
LAB_0131c674:
    local_48 = FUN_0069d1d0(puVar4,&local_68);
    if ((local_48 & 0xff) != 0) {
      FUN_0069d200(puVar4,&local_48,cVar1 != '\0');
    }
  }
  if (local_50 != 0) {
    (**(code **)(*(long *)(local_50 + 0x48) + 0x18))();
  }
  local_68 = 0x2572ae8e9388d145;
  pcStack_60 = "camp_meal_no_eat";
  local_58 = 0x10;
  local_50 = 0;
  if ((*(long *)(param_1 + 0x10) == 0) ||
     (cVar1 = *(char *)((long)param_2 + 0xe), *(int *)(*(long *)(param_1 + 0x10) + 0x54) == 0))
  goto LAB_0131c760;
  if (*(long *)(param_1 + 0x10) == 0) {
LAB_0131c730:
    puVar4 = (undefined8 *)0x0;
  }
  else {
    puVar4 = *(undefined8 **)(*(long *)(param_1 + 0x10) + 0x60);
    if (puVar4 != (undefined8 *)0x0) {
      plVar2 = (long *)(**(code **)*puVar4)(puVar4);
      lVar3 = FUN_00c781c0();
      for (; plVar2 != (long *)0x0; plVar2 = (long *)*plVar2) {
        if (plVar2 == (long *)lVar3) {
          puVar4 = puVar4 + -10;
          goto LAB_0131c734;
        }
      }
      goto LAB_0131c730;
    }
  }
LAB_0131c734:
  local_48 = FUN_0069d1d0(puVar4,&local_68);
  if ((local_48 & 0xff) != 0) {
    FUN_0069d200(puVar4,&local_48,cVar1 != '\0');
  }
LAB_0131c760:
  if (local_50 != 0) {
    (**(code **)(*(long *)(local_50 + 0x48) + 0x18))();
  }
  return;
}


