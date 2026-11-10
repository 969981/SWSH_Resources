/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00fa9f30; name: FUN_00fa9f30
 */


undefined8 FUN_00fa9f30(long param_1)

{
  ulong uVar1;
  long lVar2;
  
  uVar1 = FUN_014bc9b0(*(undefined8 *)(param_1 + 0x90));
  if ((uVar1 & 1) == 0) {
    return 0;
  }
  lVar2 = *(long *)(*(long *)(param_1 + 0x90) + 0x60);
  if (lVar2 != 0) {
    (**(code **)(*(long *)(lVar2 + 0x48) + 0x10))();
  }
  if (*(long *)(param_1 + 0x68) != 0) {
    (**(code **)(*(long *)(*(long *)(param_1 + 0x68) + 0x48) + 0x18))();
    *(undefined8 *)(param_1 + 0x68) = 0;
  }
  *(long *)(param_1 + 0x68) = lVar2;
  return 1;
}


