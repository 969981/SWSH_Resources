/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00217550; name: FUN_00217550
 */


void FUN_00217550(undefined8 *param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  
  *param_1 = "Radius";
  puVar2 = PTR_LAB_02711c70;
  puVar1 = PTR_LAB_02711c68;
  *(undefined4 *)(param_1 + 1) = 0xee;
  param_1[2] = puVar1;
  param_1[3] = puVar2;
  return;
}


