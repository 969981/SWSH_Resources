/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00744170; name: FUN_00744170
 */


void FUN_00744170(long param_1,ulong param_2,undefined8 param_3)

{
  long lVar1;
  undefined8 uVar2;
  long *plVar3;
  long lVar4;
  long lVar5;
  long *plVar6;
  
  param_2 = param_2 & 0xffffffff;
  lVar1 = FUN_019a44d0(param_3);
  if (lVar1 == 0) {
    uVar2 = 0;
    lVar1 = 0;
    lVar4 = *(long *)(param_1 + 0x878) + param_2 * 0x28 + 0xd8;
  }
  else {
    plVar6 = *(long **)(param_1 + 0x10);
    uVar2 = (**(code **)(*plVar6 + 0x10))(plVar6,lVar1,8);
    lVar4 = *(long *)(param_1 + 0x878) + param_2 * 0x20;
    lVar5 = *(long *)(lVar4 + 0x58);
    *(undefined8 *)(lVar4 + 0x58) = uVar2;
    if (lVar5 != 0) {
      plVar3 = *(long **)(lVar4 + 0x60);
      (**(code **)(*plVar3 + 0x18))
                (plVar3,lVar5,*(undefined8 *)(lVar4 + 0x68),*(undefined8 *)(lVar4 + 0x70));
    }
    *(long **)(lVar4 + 0x60) = plVar6;
    *(long *)(lVar4 + 0x68) = lVar1;
    *(undefined8 *)(lVar4 + 0x70) = 8;
    lVar4 = *(long *)(param_1 + 0x878) + 0x58;
    uVar2 = *(undefined8 *)(lVar4 + param_2 * 0x20);
    lVar4 = lVar4 + param_2 * 0x28 + 0x80;
  }
  FUN_019a4500(lVar4,uVar2,lVar1);
  FUN_019a4520(*(long *)(param_1 + 0x878) + param_2 * 0x28 + 0xd8,PTR_DAT_027155e8,param_3);
  return;
}


