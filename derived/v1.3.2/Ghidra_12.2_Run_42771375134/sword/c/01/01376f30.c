/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 01376f30; name: FUN_01376f30
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01376f30(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long *plVar5;
  long lVar6;
  long lVar7;
  undefined8 *puVar8;
  long lVar9;
  long local_50;
  undefined *puStack_48;
  undefined8 local_40;
  long local_38;
  
  puVar8 = *(undefined8 **)(*(long *)(param_1 + 0x68) + 0x60);
  plVar5 = (long *)(**(code **)*puVar8)(puVar8);
  lVar6 = FUN_0132d9a0();
  for (; plVar5 != (long *)lVar6; plVar5 = (long *)*plVar5) {
  }
  lVar6 = puVar8[0x61];
  if (lVar6 != 0) {
    (**(code **)(*(long *)(lVar6 + 0x48) + 0x10))();
  }
  FUN_01306130(&local_50,lVar6,3);
  if (*(long *)(param_1 + 0x2a8) != 0) {
    (**(code **)(*(long *)(*(long *)(param_1 + 0x2a8) + 0x48) + 0x18))();
    *(undefined8 *)(param_1 + 0x2a8) = 0;
  }
  *(long *)(param_1 + 0x2a8) = local_50;
  uVar4 = DAT_02a70698;
  uVar3 = DAT_02a70690;
  uVar2 = _UNK_01d4b588;
  uVar1 = _DAT_01d4b580;
  *(undefined1 *)(local_50 + 0xc0) = 1;
  *(ulong *)(local_50 + 0xb8) =
       CONCAT44((float)((ulong)uVar4 >> 0x20) + (float)((ulong)uVar2 >> 0x20),
                (float)uVar4 + (float)uVar2);
  *(ulong *)(local_50 + 0xb0) =
       CONCAT44((float)((ulong)uVar3 >> 0x20) + (float)((ulong)uVar1 >> 0x20),
                (float)uVar3 + (float)uVar1);
  lVar9 = *(long *)(param_1 + 0x2a8);
  lVar7 = FUN_0130de40(&local_50,*(undefined8 *)(lVar9 + 8));
  if (lVar7 != 0) {
    (**(code **)(*(long *)(lVar7 + 0x48) + 0x10))();
  }
  local_50 = lVar7;
  FUN_006d9640(lVar9,&local_50);
  if (local_50 != 0) {
    (**(code **)(*(long *)(local_50 + 0x48) + 0x18))();
  }
  local_40 = 3;
  local_38 = 0;
  local_50 = 0x61693c27737553bc;
  puStack_48 = &DAT_01d31147;
  FUN_01312f40(DAT_01d4c184,lVar7,&local_50,PTR_DAT_02715088);
  if (local_38 != 0) {
    (**(code **)(*(long *)(local_38 + 0x48) + 0x18))();
  }
  local_50 = 0x61693c27737553bc;
  puStack_48 = &DAT_01d31147;
  local_40 = 3;
  local_38 = 0;
  FUN_01312fc0(lVar7,&local_50);
  if (local_38 != 0) {
    (**(code **)(*(long *)(local_38 + 0x48) + 0x18))();
  }
  local_50 = 0x61693c27737553bc;
  puStack_48 = &DAT_01d31147;
  local_40 = 3;
  local_38 = 0;
  FUN_01313060(lVar7,&local_50);
  if (local_38 != 0) {
    (**(code **)(*(long *)(local_38 + 0x48) + 0x18))();
    local_38 = 0;
  }
  FUN_01313040(DAT_01d4c18c,lVar7);
  if (lVar6 != 0) {
    (**(code **)(*(long *)(lVar6 + 0x48) + 0x18))((long *)(lVar6 + 0x48));
  }
  return;
}


