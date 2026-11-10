/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 01063d80; name: FUN_01063d80
 */


void FUN_01063d80(long param_1,long *param_2,long param_3,undefined8 param_4)

{
  bool bVar1;
  int iVar2;
  long lVar3;
  long lVar4;
  long *plVar5;
  
  lVar4 = *param_2;
  if (lVar4 != 0) {
    plVar5 = (long *)(lVar4 + 0x48);
    (**(code **)(*plVar5 + 0x10))(plVar5);
    (**(code **)(*plVar5 + 0x10))(plVar5);
  }
  lVar3 = *(long *)(param_1 + 0xf8);
  *(long *)(param_1 + 0xf8) = lVar4;
  if (lVar3 != 0) {
    (**(code **)(*(long *)(lVar3 + 0x48) + 0x18))();
  }
  if (lVar4 != 0) {
    (**(code **)(*(long *)(lVar4 + 0x48) + 0x18))((long *)(lVar4 + 0x48));
  }
  if (param_3 == 0) {
    *(undefined8 *)(param_1 + 0x100) = 0;
    *(undefined8 *)(param_1 + 0x108) = 0;
    lVar4 = *(long *)(param_1 + 0xf8);
joined_r0x01063e34:
    bVar1 = false;
    if (lVar4 == 0) goto LAB_01063e6c;
  }
  else {
    lVar4 = *(long *)(param_3 + 0x350);
    iVar2 = FUN_00722fb0(lVar4,param_4);
    if (iVar2 < 0) {
      *(long *)(param_1 + 0x100) = param_3;
      *(undefined8 *)(param_1 + 0x108) = 0;
      lVar4 = *(long *)(param_1 + 0xf8);
      goto joined_r0x01063e34;
    }
    lVar4 = *(long *)(lVar4 + 0x1b8);
    *(long *)(param_1 + 0x100) = param_3;
    *(long *)(param_1 + 0x108) = lVar4 + (long)iVar2 * 0x130;
    lVar4 = *(long *)(param_1 + 0xf8);
    if (lVar4 == 0) {
      bVar1 = false;
      goto LAB_01063e6c;
    }
  }
  bVar1 = false;
  if ((*(int *)(lVar4 + 0x54) != 0) && (bVar1 = false, *(long *)(param_1 + 0x100) != 0)) {
    bVar1 = *(long *)(param_1 + 0x108) != 0;
  }
LAB_01063e6c:
  *(bool *)(param_1 + 0xf1) = bVar1;
  return;
}


