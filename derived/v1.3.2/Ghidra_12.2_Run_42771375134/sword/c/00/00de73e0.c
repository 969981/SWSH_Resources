/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00de73e0; name: FUN_00de73e0
 */


void FUN_00de73e0(undefined8 param_1,long param_2,ulong *param_3,undefined8 *param_4,
                 undefined8 *param_5,undefined8 *param_6)

{
  undefined8 uVar1;
  
  if (param_3 != (ulong *)0x0) {
    *param_3 = (ulong)*(uint *)(param_2 + 0x48);
  }
  if (param_4 != (undefined8 *)0x0) {
    uVar1 = (**(code **)(**(long **)(param_2 + 0x28) + 0x30))();
    *param_4 = uVar1;
  }
  if (param_5 != (undefined8 *)0x0) {
    uVar1 = (**(code **)(**(long **)(param_2 + 0x28) + 0x38))();
    *param_5 = uVar1;
  }
  if (param_6 != (undefined8 *)0x0) {
    uVar1 = (**(code **)(**(long **)(param_2 + 0x28) + 0x40))();
    *param_6 = uVar1;
  }
  return;
}


