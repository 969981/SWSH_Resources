/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 012b1070; name: FUN_012b1070
 */


undefined8 FUN_012b1070(long param_1,long *param_2)

{
  long *plVar1;
  undefined8 *puVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  long lVar6;
  long *plVar7;
  bool bVar8;
  undefined8 *local_70;
  long *local_68;
  undefined8 local_60;
  undefined8 local_58;
  
  lVar6 = *(long *)PTR_DAT_02716758;
  uVar5 = 0;
  if (lVar6 != 0) {
    plVar1 = (long *)FUN_007ddb70(lVar6);
    if (plVar1 == (long *)0x0) {
      uVar5 = 0;
    }
    else {
      puVar2 = (undefined8 *)(**(code **)(*plVar1 + 0x10))(plVar1,0x1b0,0x10);
      lVar3 = nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_02710860);
      if (0xf < *(ulong *)(lVar3 + 0x80)) {
                    /* WARNING: Subroutine does not return */
        abort();
      }
      *(long **)(lVar3 + *(ulong *)(lVar3 + 0x80) * 8) = plVar1;
      *(long *)(lVar3 + 0x80) = *(long *)(lVar3 + 0x80) + 1;
      FUN_012b1550(puVar2);
      *(long *)(lVar3 + 0x80) = *(long *)(lVar3 + 0x80) + -1;
      if (param_1 == 0) {
        lVar3 = 0;
        bVar8 = true;
        lVar4 = puVar2[3];
        puVar2[3] = 0;
        param_1 = 0;
      }
      else {
        lVar3 = *(long *)(param_1 + 0x58);
        if (lVar3 == 0) {
          lVar3 = 0;
          param_1 = param_1 + 0x60;
          bVar8 = true;
          lVar4 = puVar2[3];
          puVar2[3] = 0;
        }
        else {
          plVar7 = (long *)(lVar3 + 0x48);
          (**(code **)(*plVar7 + 0x10))(plVar7);
          param_1 = param_1 + 0x60;
          (**(code **)(*plVar7 + 0x10))(plVar7);
          (**(code **)(*plVar7 + 0x18))(plVar7);
          (**(code **)(*plVar7 + 0x10))(plVar7);
          bVar8 = false;
          lVar4 = puVar2[3];
          puVar2[3] = lVar3;
        }
      }
      if (lVar4 != 0) {
        (**(code **)(*(long *)(lVar4 + 0x48) + 0x18))();
      }
      puVar2[4] = param_1;
      if (!bVar8) {
        (**(code **)(*(long *)(lVar3 + 0x48) + 0x18))((long *)(lVar3 + 0x48));
      }
      lVar3 = *param_2;
      if (lVar3 != 0) {
        (**(code **)(*(long *)(lVar3 + 0x48) + 0x10))();
      }
      lVar4 = puVar2[5];
      puVar2[5] = lVar3;
      if (lVar4 != 0) {
        (**(code **)(*(long *)(lVar4 + 0x48) + 0x18))();
      }
      local_60 = 0x1b0;
      local_58 = 0x10;
      local_70 = puVar2;
      local_68 = plVar1;
      uVar5 = FUN_007ddb80(lVar6,&local_70);
      puVar2 = local_70;
      local_70 = (undefined8 *)0x0;
      if (puVar2 != (undefined8 *)0x0) {
        (**(code **)*puVar2)(puVar2);
        (**(code **)(*local_68 + 0x18))(local_68,puVar2,local_60,local_58);
      }
    }
  }
  return uVar5;
}


