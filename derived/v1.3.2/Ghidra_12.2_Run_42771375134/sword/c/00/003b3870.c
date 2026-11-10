/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 003b3870; name: FUN_003b3870
 */


ulong FUN_003b3870(undefined8 *param_1,long param_2,uint param_3)

{
  uint uVar1;
  ulong uVar2;
  
  uVar1 = (**(code **)(*(long *)*param_1 + 0x28))();
  uVar2 = (ulong)uVar1;
  if (param_3 < uVar1) {
    uVar2 = 0;
  }
  else {
    (**(code **)(**(long **)(*(long *)PTR_DAT_02711060 + 0x10) + 0x30))
              (*(long **)(*(long *)PTR_DAT_02711060 + 0x10),*param_1,0,0,param_2,param_2 + uVar2 * 4
               ,0,0,0,0,0,0,0,0,0,0);
  }
  return uVar2;
}


