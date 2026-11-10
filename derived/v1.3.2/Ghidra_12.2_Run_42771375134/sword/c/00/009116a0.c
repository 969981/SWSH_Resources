/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 009116a0; name: FUN_009116a0
 */


undefined8 FUN_009116a0(long param_1)

{
  int iVar1;
  ulong uVar2;
  undefined8 uVar3;
  
  uVar2 = FUN_008f35c0(*(undefined8 *)(param_1 + 0x60),0x4000);
  if ((((((uVar2 & 1) == 0) &&
        (uVar2 = FUN_008f35c0(*(undefined8 *)(param_1 + 0x60),0x400), (uVar2 & 1) == 0)) &&
       (uVar2 = FUN_008f35c0(*(undefined8 *)(param_1 + 0x60),0x800), (uVar2 & 1) == 0)) &&
      (((uVar2 = FUN_008f35c0(*(undefined8 *)(param_1 + 0x60),0x1000), (uVar2 & 1) == 0 &&
        (uVar2 = FUN_008f35c0(*(undefined8 *)(param_1 + 0x60),0x40000), (uVar2 & 1) == 0)) &&
       ((uVar2 = FUN_008f35c0(*(undefined8 *)(param_1 + 0x60),0x80000), (uVar2 & 1) == 0 &&
        ((uVar2 = FUN_008f35c0(*(undefined8 *)(param_1 + 0x60),0x40000000), (uVar2 & 1) == 0 &&
         (uVar2 = FUN_008f89c0(*(undefined8 *)(param_1 + 0x60),0x10), (uVar2 & 1) == 0)))))))) &&
     ((uVar2 = FUN_008f89c0(*(undefined8 *)(param_1 + 0x60),0x20), (uVar2 & 1) == 0 &&
      ((((uVar2 = FUN_008f89c0(*(undefined8 *)(param_1 + 0x60),0x80), (uVar2 & 1) == 0 &&
         (iVar1 = FUN_008f8110(*(undefined8 *)(param_1 + 0x60)), iVar1 != 2)) &&
        (iVar1 = FUN_008f3790(*(undefined8 *)(param_1 + 0x60)), iVar1 == 0)) &&
       (iVar1 = FUN_008f8110(*(undefined8 *)(param_1 + 0x60)), iVar1 == 0)))))) {
    uVar3 = FUN_008da680(*(undefined8 *)(param_1 + 0x608));
    uVar3 = FUN_009510a0(uVar3,0);
    return uVar3;
  }
  return 0;
}


