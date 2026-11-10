/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00eaf670; name: FUN_00eaf670
 */


void FUN_00eaf670(long param_1)

{
  long lVar1;
  char cVar2;
  ulong uVar3;
  long lVar4;
  long lVar5;
  long *plVar6;
  undefined8 *puVar7;
  long lVar8;
  long lVar9;
  long local_48;
  
  lVar8 = *(long *)(param_1 + 0x6c0);
  if (lVar8 != 0) {
    (**(code **)(*(long *)(lVar8 + 0x48) + 0x10))();
  }
  lVar9 = *(long *)(param_1 + 0x6d0);
  if (lVar9 != 0) {
    (**(code **)(*(long *)(lVar9 + 0x48) + 0x10))();
  }
  lVar4 = *(long *)(param_1 + 0x6e0);
  if (lVar4 != 0) {
    (**(code **)(*(long *)(lVar4 + 0x48) + 0x10))();
  }
  lVar5 = *(long *)(param_1 + 0x6f0);
  if (lVar5 != 0) {
    (**(code **)(*(long *)(lVar5 + 0x48) + 0x10))();
  }
  lVar1 = param_1 + 0x6c0;
  if (lVar8 != 0) {
    plVar6 = (long *)(lVar8 + 0x48);
    (**(code **)(*plVar6 + 0x10))(plVar6);
    if (*(int *)(lVar8 + 0x54) != 0) {
      (**(code **)(*(long *)(lVar8 + 0x48) + 0x10))(plVar6);
      puVar7 = *(undefined8 **)(lVar8 + 0x60) + -10;
      (**(code **)**(undefined8 **)(lVar8 + 0x60))();
      uVar3 = FUN_00e5d3d0();
      if ((uVar3 & 1) == 0) {
        puVar7 = (undefined8 *)0x0;
      }
      cVar2 = *(char *)(puVar7 + 0x166);
      local_48 = lVar8;
      (**(code **)(*(long *)(lVar8 + 0x48) + 0x10))(plVar6);
      uVar3 = FUN_00fa3020(&local_48,lVar1,4,cVar2 == '\0');
      if (local_48 != 0) {
        (**(code **)(*(long *)(local_48 + 0x48) + 0x18))();
        local_48 = 0;
      }
      if ((uVar3 & 1) != 0) {
        *(int *)(param_1 + 0x700) = *(int *)(param_1 + 0x700) + -1;
        *(undefined4 *)(param_1 + 0x690) = 0x5a;
      }
      (**(code **)(*plVar6 + 0x18))(plVar6);
    }
    (**(code **)(*plVar6 + 0x18))(plVar6);
  }
  if (lVar9 != 0) {
    plVar6 = (long *)(lVar9 + 0x48);
    (**(code **)(*plVar6 + 0x10))(plVar6);
    if (*(int *)(lVar9 + 0x54) != 0) {
      (**(code **)(*(long *)(lVar9 + 0x48) + 0x10))(plVar6);
      puVar7 = *(undefined8 **)(lVar9 + 0x60) + -10;
      (**(code **)**(undefined8 **)(lVar9 + 0x60))();
      uVar3 = FUN_00e5d3d0();
      if ((uVar3 & 1) == 0) {
        puVar7 = (undefined8 *)0x0;
      }
      cVar2 = *(char *)(puVar7 + 0x166);
      local_48 = lVar9;
      (**(code **)(*(long *)(lVar9 + 0x48) + 0x10))(plVar6);
      uVar3 = FUN_00fa3020(&local_48,lVar1,4,cVar2 == '\0');
      if (local_48 != 0) {
        (**(code **)(*(long *)(local_48 + 0x48) + 0x18))();
        local_48 = 0;
      }
      if ((uVar3 & 1) != 0) {
        *(int *)(param_1 + 0x700) = *(int *)(param_1 + 0x700) + -1;
        *(undefined4 *)(param_1 + 0x690) = 0x5a;
      }
      (**(code **)(*plVar6 + 0x18))(plVar6);
    }
    (**(code **)(*plVar6 + 0x18))(plVar6);
  }
  if (lVar4 != 0) {
    plVar6 = (long *)(lVar4 + 0x48);
    (**(code **)(*plVar6 + 0x10))(plVar6);
    if (*(int *)(lVar4 + 0x54) != 0) {
      (**(code **)(*(long *)(lVar4 + 0x48) + 0x10))(plVar6);
      puVar7 = *(undefined8 **)(lVar4 + 0x60) + -10;
      (**(code **)**(undefined8 **)(lVar4 + 0x60))();
      uVar3 = FUN_00e5d3d0();
      if ((uVar3 & 1) == 0) {
        puVar7 = (undefined8 *)0x0;
      }
      cVar2 = *(char *)(puVar7 + 0x166);
      local_48 = lVar4;
      (**(code **)(*(long *)(lVar4 + 0x48) + 0x10))(plVar6);
      uVar3 = FUN_00fa3020(&local_48,lVar1,4,cVar2 == '\0');
      if (local_48 != 0) {
        (**(code **)(*(long *)(local_48 + 0x48) + 0x18))();
        local_48 = 0;
      }
      if ((uVar3 & 1) != 0) {
        *(int *)(param_1 + 0x700) = *(int *)(param_1 + 0x700) + -1;
        *(undefined4 *)(param_1 + 0x690) = 0x5a;
      }
      (**(code **)(*plVar6 + 0x18))(plVar6);
    }
    (**(code **)(*plVar6 + 0x18))(plVar6);
  }
  if (lVar5 != 0) {
    plVar6 = (long *)(lVar5 + 0x48);
    (**(code **)(*plVar6 + 0x10))(plVar6);
    if (*(int *)(lVar5 + 0x54) != 0) {
      (**(code **)(*(long *)(lVar5 + 0x48) + 0x10))(plVar6);
      puVar7 = *(undefined8 **)(lVar5 + 0x60) + -10;
      (**(code **)**(undefined8 **)(lVar5 + 0x60))();
      uVar3 = FUN_00e5d3d0();
      if ((uVar3 & 1) == 0) {
        puVar7 = (undefined8 *)0x0;
      }
      cVar2 = *(char *)(puVar7 + 0x166);
      local_48 = lVar5;
      (**(code **)(*(long *)(lVar5 + 0x48) + 0x10))(plVar6);
      uVar3 = FUN_00fa3020(&local_48,lVar1,4,cVar2 == '\0');
      if (local_48 != 0) {
        (**(code **)(*(long *)(local_48 + 0x48) + 0x18))();
        local_48 = 0;
      }
      if ((uVar3 & 1) != 0) {
        *(int *)(param_1 + 0x700) = *(int *)(param_1 + 0x700) + -1;
        *(undefined4 *)(param_1 + 0x690) = 0x5a;
      }
      (**(code **)(*plVar6 + 0x18))(plVar6);
    }
    (**(code **)(*plVar6 + 0x18))(plVar6);
    if (lVar5 != 0) {
      (**(code **)(*(long *)(lVar5 + 0x48) + 0x18))();
    }
  }
  if (lVar4 != 0) {
    (**(code **)(*(long *)(lVar4 + 0x48) + 0x18))();
  }
  if (lVar9 != 0) {
    (**(code **)(*(long *)(lVar9 + 0x48) + 0x18))();
  }
  if (lVar8 != 0) {
    (**(code **)(*(long *)(lVar8 + 0x48) + 0x18))();
  }
  return;
}


