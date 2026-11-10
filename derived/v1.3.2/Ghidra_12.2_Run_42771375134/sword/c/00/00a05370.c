/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00a05370; name: FUN_00a05370
 */


void FUN_00a05370(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  long lVar2;
  long lVar3;
  long *plVar4;
  long lVar5;
  long *plVar6;
  long local_68 [2];
  undefined1 local_58;
  byte local_57;
  undefined1 local_56;
  long local_50;
  undefined8 local_48;
  
  local_48 = param_2;
  uVar1 = FUN_00ff93a0();
  FUN_00ff86a0(&local_50,uVar1,*(undefined4 *)(param_1 + 0x6f8));
  if (local_50 != 0) {
    lVar5 = *(long *)(local_50 + 0x60);
    if (lVar5 != 0) {
      plVar4 = (long *)(lVar5 + 0x48);
      (**(code **)(*plVar4 + 0x10))(plVar4);
      plVar6 = *(long **)(param_1 + 8);
      lVar2 = nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_02710860);
      if (0xf < *(ulong *)(lVar2 + 0x80)) {
                    /* WARNING: Subroutine does not return */
        abort();
      }
      *(long **)(lVar2 + *(ulong *)(lVar2 + 0x80) * 8) = plVar6;
      *(long *)(lVar2 + 0x80) = *(long *)(lVar2 + 0x80) + 1;
      lVar3 = (**(code **)(*plVar6 + 0x10))(plVar6,0x80,8);
      if (lVar3 == 0) {
        (**(code **)(*plVar6 + 0xb8))(plVar6);
      }
      FUN_0077d050(lVar3,0x100);
      *(long **)(lVar3 + 8) = plVar6;
      *(long *)(lVar3 + 0x10) = lVar3;
      *(undefined8 *)(lVar3 + 0x18) = 0x80;
      *(undefined8 *)(lVar3 + 0x20) = 8;
      *(long *)(lVar2 + 0x80) = *(long *)(lVar2 + 0x80) + -1;
      if (lVar3 != 0) {
        (**(code **)(*(long *)(lVar3 + 0x48) + 0x10))();
      }
      FUN_0077eb10(lVar5,&local_48,lVar3);
      local_58 = 0;
      local_56 = 1;
      local_57 = *(byte *)(param_1 + 0x6fc) ^ 1;
      local_68[1] = 0;
      local_68[0] = lVar3;
      FUN_01038170(param_1,local_68);
      *(undefined1 *)(param_1 + 0x6fc) = 1;
      if (lVar3 != 0) {
        (**(code **)(*(long *)(lVar3 + 0x48) + 0x18))((long *)(lVar3 + 0x48));
      }
      (**(code **)(*plVar4 + 0x18))(plVar4);
      if (local_50 == 0) {
        return;
      }
    }
    (**(code **)(*(long *)(local_50 + 0x48) + 0x18))();
  }
  return;
}


