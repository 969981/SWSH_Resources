/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00c42ab0; name: FUN_00c42ab0
 */


uint FUN_00c42ab0(long param_1)

{
  uint uVar1;
  long *plVar2;
  long lVar3;
  undefined8 *puVar4;
  long local_40;
  long local_38;
  long local_28;
  
  if ((*(long *)(param_1 + 0x68) != 0) &&
     (puVar4 = *(undefined8 **)(*(long *)(param_1 + 0x68) + 0x60), puVar4 != (undefined8 *)0x0)) {
    plVar2 = (long *)(**(code **)*puVar4)(puVar4);
    lVar3 = FUN_00be66c0();
    for (; plVar2 != (long *)0x0; plVar2 = (long *)*plVar2) {
      if (plVar2 == (long *)lVar3) {
        FUN_00c1cec0(&local_28,puVar4 + -10);
        goto joined_r0x00c42c84;
      }
    }
  }
  FUN_00c1cec0(&local_28,0);
joined_r0x00c42c84:
  if (local_28 != 0) {
    puVar4 = *(undefined8 **)(local_28 + 0x60);
    if (puVar4 != (undefined8 *)0x0) {
      plVar2 = (long *)(**(code **)*puVar4)(puVar4);
      lVar3 = FUN_00c1bbc0();
      for (; plVar2 != (long *)0x0; plVar2 = (long *)*plVar2) {
        if (plVar2 == (long *)lVar3) {
          puVar4 = puVar4 + -10;
          goto joined_r0x00c42cac;
        }
      }
    }
    puVar4 = (undefined8 *)0x0;
joined_r0x00c42cac:
    if (local_28 != 0) {
      (**(code **)(*(long *)(local_28 + 0x48) + 0x18))();
      local_28 = 0;
    }
    if ((puVar4 != (undefined8 *)0x0) && (FUN_00bd9cd0(&local_28,puVar4), local_28 != 0)) {
      if (*(char *)(param_1 + 0xa8) == '\0') {
        uVar1 = 0;
      }
      else {
        if ((*(long *)(param_1 + 0x68) != 0) &&
           (puVar4 = *(undefined8 **)(*(long *)(param_1 + 0x68) + 0x60), puVar4 != (undefined8 *)0x0
           )) {
          plVar2 = (long *)(**(code **)*puVar4)(puVar4);
          lVar3 = FUN_00be66c0();
          for (; plVar2 != (long *)0x0; plVar2 = (long *)*plVar2) {
            if (plVar2 == (long *)lVar3) {
              FUN_00c1cc60(&local_38,puVar4 + -10);
              goto joined_r0x00c42ccc;
            }
          }
        }
        FUN_00c1cc60(&local_38,0);
joined_r0x00c42ccc:
        if (local_38 == 0) {
          uVar1 = 0;
        }
        else {
          uVar1 = FUN_009fe1a0(local_28,10);
          *(bool *)(local_38 + 0x3a9) = 9 < uVar1;
          local_40 = local_28;
          if (local_28 != 0) {
            (**(code **)(*(long *)(local_28 + 0x48) + 0x10))();
          }
          uVar1 = FUN_00be0800(param_1 + 0xb0,&local_40,local_38 + 0x560);
          if (local_40 != 0) {
            (**(code **)(*(long *)(local_40 + 0x48) + 0x18))();
            local_40 = 0;
          }
          if (local_38 != 0) {
            (**(code **)(*(long *)(local_38 + 0x48) + 0x18))();
          }
        }
        local_38 = 0;
        if (local_28 == 0) goto LAB_00c42c8c;
      }
      (**(code **)(*(long *)(local_28 + 0x48) + 0x18))();
      goto LAB_00c42c8c;
    }
  }
  uVar1 = 0;
LAB_00c42c8c:
  return uVar1 & 1;
}


