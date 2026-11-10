/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 012f0c10; name: FUN_012f0c10
 */


void FUN_012f0c10(long param_1,long param_2)

{
  long lVar1;
  undefined8 *puVar2;
  
  if ((*(char *)(param_1 + 0x68) == '\0') &&
     (lVar1 = FUN_012f11b0(param_1,*(undefined4 *)(param_2 + 0x14)), lVar1 != 0)) {
    puVar2 = (undefined8 *)FUN_012e3520();
    FUN_012b67b0(*puVar2,*(undefined4 *)(param_2 + 0x18));
    puVar2 = (undefined8 *)FUN_012e3520(lVar1);
    FUN_012b68a0(*puVar2,*(undefined4 *)(param_2 + 0x1c));
    puVar2 = (undefined8 *)FUN_012e3520(lVar1);
    FUN_012b68e0(*puVar2,*(undefined4 *)(param_2 + 0x20));
    puVar2 = (undefined8 *)FUN_012e3520(lVar1);
    FUN_012ba910(*puVar2,*(undefined4 *)(param_2 + 0x24),*(undefined4 *)(param_2 + 0x28));
    return;
  }
  return;
}


