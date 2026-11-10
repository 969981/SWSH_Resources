/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0087e730; name: FUN_0087e730
 */


void FUN_0087e730(long param_1)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  
  uVar3 = 0;
  do {
    iVar1 = FUN_00869ee0(*(undefined8 *)(param_1 + 0x98),uVar3);
    iVar2 = FUN_00877740(0);
    if (iVar1 == iVar2 && iVar2 != 0) {
      FUN_00870bc0(*(undefined8 *)(param_1 + 0x98),uVar3,0);
      FUN_00870e80(*(undefined8 *)(param_1 + 0x98),uVar3,0);
      FUN_00870d20(*(undefined8 *)(param_1 + 0x98),uVar3,0);
    }
    iVar2 = FUN_00877740(1);
    if ((iVar1 == iVar2) && (iVar2 != 0)) {
      FUN_00870bc0(*(undefined8 *)(param_1 + 0x98),uVar3,0);
      FUN_00870e80(*(undefined8 *)(param_1 + 0x98),uVar3,0);
      FUN_00870d20(*(undefined8 *)(param_1 + 0x98),uVar3,0);
    }
    iVar2 = FUN_00877740(2);
    if ((iVar1 == iVar2) && (iVar2 != 0)) {
      FUN_00870bc0(*(undefined8 *)(param_1 + 0x98),uVar3,0);
      FUN_00870e80(*(undefined8 *)(param_1 + 0x98),uVar3,0);
      FUN_00870d20(*(undefined8 *)(param_1 + 0x98),uVar3,0);
    }
    iVar2 = FUN_00877740(3);
    if ((iVar1 == iVar2) && (iVar2 != 0)) {
      FUN_00870bc0(*(undefined8 *)(param_1 + 0x98),uVar3,0);
      FUN_00870e80(*(undefined8 *)(param_1 + 0x98),uVar3,0);
      FUN_00870d20(*(undefined8 *)(param_1 + 0x98),uVar3,0);
    }
    iVar2 = FUN_00877740(4);
    if ((iVar1 == iVar2) && (iVar2 != 0)) {
      FUN_00870bc0(*(undefined8 *)(param_1 + 0x98),uVar3,0);
      FUN_00870e80(*(undefined8 *)(param_1 + 0x98),uVar3,0);
      FUN_00870d20(*(undefined8 *)(param_1 + 0x98),uVar3,0);
    }
    iVar2 = FUN_00877740(5);
    if ((iVar1 == iVar2) && (iVar2 != 0)) {
      FUN_00870bc0(*(undefined8 *)(param_1 + 0x98),uVar3,0);
      FUN_00870e80(*(undefined8 *)(param_1 + 0x98),uVar3,0);
      FUN_00870d20(*(undefined8 *)(param_1 + 0x98),uVar3,0);
    }
    uVar3 = uVar3 + 1;
  } while ((uVar3 & 0xff) < 4);
  return;
}


