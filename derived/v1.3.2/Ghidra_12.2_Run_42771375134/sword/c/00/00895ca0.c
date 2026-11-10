/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00895ca0; name: FUN_00895ca0
 */


uint FUN_00895ca0(long param_1,long param_2)

{
  uint uVar1;
  undefined8 uVar2;
  long *plVar3;
  undefined8 uVar4;
  undefined8 local_50 [3];
  long local_38;
  
  if (**(char **)(param_2 + 8) == '\0') {
    uVar1 = 0;
  }
  else {
    FUN_0010d170(local_50);
    plVar3 = (long *)(param_1 + 8);
    if (*plVar3 != 0) {
      (**(code **)(*(long *)(*plVar3 + 0x48) + 0x18))();
      *plVar3 = 0;
    }
    *(undefined8 *)(param_1 + 8) = local_50[0];
    uVar2 = FUN_00893b80(*(undefined8 *)PTR_DAT_027107a8,param_1,1);
    uVar4 = *(undefined8 *)PTR_DAT_02717598;
    FUN_006cf0c0(local_50,plVar3);
    uVar1 = FUN_00895670(uVar4,uVar2,local_50);
    if (local_38 != 0) {
      (**(code **)(*(long *)(local_38 + 0x48) + 0x18))();
    }
  }
  return uVar1 & 1;
}


