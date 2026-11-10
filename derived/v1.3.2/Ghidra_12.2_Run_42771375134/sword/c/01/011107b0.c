/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 011107b0; name: FUN_011107b0
 */


uint FUN_011107b0(long param_1)

{
  uint uVar1;
  ulong uVar2;
  long lVar3;
  long *plVar4;
  long lVar5;
  undefined8 uVar6;
  undefined8 *local_40;
  undefined8 local_38;
  undefined8 local_28;
  
  lVar5 = *(long *)(param_1 + 0x10);
  lVar3 = *(long *)(lVar5 + 0x4c0);
  if ((lVar3 == 0) || (lVar3 = *(long *)(lVar3 + 0x58), lVar3 == 0)) {
    uVar6 = 0;
    uVar2 = FUN_010386c0(*(undefined8 *)(param_1 + 0x10));
  }
  else {
    plVar4 = (long *)(lVar3 + 0x48);
    (**(code **)(*plVar4 + 0x10))(plVar4);
    (**(code **)(*plVar4 + 0x18))(plVar4);
    lVar3 = *(long *)(*(long *)(lVar5 + 0x4c0) + 0x58);
    if (lVar3 != 0) {
      (**(code **)(*(long *)(lVar3 + 0x48) + 0x10))();
    }
    local_40 = &local_28;
    local_28 = 0;
    local_38 = 0x18cd1891cbc1757a;
    FUN_008a0cd0(lVar3,&local_40,0);
    uVar6 = local_28;
    if (lVar3 != 0) {
      (**(code **)(*(long *)(lVar3 + 0x48) + 0x18))((long *)(lVar3 + 0x48));
    }
    uVar2 = FUN_010386c0(*(undefined8 *)(param_1 + 0x10));
  }
  if (((uVar2 & 1) == 0) || (uVar2 = FUN_016b55c0(uVar6), (uVar2 & 1) == 0)) {
    uVar1 = 0;
  }
  else {
    uVar1 = FUN_010367c0(*(undefined8 *)(param_1 + 8));
    uVar1 = uVar1 ^ 1;
  }
  return uVar1 & 1;
}


