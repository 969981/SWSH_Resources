/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0059e340; name: FUN_0059e340
 */


uint FUN_0059e340(undefined8 param_1,uint param_2,long param_3,undefined4 param_4,
                 undefined1 *param_5)

{
  undefined *puVar1;
  uint uVar2;
  uint uVar3;
  
  if (*PTR_DAT_02713aa0 != '\0' && (param_2 & 0x100000) == 0) {
    uVar3 = FUN_0059e130(0,param_4,0,param_5);
    return uVar3 & (int)uVar3 >> 0x1f;
  }
  if (param_5 != (undefined1 *)0x0) {
    *param_5 = 0;
  }
  puVar1 = PTR_DAT_02713a70;
  if (*(long *)PTR_DAT_02713a70 == 0) {
    return 0;
  }
  if ((((((param_3 != 0) || (param_3 = *(long *)PTR_DAT_02713ca0, param_3 != 0)) ||
        (param_3 = *(long *)(PTR_DAT_02713ca0 + 8), param_3 != 0)) ||
       ((param_3 = *(long *)(PTR_DAT_02713ca0 + 0x10), param_3 != 0 ||
        (param_3 = *(long *)(PTR_DAT_02713ca0 + 0x18), param_3 != 0)))) ||
      ((param_3 = *(long *)(PTR_DAT_02713ca0 + 0x20), param_3 != 0 ||
       ((param_3 = *(long *)(PTR_DAT_02713ca0 + 0x28), param_3 != 0 ||
        (param_3 = *(long *)(PTR_DAT_02713ca0 + 0x30), param_3 != 0)))))) ||
     (param_3 = *(long *)(PTR_DAT_02713ca0 + 0x38), param_3 != 0)) {
    uVar2 = FUN_0059dfb0(param_1,param_1,param_3,param_2,1,param_4,param_4);
    uVar3 = uVar2 & (int)uVar2 >> 0x1f;
    if ((param_2 >> 0x14 & 1) != 0) {
      return uVar3;
    }
    if ((int)uVar2 < 0) {
      return uVar3;
    }
  }
  *(undefined8 *)puVar1 = 0;
  return 0;
}


