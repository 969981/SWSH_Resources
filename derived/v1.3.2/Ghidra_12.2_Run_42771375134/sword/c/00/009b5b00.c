/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 009b5b00; name: FUN_009b5b00
 */


void FUN_009b5b00(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  undefined1 auStack_28 [8];
  
  FUN_0075efb0(auStack_28,*param_2,0,1);
  puVar1 = (undefined8 *)param_2[1];
  param_2[1] = 0;
  if (puVar1 != (undefined8 *)0x0) {
    (**(code **)*puVar1)(puVar1);
    (**(code **)(*(long *)param_2[2] + 0x18))((long *)param_2[2],puVar1,param_2[3],param_2[4]);
  }
  FUN_0075f0a0(auStack_28);
  puVar1 = (undefined8 *)param_2[1];
  param_2[1] = 0;
  if (puVar1 != (undefined8 *)0x0) {
    (**(code **)*puVar1)(puVar1);
    (**(code **)(*(long *)param_2[2] + 0x18))((long *)param_2[2],puVar1,param_2[3],param_2[4]);
  }
  (**(code **)(*(long *)*param_1 + 0x18))((long *)*param_1,param_2,param_1[1],param_1[2]);
  return;
}


