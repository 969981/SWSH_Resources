/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00c337c0; name: FUN_00c337c0
 */


uint FUN_00c337c0(long param_1)

{
  uint uVar1;
  long *plVar2;
  long lVar3;
  undefined8 *puVar4;
  long local_898;
  long local_890;
  long local_888 [265];
  long local_40;
  long local_38;
  
  if ((*(long *)(param_1 + 0x68) != 0) &&
     (puVar4 = *(undefined8 **)(*(long *)(param_1 + 0x68) + 0x60), puVar4 != (undefined8 *)0x0)) {
    plVar2 = (long *)(**(code **)*puVar4)(puVar4);
    lVar3 = FUN_00be66c0();
    for (; plVar2 != (long *)0x0; plVar2 = (long *)*plVar2) {
      if (plVar2 == (long *)lVar3) {
        FUN_00c1cec0(local_888,puVar4 + -10);
        goto joined_r0x00c339b8;
      }
    }
  }
  FUN_00c1cec0(local_888,0);
joined_r0x00c339b8:
  if (local_888[0] != 0) {
    puVar4 = *(undefined8 **)(local_888[0] + 0x60);
    if (puVar4 != (undefined8 *)0x0) {
      plVar2 = (long *)(**(code **)*puVar4)(puVar4);
      lVar3 = FUN_00c1bbc0();
      for (; plVar2 != (long *)0x0; plVar2 = (long *)*plVar2) {
        if (plVar2 == (long *)lVar3) {
          puVar4 = puVar4 + -10;
          if (local_888[0] == 0) goto LAB_00c33878;
          goto LAB_00c33868;
        }
      }
    }
    puVar4 = (undefined8 *)0x0;
    if (local_888[0] != 0) {
LAB_00c33868:
      (**(code **)(*(long *)(local_888[0] + 0x48) + 0x18))();
      local_888[0] = 0;
    }
LAB_00c33878:
    if ((puVar4 != (undefined8 *)0x0) && (FUN_00bd9cd0(&local_38,puVar4), local_38 != 0)) {
      FUN_00bd9f00(local_888,puVar4);
      if (((int)local_888[0] == 0) || (local_40 != 0x644)) {
        uVar1 = 0;
        lVar3 = local_890;
      }
      else {
        if ((*(long *)(param_1 + 0x68) != 0) &&
           (puVar4 = *(undefined8 **)(*(long *)(param_1 + 0x68) + 0x60), puVar4 != (undefined8 *)0x0
           )) {
          plVar2 = (long *)(**(code **)*puVar4)(puVar4);
          lVar3 = FUN_00be66c0();
          for (; plVar2 != (long *)0x0; plVar2 = (long *)*plVar2) {
            if (plVar2 == (long *)lVar3) {
              FUN_00c1cc60(&local_890,puVar4 + -10);
              goto joined_r0x00c339f8;
            }
          }
        }
        FUN_00c1cc60(&local_890,0);
joined_r0x00c339f8:
        if (local_890 == 0) {
          uVar1 = 0;
          lVar3 = 0;
        }
        else {
          uVar1 = FUN_009fe1a0(local_38,10);
          *(bool *)(local_890 + 0x3a9) = 9 < uVar1;
          local_898 = local_38;
          if (local_38 != 0) {
            (**(code **)(*(long *)(local_38 + 0x48) + 0x10))();
          }
          uVar1 = FUN_00be0800(local_888,&local_898,local_890 + 0x560);
          if (local_898 != 0) {
            (**(code **)(*(long *)(local_898 + 0x48) + 0x18))();
            local_898 = 0;
          }
          lVar3 = 0;
          if (local_890 != 0) {
            (**(code **)(*(long *)(local_890 + 0x48) + 0x18))();
            local_890 = 0;
            lVar3 = local_890;
          }
        }
      }
      local_890 = lVar3;
      if (local_38 != 0) {
        (**(code **)(*(long *)(local_38 + 0x48) + 0x18))();
      }
      goto LAB_00c339c0;
    }
  }
  uVar1 = 0;
LAB_00c339c0:
  return uVar1 & 1;
}


