/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00d92f90; name: FUN_00d92f90
 */


void FUN_00d92f90(long param_1,undefined8 param_2)

{
  long *plVar1;
  long lVar2;
  undefined8 *puVar3;
  long local_e0;
  long local_d8;
  undefined8 local_d0;
  undefined8 local_c8;
  undefined8 uStack_c0;
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined4 local_a8;
  undefined8 local_a0;
  undefined4 local_98;
  undefined1 local_94;
  undefined4 local_92;
  long local_70 [2];
  undefined2 local_60;
  undefined1 local_5e;
  undefined8 local_58;
  long local_50;
  long local_48;
  long local_40;
  long local_38;
  undefined8 local_28;
  
  local_28 = param_2;
  if (*(long *)(param_1 + 0x68) != 0) {
    puVar3 = *(undefined8 **)(*(long *)(param_1 + 0x68) + 0x60);
    if (puVar3 == (undefined8 *)0x0) goto LAB_00d92fec;
    plVar1 = (long *)(**(code **)*puVar3)(puVar3);
    lVar2 = FUN_00d919f0();
    for (; plVar1 != (long *)0x0; plVar1 = (long *)*plVar1) {
      if (plVar1 == (long *)lVar2) {
        puVar3 = puVar3 + -10;
        goto LAB_00d92fec;
      }
    }
  }
  puVar3 = (undefined8 *)0x0;
LAB_00d92fec:
  FUN_00d8fb90(&local_38,puVar3,0);
  FUN_00d8fb90(&local_40,puVar3,1);
  FUN_00d8fb90(&local_48,puVar3,2);
  FUN_00d8fb90(&local_50,puVar3,3);
  FUN_00d8fbd0(&local_e0,puVar3);
  FUN_00d8fbb0(local_70,puVar3);
  FUN_0077eb10(local_e0,&local_28,local_38);
  FUN_014c62d0(local_70[0],local_40,local_38);
  local_58 = 0x3c11b2c38f68a511;
  FUN_0077eb10(local_e0,&local_58,local_38);
  FUN_014c62d0(local_70[0],local_48,local_38);
  local_58 = 0x3c11afc38f689ff8;
  FUN_0077eb10(local_e0,&local_58,local_38);
  FUN_014c62d0(local_70[0],local_50,local_38);
  if (local_70[0] != 0) {
    (**(code **)(*(long *)(local_70[0] + 0x48) + 0x18))();
    local_70[0] = 0;
  }
  if (local_e0 != 0) {
    (**(code **)(*(long *)(local_e0 + 0x48) + 0x18))();
  }
  local_92 = 0xffff;
  local_b8 = 0;
  uStack_b0 = 0;
  local_c8 = 0;
  uStack_c0 = 0;
  local_60 = 0x101;
  local_70[0] = local_40;
  local_70[1] = 0;
  local_e0 = local_48;
  local_a0 = 0x8abaf272a347e952;
  local_d0 = 0;
  local_98 = 4;
  local_5e = 0;
  local_a8 = 4;
  local_94 = 0;
  local_d8 = local_50;
  FUN_00ffa290(*(undefined8 *)(param_1 + 0x78),1,1);
  FUN_00ffa3d0(*(undefined8 *)(param_1 + 0x78),0);
  FUN_010381d0(*(undefined8 *)(param_1 + 0x78),local_70,&local_e0);
  if (local_50 != 0) {
    (**(code **)(*(long *)(local_50 + 0x48) + 0x18))();
    local_50 = 0;
  }
  if (local_48 != 0) {
    (**(code **)(*(long *)(local_48 + 0x48) + 0x18))();
    local_48 = 0;
  }
  if (local_40 != 0) {
    (**(code **)(*(long *)(local_40 + 0x48) + 0x18))();
    local_40 = 0;
  }
  if (local_38 != 0) {
    (**(code **)(*(long *)(local_38 + 0x48) + 0x18))();
  }
  return;
}


