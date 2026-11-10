/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 01063680; name: FUN_01063680
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01063680(void)

{
  undefined8 uVar1;
  undefined *puVar2;
  long lVar3;
  
  lVar3 = *(long *)PTR_DAT_02723af0;
  *(undefined8 *)PTR_DAT_02723af0 = 0;
  if (lVar3 != 0) {
    (**(code **)(*(long *)(lVar3 + 0x48) + 0x18))();
  }
  puVar2 = PTR_DAT_02723ad0;
  uVar1 = _DAT_01d4b4f0;
  *(undefined8 *)(PTR_DAT_02723ad0 + 8) = _UNK_01d4b4f8;
  *(undefined8 *)puVar2 = uVar1;
  return;
}


