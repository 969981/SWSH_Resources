/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00217e90; name: FUN_00217e90
 */


void FUN_00217e90(undefined8 *param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  
  *param_1 = "ProjectionPlane";
  puVar2 = PTR_LAB_02711e00;
  puVar1 = PTR_LAB_02711df8;
  *(undefined4 *)(param_1 + 1) = 0xc5;
  param_1[2] = puVar1;
  param_1[3] = puVar2;
  return;
}


