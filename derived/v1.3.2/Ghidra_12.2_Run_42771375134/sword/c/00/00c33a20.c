/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00c33a20; name: FUN_00c33a20
 */


uint FUN_00c33a20(long param_1)

{
  long lVar1;
  uint uVar2;
  long *plVar3;
  long lVar4;
  undefined8 *puVar5;
  long local_898;
  long local_890;
  long local_888 [265];
  long local_40;
  long local_38;
  
  if ((*(long *)(param_1 + 0x68) != 0) &&
     (puVar5 = *(undefined8 **)(*(long *)(param_1 + 0x68) + 0x60), puVar5 != (undefined8 *)0x0)) {
    plVar3 = (long *)(**(code **)*puVar5)(puVar5);
    lVar4 = FUN_00be66c0();
    for (; plVar3 != (long *)0x0; plVar3 = (long *)*plVar3) {
      if (plVar3 == (long *)lVar4) {
        FUN_00c1cec0(local_888,puVar5 + -10);
        goto joined_r0x00c33bfc;
      }
    }
  }
  FUN_00c1cec0(local_888,0);
joined_r0x00c33bfc:
  if (local_888[0] != 0) {
    puVar5 = *(undefined8 **)(local_888[0] + 0x60);
    if (puVar5 != (undefined8 *)0x0) {
      plVar3 = (long *)(**(code **)*puVar5)(puVar5);
      lVar4 = FUN_00c1bbc0();
      for (; plVar3 != (long *)0x0; plVar3 = (long *)*plVar3) {
        if (plVar3 == (long *)lVar4) {
          puVar5 = puVar5 + -10;
          if (local_888[0] == 0) goto LAB_00c33ad8;
          goto LAB_00c33ac8;
        }
      }
    }
    puVar5 = (undefined8 *)0x0;
    if (local_888[0] != 0) {
LAB_00c33ac8:
      (**(code **)(*(long *)(local_888[0] + 0x48) + 0x18))();
      local_888[0] = 0;
    }
LAB_00c33ad8:
    if ((puVar5 != (undefined8 *)0x0) && (FUN_00bd9cd0(&local_38,puVar5), local_38 != 0)) {
      FUN_00bd9f00(local_888,puVar5);
      if (((int)local_888[0] == 0) || (local_40 != 0x644)) {
        uVar2 = 0;
        lVar4 = local_898;
        lVar1 = local_890;
      }
      else {
        if ((*(long *)(param_1 + 0x68) != 0) &&
           (puVar5 = *(undefined8 **)(*(long *)(param_1 + 0x68) + 0x60), puVar5 != (undefined8 *)0x0
           )) {
          plVar3 = (long *)(**(code **)*puVar5)(puVar5);
          lVar4 = FUN_00be66c0();
          for (; plVar3 != (long *)0x0; plVar3 = (long *)*plVar3) {
            if (plVar3 == (long *)lVar4) {
              FUN_00c1cc60(&local_890,puVar5 + -10);
              lVar4 = local_898;
              local_898 = local_38;
              goto joined_r0x00c33c3c;
            }
          }
        }
        FUN_00c1cc60(&local_890,0);
        lVar4 = local_898;
        local_898 = local_38;
joined_r0x00c33c3c:
        local_38 = local_898;
        if (local_890 == 0) {
          uVar2 = 0;
          lVar1 = 0;
        }
        else {
          if (local_898 != 0) {
            (**(code **)(*(long *)(local_898 + 0x48) + 0x10))();
          }
          uVar2 = FUN_00be0d10(local_888,&local_898,local_890 + 0x868);
          if (local_898 != 0) {
            (**(code **)(*(long *)(local_898 + 0x48) + 0x18))();
            local_898 = 0;
          }
          lVar4 = local_898;
          lVar1 = 0;
          if (local_890 != 0) {
            (**(code **)(*(long *)(local_890 + 0x48) + 0x18))();
            local_890 = 0;
            lVar4 = local_898;
            lVar1 = local_890;
          }
        }
      }
      local_890 = lVar1;
      local_898 = lVar4;
      if (local_38 != 0) {
        (**(code **)(*(long *)(local_38 + 0x48) + 0x18))();
      }
      goto LAB_00c33c04;
    }
  }
  uVar2 = 0;
LAB_00c33c04:
  return uVar2 & 1;
}


