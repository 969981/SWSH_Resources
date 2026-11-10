/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 01044bd0; name: FUN_01044bd0
 */


void FUN_01044bd0(long param_1,int param_2,undefined8 param_3)

{
  long lVar1;
  long *plVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  int iVar6;
  undefined8 local_38;
  
  lVar1 = *(long *)(param_1 + (long)param_2 * 8 + 0x290);
  local_38 = param_3;
  if (lVar1 != 0) {
    plVar2 = (long *)(lVar1 + 0x48);
    (**(code **)(*plVar2 + 0x10))(plVar2);
    (**(code **)(*plVar2 + 0x18))(plVar2);
  }
  lVar4 = *(long *)(*(long *)(param_1 + 0x218) + 0x2b0);
  if (lVar4 != 0) {
    (**(code **)(*(long *)(lVar4 + 0x48) + 0x10))();
  }
  lVar3 = *(long *)(lVar4 + 0x2e8);
  if (lVar3 != 0) {
    plVar2 = (long *)(lVar3 + 0x48);
    (**(code **)(*plVar2 + 0x10))(plVar2);
    (**(code **)(*plVar2 + 0x18))(plVar2);
  }
  (**(code **)(*(long *)(lVar4 + 0x48) + 0x18))((long *)(lVar4 + 0x48));
  uVar5 = *(undefined8 *)(*(long *)(param_1 + 0x218) + 0x5d8);
  lVar4 = *(long *)(param_1 + 0x200);
  if ((lVar4 == 0) || ((*(long *)(lVar4 + 0x20) == 0 && (*(long *)(lVar4 + 0x28) == 0)))) {
    iVar6 = 0;
    lVar4 = *(long *)(param_1 + 0x208);
  }
  else {
    FUN_0077d520(lVar3,lVar4 + 2);
    FUN_014c9110(uVar5,0,lVar3,(*(undefined1 **)(param_1 + 0x200))[0x31],
                 **(undefined1 **)(param_1 + 0x200));
    iVar6 = 1;
    lVar4 = *(long *)(param_1 + 0x208);
  }
  if ((lVar4 == 0) || ((*(long *)(lVar4 + 0x20) == 0 && (*(long *)(lVar4 + 0x28) == 0)))) {
    lVar4 = *(long *)(param_1 + 0x210);
  }
  else {
    FUN_0077d520(lVar3,lVar4 + 2);
    FUN_014c9110(uVar5,iVar6,lVar3,(*(undefined1 **)(param_1 + 0x208))[0x31],
                 **(undefined1 **)(param_1 + 0x208));
    iVar6 = iVar6 + 1;
    lVar4 = *(long *)(param_1 + 0x210);
  }
  if ((lVar4 != 0) && ((*(long *)(lVar4 + 0x20) != 0 || (*(long *)(lVar4 + 0x28) != 0)))) {
    FUN_0077d520(lVar3,lVar4 + 2);
    FUN_014c9110(uVar5,iVar6,lVar3,(*(undefined1 **)(param_1 + 0x210))[0x31],
                 **(undefined1 **)(param_1 + 0x210));
  }
  FUN_0077eb10(*(undefined8 *)(param_1 + 0x2c8),&local_38,lVar3);
  FUN_014c62d0(uVar5,lVar1,lVar3);
  return;
}


