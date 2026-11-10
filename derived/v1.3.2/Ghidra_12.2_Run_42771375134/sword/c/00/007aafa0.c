/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 007aafa0; name: FUN_007aafa0
 */


undefined8 FUN_007aafa0(long param_1)

{
  ulong uVar1;
  long *plVar2;
  AsyncContext *this;
  long lVar3;
  long *plVar4;
  undefined8 *puVar5;
  int local_48 [2];
  
  if ((*(char *)(param_1 + 0x89) != '\0') &&
     (uVar1 = nn::nifm::IsNetworkAvailable(), (uVar1 & 1) != 0)) {
    local_48[0] = nn::account::EnsureNetworkServiceAccountAvailable((UserHandle *)(param_1 + 0x60));
    if (local_48[0] == 0) {
      if (*(long *)(param_1 + 0xca0) != 0) {
        nn::account::AsyncContext::Cancel();
      }
      plVar2 = *(long **)(param_1 + 0x50);
      this = (AsyncContext *)(**(code **)(*plVar2 + 0x10))(plVar2,0x20,8);
      lVar3 = nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_02710860);
      if (0xf < *(ulong *)(lVar3 + 0x80)) {
                    /* WARNING: Subroutine does not return */
        abort();
      }
      *(long **)(lVar3 + *(ulong *)(lVar3 + 0x80) * 8) = plVar2;
      *(long *)(lVar3 + 0x80) = *(long *)(lVar3 + 0x80) + 1;
      nn::account::AsyncContext::AsyncContext(this);
      *(long *)(lVar3 + 0x80) = *(long *)(lVar3 + 0x80) + -1;
      local_48[0] = nn::account::EnsureNetworkServiceAccountIdTokenCacheAsync
                              (this,(UserHandle *)(param_1 + 0x60));
      if (local_48[0] == 0) {
        puVar5 = *(undefined8 **)(param_1 + 0xca0);
        *(AsyncContext **)(param_1 + 0xca0) = this;
        if (puVar5 != (undefined8 *)0x0) {
          (**(code **)*puVar5)(puVar5);
          (**(code **)(**(long **)(param_1 + 0xca8) + 0x18))
                    (*(long **)(param_1 + 0xca8),puVar5,*(undefined8 *)(param_1 + 0xcb0),
                     *(undefined8 *)(param_1 + 0xcb8));
        }
        *(long **)(param_1 + 0xca8) = plVar2;
        *(undefined8 *)(param_1 + 0xcb0) = 0x20;
        *(undefined8 *)(param_1 + 0xcb8) = 8;
        return 1;
      }
      plVar4 = *(long **)(param_1 + 0x90);
      if (plVar4 != (long *)0x0) {
        (**(code **)(*plVar4 + 0x40))(plVar4,local_48);
      }
      if (this != (AsyncContext *)0x0) {
        (*(code *)**(undefined8 **)this)(this);
        (**(code **)(*plVar2 + 0x18))(plVar2,this,0x20,8);
      }
    }
    else {
      plVar2 = *(long **)(param_1 + 0x90);
      if (plVar2 == (long *)0x0) {
        return 0;
      }
      (**(code **)(*plVar2 + 0x38))(plVar2,local_48);
    }
  }
  return 0;
}


