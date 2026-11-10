/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 010fa610; name: FUN_010fa610
 */


void FUN_010fa610(long param_1,uint param_2,undefined8 param_3,uint param_4)

{
  undefined *puVar1;
  long lVar2;
  undefined8 uVar3;
  long *plVar4;
  long *plVar5;
  long lVar6;
  long local_58 [3];
  
  if ((9 < param_4) || (*(uint *)(*(long *)(param_1 + 0x630) + 0xe8) <= param_2)) {
                    /* WARNING: Subroutine does not return */
    nn::diag::detail::AbortImpl("","","",0);
  }
  local_58[1] = 0;
  local_58[2] = 0;
  local_58[0] = 0;
  plVar4 = *(long **)(param_1 + 0x648);
  lVar6 = *(long *)(param_1 + 0x5e0);
  if (lVar6 != 0) {
    plVar5 = (long *)(lVar6 + 0x48);
    (**(code **)(*plVar5 + 0x10))(plVar5);
    (**(code **)(*plVar5 + 0x18))(plVar5);
  }
  local_58[0] = lVar6;
  (**(code **)(*plVar4 + 8))(plVar4,local_58,param_2);
  lVar6 = *(long *)(param_1 + 0x5e0);
  if (lVar6 == 0) {
    lVar2 = *(long *)(param_1 + 0x608) + (ulong)param_4 * 0x88;
    uVar3 = *(undefined8 *)(lVar2 + 0x10);
    puVar1 = &DAT_02158da8;
  }
  else {
    plVar4 = (long *)(lVar6 + 0x48);
    (**(code **)(*plVar4 + 0x10))(plVar4);
    (**(code **)(*plVar4 + 0x18))(plVar4);
    lVar2 = *(long *)(param_1 + 0x608) + (ulong)param_4 * 0x88;
    uVar3 = *(undefined8 *)(lVar2 + 0x10);
    puVar1 = (undefined *)FUN_0077d470(lVar6);
  }
  FUN_00ffd700(uVar3,lVar2 + 0x80,puVar1,10);
  return;
}


