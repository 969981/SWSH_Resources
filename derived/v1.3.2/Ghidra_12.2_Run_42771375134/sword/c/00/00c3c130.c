/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00c3c130; name: FUN_00c3c130
 */


uint FUN_00c3c130(long param_1)

{
  uint uVar1;
  long *plVar2;
  long lVar3;
  long lVar4;
  void *__src;
  undefined8 *puVar5;
  long local_50;
  long local_48;
  long local_40;
  long local_38;
  
  if ((*(long *)(param_1 + 0x68) != 0) &&
     (puVar5 = *(undefined8 **)(*(long *)(param_1 + 0x68) + 0x60), puVar5 != (undefined8 *)0x0)) {
    plVar2 = (long *)(**(code **)*puVar5)(puVar5);
    lVar3 = FUN_00be66c0();
    for (; plVar2 != (long *)0x0; plVar2 = (long *)*plVar2) {
      if (plVar2 == (long *)lVar3) {
        puVar5 = puVar5 + -10;
        goto LAB_00c3c188;
      }
    }
  }
  puVar5 = (undefined8 *)0x0;
LAB_00c3c188:
  FUN_00c1cce0(&local_38,puVar5);
  lVar3 = FUN_00be53f0(&local_38);
  if (local_38 != 0) {
    (**(code **)(*(long *)(local_38 + 0x48) + 0x18))();
    local_38 = 0;
  }
  if (lVar3 == 0) {
    uVar1 = 0;
  }
  else {
    (**(code **)(**(long **)(lVar3 + 0x90) + 0x10))(&local_38);
    local_40 = local_38;
    lVar4 = FUN_00be5600(&local_40);
    if (local_40 != 0) {
      (**(code **)(*(long *)(local_40 + 0x48) + 0x18))();
      local_40 = 0;
    }
    uVar1 = 0;
    if (lVar4 != 0) {
      if (*(char *)(lVar3 + 0x88) == '\0') {
        FUN_00bdd1b0(&local_38,lVar3);
        lVar3 = *(long *)(*(long *)PTR_DAT_02710798 + 0x288);
        if (lVar3 == 0) {
          __src = (void *)FUN_014fba00(0);
        }
        else {
          plVar2 = (long *)(lVar3 + 0x48);
          (**(code **)(*plVar2 + 0x10))(plVar2);
          __src = (void *)FUN_014fba00(lVar3);
          (**(code **)(*plVar2 + 0x18))(plVar2);
        }
        lVar3 = FUN_00c2a5b0(&local_40,*(undefined8 *)(param_1 + 8));
        if (lVar3 != 0) {
          (**(code **)(*(long *)(lVar3 + 0x48) + 0x10))();
        }
        memcpy((void *)(lVar3 + 0x60),__src,0x1c8);
        local_48 = lVar3;
        if (lVar3 != 0) {
          (**(code **)(*(long *)(lVar3 + 0x48) + 0x10))();
        }
        local_50 = local_38;
        if (local_38 != 0) {
          (**(code **)(*(long *)(local_38 + 0x48) + 0x10))();
        }
        uVar1 = FUN_00bdfe00(lVar4,&local_48,&local_50,1);
        if (local_50 != 0) {
          (**(code **)(*(long *)(local_50 + 0x48) + 0x18))();
          local_50 = 0;
        }
        if (local_48 != 0) {
          (**(code **)(*(long *)(local_48 + 0x48) + 0x18))();
          local_48 = 0;
        }
        if (lVar3 != 0) {
          (**(code **)(*(long *)(lVar3 + 0x48) + 0x18))((long *)(lVar3 + 0x48));
        }
        if (local_38 != 0) {
          (**(code **)(*(long *)(local_38 + 0x48) + 0x18))();
        }
      }
      else {
        uVar1 = 1;
      }
    }
  }
  return uVar1 & 1;
}


