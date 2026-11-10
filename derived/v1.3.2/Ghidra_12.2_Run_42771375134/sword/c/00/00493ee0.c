/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00493ee0; name: FUN_00493ee0
 */


ulong FUN_00493ee0(undefined8 param_1,long param_2)

{
  char cVar1;
  undefined4 uVar2;
  uint uVar3;
  long lVar4;
  long *plVar5;
  ulong uVar6;
  undefined2 local_34 [2];
  undefined1 auStack_28 [4];
  byte local_24 [4];
  
  lVar4 = FUN_004940a0();
  if (lVar4 == 0) {
LAB_00493ff8:
    uVar6 = FUN_0047fc80(param_1,param_2);
    return uVar6;
  }
  plVar5 = (long *)FUN_00492d30(param_1,*(undefined8 *)(param_2 + 0x10),local_34,auStack_28,
                                lVar4 + 8,lVar4 + 0x10);
  if (plVar5 == (long *)0x0) {
    plVar5 = *(long **)(*(long *)(param_2 + 0x88) + 0x18);
    FUN_0045b3e0(*plVar5 + (ulong)*(uint *)(plVar5 + 1) * 0x28 + -0x28);
    *(int *)(plVar5 + 1) = (int)plVar5[1] + -1;
    goto LAB_00493ff8;
  }
  uVar3 = *(uint *)(param_2 + 0x38);
  if (uVar3 < 0x20) {
    *(int *)(param_2 + 0x38) = uVar3 + 1;
    *(uint *)(param_2 + 0x7c) = *(uint *)(param_2 + 0x7c) | (uint)(1L << ((ulong)uVar3 & 0x3f));
    *(undefined2 *)(param_2 + 0x38 + (ulong)uVar3 * 2 + 4) = local_34[0];
    cVar1 = *(char *)(param_2 + 0x98);
  }
  else {
    *(uint *)(param_2 + 0x38) = uVar3 + 1;
    cVar1 = *(char *)(param_2 + 0x98);
  }
  if ((cVar1 == -0x70) && (*(char *)(param_2 + 0x9b) != '\0')) {
    local_24[0] = *(byte *)(param_2 + 0x188) & 1;
    uVar2 = FUN_0048e670(param_2);
    uVar3 = FUN_0047f610(plVar5,param_2 + 0x98,uVar2,local_24,*(undefined8 *)(param_2 + 0x10),
                         *(undefined4 *)(param_2 + 0x34));
    uVar6 = (ulong)uVar3;
    if (uVar3 != 1) goto LAB_0049406c;
    *(byte *)(param_2 + 0x188) = *(byte *)(param_2 + 0x188) & 0xfe | local_24[0];
  }
  uVar3 = FUN_00480e80(plVar5,param_2);
  uVar6 = (ulong)uVar3;
  if (uVar3 == 3) {
    uVar6 = 1;
  }
  else if (uVar3 == 1) {
    uVar6 = (**(code **)(*plVar5 + 0x238))(plVar5,param_2);
    uVar6 = uVar6 & 0xffffffff;
  }
LAB_0049406c:
  (**(code **)(*plVar5 + 0x18))(plVar5);
  return uVar6;
}


