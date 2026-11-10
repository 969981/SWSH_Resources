/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00ff65e0; name: FUN_00ff65e0
 */


void FUN_00ff65e0(long *param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  undefined8 *puVar4;
  
  puVar1 = PTR_DAT_02723368 + 0xf0;
  puVar2 = PTR_DAT_02723368 + 0x130;
  *param_1 = (long)(PTR_DAT_02723368 + 0x10);
  param_1[9] = (long)puVar1;
  param_1[10] = (long)puVar2;
  if (param_1[0xa9] != 0) {
    (**(code **)(*(long *)(param_1[0xa9] + 0x48) + 0x18))();
    param_1[0xa9] = 0;
  }
  FUN_00ff7030(param_1 + 0x8e);
  FUN_00ff7030(param_1 + 0x74);
  FUN_00ff7030(param_1 + 0x5a);
  if (param_1[0x59] != 0) {
    (**(code **)(*(long *)(param_1[0x59] + 0x48) + 0x18))();
    param_1[0x59] = 0;
  }
  if (param_1[0x57] != 0) {
    (**(code **)(*(long *)(param_1[0x57] + 0x48) + 0x18))();
    param_1[0x57] = 0;
  }
  FUN_00ff6a90(param_1 + 0x1b);
  puVar4 = (undefined8 *)param_1[0x17];
  param_1[0x17] = 0;
  if (puVar4 != (undefined8 *)0x0) {
    (**(code **)*puVar4)(puVar4);
    (**(code **)(*(long *)param_1[0x18] + 0x18))
              ((long *)param_1[0x18],puVar4,param_1[0x19],param_1[0x1a]);
  }
  lVar3 = param_1[0x13];
  param_1[0x13] = 0;
  if (lVar3 != 0) {
    FUN_00ff6d20(param_1 + 0x14);
  }
  FUN_0101c0e0(param_1);
  return;
}


