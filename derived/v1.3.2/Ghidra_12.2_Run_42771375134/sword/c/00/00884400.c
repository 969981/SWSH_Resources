/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00884400; name: FUN_00884400
 */


void FUN_00884400(long param_1)

{
  undefined8 uVar1;
  ulong uVar2;
  undefined8 uVar3;
  
  uVar2 = FUN_008787d0(*(undefined8 *)(param_1 + 0x78));
  if ((uVar2 & 1) == 0) {
    uVar2 = FUN_008787d0(*(undefined8 *)(param_1 + 0x70));
  }
  else {
    uVar1 = *(undefined8 *)(param_1 + 0x78);
    *(undefined8 *)(param_1 + 0x78) = *(undefined8 *)(param_1 + 0x80);
    *(undefined8 *)(param_1 + 0x80) = uVar1;
    uVar2 = FUN_008787d0(*(undefined8 *)(param_1 + 0x70));
  }
  if ((uVar2 & 1) == 0) {
    uVar2 = FUN_008787d0(*(undefined8 *)(param_1 + 0x68));
  }
  else {
    uVar1 = *(undefined8 *)(param_1 + 0x70);
    *(undefined8 *)(param_1 + 0x70) = *(undefined8 *)(param_1 + 0x78);
    *(undefined8 *)(param_1 + 0x78) = *(undefined8 *)(param_1 + 0x80);
    *(undefined8 *)(param_1 + 0x80) = uVar1;
    uVar2 = FUN_008787d0(*(undefined8 *)(param_1 + 0x68));
  }
  if ((uVar2 & 1) == 0) {
    uVar2 = FUN_008787d0(*(undefined8 *)(param_1 + 0x60));
  }
  else {
    uVar1 = *(undefined8 *)(param_1 + 0x68);
    *(undefined8 *)(param_1 + 0x68) = *(undefined8 *)(param_1 + 0x70);
    uVar3 = *(undefined8 *)(param_1 + 0x80);
    *(undefined8 *)(param_1 + 0x80) = uVar1;
    *(undefined8 *)(param_1 + 0x70) = *(undefined8 *)(param_1 + 0x78);
    *(undefined8 *)(param_1 + 0x78) = uVar3;
    uVar2 = FUN_008787d0(*(undefined8 *)(param_1 + 0x60));
  }
  if ((uVar2 & 1) == 0) {
    uVar2 = FUN_008787d0(*(undefined8 *)(param_1 + 0x58));
  }
  else {
    uVar1 = *(undefined8 *)(param_1 + 0x60);
    *(undefined8 *)(param_1 + 0x60) = *(undefined8 *)(param_1 + 0x68);
    *(undefined8 *)(param_1 + 0x68) = *(undefined8 *)(param_1 + 0x70);
    uVar3 = *(undefined8 *)(param_1 + 0x80);
    *(undefined8 *)(param_1 + 0x80) = uVar1;
    *(undefined8 *)(param_1 + 0x70) = *(undefined8 *)(param_1 + 0x78);
    *(undefined8 *)(param_1 + 0x78) = uVar3;
    uVar2 = FUN_008787d0(*(undefined8 *)(param_1 + 0x58));
  }
  if ((uVar2 & 1) == 0) {
    return;
  }
  uVar1 = *(undefined8 *)(param_1 + 0x58);
  *(undefined8 *)(param_1 + 0x58) = *(undefined8 *)(param_1 + 0x60);
  *(undefined8 *)(param_1 + 0x60) = *(undefined8 *)(param_1 + 0x68);
  *(undefined8 *)(param_1 + 0x68) = *(undefined8 *)(param_1 + 0x70);
  *(undefined8 *)(param_1 + 0x70) = *(undefined8 *)(param_1 + 0x78);
  *(undefined8 *)(param_1 + 0x78) = *(undefined8 *)(param_1 + 0x80);
  *(undefined8 *)(param_1 + 0x80) = uVar1;
  return;
}


