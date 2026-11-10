/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 010379e0; name: FUN_010379e0
 */


void FUN_010379e0(long *param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 *puVar4;
  
  puVar4 = (undefined8 *)param_1[0xcd];
  puVar1 = PTR_DAT_027178a0 + 0xb8;
  puVar2 = PTR_DAT_027178a0 + 0xf8;
  puVar3 = PTR_DAT_02710a38 + 0x10;
  *param_1 = (long)(PTR_DAT_027178a0 + 0x10);
  param_1[0xc1] = (long)puVar3;
  param_1[9] = (long)puVar1;
  param_1[10] = (long)puVar2;
  param_1[0xcd] = 0;
  if (puVar4 != (undefined8 *)0x0) {
    (**(code **)*puVar4)(puVar4);
    (**(code **)(*(long *)param_1[0xce] + 0x18))
              ((long *)param_1[0xce],puVar4,param_1[0xcf],param_1[0xd0]);
  }
  puVar4 = (undefined8 *)param_1[0xc9];
  param_1[0xc9] = 0;
  if (puVar4 != (undefined8 *)0x0) {
    (**(code **)*puVar4)(puVar4);
    (**(code **)(*(long *)param_1[0xca] + 0x18))
              ((long *)param_1[0xca],puVar4,param_1[0xcb],param_1[0xcc]);
  }
  puVar4 = (undefined8 *)param_1[0xc5];
  param_1[0xc5] = 0;
  if (puVar4 != (undefined8 *)0x0) {
    (**(code **)*puVar4)(puVar4);
    (**(code **)(*(long *)param_1[0xc6] + 0x18))
              ((long *)param_1[0xc6],puVar4,param_1[199],param_1[200]);
  }
  puVar4 = (undefined8 *)param_1[0xbc];
  param_1[0xbc] = 0;
  if (puVar4 != (undefined8 *)0x0) {
    (**(code **)*puVar4)(puVar4);
    (**(code **)(*(long *)param_1[0xbd] + 0x18))
              ((long *)param_1[0xbd],puVar4,param_1[0xbe],param_1[0xbf]);
  }
  if (param_1[0xbb] != 0) {
    (**(code **)(*(long *)(param_1[0xbb] + 0x48) + 0x18))();
    param_1[0xbb] = 0;
  }
  if (param_1[0xba] != 0) {
    (**(code **)(*(long *)(param_1[0xba] + 0x48) + 0x18))();
    param_1[0xba] = 0;
  }
  FUN_00ff9a90(param_1);
  return;
}


