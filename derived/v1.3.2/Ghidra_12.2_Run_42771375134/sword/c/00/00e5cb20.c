/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00e5cb20; name: FUN_00e5cb20
 */


void FUN_00e5cb20(long param_1)

{
  char cVar1;
  ulong uVar2;
  long *plVar3;
  undefined8 *puVar4;
  long lVar5;
  long local_38;
  
  lVar5 = *(long *)(param_1 + 0xc50);
  if (lVar5 != 0) {
    plVar3 = (long *)(lVar5 + 0x48);
    (**(code **)(*plVar3 + 0x10))(plVar3);
    (**(code **)(*plVar3 + 0x10))(plVar3);
    if (*(int *)(lVar5 + 0x54) != 0) {
      (**(code **)(*(long *)(lVar5 + 0x48) + 0x10))(plVar3);
      puVar4 = *(undefined8 **)(lVar5 + 0x60) + -10;
      (**(code **)**(undefined8 **)(lVar5 + 0x60))();
      uVar2 = FUN_00e5d3d0();
      if ((uVar2 & 1) == 0) {
        puVar4 = (undefined8 *)0x0;
      }
      cVar1 = *(char *)(puVar4 + 0x166);
      local_38 = lVar5;
      (**(code **)(*(long *)(lVar5 + 0x48) + 0x10))(plVar3);
      uVar2 = FUN_00fa3020(&local_38,param_1 + 0xc50,1,cVar1 == '\0');
      if (local_38 != 0) {
        (**(code **)(*(long *)(local_38 + 0x48) + 0x18))();
        local_38 = 0;
      }
      if ((uVar2 & 1) != 0) {
        *(int *)(param_1 + 0xc60) = *(int *)(param_1 + 0xc60) + -1;
      }
      (**(code **)(*plVar3 + 0x18))(plVar3);
      *(undefined1 *)(param_1 + 0xc65) = 0;
    }
    (**(code **)(*plVar3 + 0x18))(plVar3);
    if (lVar5 != 0) {
      (**(code **)(*(long *)(lVar5 + 0x48) + 0x18))();
    }
  }
  return;
}


