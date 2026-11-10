/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 014a9f30; name: FUN_014a9f30
 */


undefined1  [16] FUN_014a9f30(undefined2 *param_1)

{
  undefined1 auVar1 [16];
  
  auVar1._0_8_ = (ulong)CONCAT14(*(int *)(param_1 + 4) == 1,CONCAT22(param_1[2],*param_1)) |
                 (ulong)*(byte *)(param_1 + 6) << 0x21 |
                 (ulong)*(byte *)((long)param_1 + 0xd) << 0x22;
  auVar1._8_8_ = 0;
  return auVar1;
}


