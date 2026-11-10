/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00910e90; name: FUN_00910e90
 */


void FUN_00910e90(long param_1,undefined8 param_2,undefined1 *param_3)

{
  undefined1 uVar1;
  short sVar2;
  short sVar3;
  undefined8 uVar4;
  long lVar5;
  
  if (*(long *)(param_1 + 0x80) == 0) {
LAB_00910ee4:
    sVar2 = 0;
    lVar5 = *(long *)(param_1 + 0x98);
  }
  else {
    uVar4 = FUN_009c50b0();
    sVar2 = FUN_00915210();
    if (sVar2 == 0) goto LAB_00910ee4;
    uVar1 = FUN_00915220(uVar4);
    *param_3 = uVar1;
    lVar5 = *(long *)(param_1 + 0x98);
  }
  if (lVar5 != 0) {
    uVar4 = FUN_009c50b0();
    sVar3 = FUN_00915210();
    if ((ushort)(sVar3 - 1U) < (ushort)(sVar2 - 1U)) {
      uVar1 = FUN_00915220(uVar4);
      *param_3 = uVar1;
      sVar2 = sVar3;
    }
  }
  if (*(long *)(param_1 + 0xb0) != 0) {
    uVar4 = FUN_009c50b0();
    sVar3 = FUN_00915210();
    if ((ushort)(sVar3 - 1U) < (ushort)(sVar2 - 1U)) {
      uVar1 = FUN_00915220(uVar4);
      *param_3 = uVar1;
      sVar2 = sVar3;
    }
  }
  if (*(long *)(param_1 + 200) != 0) {
    uVar4 = FUN_009c50b0();
    sVar3 = FUN_00915210();
    if ((ushort)(sVar3 - 1U) < (ushort)(sVar2 - 1U)) {
      uVar1 = FUN_00915220(uVar4);
      *param_3 = uVar1;
      sVar2 = sVar3;
    }
  }
  if (*(long *)(param_1 + 0xe0) == 0) {
LAB_00910fd8:
    if (sVar2 != 0) goto LAB_00910fec;
    uVar1 = 0;
    sVar2 = 1;
  }
  else {
    uVar4 = FUN_009c50b0();
    sVar3 = FUN_00915210();
    if ((ushort)(sVar2 - 1U) <= (ushort)(sVar3 - 1U)) goto LAB_00910fd8;
    uVar1 = FUN_00915220(uVar4);
    sVar2 = sVar3;
  }
  *param_3 = uVar1;
LAB_00910fec:
  *(short *)(param_1 + 0x78) = sVar2;
  return;
}


