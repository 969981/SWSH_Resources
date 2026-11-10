/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0134e260; name: FUN_0134e260
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0134e260(undefined8 param_1)

{
  undefined1 local_40 [16];
  undefined8 local_30;
  undefined8 uStack_28;
  
  uStack_28 = _UNK_01d4a338;
  local_30 = _DAT_01d4a330;
  local_40 = FUN_00a92cd0((*(float *)PTR_FloatPi_02715160 / *(float *)PTR_FloatDegree180_027194f0) *
                          DAT_01d4be48,0,0);
  FUN_012dc9c0(param_1,&local_30);
  FUN_012dc7f0(param_1,local_40);
  return;
}


