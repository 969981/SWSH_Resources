/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 01025ae0; name: FUN_01025ae0
 */


void FUN_01025ae0(long param_1)

{
  int iVar1;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 local_30;
  undefined8 uStack_28;
  
  nn::account::Initialize();
  iVar1 = nn::account::OpenPreselectedUser((UserHandle *)&local_48);
  if (iVar1 != 0) {
    return;
  }
  *(undefined8 *)(param_1 + 0x60) = uStack_40;
  *(undefined8 *)(param_1 + 0x68) = local_38;
  *(undefined8 *)(param_1 + 0x58) = local_48;
  if (*(char *)(param_1 + 0x50) == '\0') {
    *(undefined1 *)(param_1 + 0x50) = 1;
  }
  local_30 = 0;
  uStack_28 = 0;
  nn::friends::GetFriendList
            ((int *)(param_1 + 0x70),(Friend *)(param_1 + 0x90),0,300,(FriendFilter *)&local_30);
  return;
}


