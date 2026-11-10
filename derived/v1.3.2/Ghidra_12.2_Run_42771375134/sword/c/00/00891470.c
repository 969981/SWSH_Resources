/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00891470; name: FUN_00891470
 */


undefined8 FUN_00891470(long param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 *puVar4;
  undefined8 local_48;
  undefined8 *local_40;
  long *local_38;
  undefined8 local_30;
  undefined8 local_28;
  
  if (*(long *)(param_1 + 0xb8) == 0) {
    uVar2 = FUN_00ff5cf0(param_1);
    local_48 = FUN_00ff5cf0(param_1);
    FUN_00891db0(&local_40,uVar2,&local_48);
    puVar1 = local_40;
    local_40 = (undefined8 *)0x0;
    puVar4 = *(undefined8 **)(param_1 + 0xb8);
    *(undefined8 **)(param_1 + 0xb8) = puVar1;
    if (puVar4 == (undefined8 *)0x0) {
      *(undefined8 *)(param_1 + 200) = local_30;
      *(undefined8 *)(param_1 + 0xd0) = local_28;
      *(long **)(param_1 + 0xc0) = local_38;
      lVar3 = *(long *)(param_1 + 0x548);
    }
    else {
      (**(code **)*puVar4)(puVar4);
      (**(code **)(**(long **)(param_1 + 0xc0) + 0x18))
                (*(long **)(param_1 + 0xc0),puVar4,*(undefined8 *)(param_1 + 200),
                 *(undefined8 *)(param_1 + 0xd0));
      puVar1 = local_40;
      *(long **)(param_1 + 0xc0) = local_38;
      *(undefined8 *)(param_1 + 200) = local_30;
      *(undefined8 *)(param_1 + 0xd0) = local_28;
      local_40 = (undefined8 *)0x0;
      if (puVar1 != (undefined8 *)0x0) {
        (**(code **)*puVar1)(puVar1);
        (**(code **)(*local_38 + 0x18))(local_38,puVar1,local_30,local_28);
      }
      lVar3 = *(long *)(param_1 + 0x548);
    }
    if (lVar3 != 0) {
      *(undefined8 *)(lVar3 + 0xb0) = *(undefined8 *)(param_1 + 0xb8);
    }
  }
  return *(undefined8 *)(param_1 + 0xb8);
}


