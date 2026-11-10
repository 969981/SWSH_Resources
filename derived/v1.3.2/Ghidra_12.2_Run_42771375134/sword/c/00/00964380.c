/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00964380; name: FUN_00964380
 */


void FUN_00964380(undefined8 *param_1)

{
  undefined2 uVar1;
  
  uVar1 = FUN_00917fb0(*param_1,0xb6);
  *(undefined2 *)(param_1 + 1) = uVar1;
  uVar1 = FUN_00917fb0(*param_1,0xba);
  *(undefined2 *)((long)param_1 + 10) = uVar1;
  return;
}


