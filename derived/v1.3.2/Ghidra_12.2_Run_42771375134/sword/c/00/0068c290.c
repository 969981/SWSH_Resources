/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0068c290; name: FUN_0068c290
 */


undefined4 FUN_0068c290(long param_1)

{
  int iVar1;
  long lVar2;
  undefined4 uVar3;
  
  if (param_1 == 0) {
    return 0xfffffffe;
  }
  lVar2 = *(long *)(param_1 + 0x38);
  if (lVar2 == 0) {
    return 0xfffffffe;
  }
  iVar1 = *(int *)(lVar2 + 8);
  if (((0x2c < iVar1 - 0x45U || (1L << ((ulong)(iVar1 - 0x45U) & 0x3f) & 0x100400400011U) == 0) &&
      (iVar1 != 0x29a)) && (iVar1 != 0x2a)) {
    return 0xfffffffe;
  }
  if (*(long *)(lVar2 + 0x10) != 0) {
    (**(code **)(param_1 + 0x48))(*(undefined8 *)(param_1 + 0x50),*(long *)(lVar2 + 0x10));
    lVar2 = *(long *)(param_1 + 0x38);
  }
  if (*(long *)(lVar2 + 0x68) != 0) {
    (**(code **)(param_1 + 0x48))(*(undefined8 *)(param_1 + 0x50),*(long *)(lVar2 + 0x68));
    lVar2 = *(long *)(param_1 + 0x38);
  }
  if (*(long *)(lVar2 + 0x60) != 0) {
    (**(code **)(param_1 + 0x48))(*(undefined8 *)(param_1 + 0x50),*(long *)(lVar2 + 0x60));
    lVar2 = *(long *)(param_1 + 0x38);
  }
  if (*(long *)(lVar2 + 0x50) != 0) {
    (**(code **)(param_1 + 0x48))(*(undefined8 *)(param_1 + 0x50),*(long *)(lVar2 + 0x50));
    lVar2 = *(long *)(param_1 + 0x38);
  }
  (**(code **)(param_1 + 0x48))(*(undefined8 *)(param_1 + 0x50),lVar2);
  uVar3 = 0xfffffffd;
  if (iVar1 != 0x71) {
    uVar3 = 0;
  }
  *(undefined8 *)(param_1 + 0x38) = 0;
  return uVar3;
}


