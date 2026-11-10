/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 01025b70; name: FUN_01025b70
 */


undefined1  [16] FUN_01025b70(long param_1)

{
  undefined1 auVar1 [16];
  int iVar2;
  undefined8 local_20;
  undefined8 uStack_18;
  
  if (*(char *)(param_1 + 0x50) != '\0') {
    local_20 = 0;
    uStack_18 = 0;
    iVar2 = nn::account::GetUserId((Uid *)&local_20,(UserHandle *)(param_1 + 0x58));
    if (iVar2 == 0) {
      auVar1._8_8_ = uStack_18;
      auVar1._0_8_ = local_20;
      return auVar1;
    }
  }
  return ZEXT816(0);
}


