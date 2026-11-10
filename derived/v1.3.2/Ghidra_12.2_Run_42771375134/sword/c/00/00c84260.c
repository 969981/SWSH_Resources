/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00c84260; name: FUN_00c84260
 */


undefined8
FUN_00c84260(long param_1,int param_2,long *param_3,undefined4 param_4,undefined4 param_5,
            long *param_6)

{
  undefined8 uVar1;
  long lVar2;
  long lVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  ulong uVar7;
  long lVar8;
  long local_58;
  
  if ((param_2 < 0) || (*(int *)(param_1 + 0x14) <= param_2)) {
    return 0;
  }
  uVar7 = (ulong)param_2;
  if (uVar7 < *(ulong *)(*(long *)(param_1 + 0x38) + 0x48)) {
    lVar8 = uVar7 * 0x20;
    if (*(long *)(*(long *)(*(long *)(param_1 + 0x38) + 0x40) + lVar8) != 0) {
      return 0;
    }
    uVar1 = (**(code **)(*param_3 + 0x10))(param_3,0x58,8);
    lVar2 = nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_02710860);
    if (*(ulong *)(lVar2 + 0x80) < 0x10) {
      *(long **)(lVar2 + *(ulong *)(lVar2 + 0x80) * 8) = param_3;
      *(long *)(lVar2 + 0x80) = *(long *)(lVar2 + 0x80) + 1;
      local_58 = *param_6;
      if (local_58 != 0) {
        (**(code **)(*(long *)(local_58 + 0x48) + 0x10))();
      }
      FUN_00c84cc0(uVar1,param_3,param_4,param_5,&local_58);
      if (local_58 != 0) {
        (**(code **)(*(long *)(local_58 + 0x48) + 0x18))();
        local_58 = 0;
      }
      *(long *)(lVar2 + 0x80) = *(long *)(lVar2 + 0x80) + -1;
      if (uVar7 < *(ulong *)(*(long *)(param_1 + 0x38) + 0x48)) {
        lVar2 = *(long *)(*(long *)(param_1 + 0x38) + 0x40);
        lVar3 = *(long *)(lVar2 + lVar8);
        *(undefined8 *)(lVar2 + lVar8) = uVar1;
        if (lVar3 == 0) {
          lVar2 = lVar2 + uVar7 * 0x20;
          puVar4 = (undefined8 *)(lVar2 + 8);
          puVar5 = (undefined8 *)(lVar2 + 0x10);
          puVar6 = (undefined8 *)(lVar2 + 0x18);
        }
        else {
          FUN_00c84b40(lVar3);
          lVar2 = lVar2 + uVar7 * 0x20;
          puVar4 = (undefined8 *)(lVar2 + 8);
          puVar5 = (undefined8 *)(lVar2 + 0x10);
          puVar6 = (undefined8 *)(lVar2 + 0x18);
          (**(code **)(*(long *)*puVar4 + 0x18))((long *)*puVar4,lVar3,*puVar5,*puVar6);
        }
        *puVar4 = param_3;
        *puVar5 = 0x58;
        *puVar6 = 8;
        if (uVar7 < *(ulong *)(*(long *)(param_1 + 0x38) + 0x48)) {
          return *(undefined8 *)(*(long *)(*(long *)(param_1 + 0x38) + 0x40) + lVar8);
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  abort();
}


