/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00d92e20; name: FUN_00d92e20
 */


void FUN_00d92e20(long param_1,undefined8 param_2)

{
  long *plVar1;
  long lVar2;
  undefined8 *puVar3;
  long local_58 [2];
  undefined2 local_48;
  undefined1 local_46;
  long local_40;
  long local_38;
  undefined8 local_28;
  
  local_28 = param_2;
  if (*(long *)(param_1 + 0x68) != 0) {
    puVar3 = *(undefined8 **)(*(long *)(param_1 + 0x68) + 0x60);
    if (puVar3 == (undefined8 *)0x0) goto LAB_00d92e7c;
    plVar1 = (long *)(**(code **)*puVar3)(puVar3);
    lVar2 = FUN_00d919f0();
    for (; plVar1 != (long *)0x0; plVar1 = (long *)*plVar1) {
      if (plVar1 == (long *)lVar2) {
        puVar3 = puVar3 + -10;
        goto LAB_00d92e7c;
      }
    }
  }
  puVar3 = (undefined8 *)0x0;
LAB_00d92e7c:
  FUN_00d8fb90(&local_38,puVar3,0);
  FUN_00d8fb90(&local_40,puVar3,1);
  FUN_00d8fbd0(local_58,puVar3);
  FUN_0077eb10(local_58[0],&local_28,local_38);
  if (local_58[0] != 0) {
    (**(code **)(*(long *)(local_58[0] + 0x48) + 0x18))();
    local_58[0] = 0;
  }
  FUN_00d8fbb0(local_58,puVar3);
  FUN_014c62d0(local_58[0],local_40,local_38);
  if (local_58[0] != 0) {
    (**(code **)(*(long *)(local_58[0] + 0x48) + 0x18))();
    local_58[0] = 0;
  }
  FUN_00ffa290(*(undefined8 *)(param_1 + 0x78),1,1);
  FUN_00ffa3d0(*(undefined8 *)(param_1 + 0x78),0);
  local_48 = 0x101;
  local_46 = 0;
  local_58[0] = local_40;
  local_58[1] = 0;
  FUN_01038170(*(undefined8 *)(param_1 + 0x78),local_58);
  if (local_40 != 0) {
    (**(code **)(*(long *)(local_40 + 0x48) + 0x18))();
    local_40 = 0;
  }
  if (local_38 != 0) {
    (**(code **)(*(long *)(local_38 + 0x48) + 0x18))();
  }
  return;
}


