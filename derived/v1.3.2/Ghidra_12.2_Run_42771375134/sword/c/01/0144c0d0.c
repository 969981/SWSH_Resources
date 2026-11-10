/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0144c0d0; name: FUN_0144c0d0
 */


undefined4 FUN_0144c0d0(undefined8 param_1)

{
  undefined4 uVar1;
  long lVar2;
  
  lVar2 = *(long *)(*(long *)PTR_DAT_02710798 + 0x268);
  if (lVar2 != 0) {
    (**(code **)(*(long *)(lVar2 + 0x48) + 0x10))();
  }
  uVar1 = FUN_0152e1d0(lVar2);
  uVar1 = FUN_01452c10(param_1,uVar1);
  if (lVar2 != 0) {
    (**(code **)(*(long *)(lVar2 + 0x48) + 0x18))((long *)(lVar2 + 0x48));
  }
  return uVar1;
}


