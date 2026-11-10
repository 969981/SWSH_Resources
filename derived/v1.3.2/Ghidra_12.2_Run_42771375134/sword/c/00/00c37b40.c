/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00c37b40; name: FUN_00c37b40
 */


uint FUN_00c37b40(long param_1)

{
  uint uVar1;
  long *plVar2;
  long lVar3;
  long *plVar4;
  long lVar5;
  undefined8 *puVar6;
  long local_88;
  long local_80;
  long local_78;
  char local_6c;
  char local_62;
  char local_58;
  long local_38;
  
  if ((*(long *)(param_1 + 0x68) != 0) &&
     (puVar6 = *(undefined8 **)(*(long *)(param_1 + 0x68) + 0x60), puVar6 != (undefined8 *)0x0)) {
    plVar2 = (long *)(**(code **)*puVar6)(puVar6);
    lVar3 = FUN_00be66c0();
    for (; plVar2 != (long *)0x0; plVar2 = (long *)*plVar2) {
      if (plVar2 == (long *)lVar3) {
        FUN_00c1cec0(&local_80,puVar6 + -10);
        goto joined_r0x00c37d10;
      }
    }
  }
  FUN_00c1cec0(&local_80,0);
joined_r0x00c37d10:
  if (local_80 != 0) {
    puVar6 = *(undefined8 **)(local_80 + 0x60);
    if (puVar6 != (undefined8 *)0x0) {
      plVar2 = (long *)(**(code **)*puVar6)(puVar6);
      lVar3 = FUN_00c1bbc0();
      for (; plVar2 != (long *)0x0; plVar2 = (long *)*plVar2) {
        if (plVar2 == (long *)lVar3) {
          puVar6 = puVar6 + -10;
          goto joined_r0x00c37d3c;
        }
      }
    }
    puVar6 = (undefined8 *)0x0;
joined_r0x00c37d3c:
    if (local_80 != 0) {
      (**(code **)(*(long *)(local_80 + 0x48) + 0x18))();
      local_80 = 0;
    }
    if (puVar6 != (undefined8 *)0x0) {
      FUN_00bdc720(&local_80,puVar6);
      lVar3 = local_78;
      if ((char)local_80 != '\0') {
        if (local_78 == 0) {
          uVar1 = 0;
        }
        else {
          plVar2 = (long *)(local_78 + 0x48);
          (**(code **)(*plVar2 + 0x10))(plVar2);
          if (*(char *)(param_1 + 0xa0) == '\0') {
LAB_00c37da8:
            uVar1 = 0;
          }
          else {
            if ((*(long *)(param_1 + 0x68) != 0) &&
               (puVar6 = *(undefined8 **)(*(long *)(param_1 + 0x68) + 0x60),
               puVar6 != (undefined8 *)0x0)) {
              plVar4 = (long *)(**(code **)*puVar6)(puVar6);
              lVar5 = FUN_00be66c0();
              for (; plVar4 != (long *)0x0; plVar4 = (long *)*plVar4) {
                if (plVar4 == (long *)lVar5) {
                  FUN_00c1cc60(&local_38,puVar6 + -10);
                  goto joined_r0x00c37da4;
                }
              }
            }
            FUN_00c1cc60(&local_38,0);
joined_r0x00c37da4:
            if (local_38 == 0) goto LAB_00c37da8;
            local_88 = lVar3;
            (**(code **)(*(long *)(lVar3 + 0x48) + 0x10))(plVar2);
            uVar1 = FUN_00be0ec0(param_1 + 0xa8,&local_88,local_38 + 0x10f0);
            if (local_88 != 0) {
              (**(code **)(*(long *)(local_88 + 0x48) + 0x18))();
              local_88 = 0;
            }
            if (local_38 != 0) {
              (**(code **)(*(long *)(local_38 + 0x48) + 0x18))();
              local_38 = 0;
            }
          }
          (**(code **)(*plVar2 + 0x18))(plVar2);
        }
        if ((char)local_80 != '\0') {
          if (local_58 != '\0') {
            local_58 = '\0';
          }
          if (local_62 != '\0') {
            local_62 = '\0';
          }
          if (local_6c != '\0') {
            local_6c = '\0';
          }
          if (local_78 != 0) {
            (**(code **)(*(long *)(local_78 + 0x48) + 0x18))();
          }
        }
        goto LAB_00c37d18;
      }
    }
  }
  uVar1 = 0;
LAB_00c37d18:
  return uVar1 & 1;
}


