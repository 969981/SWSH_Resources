/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 006e5730; name: FUN_006e5730
 */


int FUN_006e5730(long param_1,char *param_2)

{
  int iVar1;
  
  iVar1 = nn::fs::OpenFile((FileHandle *)(param_1 + 0x10),param_2,1);
  if (iVar1 == 0) {
    iVar1 = nn::fs::GetFileSize(param_1,*(undefined8 *)(param_1 + 0x10));
    return iVar1;
  }
  return iVar1;
}


