/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00aa67a0; name: FUN_00aa67a0
 */


void FUN_00aa67a0(long param_1)

{
  short sVar1;
  long lVar2;
  long *plVar3;
  
  if ((*(short *)(param_1 + 0x24c) == 0xf9) || (*(long *)(param_1 + 0x240) == 0)) {
LAB_00aa6800:
    if (*(short *)(param_1 + 0x47c) == 0xf9) goto LAB_00aa6884;
LAB_00aa680c:
    if (*(long *)(param_1 + 0x470) == 0) goto LAB_00aa6884;
    lVar2 = *(long *)(*(long *)(param_1 + 0x470) + 0x4b8);
    if (lVar2 == 0) {
      FUN_007946a0(0,1);
      goto LAB_00aa6884;
    }
    plVar3 = (long *)(lVar2 + 0x48);
    (**(code **)(*plVar3 + 0x10))(plVar3);
    FUN_007946a0(lVar2,1);
    (**(code **)(*plVar3 + 0x18))(plVar3);
    if (*(short *)(param_1 + 0x6ac) != 0xf9) goto LAB_00aa6890;
LAB_00aa68d0:
    sVar1 = *(short *)(param_1 + 0x8dc);
  }
  else {
    lVar2 = *(long *)(*(long *)(param_1 + 0x240) + 0x4b8);
    if (lVar2 != 0) {
      plVar3 = (long *)(lVar2 + 0x48);
      (**(code **)(*plVar3 + 0x10))(plVar3);
      FUN_007946a0(lVar2,1);
      (**(code **)(*plVar3 + 0x18))(plVar3);
      goto LAB_00aa6800;
    }
    FUN_007946a0(0,1);
    if (*(short *)(param_1 + 0x47c) != 0xf9) goto LAB_00aa680c;
LAB_00aa6884:
    if (*(short *)(param_1 + 0x6ac) == 0xf9) goto LAB_00aa68d0;
LAB_00aa6890:
    if (*(long *)(param_1 + 0x6a0) == 0) goto LAB_00aa68d0;
    lVar2 = *(long *)(*(long *)(param_1 + 0x6a0) + 0x4b8);
    if (lVar2 != 0) {
      plVar3 = (long *)(lVar2 + 0x48);
      (**(code **)(*plVar3 + 0x10))(plVar3);
      FUN_007946a0(lVar2,1);
      (**(code **)(*plVar3 + 0x18))(plVar3);
      goto LAB_00aa68d0;
    }
    FUN_007946a0(0,1);
    sVar1 = *(short *)(param_1 + 0x8dc);
  }
  if ((sVar1 != 0xf9) && (*(long *)(param_1 + 0x8d0) != 0)) {
    lVar2 = *(long *)(*(long *)(param_1 + 0x8d0) + 0x4b8);
    if (lVar2 != 0) {
      plVar3 = (long *)(lVar2 + 0x48);
      (**(code **)(*plVar3 + 0x10))(plVar3);
      FUN_007946a0(lVar2,1);
      (**(code **)(*plVar3 + 0x18))(plVar3);
      sVar1 = *(short *)(param_1 + 0xb0c);
      goto joined_r0x00aa6924;
    }
    FUN_007946a0(0,1);
  }
  sVar1 = *(short *)(param_1 + 0xb0c);
joined_r0x00aa6924:
  if ((sVar1 != 0xf9) && (*(long *)(param_1 + 0xb00) != 0)) {
    lVar2 = *(long *)(*(long *)(param_1 + 0xb00) + 0x4b8);
    if (lVar2 == 0) {
      FUN_007946a0(0,1);
    }
    else {
      plVar3 = (long *)(lVar2 + 0x48);
      (**(code **)(*plVar3 + 0x10))(plVar3);
      FUN_007946a0(lVar2,1);
      (**(code **)(*plVar3 + 0x18))(plVar3);
    }
  }
  *(undefined4 *)(param_1 + 0x14) = 0;
  return;
}


