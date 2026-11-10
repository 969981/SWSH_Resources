/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 008fda20; name: FUN_008fda20
 */


uint FUN_008fda20(long param_1)

{
  uint uVar1;
  ulong uVar2;
  undefined1 auStack_2758 [10024];
  
  FUN_009150e0(auStack_2758);
  FUN_009151b0(auStack_2758,*(undefined2 *)(param_1 + 0x2c0),*(undefined1 *)(param_1 + 0x2c2),
               *(undefined1 *)(param_1 + 0x2c3),*(undefined8 *)(param_1 + 0x2c8),
               *(undefined4 *)(param_1 + 0x2d0));
  uVar1 = FUN_009c5240(*(undefined8 *)(param_1 + 0xf0),auStack_2758);
  if ((((uVar1 & 1) != 0) && (*(short *)(param_1 + 0x2c0) != 0)) &&
     (uVar2 = FUN_00914be0(*(undefined8 *)(param_1 + 0xf8)), (uVar2 & 1) == 0)) {
    FUN_00914b00(*(undefined8 *)(param_1 + 0xf8),auStack_2758);
  }
  FUN_00915160(auStack_2758);
  return uVar1 & 1;
}


