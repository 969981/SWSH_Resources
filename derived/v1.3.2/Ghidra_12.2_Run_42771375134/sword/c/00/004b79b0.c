/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 004b79b0; name: FUN_004b79b0
 */


undefined8 FUN_004b79b0(undefined8 param_1,int param_2,int param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  puVar2 = PTR_DAT_02712b98;
  FUN_004bb990(*(undefined8 *)PTR_DAT_02712b98,param_1);
  puVar1 = PTR_DAT_02712b68;
  FUN_004b5470(*(undefined8 *)PTR_DAT_02712b68,param_1);
  if (param_2 == 0) {
    uVar3 = 1;
  }
  else {
    if (param_3 == 1) {
      uVar3 = FUN_004b5390(*(undefined8 *)puVar1,param_1,param_2);
      return uVar3;
    }
    if (param_3 == 0) {
      uVar3 = FUN_004bb2e0(*(undefined8 *)puVar2,param_1,param_2);
      return uVar3;
    }
    uVar3 = 0x1f;
  }
  return uVar3;
}


