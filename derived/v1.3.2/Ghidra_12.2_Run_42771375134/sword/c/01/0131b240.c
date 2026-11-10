/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0131b240; name: FUN_0131b240
 */


void FUN_0131b240(long param_1,undefined4 param_2)

{
  int iVar1;
  long *plVar2;
  long lVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined8 local_60;
  char *pcStack_58;
  undefined8 local_50;
  long local_48;
  ulong local_38;
  
  if (*(long *)(param_1 + 0x10) == 0) {
    return;
  }
  if (*(int *)(*(long *)(param_1 + 0x10) + 0x54) == 0) {
    return;
  }
  if (*(long *)(param_1 + 0x10) == 0) {
LAB_0131b2b0:
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
          goto LAB_0131b2b4;
        }
      }
      goto LAB_0131b2b0;
    }
  }
LAB_0131b2b4:
  *(undefined2 *)(param_1 + 0xd) = 0;
  *(undefined4 *)(param_1 + 8) = param_2;
  local_60 = 0xa5969c5652ac3ff4;
  pcStack_58 = "fi_move_speed";
  local_50 = 0xd;
  local_48 = 0;
  if (*(long *)(param_1 + 0x10) != 0) {
    if (*(int *)(*(long *)(param_1 + 0x10) + 0x54) != 0) {
      if (*(long *)(param_1 + 0x10) == 0) {
LAB_0131b330:
        puVar5 = (undefined8 *)0x0;
      }
      else {
        puVar5 = *(undefined8 **)(*(long *)(param_1 + 0x10) + 0x60);
        if (puVar5 != (undefined8 *)0x0) {
          plVar2 = (long *)(**(code **)*puVar5)(puVar5);
          lVar3 = FUN_00c781c0();
          for (; plVar2 != (long *)0x0; plVar2 = (long *)*plVar2) {
            if (plVar2 == (long *)lVar3) {
              puVar5 = puVar5 + -10;
              goto LAB_0131b334;
            }
          }
          goto LAB_0131b330;
        }
      }
LAB_0131b334:
      local_38 = FUN_0069d160(puVar5,&local_60);
      if ((local_38 & 0xff) != 0) {
        FUN_0069d190(0,puVar5,&local_38);
      }
    }
    if (local_48 != 0) {
      (**(code **)(*(long *)(local_48 + 0x48) + 0x18))();
    }
  }
  local_60 = 0xeb8cb4cd665fb6aa;
  pcStack_58 = "app_state";
  local_50 = 9;
  local_48 = 0;
  if (*(long *)(param_1 + 0x10) == 0) goto LAB_0131b42c;
  if (*(int *)(*(long *)(param_1 + 0x10) + 0x54) != 0) {
    if (*(long *)(param_1 + 0x10) == 0) {
LAB_0131b3e8:
      puVar5 = (undefined8 *)0x0;
    }
    else {
      puVar5 = *(undefined8 **)(*(long *)(param_1 + 0x10) + 0x60);
      if (puVar5 != (undefined8 *)0x0) {
        plVar2 = (long *)(**(code **)*puVar5)(puVar5);
        lVar3 = FUN_00c781c0();
        for (; plVar2 != (long *)0x0; plVar2 = (long *)*plVar2) {
          if (plVar2 == (long *)lVar3) {
            puVar5 = puVar5 + -10;
            goto LAB_0131b3ec;
          }
        }
        goto LAB_0131b3e8;
      }
    }
LAB_0131b3ec:
    local_38 = FUN_0069d0f0(puVar5,&local_60);
    if ((local_38 & 0xff) != 0) {
      FUN_0069d120(puVar5,&local_38,param_2);
    }
  }
  if (local_48 != 0) {
    (**(code **)(*(long *)(local_48 + 0x48) + 0x18))();
    local_48 = 0;
  }
LAB_0131b42c:
  FUN_0131b4e0(param_1);
  FUN_0131b5c0(param_1,0);
  FUN_0131b6b0(param_1,0);
  FUN_0131b7a0(param_1,0);
  if ((puVar4 == (undefined8 *)0x0) || (iVar1 = FUN_0069d230(puVar4), iVar1 != 0)) {
    FUN_0069c550(0x3f800000,puVar4);
    FUN_0069d2e0(puVar4);
  }
  return;
}


