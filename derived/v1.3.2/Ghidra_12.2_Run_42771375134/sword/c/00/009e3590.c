/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 009e3590; name: FUN_009e3590
 */


void FUN_009e3590(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  puVar1 = PTR_DAT_02718ad8;
  FUN_01622220(*(undefined8 *)(PTR_DAT_02718ad8 + 0x18),param_2,param_3,
               *(undefined8 *)(PTR_DAT_02718ad8 + 0x98));
  FUN_009e1420(0,0);
  FUN_014c62d0(*(undefined8 *)(puVar1 + 0x10),param_1,*(undefined8 *)(puVar1 + 0x18));
  return;
}


