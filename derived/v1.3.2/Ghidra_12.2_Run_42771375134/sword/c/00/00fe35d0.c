/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00fe35d0; name: FUN_00fe35d0
 */


void FUN_00fe35d0(long *param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 *puVar3;
  
  puVar3 = (undefined8 *)param_1[0xba];
  puVar1 = PTR_DAT_02723170 + 0xa8;
  puVar2 = PTR_DAT_02723170 + 0xe8;
  *param_1 = (long)(PTR_DAT_02723170 + 0x10);
  param_1[0xba] = 0;
  param_1[9] = (long)puVar1;
  param_1[10] = (long)puVar2;
  if (puVar3 != (undefined8 *)0x0) {
    (**(code **)*puVar3)(puVar3);
    (**(code **)(*(long *)param_1[0xbb] + 0x18))
              ((long *)param_1[0xbb],puVar3,param_1[0xbc],param_1[0xbd]);
  }
  FUN_00ff9a90(param_1);
  return;
}


