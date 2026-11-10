/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 006b9c40; name: FUN_006b9c40
 */


void FUN_006b9c40(long *param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 *local_40;
  long *local_38;
  long local_30;
  long local_28;
  
  if ((*param_1 != 0) && (param_1[8] == 0)) {
    FUN_006ba960(&local_40,param_1[3],param_2,param_1[4],param_1[2]);
    puVar1 = local_40;
    local_40 = (undefined8 *)0x0;
    puVar2 = (undefined8 *)param_1[8];
    param_1[8] = (long)puVar1;
    if (puVar2 == (undefined8 *)0x0) {
      param_1[10] = local_30;
      param_1[0xb] = local_28;
      param_1[9] = (long)local_38;
      return;
    }
    (**(code **)*puVar2)(puVar2);
    (**(code **)(*(long *)param_1[9] + 0x18))((long *)param_1[9],puVar2,param_1[10],param_1[0xb]);
    puVar1 = local_40;
    param_1[9] = (long)local_38;
    param_1[10] = local_30;
    param_1[0xb] = local_28;
    local_40 = (undefined8 *)0x0;
    if (puVar1 != (undefined8 *)0x0) {
      (**(code **)*puVar1)(puVar1);
      (**(code **)(*local_38 + 0x18))(local_38,puVar1,local_30,local_28);
      return;
    }
  }
  return;
}


