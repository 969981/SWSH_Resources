/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 006e5970; name: FUN_006e5970
 */


int FUN_006e5970(long *param_1)

{
  undefined8 *puVar1;
  int iVar2;
  int local_14;
  
  if (param_1[3] == 0) {
    return 0;
  }
  puVar1 = (undefined8 *)PTR_PTR_02710928;
  if (*param_1 != 0) {
    puVar1 = (undefined8 *)(*param_1 + 0x60);
  }
  iVar2 = nn::fs::GetEntryType((DirectoryEntryType *)&local_14,(char *)*puVar1);
  if (iVar2 != 0) {
    return 0;
  }
  iVar2 = (uint)(local_14 == 0) << 1;
  if (local_14 == 1) {
    iVar2 = 1;
  }
  return iVar2;
}


