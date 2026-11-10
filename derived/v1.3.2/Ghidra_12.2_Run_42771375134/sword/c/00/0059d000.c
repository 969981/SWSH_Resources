/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0059d000; name: FUN_0059d000
 */


undefined8 FUN_0059d000(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = (**(code **)(**(long **)PTR_DAT_02713c38 + 0x40))(*(long **)PTR_DAT_02713c38,param_1);
  if (-1 < (int)uVar1) {
    uVar1 = 0;
    *(undefined8 *)PTR_DAT_02713a70 = param_2;
  }
  return uVar1;
}


