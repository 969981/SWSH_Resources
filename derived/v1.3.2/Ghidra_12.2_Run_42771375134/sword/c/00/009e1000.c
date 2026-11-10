/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 009e1000; name: FUN_009e1000
 */


undefined8 FUN_009e1000(void)

{
  undefined *puVar1;
  ulong uVar2;
  undefined8 uVar3;
  
  puVar1 = PTR_DAT_02718ad8;
  uVar2 = FUN_014bc9b0(*(undefined8 *)(PTR_DAT_02718ad8 + 0x28));
  if (((((uVar2 & 1) == 0) ||
       (uVar2 = FUN_014bc9b0(*(undefined8 *)(puVar1 + 0x30)), (uVar2 & 1) == 0)) ||
      (uVar2 = FUN_014bc9b0(*(undefined8 *)(puVar1 + 0x38)), (uVar2 & 1) == 0)) ||
     (uVar2 = FUN_014bc9b0(*(undefined8 *)(puVar1 + 0x40)), (uVar2 & 1) == 0)) {
    return 0;
  }
  uVar3 = FUN_014bc9b0(*(undefined8 *)(puVar1 + 0x48));
  return uVar3;
}


