/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0079f950; name: FUN_0079f950
 */


undefined8 FUN_0079f950(long param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  long lVar4;
  ulong uVar5;
  long *plVar6;
  long lVar7;
  undefined8 *local_60;
  long *local_58;
  undefined8 local_50;
  undefined8 local_48;
  
  lVar7 = *(long *)(param_1 + 0x50);
  if (*(ulong *)(*(long *)(lVar7 + 0x20) + 0x48) < 10) {
    plVar6 = *(long **)(param_1 + 8);
    puVar3 = (undefined8 *)(**(code **)(*plVar6 + 0x10))(plVar6,0x278,8);
    lVar4 = nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_02710860);
    if (0xf < *(ulong *)(lVar4 + 0x80)) {
                    /* WARNING: Subroutine does not return */
      abort();
    }
    *(long **)(lVar4 + *(ulong *)(lVar4 + 0x80) * 8) = plVar6;
    *(long *)(lVar4 + 0x80) = *(long *)(lVar4 + 0x80) + 1;
    DAT_029f4b4c = DAT_029f4b4c + 1;
    uVar5 = (ulong)DAT_029f4b4c;
    *puVar3 = &PTR_FUN_026104e0;
    puVar3[1] = uVar5;
    nn::bcat::DeliveryCacheProgress::DeliveryCacheProgress((DeliveryCacheProgress *)(puVar3 + 2));
    *(undefined4 *)(puVar3 + 0x4d) = 1;
    puVar3[0x4e] = 0;
    *(long *)(lVar4 + 0x80) = *(long *)(lVar4 + 0x80) + -1;
    local_50 = 0x278;
    local_48 = 8;
    local_60 = puVar3;
    local_58 = plVar6;
    FUN_007a0100(*(undefined8 *)(lVar7 + 0x20),&local_60);
    puVar1 = local_60;
    local_60 = (undefined8 *)0x0;
    if (puVar1 != (undefined8 *)0x0) {
      (**(code **)*puVar1)(puVar1);
      (**(code **)(*local_58 + 0x18))(local_58,puVar1,local_50,local_48);
    }
    (**(code **)(*(long *)*param_2 + 0x10))(&local_60);
    puVar1 = local_60;
    local_60 = (undefined8 *)0x0;
    if (puVar1 != (undefined8 *)0x0) {
      (**(code **)(puVar1[9] + 0x10))();
    }
    lVar7 = puVar3[0x4e];
    puVar3[0x4e] = puVar1;
    if (lVar7 != 0) {
      (**(code **)(*(long *)(lVar7 + 0x48) + 0x18))();
    }
    if (puVar1 != (undefined8 *)0x0) {
      (**(code **)(puVar1[9] + 0x18))(puVar1 + 9);
    }
    if (local_60 != (undefined8 *)0x0) {
      (**(code **)(local_60[9] + 0x18))();
    }
    uVar2 = puVar3[1];
  }
  else {
    uVar2 = 0xffffffffffffffff;
  }
  return uVar2;
}


