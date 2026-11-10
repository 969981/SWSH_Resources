/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 008e6aa0; name: FUN_008e6aa0
 */


void FUN_008e6aa0(long param_1,ulong param_2,int param_3,long *param_4)

{
  long *plVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long *plVar6;
  long local_48;
  
  puVar2 = PTR_DAT_02710860;
  if (param_3 == 0) {
    return;
  }
  param_2 = param_2 & 0xffffffff;
  lVar3 = nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_02710860);
  if (*(ulong *)(lVar3 + 0x80) < 0x10) {
    *(long **)(lVar3 + *(ulong *)(lVar3 + 0x80) * 8) = param_4;
    *(long *)(lVar3 + 0x80) = *(long *)(lVar3 + 0x80) + 1;
    lVar4 = (**(code **)(*param_4 + 0x10))(param_4,0x90,8);
    if (lVar4 == 0) {
      (**(code **)(*param_4 + 0xb8))(param_4);
    }
    FUN_00883c20(lVar4,param_4);
    *(long **)(lVar4 + 8) = param_4;
    *(long *)(lVar4 + 0x10) = lVar4;
    *(undefined8 *)(lVar4 + 0x18) = 0x90;
    *(undefined8 *)(lVar4 + 0x20) = 8;
    *(long *)(lVar3 + 0x80) = *(long *)(lVar3 + 0x80) + -1;
    if (lVar4 != 0) {
      (**(code **)(*(long *)(lVar4 + 0x48) + 0x10))();
    }
    lVar3 = param_1 + param_2 * 8;
    lVar5 = *(long *)(lVar3 + 0x418);
    plVar6 = (long *)(lVar3 + 0x418);
    if (lVar5 != 0) {
      (**(code **)(*(long *)(lVar5 + 0x48) + 0x18))();
      *plVar6 = 0;
    }
    *plVar6 = lVar4;
    lVar3 = nn::os::GetTlsValue(*(undefined4 *)puVar2);
    if (*(ulong *)(lVar3 + 0x80) < 0x10) {
      *(long **)(lVar3 + *(ulong *)(lVar3 + 0x80) * 8) = param_4;
      *(long *)(lVar3 + 0x80) = *(long *)(lVar3 + 0x80) + 1;
      lVar4 = (**(code **)(*param_4 + 0x10))(param_4,200,8);
      if (lVar4 == 0) {
        (**(code **)(*param_4 + 0xb8))(param_4);
      }
      FUN_008ea630(lVar4,param_4);
      *(long **)(lVar4 + 8) = param_4;
      *(long *)(lVar4 + 0x10) = lVar4;
      *(undefined8 *)(lVar4 + 0x18) = 200;
      *(undefined8 *)(lVar4 + 0x20) = 8;
      *(long *)(lVar3 + 0x80) = *(long *)(lVar3 + 0x80) + -1;
      if (lVar4 != 0) {
        (**(code **)(*(long *)(lVar4 + 0x48) + 0x10))();
      }
      lVar3 = param_1 + param_2 * 8;
      lVar5 = *(long *)(lVar3 + 0xa18);
      plVar1 = (long *)(lVar3 + 0xa18);
      if (lVar5 != 0) {
        (**(code **)(*(long *)(lVar5 + 0x48) + 0x18))();
        *plVar1 = 0;
      }
      *plVar1 = lVar4;
      FUN_01621920(lVar4,param_4,param_3);
      FUN_01621a30(*plVar6,param_1 + param_2 * 0x120 + 0x440,param_4,param_3);
      local_48 = *plVar6;
      if (local_48 == 0) {
        FUN_008e6990(&local_48,(long)*(char *)(param_1 + 0x308));
        return;
      }
      plVar6 = (long *)(local_48 + 0x48);
      (**(code **)(*plVar6 + 0x10))(plVar6);
      FUN_008e6990(&local_48,(long)*(char *)(param_1 + 0x308));
      (**(code **)(*plVar6 + 0x18))(plVar6);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  abort();
}


