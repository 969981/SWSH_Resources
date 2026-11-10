/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00a06250; name: FUN_00a06250
 */


void FUN_00a06250(long param_1)

{
  undefined8 uVar1;
  long *plVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long *plVar6;
  undefined8 local_50;
  long local_48;
  
  lVar4 = *(long *)(param_1 + 0x2b0);
  if (lVar4 != 0) {
    plVar2 = (long *)(lVar4 + 0x48);
    (**(code **)(*plVar2 + 0x10))(plVar2);
    lVar3 = *(long *)(lVar4 + 0x2e8);
    if (lVar3 != 0) {
      (**(code **)(*(long *)(lVar3 + 0x48) + 0x10))();
    }
    uVar1 = FUN_00ff93a0(param_1);
    FUN_00ff86a0(&local_48,uVar1,*(undefined4 *)(param_1 + 0x5e4));
    if (local_48 != 0) {
      lVar5 = *(long *)(local_48 + 0x60);
      if (lVar5 == 0) {
        local_50 = FUN_0103e730(*(undefined8 *)(param_1 + 0x6a0));
        FUN_0077eb10(0,&local_50,lVar3);
      }
      else {
        plVar6 = (long *)(lVar5 + 0x48);
        (**(code **)(*plVar6 + 0x10))(plVar6);
        local_50 = FUN_0103e730(*(undefined8 *)(param_1 + 0x6a0));
        FUN_0077eb10(lVar5,&local_50,lVar3);
        (**(code **)(*plVar6 + 0x18))(plVar6);
      }
      if (local_48 != 0) {
        (**(code **)(*(long *)(local_48 + 0x48) + 0x18))();
        local_48 = 0;
      }
      FUN_0167c9b0(lVar4,&DAT_021537a8,lVar3,10);
      if (lVar3 != 0) {
        (**(code **)(*(long *)(lVar3 + 0x48) + 0x18))((long *)(lVar3 + 0x48));
      }
      (**(code **)(*plVar2 + 0x18))(plVar2);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  nn::diag::detail::AbortImpl("","","",0);
}


