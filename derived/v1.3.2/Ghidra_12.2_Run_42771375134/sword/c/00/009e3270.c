/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 009e3270; name: FUN_009e3270
 */


undefined8 FUN_009e3270(undefined4 param_1)

{
  undefined *puVar1;
  uint uVar2;
  ulong uVar3;
  undefined8 uVar4;
  
  puVar1 = PTR_DAT_02718ad8;
  if (*(short *)(PTR_DAT_02718ad8 + 0xa4) == 0) {
    uVar3 = FUN_008f35c0(*(undefined8 *)PTR_DAT_02718ad8,0x400);
    if (((((uVar3 & 1) == 0) &&
         (((uVar3 = FUN_008f35c0(*(undefined8 *)puVar1,0x1000), (uVar3 & 1) == 0 ||
           (uVar2 = FUN_008f94e0(param_1), (uVar2 & 0xfe) != 2)) &&
          (uVar3 = FUN_008f35c0(*(undefined8 *)puVar1,0x80000), (uVar3 & 1) == 0)))) &&
        (((uVar3 = FUN_008f35c0(*(undefined8 *)puVar1,0x4000), (uVar3 & 1) == 0 &&
          (uVar3 = FUN_008f35c0(*(undefined8 *)puVar1,0x10000000), (uVar3 & 1) == 0)) &&
         (uVar3 = FUN_008f35c0(*(undefined8 *)puVar1,0x40000000), (uVar3 & 1) == 0)))) &&
       (uVar3 = FUN_008f89c0(*(undefined8 *)puVar1,0x40), (uVar3 & 1) == 0)) {
      uVar4 = FUN_008f89c0(*(undefined8 *)puVar1,0x80);
      return uVar4;
    }
  }
  return 1;
}


