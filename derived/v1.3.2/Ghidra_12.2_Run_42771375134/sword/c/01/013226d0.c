/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 013226d0; name: FUN_013226d0
 */


void FUN_013226d0(long param_1)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined *puVar3;
  
  puVar3 = PTR_DAT_02715420;
  puVar2 = PTR_DAT_027152c0;
  *(undefined8 *)(param_1 + 0xe0) = 0;
  *(undefined8 *)(param_1 + 0xe8) = 0;
  uVar1 = *(undefined8 *)(puVar2 + 8);
  *(undefined8 *)(param_1 + 0xf0) = *(undefined8 *)puVar2;
  *(undefined8 *)(param_1 + 0xf8) = uVar1;
  uVar1 = *(undefined8 *)(puVar3 + 8);
  *(undefined8 *)(param_1 + 0x100) = *(undefined8 *)puVar3;
  *(undefined8 *)(param_1 + 0x108) = uVar1;
  return;
}


