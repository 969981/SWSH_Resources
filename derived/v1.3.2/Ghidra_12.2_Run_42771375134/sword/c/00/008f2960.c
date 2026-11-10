/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 008f2960; name: FUN_008f2960
 */


void FUN_008f2960(long param_1,long *param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 *puVar4;
  long *local_50;
  long lStack_48;
  
  local_50 = param_2;
  lStack_48 = param_1;
  uVar2 = (**(code **)(*param_2 + 0x10))(param_2,0x318,8);
  puVar1 = PTR_DAT_02710860;
  lVar3 = nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_02710860);
  if (*(ulong *)(lVar3 + 0x80) < 0x10) {
    *(long **)(lVar3 + *(ulong *)(lVar3 + 0x80) * 8) = param_2;
    *(long *)(lVar3 + 0x80) = *(long *)(lVar3 + 0x80) + 1;
    FUN_00930750(uVar2,&local_50);
    *(long *)(lVar3 + 0x80) = *(long *)(lVar3 + 0x80) + -1;
    puVar4 = *(undefined8 **)(param_1 + 0x610);
    *(undefined8 *)(param_1 + 0x610) = uVar2;
    if (puVar4 != (undefined8 *)0x0) {
      (**(code **)*puVar4)(puVar4);
      (**(code **)(**(long **)(param_1 + 0x618) + 0x18))
                (*(long **)(param_1 + 0x618),puVar4,*(undefined8 *)(param_1 + 0x620),
                 *(undefined8 *)(param_1 + 0x628));
    }
    *(long **)(param_1 + 0x618) = param_2;
    *(undefined8 *)(param_1 + 0x620) = 0x318;
    *(undefined8 *)(param_1 + 0x628) = 8;
    local_50 = param_2;
    lStack_48 = param_1;
    uVar2 = (**(code **)(*param_2 + 0x10))(param_2,0x318,8);
    lVar3 = nn::os::GetTlsValue(*(undefined4 *)puVar1);
    if (*(ulong *)(lVar3 + 0x80) < 0x10) {
      *(long **)(lVar3 + *(ulong *)(lVar3 + 0x80) * 8) = param_2;
      *(long *)(lVar3 + 0x80) = *(long *)(lVar3 + 0x80) + 1;
      FUN_00930750(uVar2,&local_50);
      *(long *)(lVar3 + 0x80) = *(long *)(lVar3 + 0x80) + -1;
      puVar4 = *(undefined8 **)(param_1 + 0x5f0);
      *(undefined8 *)(param_1 + 0x5f0) = uVar2;
      if (puVar4 != (undefined8 *)0x0) {
        (**(code **)*puVar4)(puVar4);
        (**(code **)(**(long **)(param_1 + 0x5f8) + 0x18))
                  (*(long **)(param_1 + 0x5f8),puVar4,*(undefined8 *)(param_1 + 0x600),
                   *(undefined8 *)(param_1 + 0x608));
      }
      *(long **)(param_1 + 0x5f8) = param_2;
      *(undefined8 *)(param_1 + 0x600) = 0x318;
      *(undefined8 *)(param_1 + 0x608) = 8;
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  abort();
}


